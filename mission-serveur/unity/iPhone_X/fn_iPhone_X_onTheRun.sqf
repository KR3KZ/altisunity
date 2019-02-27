/*
	File: fn_iPhone_X_onTheRun.sqf
	Author: Neyzhak

	Description:
	All on the run

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_offense"];
disableSerialization;

_onTheRun = [_this,0,[],[[]]] call BIS_fnc_param;

if (_onTheRun isEqualTo [[]]) then {_onTheRun = [];};
life_onTheRun = _onTheRun;

diag_log str life_onTheRun;

_display = findDisplay 97000;
_ctrlDisplay = (_display displayCtrl 98188);
_ctrlGrp = (_ctrlDisplay controlsGroupCtrl 98189);
_ctrlList = [];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_onTheRun", []]);

if (!(life_onTheRun isEqualTo [])) then {
	{
		_namePlayerOnTheRun = _x select 0;
		_nameOnTheRun = _x select 1;
		_phoneOnTheRun = _x select 2;
		_noteOnTheRun = _x select 3;
		_amende = _x select 4;
		_amende_01 = _amende select 0;
		_amende_02 = _amende select 1;
		_amende_03 = _amende select 2;
		_amende_04 = _amende select 3;
		_valueAmendeTotal = _x select 5;
		_valueAmendeReal = _x select 6;
		_onTheRun = _x select 7;
		_date = _x select 8;
		_hour = _x select 9;
		_amendeList = "";
		if !(_amende_01 isEqualTo "0") then {_amende_01_name = ((life_amende select 0) select 0); _amendeList = format["%1/%2", _amendeList, _amende_01_name]};
		if !(_amende_02 isEqualTo "0") then {_amende_02_name = ((life_amende select 1) select 0); _amendeList = format["%1/%2", _amendeList, _amende_02_name]};
		if !(_amende_03 isEqualTo "0") then {_amende_03_name = ((life_amende select 2) select 0); _amendeList = format["%1/%2", _amendeList, _amende_03_name]};
		if !(_amende_04 isEqualTo "0") then {_amende_04_name = ((life_amende select 3) select 0); _amendeList = format["%1/%2", _amendeList, _amende_04_name]};
		if (_onTheRun isEqualTo "0") then {_onTheRun = "N'EST PAS EN CAVALE"} else {_onTheRun = "EST EN CAVALE"};
		_tmp = _display ctrlCreate ["iPhone_X_onTheRun", -1, _ctrlGrp];
		_ctrlList pushBack _tmp;
		_pos = ctrlPosition _tmp;
		_pos set [1, (_pos select 1) + (_pos select 3) * _forEachIndex];
		(_tmp controlsGroupCtrl 98050) ctrlSetText _nameOnTheRun;
		(_tmp controlsGroupCtrl 98051) ctrlSetText format["[%1 - %2]", _date, _hour];
		_tmp ctrlAddEventHandler ["MouseButtonDown",format ["[%1, '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', '%10', '%11'] spawn unity_fnc_iPhone_X_appOffense;", _forEachIndex, _namePlayerOnTheRun, _nameOnTheRun, _phoneOnTheRun, _noteOnTheRun, _valueAmendeTotal, _valueAmendeReal, _onTheRun, _date, _hour, _amendeList]];
		_tmp ctrlSetPosition _pos;
		_tmp ctrlCommit 0;
	} forEach life_onTheRun;
};

player setVariable ["iPhone_X_onTheRun", _ctrlList];
