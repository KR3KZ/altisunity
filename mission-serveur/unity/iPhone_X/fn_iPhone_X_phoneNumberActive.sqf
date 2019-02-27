/*
	File: fn_iPhone_X_phoneNumberActive.sqf
	Author: Neyzhak

	Description:
	Phone number active

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberActive"];
_phoneNumberActive = [_this,0,"",[""]] call BIS_fnc_param;

if (_phoneNumberActive isEqualTo "") exitWith {diag_log "ERROR - PHONE NUMBER ACTIVE"};

life_phoneNumberActive = _phoneNumberActive;

if (!isNull (findDisplay 97000)) then {[] spawn unity_fnc_iPhone_X_master;};
