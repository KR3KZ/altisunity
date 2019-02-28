/*
	File: fn_iPhone_X_bankAccount.sqf
	Author: Neyzhak

	Description:
	Bank account

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_bankAccount"];
disableSerialization;

_bankAccount 							= [_this,0,[],[[]]] call BIS_fnc_param;

if (_bankAccount isEqualTo [[]]) then {_bankAccount = [];};

diag_log str _bankAccount;

_display 								= findDisplay 97000;

_iPhone_X_bankAccount 					= _display displayCtrl 98242;
_iPhone_X_bankAccount 					ctrlSetText _bankAccount;
