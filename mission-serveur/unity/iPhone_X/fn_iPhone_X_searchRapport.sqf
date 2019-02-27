/*
    File: fn_iPhone_X_searchRapport.sqf
    Author: Neyzhak

    Description:
    Search rapport

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
disableSerialization;
private ["_ctrl", "_key", "_ctrlText"];

_ctrl = _this select 0;
_key = _this select 1;
_searchRapport = ctrlText _ctrl;

if ((_key == 28) && !(_searchRapport == "") && !(_searchRapport == "Rechercher...")) then {
	[player, _searchRapport] remoteExec ["unity_srv_fnc_iPhone_X_getSearchRapport",2];
	_ctrl ctrlSetText "Rechercher...";
	[] spawn unity_fnc_iPhone_X_appRapportsList;
};
