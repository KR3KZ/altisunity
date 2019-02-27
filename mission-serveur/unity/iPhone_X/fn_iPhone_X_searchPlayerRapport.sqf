/*
    File: fn_iPhone_X_searchPlayerRapport.sqf
    Author: Neyzhak
    
    Description:
    Search player for rapport

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
disableSerialization;
private ["_ctrl", "_key", "_ctrlText"];

_ctrl = _this select 0;
_key = _this select 1;
_searchPlayerRapport = ctrlText _ctrl;

if ((_key == 28) && !(_searchPlayerRapport == "") && !(_searchPlayerRapport == "Rechercher...")) then {
	[player, _searchPlayerRapport] remoteExec ["unity_srv_fnc_iPhone_X_getSearchPlayerRapport",2];
	_ctrl ctrlSetText "Rechercher...";
};