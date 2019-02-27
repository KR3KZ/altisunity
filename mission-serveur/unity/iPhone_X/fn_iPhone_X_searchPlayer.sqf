/*
    File: fn_iPhone_X_searchPlayer.sqf
    Author: Neyzhak
    
    Description:
    Search player

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
disableSerialization;
private ["_ctrl", "_key", "_ctrlText"];

_ctrl = _this select 0;
_key = _this select 1;
_searchPlayer = ctrlText _ctrl;

if ((_key == 28) && !(_searchPlayer == "") && !(_searchPlayer == "Rechercher...")) then {
	[player, _searchPlayer] remoteExec ["unity_srv_fnc_iPhone_X_getSearchPlayer",2];
	_ctrl ctrlSetText "Rechercher...";
};