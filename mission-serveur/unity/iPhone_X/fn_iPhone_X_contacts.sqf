/*
	File: fn_iPhone_X_contacts.sqf
	Author: Neyzhak

	Description:
	Contacts

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_contacts"];
_contacts 								= [_this,0,[],[[]]] call BIS_fnc_param;

if (_contacts isEqualTo [[]]) then {_contacts = [];};
life_contacts 							= _contacts;

diag_log str life_contacts;
