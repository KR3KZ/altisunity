/*
    File: iPhone_X_receiveCallSwitchboard.sqf
    Author: Neyzhak

    Description:
    Receive call switchboard

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_from","_display","_iPhone_X_phoneNumber","_iPhone_X_unhook_hangup","_exists"];
disableSerialization;

_index = _this select 0;
_from = _this select 1;
_fromNum = _this select 2;
_phoneNumberContact = _this select 3;

if !(life_phoneNumberActive isEqualTo _phoneNumberContact) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _from];};
if !(life_phoneOn) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _from];};

if (life_phoneCallOn) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _from];};
if (life_phoneInCall) exitWith {[] remoteExec ["unity_fnc_iPhone_X_endCall", _from];};

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

//recupération du nom du contact si dans ma liste
_nameContact = [life_contacts, _fromNum] call BIS_fnc_findNestedElement;
if (_nameContact isEqualTo []) then {
	_nameContact = _fromNum;
}
else
{
	_nameContact = [life_contacts, [(_nameContact select 0), 0]] call BIS_fnc_returnNestedElement;
};

_exists = [life_switchboard, _fromNum] call BIS_fnc_findNestedElement;
if (!(_exists isEqualTo [])) then {
	//Si il existe je le degage le plus vite possible
	life_phoneCallOn = true;

	life_switchboard = ([life_switchboard, (_exists select 0)] call BIS_fnc_removeIndex);
	if ((playerSide == west) AND (life_coplevel > 0)) then {[life_switchboard] remoteExec ["unity_srv_fnc_iPhone_X_setSwitchboardPMC",2];};
	if ((playerSide == independent) AND (life_mediclevel > 0)) then {[life_switchboard] remoteExec ["unity_srv_fnc_iPhone_X_setSwitchboardIDAP",2];};
	if !(isNil "life_phoneNumberEnterprise") then
	{
		if ((life_phoneNumberEnterprise in life_phoneNumber_company || life_phoneNumberEnterprise in life_phoneNumber_services ) &&  playerSide == civilian) then {[life_switchboard] remoteExec ["unity_srv_fnc_iPhone_X_setSwitchboardCOMPANY",2];};
	};



	player setVariable ["iPhone_X_phoneNumberSendCall", _fromNum];
	player setVariable ["iPhone_X_phoneNumberReceiveCall", life_phoneNumberActive];
	player setVariable ["iPhone_X_callSettings", ["2", _fromNum, _nameContact, "Reception d'appel"]];

	if (!isNull (findDisplay 97000)) then {
		[] spawn unity_fnc_iPhone_X_appCall
	};
} else {
		[] spawn unity_fnc_iPhone_X_appSwitchboard;
};
