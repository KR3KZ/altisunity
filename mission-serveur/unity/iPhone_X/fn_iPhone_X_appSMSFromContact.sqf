/*
    File: fn_iPhone_X_appSMSFromContact.sqf
    Author: Neyzhak

    Description:
    Open app SMS, from contact

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_uid","_nameContact","_phoneNumberContact","_conversations","_exists"];
disableSerialization;

_uid = getPlayerUID player;
_nameContact = _this select 0;
_phoneNumberContact = _this select 1;
_conversations = life_conversations;
_message = "Aucun message reçu";

_exists = [_conversations, _phoneNumberContact] call BIS_fnc_findNestedElement;
if (_exists isEqualTo []) then
{
	reverse _conversations;
	_conversations pushBack [_nameContact, _phoneNumberContact];
	reverse _conversations;
	//life_conversations = [_conversations,[],{_x select 0},"ASCEND"] call BIS_fnc_sortBy;
	life_conversations = _conversations;
	[_uid, _nameContact, _phoneNumberContact, _message] remoteExec ["unity_srv_fnc_iPhone_X_saveConversation",2];

	{
	ctrlDelete _x;
	} count (player getVariable ["iPhone_X_phoneConversations", []]);
};

[_nameContact, _phoneNumberContact] spawn unity_fnc_iPhone_X_appSMSNew;
