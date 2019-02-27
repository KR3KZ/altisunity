/*
	File: fn_iPhone_X_TFARNumber.sqf
	Author: Neyzhak

	Description:
	TFAR number

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_TFARNumber"];
_TFARNumber = [_this,0,[],[[]]] call BIS_fnc_param;

if (_TFARNumber isEqualTo [[]]) then {_TFARNumber = [];};

_TFARNumber = _TFARNumber select 0;

life_TFARNumber = _TFARNumber;

diag_log str life_TFARNumber;