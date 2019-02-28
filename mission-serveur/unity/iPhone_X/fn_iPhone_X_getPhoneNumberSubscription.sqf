/*
	File: fn_iPhone_X_getPhoneNumberSubscription.sqf
	Author: Neyzhak

	Description:
	Check if player can buy a phone number

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberSubscription"];
_phoneNumberSubscription 				= [_this,0,[],[[]]] call BIS_fnc_param;

if (_phoneNumberSubscription isEqualTo [[]]) then {_phoneNumberSubscription = [];};

if (_phoneNumberSubscription isEqualTo []) then {_phoneNumberSubscription = false;} else {_phoneNumberSubscription = true;};

iPhone_X_checkPhoneNumberSubscription 	= _phoneNumberSubscription;
