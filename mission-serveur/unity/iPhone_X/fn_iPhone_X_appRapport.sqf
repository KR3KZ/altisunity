/*
    File: fn_iPhone_X_appRapport.sqf
    Author: Neyzhak

    Description:
    Open app rapport

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_index","_nameContact","_phoneNumberContact","_display","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_iPhone_X_nameContactAppContact","_iPhone_X_phoneNumberContactAppContact"];
disableSerialization;

_index = _this select 0;
_namePlayer = _this select 1;
_nameRapport = _this select 2;
_phoneNumberRapport = _this select 3;
_noteRapport = _this select 4;
_date = _this select 5;
_hour = _this select 6;

_display = findDisplay 97000;
_ctrl = [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98220];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [98230,true];

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;
_iPhone_X_nameRapportAppRapport = _display displayCtrl 98231;
_iPhone_X_phoneNumberRapportAppRapport = _display displayCtrl 98232;
_iPhone_X_noteRapportAppRapport = _display displayCtrl 98233;
_iPhone_X_dateAppRapport = _display displayCtrl 98234;
_iPhone_X_hourAppRapport = _display displayCtrl 98235;
_iPhone_X_namePlayerAppRapport = _display displayCtrl 98236;

_background_iPhone_X_background ctrlSetText "nolosharp_textures\phone\iPhone_X_appContact.paa";
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];

_iPhone_X_nameRapportAppRapport ctrlSetText _nameRapport;
_iPhone_X_phoneNumberRapportAppRapport ctrlSetText _phoneNumberRapport;
_iPhone_X_noteRapportAppRapport ctrlSetText _noteRapport;
_iPhone_X_dateAppRapport ctrlSetText _date;
_iPhone_X_hourAppRapport ctrlSetText _hour;
_iPhone_X_namePlayerAppOffense ctrlSetText _namePlayer;
