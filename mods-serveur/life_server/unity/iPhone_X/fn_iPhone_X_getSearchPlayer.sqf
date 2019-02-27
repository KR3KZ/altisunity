/*
	File: fn_iPhone_X_getSearchPlayer.sqf
	Author: Neyzhak

	Description:
	Get search player

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_searchPlayer = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT bankacc FROM players WHERE name='%1'", _searchPlayer];
_result = [_query,2,true] call DB_fnc_asyncCall;

diag_log "------------- SEARCH PLAYER 1 -------------";
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

if !(_result isEqualTo []) then
{
	[_searchPlayer, _result] remoteExec ["unity_fnc_iPhone_X_appAddOffense", _ownerID];
};

diag_log "------------- SEARCH PLAYER 2 -------------";
diag_log format ["Result : %1, %2", _searchPlayer, _result];
diag_log "-----------------------------------------";