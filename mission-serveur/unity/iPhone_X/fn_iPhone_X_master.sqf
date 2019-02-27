	/*
    File: fn_iPhone_X_master.sqf
    Author: Neyzhak
    
    Description:
    Open iPhone_X

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
disableSerialization;

if (life_phoneInCall) then {
	closeDialog 0;
	createDialog "iPhone_X";
} else {
	if(dialog) exitWith {};
	createDialog "iPhone_X";
};