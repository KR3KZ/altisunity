private ["_nbMedics"];

_nbMedics = independent countSide playableUnits;

if (_nbMedics > 0) then {
	_mnt = 30000 * _nbMedics;
	_txt = format ["Des médecins sont en route, la ré-apparition vous coûtera %1 €, êtes-vous sûr ?", _mnt];
	if(!([_txt, "Avertissement", "Oui", "Non"] call BIS_fnc_guiMessage)) exitWith {};
	if (BANK < _mnt) exitWith {
	    ["Banque","Vous n'avez pas assez d'argent.",[0.607, 1, 0.341,1]] call life_fnc_showNotification;
	};
	BANK = BANK - _mnt;
	["Banque",format ["Vous avez payé %1 pour ré-apparaître.", _mnt],[0.607, 1, 0.341,1]] call life_fnc_showNotification;
	// TODO: changer ici pour prevenir les médics que le joueur a respawn [player,profileName,"COMA"] remoteExecCall ["life_fnc_medicRequest",independent];
};

closeDialog 0;
life_respawned = true;
time_respawn = 0;
player setDamage 1;
[] call life_fnc_spawnMenu;
