/*
	File: fn_iPhone_X_switchboardSend.sqf
	Author: Neyzhak

	Description:
	Switchboard send

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberContact","_result","_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_fromNum","_toNum","_message","_type","_tmp","_textCtrl","_backgroundCtrl","_posGrp","_posTxt","_textHeight","_posBG","_tmpPos","_diff"];
disableSerialization;
_result = [_this,0,[],[[]]] call BIS_fnc_param;

if (_result isEqualTo [[]]) then {_result = [];};
life_switchboard = _result;

diag_log str life_switchboard;
