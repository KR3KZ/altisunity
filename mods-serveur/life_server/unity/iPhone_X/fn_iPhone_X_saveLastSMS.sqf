/*
	File: fn_iPhone_X_saveLastSMS.sqf
	Author: Neyzhak

	Description:
	Save last SMS in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_uid","_nameContact","_phoneNumberContact","_message","_query"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_phoneNumberContact = [_this,1,"",[""]] call BIS_fnc_param;
_message = [_this,2,"",[""]] call BIS_fnc_param;

if (isNil "_unit" || _phoneNumberContact isEqualTo "" || _message isEqualTo "") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["UPDATE iphone_conversations SET last_SMS='""%1""' WHERE phone_number_contact='%2' AND player_id='%3'", _message, _phoneNumberContact, _playerUID];
[_query,1] call DB_fnc_asyncCall;

[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getConversations",2];