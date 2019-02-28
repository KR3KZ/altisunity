/*
    File: fn_iPhone_X_appSound.sqf
    Author: Neyzhak

    Description:
    Open app sound

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_iPhone_X_sound_1","_iPhone_X_sound_2","_iPhone_X_sound_3","_soundActive"];
disableSerialization;

_display 								= findDisplay 97000;
_ctrl 									= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97508];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97513,true];

_background_iPhone_X_background 		= _display displayCtrl 97002;
_iPhone_X_clock_home 					= _display displayCtrl 97500;
_iPhone_X_sound_1 						= _display displayCtrl 97714;
_iPhone_X_sound_2 						= _display displayCtrl 97715;
_iPhone_X_sound_3 						= _display displayCtrl 97716;
_iphone_X_silent 						= _display displayCtrl 97717;

_soundActive 							= life_settings select 1;

diag_log "------------- SOUND ACTIVE CLIENT -------------";
diag_log format ["Result : %1", _soundActive];
diag_log "-----------------------------------------";

_background_iPhone_X_background 		ctrlSetText "unity_iPhone_X\iPhone_X_appSound.paa";
_iPhone_X_clock_home 					ctrlSetTextColor [0,0,0,1];

if (_soundActive == 1) then {_iPhone_X_sound_1 ctrlSetTextColor [0.027,0.576,0.047,1];} else {_iPhone_X_sound_1 ctrlSetTextColor [0,0,0,1];};
if (_soundActive == 2) then {_iPhone_X_sound_2 ctrlSetTextColor [0.027,0.576,0.047,1];} else {_iPhone_X_sound_2 ctrlSetTextColor [0,0,0,1];};
if (_soundActive == 3) then {_iPhone_X_sound_3 ctrlSetTextColor [0.027,0.576,0.047,1];} else {_iPhone_X_sound_3 ctrlSetTextColor [0,0,0,1];};

if ((life_settings select 2) isEqualTo 0) then {
	_iphone_X_silent ctrlSetText "unity_iPhone_X\iPhone_X_icon_silentOFF.paa";
} else {
	_iphone_X_silent ctrlSetText "unity_iPhone_X\iPhone_X_icon_silentON.paa";
};
