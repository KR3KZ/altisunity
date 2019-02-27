/*
    File: fn_iPhone_X_clock.sqf
    Author: Neyzhak
    
    Description:
    Set settings for clock

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_iPhone_X_clock_home","_iPhone_X_clock","_date","_hour","_minute","_time"];
disableSerialization;

_display = findDisplay 97000;

_iPhone_X_clock_home = _display displayCtrl 97500;
_iPhone_X_clock = _display displayCtrl 97501;

while {!(isNull (findDisplay 97000))} do
	{
		_date = date;
		_hour = str (_date select 3);
		_minute  = str (_date select 4);
		_time = format["%1:%2", if(count _hour == 1) then {("0" + _hour)} else {_hour}, if(count _minute == 1) then {("0" + _minute)} else {_minute}];

		_iPhone_X_clock ctrlSetText _time;
		_iPhone_X_clock_home ctrlSetText _time;
	};