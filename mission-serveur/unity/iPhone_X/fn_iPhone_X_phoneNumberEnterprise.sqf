/*
	File: fn_iPhone_X_phoneNumberEnterprise.sqf
	Author: Neyzhak

	Description:
	Phone number enterprise

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberEnterprise"];
_phoneNumberEnterprise = [_this,0,"",[""]] call BIS_fnc_param;

if (_phoneNumberEnterprise isEqualTo "") exitWith {diag_log "ERROR - PHONE NUMBER ENTERPRISE"};

life_phoneNumberEnterprise = _phoneNumberEnterprise;