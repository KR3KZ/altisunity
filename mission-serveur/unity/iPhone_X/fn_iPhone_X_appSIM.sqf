/*
    File: fn_iPhone_X_appSIM.sqf
    Author: Neyzhak

    Description:
    Open app SIM

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_iPhone_X_SIM_1","_iPhone_X_SIM_2","_iPhone_X_SIM_3","_iPhone_X_button_SIM_1","_iPhone_X_button_SIM_2","_iPhone_X_button_SIM_3"];
disableSerialization;

_display 							= findDisplay 97000;
_ctrl 								= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97508];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97515,true];
ctrlShow [97719,false];
ctrlShow [97720,false];
ctrlShow [97721,false];

_background_iPhone_X_background 	= _display displayCtrl 97002;
_iPhone_X_clock_home 				= _display displayCtrl 97500;
_iPhone_X_SIM_1 					= _display displayCtrl 97616;
_iPhone_X_SIM_2 					= _display displayCtrl 97617;
_iPhone_X_SIM_3 					= _display displayCtrl 97618;
_iPhone_X_button_SIM_1 				= _display displayCtrl 97619;
_iPhone_X_button_SIM_2 				= _display displayCtrl 97620;
_iPhone_X_button_SIM_3 				= _display displayCtrl 97621;

_background_iPhone_X_background 	ctrlSetText "unity_iPhone_X\iPhone_X_appSIM.paa";

if !(isNil "life_phoneNumberPrimary") then {_iPhone_X_SIM_1 ctrlSetText format["PRINCIPAL : %1", life_phoneNumberPrimary]; ctrlShow [97719,true];};
if !(isNil "life_phoneNumberSecondary") then {_iPhone_X_SIM_2 ctrlSetText format["SECONDAIRE : %1", life_phoneNumberSecondary]; ctrlShow [97720,true];};
if !(isNil "life_phoneNumberEnterprise") then {_iPhone_X_SIM_3 ctrlSetText format["ENTERPRISE : %1", life_phoneNumberEnterprise]; ctrlShow [97721,true];};
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];

if !(isNil "life_phoneNumberActive") then {
	if !(isNil "life_phoneNumberPrimary") then {
		if (life_phoneNumberActive isEqualTo life_phoneNumberPrimary) then {_iPhone_X_SIM_1 ctrlSetTextColor [0.027,0.576,0.047,1]; ctrlShow [97719,false];} else {_iPhone_X_SIM_1 ctrlSetTextColor [0,0,0,1]; ctrlShow [97719,true];};
	};

	if !(isNil "life_phoneNumberSecondary") then {
		if (life_phoneNumberActive isEqualTo life_phoneNumberSecondary) then {_iPhone_X_SIM_2 ctrlSetTextColor [0.027,0.576,0.047,1]; ctrlShow [97720,false];} else {_iPhone_X_SIM_2 ctrlSetTextColor [0,0,0,1]; ctrlShow [97720,true];};
	};

	if !(isNil "life_phoneNumberEnterprise") then {
		if (life_phoneNumberActive isEqualTo life_phoneNumberEnterprise) then {_iPhone_X_SIM_3 ctrlSetTextColor [0.027,0.576,0.047,1]; ctrlShow [97721,false];} else {_iPhone_X_SIM_3 ctrlSetTextColor [0,0,0,1]; ctrlShow [97721,false];};
	};
};
