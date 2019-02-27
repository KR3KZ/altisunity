/*
	File: fn_iPhone_X_checkPhoneNumberIsUse.sqf
	Author: Neyzhak

	Description:
	Check if phone number is available

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit", "_phoneNumber","_type","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_phoneNumber = [_this,1,"",[""]] call BIS_fnc_param;
_type = [_this,2,"",[""]] call BIS_fnc_param;

if (isNil "_unit" || _phoneNumber isEqualTo "" || _type isEqualTo "") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};


_query = format ["SELECT phone_number FROM iphone_phone_numbers WHERE phone_number='%1'", _phoneNumber];
_result = [_query,2] call DB_fnc_asyncCall;

diag_log "------------- CHECK PHONE NUMBER IS USE --------------";
diag_log format ["Check phone number is use for player : %1", _playerUID];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

[_result] remoteExec ["unity_fnc_iPhone_X_getPhoneNumberIsUse", _ownerID];