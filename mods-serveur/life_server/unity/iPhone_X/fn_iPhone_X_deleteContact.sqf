/*
	File: fn_iPhone_X_deleteContact.sqf
	Author: Neyzhak

	Description:
	Delete contact in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_phoneNumberContact","_playerUID","_query"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_phoneNumberContact = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit" || _phoneNumberContact isEqualTo "") exitWith {};
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["DELETE FROM iphone_contacts WHERE player_id='%1' AND phone_number_contact='%2'", _playerUID, _phoneNumberContact];
[_query,1] call DB_fnc_asyncCall;