/*
    File: fn_iPhone_X_appSearchPlayer.sqf
    Author: Neyzhak

    Description:
    Open search player

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_nameContact","_phoneNumberContact","_tmp","_ctrlList","_pos"];
disableSerialization;

_display = findDisplay 97000;

_ctrl = [97004,97006,97118,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98133];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [98177,true];

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_searchPlayer = _display displayCtrl 98178;
_iPhone_X_clock_home = _display displayCtrl 97500;

_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appContactsList.paa";
_iPhone_X_searchPlayer ctrlSetText "Rechercher...";
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];
