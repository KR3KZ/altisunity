/*
	File: fn_iPhone_X_amende.sqf
	Author: Neyzhak

	Description:
	Amende

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_amende"];
_amende 		= [_this,0,[],[[]]] call BIS_fnc_param;

if (_amende isEqualTo [[]]) then {_amende = [];};
life_amende 	= _amende;

diag_log str life_amende;
