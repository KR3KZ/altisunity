/*
    File: fn_iPhone_X_appPhone.sqf
    Author: Neyzhak

    Description:
    Open app phone

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_phoneNumber","_iPhone_X_clock_home"];
disableSerialization;

_display 							= findDisplay 97000;
_ctrl 								= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97505,97509];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97503,true];

if (isNil "life_phoneNumberActive") then
{
	ctrlEnable [97656,false];
	ctrlEnable [97660,false];
};

_background_iPhone_X_background 	= _display displayCtrl 97002;
_iPhone_X_phoneNumber 				= _display displayCtrl 97613;
_iPhone_X_clock_home 				= _display displayCtrl 97500;

_background_iPhone_X_background 	ctrlSetText "unity_iPhone_X\iPhone_X_appPhone.paa";
_iPhone_X_phoneNumber 				ctrlSetText "Numéro";
_iPhone_X_clock_home 				ctrlSetTextColor [0,0,0,1];
