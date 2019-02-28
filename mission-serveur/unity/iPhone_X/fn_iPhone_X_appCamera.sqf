/*
    File: fn_iPhone_X_appCamera.sqf
    Author: Neyzhak

    Description:
    Open app Camera

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_progressTime","_startTime","_endTime","_background_iPhone_X_base","_background_iPhone_X_background","_angle","_progress","_renderSurface","_cam"];
disableSerialization;

_display 									= findDisplay 97000;
_ctrl 										= [97004,97006,97007,97118,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97114,97117,97500,97502];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

_progressTime 								= 1.5;
_startTime 									= time;
_endTime 									= _startTime + _progressTime;
_background_iPhone_X_base 					= _display displayCtrl 97001;
_background_iPhone_X_background 			= _display displayCtrl 97002;
_background_iPhone_X_background 			ctrlSetText "unity_iPhone_X\iPhone_X_background_OFF.paa";

_angle = (ctrlAngle _background_iPhone_X_base select 0);

if (_angle == 0) then {
noesckey = (findDisplay 97000) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];

while {time <= _endTime} do {
		_progress 							= linearConversion[_startTime, _endTime, time, 0, -90];
		_background_iPhone_X_base 			ctrlSetAngle [_progress,0.5,0.5];
		_background_iPhone_X_background 	ctrlSetAngle [_progress,0.5,0.5];
		_background_iPhone_X_base 			ctrlCommit 0;
		_background_iPhone_X_background 	ctrlCommit 0;
	};

_background_iPhone_X_base 					ctrlSetAngle [-90,0.5,0.5];
_background_iPhone_X_background 			ctrlSetAngle [-90,0.5,0.5];
_background_iPhone_X_base 					ctrlCommit 0;
_background_iPhone_X_background 			ctrlCommit 0;

ctrlShow [97002, false];
(findDisplay 97000) displayRemoveEventHandler ["KeyDown", noesckey];
};

ctrlShow [97502, true];
ctrlShow [97502, true];
ctrlShow [97502, true];

_renderSurface 								= ((findDisplay 97000) displayCtrl 97602);
_renderSurface 								ctrlSetText "#(argb,512,512,1)r2t(cam,1)";
_cam 										= "camera" camCreate (getPos player);
_cam 										cameraEffect ["External", "Back", "cam"];
_cam 										camSetTarget player;
_cam 										attachTo [player, [0.1, 0.75, 1.5] ];
_cam 										camSetFov 0.5;
_cam 										camCommit 0;

buttonSetAction [97603, "[] spawn unity_fnc_iPhone_X_appFrontCamera"];
