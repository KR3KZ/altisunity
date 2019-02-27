/*
	File: fn_iPhone_X_saveContact.sqf
	Author: Neyzhak

	Description:
	Save contact in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_uid","_ownerPhoneNumber","_nameContact","_phoneNumberContact","_query"];
_uid  = [_this,0,"",[""]] call BIS_fnc_param;
_nameContact = [_this,1,"",[""]] call BIS_fnc_param;
_phoneNumberContact = [_this,2,"",[""]] call BIS_fnc_param;
_noteContact = [_this,3,"",[""]] call BIS_fnc_param;

if (_uid isEqualTo "" || _nameContact isEqualTo "" || _phoneNumberContact isEqualTo "") exitWith {};

_query = format ["INSERT INTO iphone_contacts (player_id, name_contact, phone_number_contact, note_contact) VALUES ('%1', '%2', '%3', '""%4""')", _uid, _nameContact, _phoneNumberContact, _noteContact];
[_query,1] call DB_fnc_asyncCall;