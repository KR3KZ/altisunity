/*
	File: fn_iPhone_X_getPhoneNumber.sqf
	Author: Neyzhak

	Description:
	Get phone number

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT phone_number_active FROM iphone_phone_numbers_active WHERE player_id='%1'", _playerUID];
_result = [_query,2] call DB_fnc_asyncCall;

if !(_result isEqualTo []) then
{
	if (_result isEqualType []) then {_result = _result select 0;};
	_result remoteExec ["unity_fnc_iPhone_X_phoneNumberActive", _ownerID];
};

diag_log "------------- GET PHONE NUMBER ACTIVE AFTER SET ---------------";
diag_log format ["Get phone number active after set for player : %1", _playerUID];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";