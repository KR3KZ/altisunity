/*
    File: fn_iPhone_X_searchOffense.sqf
    Author: Neyzhak

    Description:
    Search offense

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
disableSerialization;
private ["_ctrl", "_key", "_ctrlText"];

_ctrl = _this select 0;
_key = _this select 1;
_searchOffense = ctrlText _ctrl;

if ((_key == 28) && !(_searchOffense == "") && !(_searchOffense == "Rechercher...")) then {
	[player, _searchOffense] remoteExec ["unity_srv_fnc_iPhone_X_getSearchOffense",2];
	_ctrl ctrlSetText "Rechercher...";
	[] spawn unity_fnc_iPhone_X_appOffenseList;
};
