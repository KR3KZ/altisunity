/*
	File: fn_iPhone_X_getPhoneNumber.sqf
	Author: Neyzhak

	Description:
	Get phone number

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_queryPrimary","_resultPrimary","_querySecondary","_resultSecondary","_queryEnterprise","_resultEnterprise","_queryActive","_resultActive","_inList"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_queryPrimary = format ["SELECT phone_number FROM iphone_phone_numbers WHERE player_id='%1' AND type_id='1'", _playerUID];
_resultPrimary = [_queryPrimary,2] call DB_fnc_asyncCall;

if !(_resultPrimary isEqualTo []) then
{
	if (_resultPrimary isEqualType []) then {_resultPrimary = _resultPrimary select 0;};
	_resultPrimary remoteExec ["unity_fnc_iPhone_X_phoneNumberPrimary", _ownerID];
};

diag_log "------------- GET PHONE NUMBER PRIMARY ---------------";
diag_log format ["Get phone number primary for player : %1", _playerUID];
diag_log format ["Result : %1", _resultPrimary];
diag_log "-----------------------------------------";

_querySecondary = format ["SELECT phone_number FROM iphone_phone_numbers WHERE player_id='%1' AND type_id='2'", _playerUID];
_resultSecondary = [_querySecondary,2] call DB_fnc_asyncCall;

if !(_resultSecondary isEqualTo []) then
{
	if (_resultSecondary isEqualType []) then {_resultSecondary = _resultSecondary select 0;};
	_resultSecondary remoteExec ["unity_fnc_iPhone_X_phoneNumberSecondary", _ownerID];
};

diag_log "------------- GET PHONE NUMBER SECONDARY ---------------";
diag_log format ["Get phone number secondary for player : %1", _playerUID];
diag_log format ["Result : %1", _resultSecondary];
diag_log "-----------------------------------------";

_queryEnterprise = format ["SELECT phone_number FROM iphone_phone_numbers WHERE player_id='%1' AND type_id='3'", _playerUID];
_resultEnterprise = [_queryEnterprise,2] call DB_fnc_asyncCall;

if !(_resultEnterprise isEqualTo []) then
{
	if (_resultEnterprise isEqualType []) then
	{
		_resultEnterprise = _resultEnterprise select 0;
	};
	_resultEnterprise remoteExec ["unity_fnc_iPhone_X_phoneNumberEnterprise", _ownerID];

	if (_resultEnterprise isEqualTo "60") then {[iPhone_X_switchboardPMC] remoteExec ["unity_fnc_iPhone_X_switchboardSend",2]};
	if (_resultEnterprise isEqualTo "66") then {[iPhone_X_switchboardIDAP] remoteExec ["unity_fnc_iPhone_X_switchboardSend",2]};
	if ((_resultEnterprise in life_phoneNumber_company || _resultEnterprise in life_phoneNumber_services) && !(_resultEnterprise in ["60","66"])) then {[iPhone_X_switchboardCOMPANY] remoteExec ["unity_fnc_iPhone_X_switchboardSend",2]};
};



diag_log "------------- GET PHONE NUMBER ENTERPRISE ---------------";
diag_log format ["Get phone number enterprise for player : %1", _playerUID];
diag_log format ["Result : %1", _resultEnterprise];
diag_log "-----------------------------------------";

_queryActive = format ["SELECT phone_number_active FROM iphone_phone_numbers_active WHERE player_id='%1'", _playerUID];
_resultActive = [_queryActive,2] call DB_fnc_asyncCall;

if !(_resultActive isEqualTo []) then
{
	if (_resultActive isEqualType []) then {_resultActive = _resultActive select 0;};
	_resultActive remoteExec ["unity_fnc_iPhone_X_phoneNumberActive", _ownerID];
} else {
	if !(_resultPrimary isEqualTo []) then
	{
		[_unit, _resultPrimary] remoteExec ["unity_srv_fnc_iPhone_X_savePhoneNumberActive", 2];
	};
};

diag_log "------------- GET PHONE NUMBER ACTIVE ---------------";
diag_log format ["Get phone number active for player : %1", _playerUID];
diag_log format ["Result : %1", _resultActive];
diag_log "-----------------------------------------";

[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getContacts",2];
[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getConversations",2];
[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getEvents",2];

if !(_resultPrimary isEqualTo []) then
{
	_inList = ([iPhone_X_listNumber, _resultPrimary] call BIS_fnc_findNestedElement);
	if (_inList isEqualTo []) then {
		iPhone_X_listNumber pushBack [_resultPrimary, _ownerID];
	} else {
		iPhone_X_listNumber set [(_inList select 0), [_resultPrimary, _ownerID]];
	};
};

if !(_resultSecondary isEqualTo []) then
{
	_inList = ([iPhone_X_listNumber, _resultSecondary] call BIS_fnc_findNestedElement);
	if (_inList isEqualTo []) then {
		iPhone_X_listNumber pushBack [_resultSecondary, _ownerID];
	} else {
		iPhone_X_listNumber set [(_inList select 0), [_resultSecondary, _ownerID]];
	};
};

iPhone_X_TFARNumber = iPhone_X_TFARNumber + 1;

[[iPhone_X_TFARNumber]] remoteExec ["unity_fnc_iPhone_X_TFARNumber", _ownerID];

diag_log format ["iPhone_X_listNumber : %1", iPhone_X_listNumber];
diag_log format ["iPhone_X_TFARNumber : %1", iPhone_X_TFARNumber];
