#include "..\..\script_macros.hpp"
/*
    File: fn_recProm.sqf
    Author: Youri Litovski

    Description:
    player received promotion
*/
Private["_player","_type","_old_level","_grade","_txt"];
_player = _this select 0;
_type = _this select 1;
_txt = "";
switch (playerSide) do
{
	case west: {
		_old_level = life_coplevel;
		if(_type == "prom") then {
			life_coplevel = _old_level + 1;
			player setVariable ["rankCop",(life_coplevel),true];
			_txt = "Vous avez reçu une promotion !";
		};
		if(_type == "dem") then {
			life_coplevel = _old_level - 1;
			player setVariable ["rankCop",(life_coplevel),true];
			_txt = "Vous avez été rétrogradé !";
		};
		switch ( life_coplevel ) do
		{
			case 1: { _grade = "Recrue"; };
			case 2: { _grade = "Caporal"; };
			case 3: { _grade = "Sergent"; };
			case 4: { _grade = "Major"; };
			case 5: { _grade = "Lieutenant"; };
			case 6: { _grade = "Capitaine"; };
			case 7: { _grade = "Colonel"; };
		};
	};
	case independent:{
		_old_level = life_medicLevel;
		if(_type == "prom") then {
			life_medicLevel = _old_level + 1;
			player setVariable ["rankMedic",(life_medicLevel),true];
			_txt = "Vous avez reçu une promotion !";
		};
		if(_type == "dem") then {
			life_medicLevel = _old_level - 1;
			player setVariable ["rankMedic",(life_medicLevel),true];
			_txt = "Vous avez été rétrogradé.";
		};
		switch ( life_medicLevel ) do
		{
			case 1: { _grade = "Secouriste"; };
			case 2: { _grade = "Responsable"; };
			case 3: { _grade = "Directeur"; };
			case 4: { _grade = "######"; };
			case 5: { _grade = "######"; };
		};
	};
};

hint parseText format ["%1 Vous êtes désormais %2.",_txt,_grade];
[9] call SOCK_fnc_updatePartial;
