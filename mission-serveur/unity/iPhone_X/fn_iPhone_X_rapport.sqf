/*
	File: fn_iPhone_X_rapport.sqf
	Author: Neyzhak

	Description:
	All rapport

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_offense"];
disableSerialization;

_rapport = [_this,0,[],[[]]] call BIS_fnc_param;

if (_rapport isEqualTo [[]]) then {_rapport = [];};
life_rapport = _rapport;

diag_log str life_rapport;

_display = findDisplay 97000;
_ctrlDisplay = (_display displayCtrl 98144);
_ctrlGrp = (_ctrlDisplay controlsGroupCtrl 98145);
_ctrlList = [];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_rapport", []]);

if (!(life_rapport isEqualTo [])) then {
	{
		_namePlayer = _x select 0;
		_nameRapport = _x select 1;
		_phoneNumberRapport = _x select 2;
		_noteRapport = _x select 3;
		_date = _x select 4;
		_hour = _x select 5;
		_tmp = _display ctrlCreate ["iPhone_X_rapport", -1, _ctrlGrp];
		_ctrlList pushBack _tmp;
		_pos = ctrlPosition _tmp;
		_pos set [1, (_pos select 1) + (_pos select 3) * _forEachIndex];
		(_tmp controlsGroupCtrl 98220) ctrlSetText _nameRapport;
		(_tmp controlsGroupCtrl 98221) ctrlSetText format["[%1 - %2]", _date, _hour];
		_tmp ctrlAddEventHandler ["MouseButtonDown",format ["[%1, '%2', '%3', '%4', '%5' , '%6', '%7'] spawn unity_fnc_iPhone_X_appRapport;", _forEachIndex, _namePlayer, _nameRapport, _phoneNumberRapport, _noteRapport, _date, _hour]];
		_tmp ctrlSetPosition _pos;
		_tmp ctrlCommit 0;
	} forEach life_rapport;
};

player setVariable ["iPhone_X_rapport", _ctrlList];
