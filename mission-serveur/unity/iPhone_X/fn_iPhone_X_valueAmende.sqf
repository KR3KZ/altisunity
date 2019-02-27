/*
	File: fn_iPhone_X_valueAmende.sqf
	Author: Neyzhak

	Description:
	Value amende

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_valueAmende"];
_valueAmende = [_this,0,[],[[]]] call BIS_fnc_param;

if (_valueAmende isEqualTo [[]]) then {_valueAmende = [];};
life_valueAmende = _valueAmende;

diag_log str life_valueAmende;