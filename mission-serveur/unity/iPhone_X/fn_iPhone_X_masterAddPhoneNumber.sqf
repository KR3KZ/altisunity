/*
    File: fn_iPhone_X_masterAddPhoneNumber.sqf
    Author: Neyzhak

    Description:
    Open iPhone_X_addPhoneNumber

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
disableSerialization;

if(dialog) exitWith {};

createDialog "iPhone_X_addPhoneNumber";

_display 								= findDisplay 97850;

_iPhone_X_phoneNumberPrimary 			= _display displayCtrl 97851;
_iPhone_X_phoneNumberSecondary 			= _display displayCtrl 97852;

if !(isNil "life_phoneNumberPrimary") then {ctrlEnable [97851, false];};
if !(isNil "life_phoneNumberSecondary") then {ctrlEnable [97852, false];};
if (isNil "life_phoneNumberPrimary") then {ctrlEnable [97852, false];};
