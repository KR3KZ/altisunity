/*
    File: fn_iPhone_X_searchBankAccount.sqf
    Author: Neyzhak
    
    Description:
    Search bank account

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
disableSerialization;
private ["_ctrl", "_key", "_ctrlText"];

_ctrl = _this select 0;
_key = _this select 1;
_searchBankAccount = ctrlText _ctrl;

if ((_key == 28) && !(_searchBankAccount == "") && !(_searchBankAccount == "Rechercher...")) then {
	[player, _searchBankAccount] remoteExec ["unity_srv_fnc_iPhone_X_getSearchBankAccount",2];
	_ctrl ctrlSetText "Rechercher...";
};