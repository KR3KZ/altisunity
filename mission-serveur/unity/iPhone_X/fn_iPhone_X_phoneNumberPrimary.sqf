/*
	File: fn_iPhone_X_phoneNumberPrimary.sqf
	Author: Neyzhak

	Description:
	Phone number primary

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberPrimary"];
_phoneNumberPrimary = [_this,0,"",[""]] call BIS_fnc_param;

if (_phoneNumberPrimary isEqualTo "") exitWith {diag_log "ERROR - PHONE NUMBER PRIMARY"};

life_phoneNumberPrimary = _phoneNumberPrimary;