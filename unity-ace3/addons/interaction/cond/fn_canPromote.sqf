/*
    File: fn_canPromote.sqf
    Author: Youri Litovski

    Description:
    Player can promote another player
*/
params ["_player", "_target"];
_return = false;
//Gestion grade cop
if(playerSide isEqualTo west) then{
	if(_target getVariable ["rankCop",0] < 1) then {
		_return = false;
	} else{
		//On autorise que à partir du grade 4
		if(_player getVariable ["rankCop",0] >= 4) then {
			//On autorise le grade jusqu'au grade inférieur à celui du joueur
			if(_player getVariable ["rankCop",0] > (_target getVariable ["rankCop",0]) + 1 ) then {
				_return = true;
			};
		};
	};
};
//Gestion grade medic
if(playerSide isEqualTo independent) then{
	if(_target getVariable ["rankMedic",0] < 1) then {
		_return = false;
	} else{
		//On autorise que à partir du grade 4
		if(_player getVariable ["rankMedic",0] >= 4) then {
			//On autorise le grade jusqu'au grade inférieur à celui du joueur
			if(_player getVariable ["rankMedic",0] > (_target getVariable ["rankMedic",0]) + 1 ) then {
				_return = true;
			};
		};
	};
};

_return;