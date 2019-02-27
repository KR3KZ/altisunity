/*
	File: fn_iPhone_X_getPhoneNumberIsUse.sqf
	Author: Neyzhak

	Description:
	Check if phone number is available

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberIsUse"];
_phoneNumberIsUse = [_this,0,[],[[]]] call BIS_fnc_param;

if (_phoneNumberIsUse isEqualTo [[]]) then {_phoneNumberIsUse = [];};

if (_phoneNumberIsUse isEqualTo []) then {_phoneNumberIsUse = false;} else {_phoneNumberIsUse = true;};

iPhone_X_checkPhoneNumberIsUse = _phoneNumberIsUse;