/*
	File: fn_iPhone_X_sendSMS.sqf
	Author: Neyzhak

	Description:
	Save SMS on DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_from","_to","_message","_query","_exists","_position","_fromsecond"];
_unit 			= [_this,0,objNull,[objNull]] call BIS_fnc_param;
_from 			= [_this,1,"",[""]] call BIS_fnc_param;
_to 				= [_this,2,"",[""]] call BIS_fnc_param;
_message 		= [_this,3,"",[""]] call BIS_fnc_param;
_fromsecond = [_this,4,"",[""]] call BIS_fnc_param;
_position 	= mapGridPosition _unit;

if (isNil "_unit" || _from isEqualTo "" || _to isEqualTo "" || _message isEqualTo "") exitWith {};


if (_from isEqualTo _fromsecond) then {
		_position = "Position Brouillée";
};



_query = format ["INSERT INTO iphone_messages (from_num, to_num, message, position) VALUES ('%1', '%2', '""%3""', '%4')", _from, _to, _message, _position];
[_query,1] call DB_fnc_asyncCall;

diag_log "------------- SEND SMS ---------------";
diag_log format ["Send SMS from player : %1", _from];
diag_log format ["Send SMS for player : %1", _to];
diag_log format ["SMS : %1", _message];
diag_log format ["Query : %1", _query];
diag_log "-----------------------------------------";

if ((_to in life_phoneNumber_company) || (_to in life_phoneNumber_services)) then
{
	if (_to in ["60"]) then {[_from, _message, _to, _position] remoteExec ["unity_fnc_iPhone_X_receiveSMS", west];};
	if (_to in ["66"]) then {[_from, _message, _to, _position] remoteExec ["unity_fnc_iPhone_X_receiveSMS", independent];};
	if (!(_to in ["60","66"])) then {[_from, _message, _to, _position] remoteExec ["unity_fnc_iPhone_X_receiveSMS", civilian];};
} else
{
	_exists = [iPhone_X_listNumber, _to] call BIS_fnc_findNestedElement;
	if (!(_exists isEqualTo [])) then {
		[_from, _message, _to, _position] remoteExec ["unity_fnc_iPhone_X_receiveSMS", ((iPhone_X_listNumber select (_exists select 0)) select 1)];
	};
};
