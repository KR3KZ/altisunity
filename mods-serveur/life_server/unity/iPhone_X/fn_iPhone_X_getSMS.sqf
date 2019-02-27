/*
	File: fn_iPhone_X_getSMS.sqf
	Author: Neyzhak

	Description:
	Get SMS

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_phoneNumberActive","_phoneNumberContact","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_phoneNumberActive = [_this,1,"",[""]] call BIS_fnc_param;
_phoneNumberContact = [_this,2,"",[""]] call BIS_fnc_param;

  diag_log "------------- GET SMS ---------------";

if (isNil "_unit" || _phoneNumberActive isEqualTo "" || _phoneNumberContact isEqualTo "") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;

if (_playerUID == "") exitWith {};


diag_log format ["Get SMS for player : %1", _playerUID];

//_query = format ["( SELECT from_num, to_num, message, date FROM iphone_messages where (from_num='%1' and to_num='%2') or (from_num='%2' and to_num='%1') order by date desc limit 0,50 ) order by date asc", _phoneNumberActive, _phoneNumberContact];
_query = format ["SELECT from_num, to_num, message, DATE_FORMAT(date,'%3') AS receivedate FROM iphone_messages WHERE (from_num='%1' AND to_num='%2') OR (from_num='%2' AND to_num='%1') ORDER BY date desc limit 0,50", _phoneNumberActive, _phoneNumberContact, "%d/%m à %H:%i"];
_result = [_query,2,true] call DB_fnc_asyncCall;
reverse _result;

diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

[_phoneNumberContact, _result] remoteExec ["unity_fnc_iPhone_X_SMS", _ownerID];
