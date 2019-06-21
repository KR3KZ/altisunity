/*
    File: iPhone_X_receiveCall.sqf
    Author: Neyzhak

    Description:
    Receive call

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_from","_display","_iPhone_X_phoneNumber","_iPhone_X_unhook_hangup","_exists","_nameContact"];
disableSerialization;

_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_from = [_this,1,"",[""]] call BIS_fnc_param;
_phoneNumberContact = [_this,2,"",[""]] call BIS_fnc_param;
_ownerID = owner _unit;
diag_log format ["unit qui appelle = %1 // numéro qui appelle = %2", name _unit,_from ];
if !(life_phoneNumberActive isEqualTo _phoneNumberContact) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _unit];};
if !(life_phoneOn) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _unit];};
if (life_phoneCallOn) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _unit];};
if (life_phoneInCall) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _unit];};

player setVariable ["iPhone_X_phoneNumberSendCall", []];
player setVariable ["iPhone_X_phoneNumberReceiveCall", []];
player setVariable ["iPhone_X_callSettings", []];
player setVariable ["iPhone_X_soundCall", []];
player setVariable ["iPhone_X_oldRadio", []];
player setVariable ["iPhone_X_radio", []];
life_phoneInCall = false;

[player] remoteExec ["unity_srv_fnc_iPhone_X_getlistNumber",2];

waitUntil {!(isNil "iPhone_X_listNumberClient")};
waitUntil {!(iPhone_X_listNumberClient isEqualTo [])};

life_phoneCallOn = true;

//recupération du nom du contact si dans ma liste
_nameContact = [life_contacts, _from] call BIS_fnc_findNestedElement;
if (_nameContact isEqualTo []) then {
	_nameContact = _from;
}
else
{
	_nameContact = [life_contacts, [(_nameContact select 0), 0]] call BIS_fnc_returnNestedElement;
};

player setVariable ["iPhone_X_phoneNumberSendCall", _from];
player setVariable ["iPhone_X_phoneNumberReceiveCall", life_phoneNumberActive];
player setVariable ["iPhone_X_callSettings", ["2", _from, _nameContact, "Appel entrant"]];

if ((life_settings select 2) isEqualTo 0) then {
	_soundReceive = "receivecall_sound_%1";
	_soundReceive = format[_soundReceive, (life_settings select 1)];
	_sound = "Land_HelipadEmpty_F" createVehicle position player;
	_sound attachTo [player, [0, 0, 0]];
	_sound say3D [_soundReceive,10,1];
	player setVariable ["iPhone_X_soundCall",_sound];
};

//["Appel Entrant", format["%1, essaye de vous joindre.", _nameContact], [0, 0, 0, 1], [1, 1, 0, 1]] spawn Haz_fnc_createNotification;

if (!isNull (findDisplay 97000)) then {[] spawn unity_fnc_iPhone_X_appCall};
