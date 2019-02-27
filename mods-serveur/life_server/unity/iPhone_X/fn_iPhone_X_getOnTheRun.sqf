/*
	File: fn_iPhone_X_getOnTheRun.sqf
	Author: Neyzhak

	Description:
	Get on the run

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT name_player, name_offense, phone_number_offense, note_offense, amende, value_amende_total, value_amende_real, on_the_run, date, hour FROM iphone_offense WHERE on_the_run='1' ORDER BY creation_date DESC"];
_result = [_query,2,true] call DB_fnc_asyncCall;

if !(_result isEqualTo []) then
{
	[_result] remoteExec ["unity_fnc_iPhone_X_onTheRun", _ownerID];
};

diag_log "------------- GET ONTHERUN --------------";
diag_log format ["Result : %1", _query];
diag_log "-----------------------------------------";