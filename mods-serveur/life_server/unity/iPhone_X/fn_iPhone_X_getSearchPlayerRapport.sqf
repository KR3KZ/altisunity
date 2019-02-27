/*
	File: fn_iPhone_X_getSearchPlayerRapport.sqf
	Author: Neyzhak

	Description:
	Get search player for rapport

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_searchPlayerRapport = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT name FROM players WHERE name='%1'", _searchPlayerRapport];
_result = [_query,2,true] call DB_fnc_asyncCall;

diag_log "------------- SEARCH PLAYER RAPPORT 1 -------------";
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

if !(_result isEqualTo []) then
{
	[_result] remoteExec ["unity_fnc_iPhone_X_appAddRapport", _ownerID];
};

diag_log "------------- SEARCH PLAYER RAPPORT 2 -------------";
diag_log format ["Result : %1, %2", _searchPlayerRapport, _result];
diag_log "-----------------------------------------";