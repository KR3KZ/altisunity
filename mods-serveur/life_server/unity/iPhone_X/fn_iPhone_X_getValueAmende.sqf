/*
	File: fn_iPhone_X_getValueAmende.sqf
	Author: Neyzhak

	Description:
	Get value amende

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_type = [_this,1,[],[[]]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

if (_type isEqualType []) then {_type = _type select 0;};

if (_type isEqualTo 1) then
{
	_query = format ["SELECT value_a FROM iphone_value_amende"];
	_result = [_query,2,true] call DB_fnc_asyncCall;
};

if (_type isEqualTo 2) then
{
	_query = format ["SELECT value_b FROM iphone_value_amende"];
	_result = [_query,2,true] call DB_fnc_asyncCall;
};

if (_type isEqualTo 3) then
{
	_query = format ["SELECT value_c FROM iphone_value_amende"];
	_result = [_query,2,true] call DB_fnc_asyncCall;
};

if (_type isEqualTo 4) then
{
	_query = format ["SELECT value_d FROM iphone_value_amende"];
	_result = [_query,2,true] call DB_fnc_asyncCall;
};

if (_type isEqualTo 5) then
{
	_query = format ["SELECT value_e FROM iphone_value_amende"];
	_result = [_query,2,true] call DB_fnc_asyncCall;
};

if !(_result isEqualTo []) then
{	
	[_result] remoteExec ["unity_fnc_iPhone_X_valueAmende", _ownerID];
};

diag_log "------------- GET VALUE AMENDE -------------";
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";