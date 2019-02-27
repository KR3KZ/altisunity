/*
	File: fn_iPhone_X_getRapports.sqf
	Author: Neyzhak

	Description:
	Get rapports

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT name_player, name_offense, phone_number_offense, note_offense, date, hour FROM iphone_rapport ORDER BY creation_date DESC"];
_result = [_query,2,true] call DB_fnc_asyncCall;

if !(_result isEqualTo []) then
{
	[_result] remoteExec ["unity_fnc_iPhone_X_rapport", _ownerID];
};

diag_log "------------- GET RAPPORTS --------------";
diag_log format ["Result : %1", _query];
diag_log "-----------------------------------------";