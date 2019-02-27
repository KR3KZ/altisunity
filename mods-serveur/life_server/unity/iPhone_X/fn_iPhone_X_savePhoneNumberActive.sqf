/*
	File: fn_iPhone_X_savePhoneNumberActive.sqf
	Author: Neyzhak

	Description:
	Save phone number active in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_phoneNumberActive","_ownerID","_playerUID","_queryDelete","_queryAdd","_resultAdd"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_phoneNumberActive = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit" || _phoneNumberActive isEqualTo "") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

diag_log "------------- SAVE PHONE NUMBER ACTIVE -------------";
diag_log format ["Phone number active for player : %1", _playerUID];
diag_log format ["Result : %1", _phoneNumberActive];
diag_log "-----------------------------------------";

_query = format ["INSERT INTO iphone_phone_numbers_active (player_id, phone_number_active) VALUES ('%1', '%2')", _playerUID, _phoneNumberActive];
_result = [_query,1] call DB_fnc_asyncCall;

diag_log "------------- SAVE PHONE NUMBER ACTIVE UPDATE -------------";
diag_log format ["Phone number active update for player : %1", _playerUID];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

_phoneNumberActive remoteExec ["unity_fnc_iPhone_X_phoneNumberActive", _ownerID];