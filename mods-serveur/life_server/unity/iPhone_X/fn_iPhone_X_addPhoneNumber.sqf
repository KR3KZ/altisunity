/*
	File: fn_iPhone_X_savePhoneNumber.sqf
	Author: Neyzhak

	Description:
	Save phone number in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_phoneNumber","_type","_serialNumber","_query","_result"];
_unit = [_this,0,"",[""]] call BIS_fnc_param;
_phoneNumber = [_this,1,"",[""]] call BIS_fnc_param;
_type = [_this,2,"",[""]] call BIS_fnc_param;

if (_unit isEqualTo "" || _phoneNumber isEqualTo "" || _type isEqualTo "") exitWith {};

_serialNumber = [];
while {(count _serialNumber < 15)} do {
	_serialNumber = [];
	for "_i" from 0 to 14 do {
		_serialNumber pushBack (selectRandom ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",0,1,2,3,4,5,6,7,8,9]);
	};
};

_serialNumber = _serialNumber joinString "";

diag_log "------------- ADD PHONE NUMBER SERIALNUMBER --------------";
diag_log format ["Add phone number serial number for player : %1", _unit];
diag_log format ["Result : %1", _serialNumber];
diag_log "-----------------------------------------";

_query = format ["INSERT INTO iphone_phone_numbers (player_id, phone_number, type_id, serial_number) VALUES ('%1', '%2', '%3', '%4')", _unit, _phoneNumber, _type, _serialNumber];
_result = [_query,1] call DB_fnc_asyncCall;

diag_log "------------- ADD PHONE NUMBER --------------";
diag_log format ["Add phone number for player : %1", _unit];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";