/*
    File: fn_iPhone_X_home.sqf
    Author: Neyzhak

    Description:
    Set settings for home button

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_base","_background_iPhone_X_background","_iPhone_X_clock_home","_angle","_wallpaperActive","_progressTime","_startTime","_endTime","_progress","_ctrl2"];
disableSerialization;

_display = findDisplay 97000;

ctrlShow [97002, true];

_ctrl = [97005,97501,97502,97503,97504,97505,97506,97507,97508,97509,97510,97512,97513,97515,97517,97115,97800,97801,97805,98122,98133,98144,98155,98166,98177,98188,98199,98210,98220,98230,98240,98260,98270,98280,98290];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

_background_iPhone_X_base = _display displayCtrl 97001;
_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;

_angle = (ctrlAngle _background_iPhone_X_base select 0);

_wallpaperActive = "unity_iPhone_X\iPhone_X_background_%1.paa";

if (_angle < 0) then {
	noesckey = (findDisplay 97000) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];

	_progressTime = 1.5;
	_startTime = time;
	_endTime = _startTime + _progressTime;
	_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_background_OFF.paa";

	while {time <= _endTime} do {
			_progress = linearConversion[_startTime, _endTime, time, -90, 0];
			_background_iPhone_X_base ctrlSetAngle [_progress,0.5,0.5];
			_background_iPhone_X_background ctrlSetAngle [_progress,0.5,0.5];
			_background_iPhone_X_base ctrlCommit 0;
			_background_iPhone_X_background ctrlCommit 0;
		};

	_background_iPhone_X_base ctrlSetAngle [0,0.5,0.5];
	_background_iPhone_X_background ctrlSetAngle [0,0.5,0.5];
	_background_iPhone_X_base ctrlCommit 0;
	_background_iPhone_X_background ctrlCommit 0;
	_background_iPhone_X_background ctrlSetText format[_wallpaperActive, (life_settings select 0)];
	//_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_background_noel.paa";

	(findDisplay 97000) displayRemoveEventHandler ["KeyDown", noesckey];
};

_ctrl2 = [97004,97118,97006,97007,97008,97009,97010,97011,97012,97016,97017,97106,97107,97108,97109,97110,97111,97112,97117,97500];

{
	(_display displayCtrl _x) ctrlShow true;
} forEach _ctrl2;

if ((playerSide == west) AND (call life_coplevel > 0)) then
{
	ctrlShow [97013,true];
	ctrlShow [97113,true];
	ctrlShow [97014,true];
	ctrlShow [97015,true];
};

if ((playerSide == independent) AND (call life_mediclevel > 0)) then
{
	ctrlShow [97014,true];
	ctrlShow [97015,true];
};
if !(isNil "life_phoneNumberEnterprise") then
{
	if ((life_phoneNumberEnterprise in life_phoneNumber_company || life_phoneNumberEnterprise in life_phoneNumber_services ) &&  playerSide == civilian) then
	{
		ctrlShow [97014,true];
		ctrlShow [97015,true];
	};
};

_background_iPhone_X_background ctrlSetText format[_wallpaperActive, (life_settings select 0)];
//_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_background_noel.paa";
_iPhone_X_clock_home ctrlSetTextColor [1,1,1,1];

player setVariable ["iPhone_X_lastSMS", []];
