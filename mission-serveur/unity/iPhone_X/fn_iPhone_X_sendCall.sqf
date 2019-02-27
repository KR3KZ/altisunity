/*
    File: iPhone_X_sendCall.sqf
    Author: Neyzhak

    Description:
    Send call

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_phoneNumberContact","_display","_iPhone_X_phoneNumber","_exists"];
disableSerialization;

_phoneNumberContact = _this select 0;

_display = findDisplay 97000;

_iPhone_X_phoneNumber = _display displayCtrl 97661;
_iPhone_X_informations = _display displayCtrl 97670;

_error = false;

if (_phoneNumberContact in ["Numéro", ""]) exitWith {hint "Numéro invalide.";};
if ((count _phoneNumberContact) > 10) exitWith {hint "Numéro invalide.";};
/*if !(isNil "life_phoneNumberPrimary") then {if (life_phoneNumberPrimary isEqualTo _phoneNumberContact) then {_error = true};};
if !(isNil "life_phoneNumberSecondary") then {if (life_phoneNumberSecondary isEqualTo _phoneNumberContact) then {_error = true};};
if !(isNil "life_phoneNumberEnterprise") then {if (life_phoneNumberEnterprise isEqualTo _phoneNumberContact) then {_error = true};};

if (_error) exitWith {hint "Vous ne pouvez pas appeler ce numéro."; _error = false;};*/

[] spawn unity_fnc_iPhone_X_appCall;

//recupération du nom du contact si dans ma liste
_nameContact 			= [life_contacts, _phoneNumberContact] call BIS_fnc_findNestedElement;
if (_nameContact isEqualTo []) then {
	_nameContact = _phoneNumberContact;
}
else
{
	_nameContact = [life_contacts, [(_nameContact select 0), 0]] call BIS_fnc_returnNestedElement;
};

_iPhone_X_phoneNumber ctrlSetText _nameContact;
_iPhone_X_informations ctrlSetText "Numérotation en cours";

player setVariable ["iPhone_X_phoneNumberSendCall", []];
player setVariable ["iPhone_X_phoneNumberReceiveCall", []];
player setVariable ["iPhone_X_callSettings", []];
player setVariable ["iPhone_X_soundCall", []];
player setVariable ["iPhone_X_oldRadio", []];
player setVariable ["iPhone_X_radio", []];
life_phoneCallOn 	= false;
life_phoneInCall 	= false;
_error 				= false;

if ((_phoneNumberContact in life_phoneNumber_company) || (_phoneNumberContact in life_phoneNumber_services)) then
{
	life_phoneCallOn = true;
	player setVariable ["iPhone_X_phoneNumberSendCall", life_phoneNumberActive];
	player setVariable ["iPhone_X_phoneNumberReceiveCall", _phoneNumberContact];
	player setVariable ["iPhone_X_callSettings", ["1", _phoneNumberContact, _nameContact, "Calling Services..."]];
	[player, life_phoneNumberActive, _phoneNumberContact, life_phoneNumberSecondary] remoteExec ["unity_srv_fnc_iPhone_X_callSwitchboard",2];
	_sound = "Land_HelipadEmpty_F" createVehicle position player; _sound attachTo [player, [0, 0, 0]];
	_sound say3D ["sendcall_sound",10,1];
	player setVariable ["iPhone_X_soundCall",_sound];
	ctrlShow [97667,true];
	ctrlShow [97663,true];
	buttonSetAction [97663, "_sound = player getVariable [""iPhone_X_soundCall"",""""]; if !(_sound isEqualTo []) then {deleteVehicle _sound;}; playsound ""endcall_sound""; [] spawn unity_fnc_iPhone_X_endCall; [life_phoneNumberActive] remoteExec [""unity_fnc_iPhone_X_endCallSwitchboard"", west]; [life_phoneNumberActive] remoteExec [""unity_fnc_iPhone_X_endCallSwitchboard"", independent]; [life_phoneNumberActive] remoteExec [""unity_fnc_iPhone_X_endCallSwitchboard"", civilian];"];

}
else
{
	[player] remoteExec ["unity_srv_fnc_iPhone_X_getlistNumber",2];
	waitUntil {!(isNil "iPhone_X_listNumberClient")};
	waitUntil {!(iPhone_X_listNumberClient isEqualTo [])};
	_exists = [iPhone_X_listNumberClient, _phoneNumberContact] call BIS_fnc_findNestedElement;

	if (!(_exists isEqualTo [])) then
	{
		life_phoneCallOn = true;
		player setVariable ["iPhone_X_phoneNumberSendCall", life_phoneNumberActive];
		player setVariable ["iPhone_X_phoneNumberReceiveCall", _phoneNumberContact];
		player setVariable ["iPhone_X_callSettings", ["1", _phoneNumberContact, _nameContact, "Calling ..."]];

		[player, life_phoneNumberActive, _phoneNumberContact] remoteExec ["unity_fnc_iPhone_X_receiveCall", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)];
		_sound = "Land_HelipadEmpty_F" createVehicle position player; _sound attachTo [player, [0, 0, 0]]; _sound say3D ["sendcall_sound",10,1]; player setVariable ["iPhone_X_soundCall",_sound];
		ctrlShow [97667,true];
		ctrlShow [97663,true];
		buttonSetAction [97663, "_sound = player getVariable [""iPhone_X_soundCall"",""""]; if !(_sound isEqualTo []) then {deleteVehicle _sound;}; playsound ""endcall_sound""; [] spawn unity_fnc_iPhone_X_endCall; _phoneNumberContact = player getVariable [""iPhone_X_phoneNumberReceiveCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberContact] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[] remoteExec [""unity_fnc_iPhone_X_endCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
	}
	else {
		sleep 1;
		if (!isNull (findDisplay 97000)) then {[] spawn unity_fnc_iPhone_X_home;}; player say3D ["endcall_sound",10,1]; iPhone_X_listNumberClient = []; _iPhone_X_phoneNumber ctrlSetText ""; _iPhone_X_informations ctrlSetText "";
	};
};
