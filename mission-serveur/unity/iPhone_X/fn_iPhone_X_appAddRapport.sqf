/*
    File: fn_iPhone_X_appAddRapport.sqf
    Author: Neyzhak

    Description:
    Open app add rapport

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_nameContact","_iPhone_X_phoneNumberContact","_iPhone_X_clock_home"];
disableSerialization;

_name = [_this,0,"",[""]] call BIS_fnc_param;

_display = findDisplay 97000;
_ctrl = [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98133];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [98199,true];

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_nameRapport = _display displayCtrl 98200;
_iPhone_X_phoneNumberRapport = _display displayCtrl 98201;
_iPhone_X_noteRapport = _display displayCtrl 98202;
_iPhone_X_date = _display displayCtrl 98203;
_iPhone_X_hour = _display displayCtrl 98204;
_iPhone_X_clock_home = _display displayCtrl 97500;

_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appAddContact.paa";
_iPhone_X_nameRapport ctrlSetText _name;
_iPhone_X_phoneNumberRapport ctrlSetText "Téléphone";
_iPhone_X_noteRapport ctrlSetText "Rapport";
_iPhone_X_date ctrlSetText "jj/mm/aaaa";
_iPhone_X_hour ctrlSetText "hh:mm";
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];
