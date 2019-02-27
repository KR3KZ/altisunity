/*
	File: fn_iPhone_X_getSMSEnterprise.sqf
	Author: Neyzhak

	Description:
	Get SMS enterprise

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_phoneNumberActive","_phoneNumberContact","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_phoneNumberContact = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit" || _phoneNumberContact isEqualTo "") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT from_num, message, position FROM iphone_messages WHERE to_num='%1' ORDER BY date", _phoneNumberContact];
_result = [_query,2,true] call DB_fnc_asyncCall;

diag_log "------------- GET SMS ENTERPRISE ---------------";
diag_log format ["Get SMS for player : %1", _playerUID];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

[_result] remoteExec ["unity_fnc_iPhone_X_SMSEnterprise", _ownerID];