/*
	File: fn_iPhone_X_events.sqf
*/
private ["_events"];
_events = [_this,0,[],[[]]] call BIS_fnc_param;

if (_events isEqualTo [[]]) then {_events = [];};
life_events = _events;

diag_log str "Calling Events";
//diag_log str life_contacts;
