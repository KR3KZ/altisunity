private ["_radio"];

_info = _this select 0;

if ((TF_tangent_iPhone_X_pressed) and {alive TFAR_currentUnit}) then {
	_radio = call TFAR_fnc_activeSwRadio;
	
	["OnBeforeTangent", TFAR_currentUnit, [TFAR_currentUnit, _radio, 0, false, false]] call TFAR_fnc_fireEventHandlers;
	
	[format[format ["%1", _info], (_radio call TFAR_fnc_getSwChannel) + 1, call TFAR_fnc_currentSWFrequency],
	format["TANGENT	RELEASED	%1%2	%3	%4",call TFAR_fnc_currentSWFrequency, (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwRadioCode, getNumber(configFile >> "CfgWeapons" >> _radio >> "tf_range") * (call TFAR_fnc_getTransmittingDistanceMultiplicator), getText(configFile >> "CfgWeapons" >> _radio >> "tf_subtype")]
	] call TFAR_fnc_ProcessTangent;
	
	TF_tangent_iPhone_X_pressed = false;
	//						unit, radio, radioType, additional, buttonDown
	["OnTangent", TFAR_currentUnit, [TFAR_currentUnit, _radio, 0, false, false]] call TFAR_fnc_fireEventHandlers;
};
true