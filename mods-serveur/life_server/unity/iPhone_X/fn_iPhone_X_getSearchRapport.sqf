/*
	File: fn_iPhone_X_getSearchRapport.sqf
	Author: Neyzhak

	Description:
	Get search rapport

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_searchRapport = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT name_player, name_rapport, phone_number_rapport, note_rapport, date, hour FROM iphone_rapport WHERE name_rapport='%1' ORDER BY creation_date DESC", _searchRapport];
_result = [_query,2,true] call DB_fnc_asyncCall;

diag_log "------------- SEARCH RAPPORT -------------";
diag_log format ["Number of offense : %1", count _result];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

if !(_result isEqualTo []) then
{
	[_result] remoteExec ["unity_fnc_iPhone_X_rapport", _ownerID];
};