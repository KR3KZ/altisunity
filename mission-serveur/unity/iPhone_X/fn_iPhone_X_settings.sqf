/*
    File: fn_iPhone_X_settings.sqf
    Author: Neyzhak

    Description:
    Set settings for iPhone_X ON/OFF

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_background_iPhone_X_base","_background_iPhone_X_background","_background_iPhone_X_shadow_home","_background_iPhone_X_bottom","_iPhone_X_SIM_active","_iPhone_X_nameContact_notifications","_iPhone_X_SMS_notifications","_iPhone_X_time_notifications","_wallpaperActive","_lastSMSFrom","_lastSMS","_lastSMSTime"];
disableSerialization;

_display = findDisplay 97000;

_background_iPhone_X_base 				= _display displayCtrl 97001;
_background_iPhone_X_background 		= _display displayCtrl 97002;
_background_iPhone_X_shadow_home 		= _display displayCtrl 97115;
_background_iPhone_X_bottom 			= _display displayCtrl 97004;
_iPhone_X_SIM_active 					= _display displayCtrl 97800;
_iPhone_X_nameContact_notifications 	= _display displayCtrl 97802;
_iPhone_X_SMS_notifications 			= _display displayCtrl 97803;
_iPhone_X_time_notifications 			= _display displayCtrl 97804;
_iPhone_X_snowflake_01 					= _display displayCtrl 99001;

_wallpaperActive 						= "unity_iPhone_X\iPhone_X_background_%1.paa";

_lastSMS = player getVariable ["iPhone_X_lastSMS", []];

_background_iPhone_X_base ctrlSetText "unity_iPhone_X\iPhone_X_base.paa";
_background_iPhone_X_bottom ctrlSetText "unity_iPhone_X\iPhone_X_bottom.paa";

if (life_phoneOn && life_phoneCallOn) exitWith {[] spawn unity_fnc_iPhone_X_appCall; [] spawn unity_fnc_iPhone_X_clock;};

if !(life_phoneOn) then {
	_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_background_OFF.paa";
} else {

	_myRadio = call TFAR_fnc_activeSwPhone;
	if (typeName _myRadio == "STRING") then {
		if ((_myRadio find "tf_iPhone_") == 0) then {
			_realRadio = player getVariable ["myRadio",""];
			player unlinkItem _myRadio;
			player removeItem _myRadio;
			player linkItem _realRadio;
		};
	};


	_background_iPhone_X_background ctrlSetText format[_wallpaperActive, (life_settings select 0)];
	//_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_background_noel.paa";
	_background_iPhone_X_shadow_home ctrlSetText "unity_iPhone_X\iPhone_X_background_OFF.paa";
	ctrlShow [97115, true];
	ctrlShow [97501, true];
	ctrlShow [97800, true];

if !(isNil "life_phoneNumberActive") then {_iPhone_X_SIM_active ctrlSetText format["%1", life_phoneNumberActive];};

if !(isNil "_lastSMS") then
{
	if !(_lastSMS isEqualTo []) then {ctrlShow [97005, false]; ctrlShow [97801, true]; ctrlShow [97805, true]; ctrlShow [97005, true]; _lastSMSFrom = (_lastSMS select 0); _lastSMSFrom = toUpper _lastSMSFrom; _iPhone_X_nameContact_notifications ctrlSetText format["%1", _lastSMSFrom]; _iPhone_X_SMS_notifications ctrlSetText format["%1", (_lastSMS select 1)]; _iPhone_X_time_notifications ctrlSetText format["Reçu à : %1", (_lastSMS select 2)];};
};

[] spawn unity_fnc_iPhone_X_clock;

_progress1 = safeZoneX + safeZoneW * 0.805468754;
_progress2 = safeZoneY + safeZoneH * 0.34541667;

	/*//Snowflake
	while {true} do {
		if (isNull (findDisplay 97000)) exitWith {};
		ctrlShow [99001,true];
		_progress1 = _progress1 - 0.002;
		_progress2 = _progress2 + 0.002;
		_iPhone_X_snowflake_01 ctrlSetPosition [_progress1, _progress2, safeZoneW * 0.02246094, safeZoneH * 0.03993056];
		_iPhone_X_snowflake_01 ctrlCommit 0;
		sleep 0.002;
		if (_progress1 <= (safeZoneX + safeZoneW * 0.708203126)) then {ctrlShow [99001,false]; _progress1 = safeZoneX + safeZoneW * 0.805468754; sleep 3; ctrlShow [99001,true];};
		if (_progress2 >= (safeZoneY + safeZoneH * 0.79708056)) then {ctrlShow [99001,false]; _progress1 = safeZoneX + safeZoneW * 0.805468754; _progress2 = safeZoneY + safeZoneH * 0.34541667; sleep 3; ctrlShow [99001,true]};
	};*/
};
