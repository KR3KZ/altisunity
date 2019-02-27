/*
	File: fn_iPhone_X_conversations.sqf
	Author: Neyzhak

	Description:
	Conversations

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_conversations"];
_conversations = [_this,0,[],[[]]] call BIS_fnc_param;

if (_conversations isEqualTo [[]]) then {_conversations = [];};
life_conversations = _conversations;

diag_log str life_conversations;
