/*
    File: fn_iPhone_X_appContact.sqf
    Author: Neyzhak

    Description:
    Open app contact

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_index","_nameContact","_phoneNumberContact","_display","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_iPhone_X_nameContactAppContact","_iPhone_X_phoneNumberContactAppContact"];
disableSerialization;

_index 										= _this select 0;
_nameContact 								= _this select 1;
_phoneNumberContact 						= _this select 2;
_noteContact 								= _this select 3;

_display 									= findDisplay 97000;
_ctrl 										= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97503,97504];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97509,true];

if (isNil "life_phoneNumberActive") then
{
	ctrlEnable [97657,false];
};

_background_iPhone_X_background 			= _display displayCtrl 97002;
_iPhone_X_clock_home 						= _display displayCtrl 97500;
_iPhone_X_nameContactAppContact 			= _display displayCtrl 97609;
_iPhone_X_phoneNumberContactAppContact 		= _display displayCtrl 97610;
_iPhone_X_noteContactAppContact 			= _display displayCtrl 97659;

_background_iPhone_X_background 			ctrlSetText "unity_iPhone_X\iPhone_X_appContact.paa";
_iPhone_X_clock_home 						ctrlSetTextColor [0,0,0,1];

_iPhone_X_nameContactAppContact 			ctrlSetText _nameContact;
_iPhone_X_phoneNumberContactAppContact 		ctrlSetText _phoneNumberContact;
_iPhone_X_noteContactAppContact 			ctrlSetText _noteContact;
