/*
	File: fn_iPhone_X_saveRapport.sqf
	Author: Neyzhak

	Description:
	Save rapport in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_uid","_ownerPhoneNumber","_nameContact","_phoneNumberContact","_query"];
_namePlayer = [_this,0,"",[""]] call BIS_fnc_param;
_nameRapport = [_this,1,"",[""]] call BIS_fnc_param;
_phoneNumberRapport = [_this,2,"",[""]] call BIS_fnc_param;
_noteRapport = [_this,3,"",[""]] call BIS_fnc_param;
_date = [_this,4,"",[""]] call BIS_fnc_param;
_hour = [_this,5,"",[""]] call BIS_fnc_param;

diag_log "------------- SAVE RAPPORT 1 --------------";
diag_log format ["Result : %1", _amende];
diag_log "-----------------------------------------";

if (_namePlayer isEqualTo "" || _nameRapport isEqualTo "" || _phoneNumberRapport isEqualTo "" || _date isEqualTo "" || _hour isEqualTo "") exitWith {};

_query = format ["INSERT INTO iphone_rapport (name_player, name_rapport, phone_number_rapport, note_rapport, date, hour) VALUES ('%1', '%2', '%3', '""%4""', '%5', '%6')", _namePlayer, _nameRapport, _phoneNumberRapport, _noteRapport, _date, _hour];
[_query,1] call DB_fnc_asyncCall;

diag_log "------------- SAVE RAPPORT 2 --------------";
diag_log format ["Result : %1", _query];
diag_log "-----------------------------------------";