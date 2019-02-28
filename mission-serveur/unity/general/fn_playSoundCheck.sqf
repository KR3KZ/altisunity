/*
	File: fn_playSoundCheck.sqf
	Author: John "Paratus" VanderZwet

	Description:
	Plays a sound, allowing for MP.
*/
// if(isServer OR !hasInterface) exitwith {};
private["_targets"];
params [
	["_source",ObjNull,[ObjNull]],
	["_sound","",[""]],
	["_distance",-1,[0]]
];

if(_distance == -1) then {
		_targets = -2;
	} else {
	//_targets = nearestObjects [player, ["Man"], _distance];
	_targets = _source nearObjects ["Man", _distance];
	if (count _targets == 0) exitwith {
		diag_log format["DEBUG PLAYSOUNDCHECK %1 - %2 - %3",_source,_sound,_distance];
	};
};
[_source, _sound] remoteExec ["unity_fnc_playSound",_targets];
