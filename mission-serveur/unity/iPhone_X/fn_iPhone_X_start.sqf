/*
    File: fn_iPhone_X_start.sqf
    Author: Neyzhak

    Description:
    Set settings for turn ON iPhone_X

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_background_iPhone_X_base","_background_iPhone_X_background","_background_iPhone_X_shadow","_progressTime","_startTime","_endTime","_progress","_background_iPhone_X_bottom","_renderSurface","_cam","_iPhone_X_text_faceID","_goggles"];
disableSerialization;

ctrlShow [97005, false];
noesckey = (findDisplay 97000) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];

_display = findDisplay 97000;

_background_iPhone_X_base = _display displayCtrl 97001;
_background_iPhone_X_background = _display displayCtrl 97002;
_background_iPhone_X_shadow = _display displayCtrl 97114;

_background_iPhone_X_base ctrlSetText "nolosharp_textures\phone\iPhone_X_base.paa";
_background_iPhone_X_background ctrlSetText "nolosharp_textures\phone\iPhone_X_background_ON.paa";
_background_iPhone_X_shadow ctrlSetText "nolosharp_textures\phone\iPhone_X_background_OFF.paa";

ctrlShow [97114, true];

_progressTime = 3;
_startTime = time;
_endTime = _startTime + _progressTime;

playsound "startup_iphone";

while {time <= _endTime} do {
		_progress = linearConversion[_startTime, _endTime, time, 1, 0];
		_background_iPhone_X_shadow ctrlSetTextColor [0,0,0,_progress];
		_background_iPhone_X_shadow ctrlCommit 0;
	};

ctrlShow [97114, false];

_background_iPhone_X_shadow ctrlSetTextColor [0,0,0,1];
_background_iPhone_X_shadow ctrlCommit 0;

_background_iPhone_X_bottom = _display displayCtrl 97004;
_background_iPhone_X_bottom ctrlSetText "nolosharp_textures\phone\iPhone_X_bottom.paa";

ctrlShow [97004, true];
ctrlShow [97116, true];

_renderSurface = _display displayCtrl 97216;
_renderSurface ctrlSetText "#(argb,512,512,1)r2t(faceID,1)";
_cam = "camera" camCreate (getPos player);
_cam cameraEffect ["Internal", "Back", "faceID"];
_cam camSetTarget player;
_cam attachTo [player, [0.1, 0.75, 1.5] ];
_cam camSetFov 0.325;
_cam camCommit 0;

_iPhone_X_text_faceID = _display displayCtrl 97217;

_progressTime = 2;
_startTime = time;
_endTime = _startTime + _progressTime;

while {time <= _endTime} do {
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'>Face Identification</t>"];
	sleep 0.2;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'></t>"];
	sleep 0.2;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'>Face Identification</t>"];
	sleep 0.2;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'></t>"];
	sleep 0.2;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'>Face Identification</t>"];
	sleep 0.2;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FF0000' align='center'>@('_')@</t>"];
	sleep 0.4;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#00FF00' align='center'>d( o_0 )b</t>"];
	sleep 0.4;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#0000FF' align='center'>(•_•)</t>"];
	sleep 0.4;
};

_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'>%1</t>", name player];

/*_goggles = goggles player;

if (_goggles != "") exitWith
{
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'>- IDENTIFICATION -</t>"];
	sleep 0.5;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'>- IMPOSSIBLE -</t>"];
	sleep 1.5;
	_iPhone_X_text_faceID ctrlSetStructuredText parseText format["<t color='#FFFFFF' align='center'>Retirez vos lunettes</t>"];
	sleep 1.5;
	closeDialog 0;
};*/



sleep 1.5;

ctrlShow [97004, false];
ctrlShow [97116, false];
ctrlShow [97005, true];
(findDisplay 97000) displayRemoveEventHandler ["KeyDown", noesckey];

[] spawn unity_fnc_iPhone_X_settings;

life_phoneOn = true;
