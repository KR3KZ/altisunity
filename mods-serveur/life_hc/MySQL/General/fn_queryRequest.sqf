#include "\life_hc\hc_macros.hpp"
/*
    File: fn_queryRequest.sqf
    Author: Bryan "Tonic" Boardwine

    This file is for Nanou's HeadlessClient.

    Description:
    Handles the incoming request and sends an asynchronous query
    request to the database.

    Return:
    ARRAY - If array has 0 elements it should be handled as an error in client-side files.
    STRING - The request had invalid handles or an unknown error and is logged to the RPT.
*/

private _uid = [_this,0,"",[""]] call BIS_fnc_param;
private _side = [_this,1,sideUnknown,[civilian]] call BIS_fnc_param;
private _ownerID = [_this,2,objNull,[objNull]] call BIS_fnc_param;

if (isNull _ownerID) exitWith {};

private _query = switch (_side) do {
	// West - 15 entries returned
    case west: {format ["SELECT pid, name, cash, bankacc, adminlevel, donorlevel, cop_licenses, coplevel, cop_gear, blacklist, cop_stats, playtime, cop_alive, cop_position, blood FROM players WHERE pid='%1'",_uid];};
    // Civilian - 12 entries returned
    case civilian: {format ["SELECT pid, name, cash, bankacc, adminlevel, donorlevel, civ_licenses, arrested, civ_gear, civ_stats, civ_alive, civ_position, playtime, blood FROM players WHERE pid='%1'",_uid];};
    // Independent - 14 entries returned
    case independent: {format ["SELECT pid, name, cash, bankacc, adminlevel, donorlevel, med_licenses, mediclevel, med_gear, med_stats, playtime, med_alive, med_position, blood FROM players WHERE pid='%1'",_uid];};
};

private _tickTime = diag_tickTime;
private _queryResult = [_query,2] call HC_fnc_asyncCall;

if (_queryResult isEqualType "") exitWith {
    [] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};

if (_queryResult isEqualTo []) exitWith {
    [] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};

//Blah conversion thing from a2net->extdb
private _tmp = _queryResult select 2;
_queryResult set[2,[_tmp] call HC_fnc_numberSafe];
_tmp = _queryResult select 3;
_queryResult set[3,[_tmp] call HC_fnc_numberSafe];

//Parse licenses (Always index 6)
_new = [(_queryResult select 6)] call HC_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[6,_new];

//Convert tinyint to boolean
_old = _queryResult select 6;
for "_i" from 0 to (count _old)-1 do {
    _data = _old select _i;
    _old set[_i,[_data select 0, ([_data select 1,1] call HC_fnc_bool)]];
};

_queryResult set[6,_old];

_new = [(_queryResult select 8)] call HC_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[8,_new];
//Parse data for specific side.
switch (_side) do {
    case west: {
        _queryResult set[9,([_queryResult select 9,1] call HC_fnc_bool)];

        //Parse Stats
        _new = [(_queryResult select 10)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[10,_new];

        //Playtime
        _new = [(_queryResult select 11)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _index = TON_fnc_playtime_values_request find [_uid, _new];
        if !(_index isEqualTo -1) then {
            TON_fnc_playtime_values_request set[_index,-1];
            TON_fnc_playtime_values_request = TON_fnc_playtime_values_request - [-1];
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        } else {
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        };
        _new = _new select 0;
        [_uid, _new] call HC_fnc_setPlayTime;

		//Alive
		_queryResult set[12,([_queryResult select 12,1] call HC_fnc_bool)];

		//Position
		_new = [(_queryResult select 13)] call HC_fnc_mresToArray;
		if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
		_queryResult set[13,_new];

		//Blood
		_tmp = _queryResult select 14;
		_queryResult set[14,[_tmp] call HC_fnc_numberSafe];
    };

    case civilian: {
        _queryResult set[7,([_queryResult select 7,1] call HC_fnc_bool)];

        //Parse Stats
        _new = [(_queryResult select 9)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[9,_new];

        //Position
        _queryResult set[10,([_queryResult select 10,1] call HC_fnc_bool)];
        _new = [(_queryResult select 11)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[11,_new];

        //Playtime
        _new = [(_queryResult select 12)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _index = TON_fnc_playtime_values_request find [_uid, _new];
        if !(_index isEqualTo -1) then {
            TON_fnc_playtime_values_request set[_index,-1];
            TON_fnc_playtime_values_request = TON_fnc_playtime_values_request - [-1];
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        } else {
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        };
        _new = _new select 2;
        [_uid, _new] call HC_fnc_setPlayTime;

		//Blood
		_tmp = _queryResult select 13;
		_queryResult set[13,[_tmp] call HC_fnc_numberSafe];

		/* Make sure nothing else is added under here */
        _houseData = _uid spawn HC_fnc_fetchPlayerHouses;
        waitUntil {scriptDone _houseData};
        _queryResult pushBack (missionNamespace getVariable [format ["houses_%1",_uid],[]]);
        _gangData = _uid spawn HC_fnc_queryPlayerGang;
        waitUntil{scriptDone _gangData};
        _queryResult pushBack (missionNamespace getVariable [format ["gang_%1",_uid],[]]);
    };

    case independent: {
        //Parse Stats
        _new = [(_queryResult select 9)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[9,_new];

        //Playtime
        _new = [(_queryResult select 10)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _index = TON_fnc_playtime_values_request find [_uid, _new];
        if !(_index isEqualTo -1) then {
            TON_fnc_playtime_values_request set[_index,-1];
            TON_fnc_playtime_values_request = TON_fnc_playtime_values_request - [-1];
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        } else {
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        };
        _new = _new select 1;
        [_uid, _new] call HC_fnc_setPlayTime;

		//Alive
        _queryResult set[11,([_queryResult select 11,1] call HC_fnc_bool)];

        //Position
        _new = [(_queryResult select 12)] call HC_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[12,_new];

        //Blood
		_tmp = _queryResult select 13;
		_queryResult set[13,[_tmp] call HC_fnc_numberSafe];
    };
};

publicVariable "TON_fnc_playtime_values_request";

life_keyreceived = false;
life_keyreceivedvar = [];
[_uid,_side] remoteExecCall ["TON_fnc_recupKeyForHC",RSERV];
waitUntil {life_keyreceived};
_keyArr = life_keyreceivedvar;
_queryResult pushBack _keyArr;

_queryResult remoteExec ["SOCK_fnc_requestReceived",_ownerID];
