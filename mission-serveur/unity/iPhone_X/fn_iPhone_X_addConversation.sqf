/*
    File: fn_iPhone_X_addConversation.sqf
    Author: Neyzhak

    Description:
    Add conversation

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_uid","_conversations","_nameContact","_phoneNumberContact","_exists","_error"];
disableSerialization;

if (count life_conversations > 100) exitWith {hint "Limite de conversation atteinte.";};

_uid = getPlayerUID player;
_conversations = life_conversations;
_nameContact = ctrlText 97607;
_phoneNumberContact = ctrlText 97608;
_message = "Aucun message reçu";
_error = false;

_nameContact = _nameContact splitString "'" joinString " ";
_message = _message splitString "'" joinString " ";

if (_nameContact in ["Identité", ""]) exitWith {hint "Identité invalide.";};
if (_phoneNumberContact in ["Numéro", ""]) exitWith {hint "Numéro invalide.";};
if !(isNil "life_phoneNumberPrimary") then {if (life_phoneNumberPrimary isEqualTo _phoneNumberContact) then {_error = true};};
if !(isNil "life_phoneNumberSecondary") then {if (life_phoneNumberSecondary isEqualTo _phoneNumberContact) then {_error = true};};
//if !(isNil "life_phoneNumberEnterprise") then {if (life_phoneNumberEnterprise isEqualTo _phoneNumberContact) then {_error = true};};

if (_error) exitWith {hint "Vous ne pouvez pas créer de conversation avec ce numéro."; _error = false;};

_exists = [_conversations, _phoneNumberContact] call BIS_fnc_findNestedElement;
if (!(_exists isEqualTo [])) exitWith {hint "Conversation avec ce contact déjà existante."};


reverse _conversations;
_conversations pushBack [_nameContact, _phoneNumberContact, "Aucun message reçu"];
reverse _conversations;
//life_conversations = [_conversations,[],{_x select 0},"ASCEND"] call BIS_fnc_sortBy;
life_conversations = _conversations;

[_uid, _nameContact, _phoneNumberContact, _message] remoteExec ["unity_srv_fnc_iPhone_X_saveConversation",2];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_phoneConversations", []]);
_error = false;
[] call unity_fnc_iPhone_X_appSMSList;
