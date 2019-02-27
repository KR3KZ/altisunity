/*
	File: fn_iPhone_X_switchboard.sqf
	Author: Neyzhak

	Description:
	Switchboard

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberContact","_result","_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_fromNum","_toNum","_message","_type","_tmp","_textCtrl","_backgroundCtrl","_posGrp","_posTxt","_textHeight","_posBG","_tmpPos","_diff","_time","_hour","_minute","_formatfromnum","_to","_i"];
disableSerialization;
_result = [_this,0,[],[[]]] call BIS_fnc_param;
_i 			= 0;
if (_result isEqualTo [[]]) then {_result = [];};
life_switchboard = _result;

diag_log str life_switchboard;

_display = findDisplay 97000;
_ctrlDisplay = (_display displayCtrl 98260);
_ctrlGrp = (_ctrlDisplay controlsGroupCtrl 98261);
_ctrlList = [];

diag_log "------------- SB -------------";
diag_log format ["Result : %1", life_switchboard];
diag_log "-----------------------------------------";

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_switchboardClient", []]);


reverse life_switchboard;
if (!(life_switchboard isEqualTo [])) then {
	{
		_from 		= _x select 0;
		_fromNum 	= _x select 1;
		_time 		= _x select 2;
		_to 			= _x select 3;

		if (_to == life_phoneNumberEnterprise) then {
				_hour 		= _time select 3;
				_minute		= _time select 4;

				_tmp 			= _display ctrlCreate ["iPhone_X_switchboard", -1, _ctrlGrp];
				_ctrlList pushBack _tmp;
				_pos 			= ctrlPosition _tmp;
				_pos set [1, (_pos select 1) + (_pos select 3) * _i];

				//_formatfromnum 		= format["<t color='#000000'>%1</t><br></br><t color='#551a8b' size='0.8' align='right'>%2:%3</t>",_fromNum,_hour,_time];
				//_textCtrl 				= (_tmp controlsGroupCtrl 98056);
				//_textCtrl ctrlSetStructuredText parseText _formatfromnum;
				//_textCtrl ctrlAddEventHandler ["MouseButtonDown",format ["[%1, '%2', '%3', '%4'] spawn unity_fnc_iPhone_X_receiveCallSwitchboard;", _forEachIndex, _from, _fromNum, life_phoneNumberActive]];
				//_textCtrl ctrlSetPosition _pos;
				//_textCtrl ctrlCommit 0;

				(_tmp controlsGroupCtrl 98056) ctrlSetText _fromNum;
				_tmp ctrlAddEventHandler ["MouseButtonDown",format ["[%1, '%2', '%3', '%4'] spawn unity_fnc_iPhone_X_receiveCallSwitchboard;", _forEachIndex, _from, _fromNum, life_phoneNumberActive]];
				_tmp ctrlSetPosition _pos;
				_tmp ctrlCommit 0;
				_i = _i + 1;
		};
	} forEach life_switchboard;
};

player setVariable ["iPhone_X_switchboardClient", _ctrlList];
