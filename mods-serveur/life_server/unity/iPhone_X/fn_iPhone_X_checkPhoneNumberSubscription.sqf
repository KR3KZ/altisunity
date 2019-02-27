/*
	File: fn_iPhone_X_checkPhoneNumberSubscription.sqf
	Author: Neyzhak

	Description:
	Check if subscription is available

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_type","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_type = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit" || _type isEqualTo "") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT phone_number FROM iphone_phone_numbers WHERE player_id='%1' AND type_id='%2'", _playerUID, _type];
_result = [_query,2] call DB_fnc_asyncCall;

diag_log "------------- CHECK PHONE NUMBER SUBSCRIPTION --------------";
diag_log format ["Check phone number subscription for player : %1", _playerUID];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

[_result] remoteExec ["unity_fnc_iPhone_X_getPhoneNumberSubscription", _ownerID];