/*
	File: fn_playSound.sqf
	Author: John "Paratus" VanderZwet

	Description:
	Plays a sound, allowing for MP.
*/

if(isServer OR !hasInterface) exitwith {diag_log format["DEBUG PLAYSOUND %1",_this];};
params [
	["_source",ObjNull,[ObjNull]],
	["_sound","",[""]]
];
_source say3D _sound;
