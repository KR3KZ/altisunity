/*
	File: fn_iPhone_X_getSearchBankAccount.sqf
	Author: Neyzhak

	Description:
	Get search bank account

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_searchBankAccount = [_this,1,"",[""]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT bankacc FROM players WHERE name='%1'", _searchBankAccount];
_result = [_query,2,true] call DB_fnc_asyncCall;

if !(_result isEqualTo []) then
{
	[_result] remoteExec ["unity_fnc_iPhone_X_bankAccount", _ownerID];
};

diag_log "------------- SEARCH BANKACCOUNT -------------";
diag_log format ["Result : %1, %2", _searchBankAccount, _result];
diag_log "-----------------------------------------";