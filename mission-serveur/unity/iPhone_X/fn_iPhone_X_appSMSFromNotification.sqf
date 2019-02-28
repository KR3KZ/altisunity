/*
    File: fn_iPhone_X_appSMSFromNotification.sqf
    Author: Neyzhak

    Description:
    Open app SMS from notification

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_index","_nameContact","_phoneNumberContact","_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_iPhone_X_nameContactAppSMS"];
disableSerialization;

_nameContact 							= _this select 0;
_phoneNumberContact 					= _this select 1;

_display 								= findDisplay 97000;
_ctrlDisplay 							= (_display displayCtrl 97510);
_ctrlGrp 								= (_ctrlDisplay controlsGroupCtrl 97511);
_ctrlList 								= [];

_ctrl 									= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97115,97501,97503,97506,97800,97801,97805];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

player setVariable ["iPhone_X_lastSMS", []];

ctrlShow [97510,true];

if (isNil "life_phoneNumberActive") then {
	ctrlEnable [97621,false];
	ctrlEnable [97622,false];
	ctrlEnable [97623,false];
};

_background_iPhone_X_background 		= _display displayCtrl 97002;
_iPhone_X_clock_home 					= _display displayCtrl 97500;
_iPhone_X_nameContactAppSMS 			= _display displayCtrl 97620;

_background_iPhone_X_background 		ctrlSetText "unity_iPhone_X\iPhone_X_appSMS.paa";
_iPhone_X_clock_home 					ctrlSetTextColor [0,0,0,1];

_iPhone_X_nameContactAppSMS 			ctrlSetText _nameContact;

if (life_phoneNumberActive isEqualTo []) exitWith {};

if !(isNil "life_phoneNumberActive") then {[player, life_phoneNumberActive, _phoneNumberContact] remoteExec ["unity_srv_fnc_iPhone_X_getSMS",2];};
