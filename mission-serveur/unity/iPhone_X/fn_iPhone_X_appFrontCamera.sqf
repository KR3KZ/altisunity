/*
    File: fn_iPhone_X_appFrontCamera.sqf
    Author: Neyzhak

    Description:
    Open app front camera

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_renderSurface","_cam"];
disableSerialization;

_display 			= findDisplay 97000;
_ctrl 				= [97004,97006,97118,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97500,97502];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97502, true];

_renderSurface 		= ((findDisplay 97000) displayCtrl 97602);
_renderSurface 		ctrlSetText "#(argb,512,512,1)r2t(frontcam,1)";
_cam 				= "camera" camCreate (getPos player);
_cam 				cameraEffect ["Internal", "Back", "frontcam"];
_cam 				camSetTarget player;
_cam 				attachTo [player, [0.1, 0.75, 1.75] ];
_cam 				camSetFov 0.5;
_cam 				camCommit 0;

buttonSetAction [97603, "[] spawn unity_fnc_iPhone_X_appCamera"];
