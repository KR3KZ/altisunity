/*
	File: fn_iPhone_X_saveOffense.sqf
	Author: Neyzhak

	Description:
	Save offense in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_uid","_ownerPhoneNumber","_nameContact","_phoneNumberContact","_query"];
_namePlayer = [_this,0,"",[""]] call BIS_fnc_param;
_nameOffense = [_this,1,"",[""]] call BIS_fnc_param;
_phoneNumberOffense = [_this,2,"",[""]] call BIS_fnc_param;
_noteOffense = [_this,3,"",[""]] call BIS_fnc_param;
_valueAmendeTotal = [_this,4,"",[""]] call BIS_fnc_param;
_valueAmendeReal = [_this,5,"",[""]] call BIS_fnc_param;
_onTheRun = [_this,6,[],[[]]] call BIS_fnc_param;
_date = [_this,7,"",[""]] call BIS_fnc_param;
_hour = [_this,8,"",[""]] call BIS_fnc_param;
_amende = [_this,9,[],[[]]] call BIS_fnc_param;

diag_log "------------- SAVE OFFENSE CLIENT 1 --------------";
diag_log format ["Result : %1", _amende];
diag_log "-----------------------------------------";

if (_namePlayer isEqualTo "" || _nameOffense isEqualTo "" || _phoneNumberOffense isEqualTo "" || _valueAmendeTotal isEqualTo "" || _valueAmendeReal isEqualTo "" || _onTheRun isEqualTo [] || _date isEqualTo "" || _hour isEqualTo "" || _amende isEqualTo []) exitWith {};

if (_onTheRun isEqualType []) then {_onTheRun = _onTheRun select 0;};

_query = format ["INSERT INTO iphone_offense (name_player, name_offense, phone_number_offense, note_offense, amende, value_amende_total, value_amende_real, on_the_run, date, hour) VALUES ('%1', '%2', '%3', '""%4""', '%5', '%6', '%7', '%8', '%9', '%10')", _namePlayer, _nameOffense, _phoneNumberOffense, _noteOffense, _amende, _valueAmendeTotal, _valueAmendeReal, _onTheRun, _date, _hour];
[_query,1] call DB_fnc_asyncCall;

diag_log "------------- SAVE OFFENSE CLIENT 2 --------------";
diag_log format ["Result : %1", _query];
diag_log "-----------------------------------------";