#include "..\script_macros.hpp"
/*
    File: fn_survival.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    All survival? things merged into one thread.
*/
private ["_fnc_food","_fnc_water","_foodTime","_waterTime","_bp","_walkDis","_lastPos","_curPos"];
_fnc_food = {
	if (player getVariable ["ACE_isUnconscious", false]) exitWith {};
    if (life_hunger < 2) then {
		player setVariable ["ACE_isUnconscious", true, true];
		hint localize "STR_NOTF_EatMSG_Death";
	} else {
        life_hunger 				= life_hunger - 10;
        [] call life_fnc_hudUpdate;
        if (life_hunger < 2) then {
			player setVariable ["ACE_isUnconscious", true, true];
			hint localize "STR_NOTF_EatMSG_Death";
		};
        switch (life_hunger) do {
            case 30: {hint localize "STR_NOTF_EatMSG_1";};
            case 20: {hint localize "STR_NOTF_EatMSG_2";};
            case 10: {
                hint localize "STR_NOTF_EatMSG_3";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {
					player setFatigue 1;
				};
            };
        };
    };
};

_fnc_water = {
    if (life_thirst < 2) then {
		player setVariable ["ACE_isUnconscious", true, true];
		hint localize "STR_NOTF_DrinkMSG_Death";
	} else {
        life_thirst 				= life_thirst - 10;
        [] call life_fnc_hudUpdate;
        if (life_thirst < 2) then {
			player setVariable ["ACE_isUnconscious", true, true];
			hint localize "STR_NOTF_DrinkMSG_Death";
		};
        switch (life_thirst) do  {
            case 30: {hint localize "STR_NOTF_DrinkMSG_1";};
            case 20: {
                hint localize "STR_NOTF_DrinkMSG_2";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
            case 10: {
                hint localize "STR_NOTF_DrinkMSG_3";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
        };
    };
};

//Setup the time-based variables.
_foodTime 							= time;
_waterTime 							= time;
_walkDis 							= 0;
_bp 								= "";
_lastPos 							= visiblePosition player;
_lastPos 							= (_lastPos select 0) + (_lastPos select 1);
_lastState 							= vehicle player;

for "_i" from 0 to 1 step 0 do {
    /* Thirst / Hunger adjustment that is time based */
    if ((time - _waterTime) > 600 && {!life_god}) then {[] call _fnc_water; _waterTime = time;};
    if ((time - _foodTime) > 850 && {!life_god}) then {[] call _fnc_food; _foodTime = time;};

    /* Adjustment of carrying capacity based on backpack changes */
    if (backpack player isEqualTo "") then {
        life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");
        _bp 						= backpack player;
    } else {
        if (!(backpack player isEqualTo "") && {!(backpack player isEqualTo _bp)}) then {
            _bp 					= backpack player;
            life_maxWeight 			= LIFE_SETTINGS(getNumber,"total_maxWeight") + round(FETCH_CONFIG2(getNumber,"CfgVehicles",_bp,"maximumload") / 4);
        };
    };

    /* Check if the player's state changed? */
    if (!(vehicle player isEqualTo _lastState) || {!alive player}) then {
        [] call life_fnc_updateViewDistance;
        _lastState 					= vehicle player;
    };

    /* Check if the weight has changed and the player is carrying to much */
    if (life_carryWeight > life_maxWeight && {!isForcedWalk player} && {!life_god}) then {
        player forceWalk true;
        if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
        hint localize "STR_NOTF_MaxWeight";
    } else {
        if (isForcedWalk player) then {
            player forceWalk false;
        };
    };

    /* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
    if (!alive player || {life_god}) then {_walkDis = 0;} else {
        _curPos 					= visiblePosition player;
        _curPos 					= (_curPos select 0) + (_curPos select 1);

        if (!(_curPos isEqualTo _lastPos) && {(isNull objectParent player)}) then {
            _walkDis 				= _walkDis + 1;
            if (_walkDis isEqualTo 650) then {
                _walkDis 			= 0;
                life_thirst 		= life_thirst - 5;
                life_hunger 		= life_hunger - 5;
                [] call life_fnc_hudUpdate;
            };
        };

        _lastPos 					= visiblePosition player;
        _lastPos 					= (_lastPos select 0) + (_lastPos select 1);
    };

	//Added by Unity
	[] call unity_fnc_iPhone_X_survivalFix;
	[] call unity_fnc_check_ts;
	[] spawn unity_fnc_radioactive;

	// Coma
    if (player getVariable ["ACE_isUnconscious", false] && (life_thirst < 100 || life_hunger < 100)) then {
        life_thirst = 100;
        life_hunger = 100;
        [] call life_fnc_hudUpdate;
    };

    uiSleep 1;
};
