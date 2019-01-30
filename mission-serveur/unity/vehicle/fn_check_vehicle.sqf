/*
	File: fn_repairTruckCheck.sqf
	Author: Havena

	Description:
	Check repair.
*/

_vehicle = param [0,ObjNull,[ObjNull]];
if(isNull _vehicle) exitWith {}; //Null was passed?
if !((_vehicle isKindOf "LandVehicle") || (_vehicle isKindOf "Ship") || (_vehicle isKindOf "Air")) exitWith {};
if(life_action_inUse) exitWith {};

life_action_inUse = true;
_displayName = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
_upp = format["Inspection de %1",_displayName];

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
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
	[_this, "AinvPknlMstpSnonWnonDnon_medic_1", 1, True] call ACE_Common_fnc_doAnimation;
	sleep 0.15;
	if(player != vehicle player) exitWith {};
	if (animationState _this != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[_this, "AinvPknlMstpSnonWnonDnon_medic_1", 2, True] call ACE_Common_fnc_doAnimation;
	};
};

while {true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		player spawn _fnc_playAnim;
	};
	sleep 0.27;
	_cP = _cP + 0.03;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
};

life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";
if (life_interrupted) exitWith {
	life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;
};

if (player != vehicle player) exitWith {
	titleText[localize "STR_NOTF_ActionInVehicle","PLAIN"];
};

_allHitpdam = getAllHitPointsDamage _vehicle;
_veh_actions = [];
_counthitpart = count (_allHitpdam select 1);

for "_i" from 0 to _counthitpart-1 do {
	_PartN = (_allHitpdam select 0) select _i;
	_PartName = (_allHitpdam select 1) select _i;
	_HitP = (_allHitpdam select 2) select _i;
	_veh_actions pushback (_vehicle addAction [ format["<t color='#00D600'>Réparer %1 - (%2)</t>", _PartName,_i], unity_fnc_repair_vehicle, [_PartN,_PartName,_i], 0, false, true, "", format["!life_action_inUse && (_target getHitIndex %1) > 0 && (_target getHitIndex %1) <= 0.2",_i] ]);
	_veh_actions pushback (_vehicle addAction [ format["<t color='#FFFF33'>Réparer %1 - (%2)</t>", _PartName,_i], unity_fnc_repair_vehicle, [_PartN,_PartName,_i], 0, false, true, "", format["!life_action_inUse && (_target getHitIndex %1) > 0.2 && (_target getHitIndex %1) <= 0.5",_i] ]);
	_veh_actions pushback (_vehicle addAction [ format["<t color='#FF0000'>Réparer %1 - (%2)</t>", _PartName,_i], unity_fnc_repair_vehicle, [_PartN,_PartName,_i], 0, false, true, "", format["!life_action_inUse && (_target getHitIndex %1) > 0.5",_i] ]);
};

[_vehicle,_veh_actions] spawn {
	_veh = (_this select 0);
	sleep (5*60);
	if (isNil "_veh" || isNull _veh) exitwith {};
	{
		(_this select 0) removeAction _x;
	} foreach (_this select 1);
};
