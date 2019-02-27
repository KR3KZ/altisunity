/*
	File: fn_iPhone_X_appEventAlert.sqf
	Author: Neyzhak

	Description:
	Switchboard receive

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_title","_message"];
disableSerialization;

_title 		= _this select 0;
_message 	= _this select 1;
[format[" %1",_title],format["%1", _message],[0.368, 0.368, 0.368, 1]] call life_fnc_showNotification;

if ((life_settings select 2) isEqualTo 0) then
{
	playsound "emergency_sound";
};
