/*
	File: fn_iPhone_X_phoneNumberSecondary.sqf
	Author: Neyzhak

	Description:
	Phone number secondary

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberSecondary"];
_phoneNumberSecondary = [_this,0,"",[""]] call BIS_fnc_param;

if (_phoneNumberSecondary isEqualTo "") exitWith {diag_log "ERROR - PHONE NUMBER SECONDARY"};

life_phoneNumberSecondary = _phoneNumberSecondary;