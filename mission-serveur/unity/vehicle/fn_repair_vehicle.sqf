#include "..\..\script_macros.hpp"
/*
    File: fn_repairTruck.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main functionality for toolkits, to be revised in later version.
*/

_veh 				= _this select 0;
_PartN 				= (_this select 3) select 0;
_PartName 			= (_this select 3) select 1;
_PartNumber 		= (_this select 3) select 2;
_HitP 				= _veh getHitPointDamage _PartN;
_repar 				= 1;
_restrict 			= [
	"hitengine",
	"hitengine1",
	"hitengine2",
	"hitengine3",
	"hithrotor",
	"hitvrotor",
	"hitfuel",
	"hitfuel2",
	"hithull",
	"hitbody",
	"hitavionics",
	"hitrglass",
	"hitlglass",
	"hitglass1",
	"hitglass2",
	"hitglass3",
	"hitglass4",
	"hitglass5",
	"hitglass6"
];

if(_HitP == 0) exitwith {};
if(isNull _veh) exitwith {};
if!((_veh isKindOf "LandVehicle") OR (_veh isKindOf "Ship") OR (_veh isKindOf "Air")) exitwith {};
if(life_action_inUse) exitWith {};
life_interrupted = false;
if (_PartN in _restrict) then {
	_mecano = [];
	{
		if (alive _x && (side _x == independent || LICENSE_VALUE("dep","civ"))) then {
			_mecano pushBack _x;
		};
	} forEach playableUnits;


	if ("ToolKit" in (items player)) then {
		if (side player == independent || LICENSE_VALUE("dep","civ")) then {
			_repar = 0;
		} else {
			_pompe = count (nearestObjects[position _veh,["Land_fs_feed_F"],10]);
			if (_HitP > 0.5) then {
				if (count _mecano > 2) then {
					_action = [
							format["Vous êtes sur le point de réparer %1 <br/> Cette réparation est difficile et risquée. Elle peut endommager vos outils. Contactez un dépanneur si vous avez un doute",_PartName],
							format["Réparation de %1",_PartName],
							"Oui",
							"Non"
					        ] call BIS_fnc_guiMessage;
					_repar = 0.5;
				} else {
					if (_pompe>0) then {
						hint "Pas de problème, le mécanicien de la station va vous aider";
						_repar = 0;
					} else {
						_action = [
								format["Vous êtes sur le point de réparer %1 <br/> Cette réparation est difficile et risquée. Elle peut endommager vos outils. Rendez-vous à la station service la plus proche si vous avez un doute.",_PartName],
								format["Réparation de %1",_PartName],
								"Oui",
								"Non"
							] call BIS_fnc_guiMessage;
						_repar = 0.5;
					};
				};
			} else {
				if (count _mecano > 2) then {
					if (_pompe>0) then {
						hint "Vous n'avez pas les compétences pour réparer d'avantage cette pièce. La station service est fermée. Contactez un dépanneur.";
					} else {
						hint "Vous n'avez pas les compétences pour réparer d'avantage cette pièce. Contactez un dépanneur.";
					};
				} else {
					if(_pompe>0) then {
						hint "Pas de problème, le mécanicien de la station va vous aider";
						_repar = 0;
					} else {
						hint "Vous n'avez pas les compétences pour réparer d'avantage cette pièce. Rendez-vous à la station service la plus proche.";
					};
				};
			};
		};
	} else {
		if(count _mecano > 2) then {
			hint "Vous devez avoir une trousse à outils pour réparer cette pièce. Pensez à appeller un dépanneur si vous n'êtes pas doué en mécanique.";
		} else {
			hint "Vous devez avoir une trousse à outils pour réparer cette pièce. ";
		};
	};
} else {
	_repar = 0;
};

if (_repar != 1) then {
	life_action_inUse = true;
	_displayName 		= getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "displayName");
	_upp 				= format[localize "STR_NOTF_Repairing",_displayName];
	//Setup our progress bar.
	disableSerialization;
	5 cutRsc ["life_progress","PLAIN"];
	_ui 				= uiNameSpace getVariable "life_progress";
	_progress 			= _ui displayCtrl 38201;
	_pgText 			= _ui displayCtrl 38202;
	_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0.01;

	// play appropriate anim
	_fnc_playAnim = {
		if (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "ACE_isLadder") == 1) then {
			_this action ["LadderOff", nearestObject [position _this, "House"]];
		};
		waitUntil {isTouchingGround _this OR underwater _this};
		waitUntil {!([_this] call ACE_Common_fnc_inTransitionAnim) or !(alive _this)};
		if !(alive _this) exitWith {};
		[_this, "InBaseMoves_repairVehicleKnl", 1, True] call ACE_Common_fnc_doAnimation;
		sleep 0.15;
		if (player != vehicle player) exitWith {};
		if (animationState _this != "InBaseMoves_repairVehicleKnl") then {
			[_this, "InBaseMoves_repairVehicleKnl", 2, True] call ACE_Common_fnc_doAnimation;
		};
	};

	playSound "action_repair";
	while{true} do
	{
		if(animationState player != "InBaseMoves_repairVehicleKnl") then {
			player spawn _fnc_playAnim;
		};
		sleep 0.27;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if (_cP >= 1) exitWith {};
		if (!alive player) exitWith {};
		if (player != vehicle player) exitWith {};
		if (life_interrupted) exitWith {};
	};

	life_action_inUse = false;
	5 cutText ["","PLAIN"];
	player playActionNow "stop";
	if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
	if (player != vehicle player) exitWith {titleText[localize "STR_NOTF_ActionInVehicle","PLAIN"];};
	if ((playerSide != west) && !(player getVariable["life_dep",false]) && (_repar != 0)) then {
		if ((random 1) > 0.33) then {
			player removeItem "ToolKit";
		};
	};

	if (!local _veh) then {
		[_veh,_PartNumber,_repar] remoteExecCall ["life_fnc_setHitPointDamage",_veh];
	}
	else {
		_veh setHitIndex [_PartNumber, _repar];
	};
};
