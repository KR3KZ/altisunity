/*
	File: fn_iPhone_X_silent.sqf
	Author: Neyzhak

	Description:
	Silent ON/OFF

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display"];
disableSerialization;

_display = findDisplay 97000;

_iphone_X_silent = _display displayCtrl 97717;

if ((life_settings select 2) isEqualTo 0) then {
	[player, [1]] remoteExec ["unity_srv_fnc_iPhone_X_saveSilent",2];
	_iphone_X_silent ctrlSetText "nolosharp_images\x_phone\iPhone_X_icon_silentON.paa";
} else {
	[player, [0]] remoteExec ["unity_srv_fnc_iPhone_X_saveSilent",2];
	_iphone_X_silent ctrlSetText "nolosharp_images\x_phone\iPhone_X_icon_silentOFF.paa";
};
