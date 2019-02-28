#include "..\..\script_macros.hpp"
/*
    File: fn_knockedOut.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts and monitors the knocked out state.
*/
private "_obj";
params [
    ["_target",objNull,[objNull]],
    ["_who","",[""]]
];

if (isNull _target) exitWith {};
if !(_target isEqualTo player) exitWith {};
if (_who isEqualTo "") exitWith {};
if(dialog) then {closeDialog 0;};

_randsound = floor random 6;
switch (_randsound) do {
    case 0: { _sound = "kick1" };
    case 1: { _sound = "kick2" };
    case 2: { _sound = "kick3" };
    case 3: { _sound = "kick4" };
    case 4: { _sound = "kick5" };
    case 5: { _sound = "kick6" };
    default { _sound = "kick1" };
};

[_target,_sound,10] spawn unity_fnc_playSoundCheck;

 // play appropriate anim
 private "_fnc_playAnim";
 _fnc_playAnim = {
 	if (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "ACE_isLadder") == 1) then {
 		_this action ["LadderOff", nearestObject [position _this, "House"]];
 	};
 	waitUntil {isTouchingGround _this OR underwater _this};
 	waitUntil {!([_this] call ACE_Common_fnc_inTransitionAnim) or !(alive _this)};
 	if !(alive _this) exitWith {};
 	// [_this, "Incapacitated", 1, True] call ACE_Common_fnc_doAnimation;
 	// sleep 2;
 	if(player != vehicle player) exitWith {};
 	if (animationState _this != "Incapacitated") then {
 		[_this, "Incapacitated", 2, True] call ACE_Common_fnc_doAnimation;
 	};
 };

player setVariable ["tf_unable_to_use_radio", true];
player setVariable ["ACE_captives_isSurrendering",true,true];
//titleText[format [localize "STR_Civ_KnockedOut",_who],"PLAIN"];
//player playMoveNow "Incapacitated";
player spawn _fnc_playAnim;
disableUserInput true;

_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
_obj setPosATL ASLTOATL(visiblePositionASL player);

life_isknocked = true;
player attachTo [_obj,[0,0,0]];
sleep 15;
player setVariable ["tf_unable_to_use_radio", false];
player setVariable ["ACE_captives_isSurrendering",false,true];
if(animationState player == "Incapacitated") then {
    player playMoveNow "AmovPpneMstpSrasWrflDnon";
};
player playMoveNow "AmovPpneMstpSrasWrflDnon";
disableUserInput false;
detach player;
deleteVehicle _obj;
life_isknocked = false;
//player setVariable ["robbed",false,true];
