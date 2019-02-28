/*
    File: iPhone_X_endCall.sqf
    Author: Neyzhak

    Description:
    End call

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_type","_display","_iPhone_X_phoneNumber","_oldRadio"];
disableSerialization;

_display 								= findDisplay 97000;

_iPhone_X_phoneNumber 					= _display displayCtrl 97661;
_iPhone_X_informations 					= _display displayCtrl 97670;

_sound 									= player getVariable ["iPhone_X_soundCall",""];

if !(_sound isEqualTo []) then {deleteVehicle _sound;};

if (life_phoneInCall) then {
	_info = "Appel terminé";
	[_info] call TFAR_fnc_oniPhoneXTangentReleased;
	_radio = player getVariable ["iPhone_X_radio",""];
	_oldRadio = player getVariable ["myRadio",""];
	player unlinkItem _radio;
	player removeItem _radio;
	sleep 2;
	if (typeName _oldRadio == "STRING") then {
		player linkItem _oldRadio;
	};
};

_iPhone_X_phoneNumber 					ctrlSetText "";
_iPhone_X_informations 					ctrlSetText "";
iPhone_X_listNumberClient 				= [];
player setVariable ["iPhone_X_phoneNumberSendCall", []];
player setVariable ["iPhone_X_phoneNumberReceiveCall", []];
player setVariable ["iPhone_X_callSettings", []];
player setVariable ["iPhone_X_soundCall", []];
player setVariable ["iPhone_X_oldRadio", []];
player setVariable ["iPhone_X_radio", []];
life_phoneCallOn 						= false;
life_phoneInCall 						= false;

if (!isNull (findDisplay 97000)) then {[] spawn unity_fnc_iPhone_X_home;};
