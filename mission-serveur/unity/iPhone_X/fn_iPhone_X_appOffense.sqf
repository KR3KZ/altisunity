/*
    File: fn_iPhone_X_appOffense.sqf
    Author: Neyzhak

    Description:
    Open app offense

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_index","_nameContact","_phoneNumberContact","_display","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_iPhone_X_nameContactAppContact","_iPhone_X_phoneNumberContactAppContact"];
disableSerialization;

_index = _this select 0;
_namePlayer = _this select 1;
_nameOffense = _this select 2;
_phoneNumberOffense = _this select 3;
_noteOffense = _this select 4;
_valueAmendeTotal = _this select 5;
_valueAmendeReal = _this select 6;
_onTheRun = _this select 7;
_date = _this select 8;
_hour = _this select 9;
_amendeList = _this select 10;

_display = findDisplay 97000;
_ctrl = [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98144];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [98122,true];

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;
_iPhone_X_nameOffenseAppOffense = _display displayCtrl 98123;
_iPhone_X_phoneNumberOffenseAppOffense = _display displayCtrl 98124;
_iPhone_X_noteOffenseAppOffense = _display displayCtrl 98125;
_iPhone_X_valueAmendeTotalAppOffense = _display displayCtrl 98126;
_iPhone_X_valueAmendeRealAppOffense = _display displayCtrl 98127;
_iPhone_X_onTheRunAppOffense = _display displayCtrl 98128;
_iPhone_X_dateAppOffense = _display displayCtrl 98129;
_iPhone_X_hourAppOffense = _display displayCtrl 98130;
_iPhone_X_amendeListAppOffense = _display displayCtrl 98131;
_iPhone_X_namePlayerAppOffense = _display displayCtrl 98132;

_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appContact.paa";
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];

_iPhone_X_nameOffenseAppOffense ctrlSetText _nameOffense;
_iPhone_X_phoneNumberOffenseAppOffense ctrlSetText _phoneNumberOffense;
_iPhone_X_noteOffenseAppOffense ctrlSetText _noteOffense;
_iPhone_X_valueAmendeTotalAppOffense ctrlSetText _valueAmendeTotal;
_iPhone_X_valueAmendeRealAppOffense ctrlSetText _valueAmendeReal;
_iPhone_X_onTheRunAppOffense ctrlSetText _onTheRun;
_iPhone_X_dateAppOffense ctrlSetText _date;
_iPhone_X_hourAppOffense ctrlSetText _hour;
_iPhone_X_amendeListAppOffense ctrlSetText _amendeList;
_iPhone_X_namePlayerAppOffense ctrlSetText _namePlayer;
