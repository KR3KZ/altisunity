/*
    File: iPhone_X_startCall.sqf
    Author: Neyzhak

    Description:
    Start call

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_phoneNumber","_oldRadio","_phoneNumberContact","_unit"];
disableSerialization;
_unit									= [_this,0,objNull,[objNull]] call BIS_fnc_param;
if !(life_phoneCallOn) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _unit];};

life_phoneInCall 				= true;

_display 								= findDisplay 97000;
_iPhone_X_informations 	= _display displayCtrl 97670;

_PID										= getPlayerUID player;
_sound 									= player getVariable ["iPhone_X_soundCall",""]; if !(_sound isEqualTo []) then {deleteVehicle _sound;};
_phoneNumberSendCall 		= player getVariable ["iPhone_X_phoneNumberSendCall",""];
_phoneNumberContact 		= player getVariable ["iPhone_X_phoneNumberReceiveCall",""];


_oldRadio = nil;
_oldRadio = call TFAR_fnc_activeSwPhone;
waitUntil {!(isNil "_oldRadio")};

diag_log format["APPEL PRIS SWITCH  PID : %1, oldRadio : %2 › %3 vers %4", _PID, _oldRadio,_phoneNumberSendCall,_phoneNumberSendCall];

if !(_oldRadio isEqualTo false) then {
	player setVariable ["iPhone_X_oldRadio", _oldRadio];
	player unlinkItem _oldRadio;
	player removeItem _oldRadio;
} else {
	_oldRadio = [];
	player setVariable ["iPhone_X_oldRadio", _oldRadio];
};

_radio = format["tf_iPhone_X_%1", life_TFARNumber];
player linkItem _radio;

[_radio, format["%1", _phoneNumberSendCall]] call TFAR_fnc_setSwFrequency;

player setVariable ["iPhone_X_radio", _radio];
_ctrl = [97675,97676,97677,97678];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97667,true]; ctrlShow [97663,true]; ctrlShow [97668,true]; ctrlShow [97664,true]; ctrlShow [97669,true]; ctrlShow [97665,true]; ctrlShow [97671,true]; ctrlShow [97672,true]; ctrlShow [97673,true]; ctrlShow [97674,true];

if (life_phoneNumberActive isEqualTo _phoneNumberSendCall) then {
	buttonSetAction [97663, "[] spawn unity_fnc_iPhone_X_endCall; _phoneNumberContact = player getVariable [""iPhone_X_phoneNumberReceiveCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberContact] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[] remoteExec [""unity_fnc_iPhone_X_endCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
} else {
	buttonSetAction [97663, "[] spawn unity_fnc_iPhone_X_endCall; _phoneNumberSendCall = player getVariable [""iPhone_X_phoneNumberSendCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberSendCall] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[] remoteExec [""unity_fnc_iPhone_X_endCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
};

//recupération du nom du contact si dans ma liste
_nameContact 			= [life_contacts, _phoneNumberContact] call BIS_fnc_findNestedElement;
if (_nameContact isEqualTo []) then {
	_nameContact = _phoneNumberContact;
}
else
{
	_nameContact = [life_contacts, [(_nameContact select 0), 0]] call BIS_fnc_returnNestedElement;
};

_info = "Appel en cours...";

[_info] call TFAR_fnc_oniPhoneXTangentPressed;

_hour = 0;
_minute = 0;
_second = 0;

while {life_phoneInCall} do
{
	_time = format["%1:%2:%3", if (_hour < 10) then {"0" + (str _hour)} else {_hour}, if (_minute < 10) then {"0" + (str _minute)} else {_minute}, if (_second < 10) then {"0" + (str _second)} else {_second}];
	_second = _second + 1;
	if (_second >= 60) then {_second = 0; _minute = _minute + 1};
	if (_minute >= 60) then {_minute = 0; _hour = _hour + 1};
	_iPhone_X_informations ctrlSetText _time;
	player setVariable ["iPhone_X_callSettings", ["3", _phoneNumberContact, _nameContact, _time, _hour, _minute, _second]];
	sleep 1;
};
