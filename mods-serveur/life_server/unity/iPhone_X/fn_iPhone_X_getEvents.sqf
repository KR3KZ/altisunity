/*
	File: fn_iPhone_X_getEvents.sqf
	Author: Neyzhak

	Description:
	Get events for player

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT name_ev,desc_ev,DATE_FORMAT(date_start_ev,'%1'),price_ev,position_ev FROM event WHERE date_start_ev > CURRENT_TIMESTAMP and date_start_ev < CURRENT_TIMESTAMP + INTERVAL 15 DAY","%d/%m à %H:%i"];
_result = [_query,2,true] call DB_fnc_asyncCall;

diag_log "------------- EVENTS -------------";
diag_log format ["Events for player : %1", _playerUID];
diag_log format ["Query : %1", _query];
diag_log format ["Query : %1", count _result];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

[_result] remoteExec ["unity_fnc_iPhone_X_events", _ownerID];
