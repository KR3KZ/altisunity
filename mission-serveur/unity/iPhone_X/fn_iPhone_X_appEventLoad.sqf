/*
    File: fn_iPhone_X_appEventLoad.sqf
    Author: OhRhion

    Description:
    Open app event load

    IF YOU WANT TO EDIT THIS CODE I DON'T GIVE A FUCK
*/
private["_index","_eventName","_eventDesc","_eventDate","_eventPrice","_eventPos","_display","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home"];
disableSerialization;

_index = _this select 0;
_eventName = _this select 1;
_eventDesc = _this select 2;
_eventDate =  _this select 3;
_eventPrice = _this select 4;
_eventPos = _this select 5;

diag_log _eventDate;

_display = findDisplay 97000;
_ctrl = [97004,97006,97007,97118,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98270];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [98280,true];

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;
_iPhone_X_nameEvent = _display displayCtrl 98281;
_iPhone_X_descriptionEvent = _display displayCtrl 98282;
_iPhone_X_dateEvent = _display displayCtrl 98283;
_iPhone_X_positionEvent = _display displayCtrl 98284;
_iPhone_X_priceEvent = _display displayCtrl 98285;

_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appAddEvent.paa";
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];
_iPhone_X_nameEvent ctrlSetText  _eventName ;
_iPhone_X_descriptionEvent ctrlSetText  _eventDesc;
_iPhone_X_dateEvent ctrlSetText  format["%1",_eventDate];
_iPhone_X_positionEvent ctrlSetText  _eventPos;
_iPhone_X_priceEvent ctrlSetText  _eventPrice;
