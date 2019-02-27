/*
    File: fn_iPhone_X_addContact.sqf
    Author: Neyzhak

    Description:
    Add contact

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_uid","_contacts","_nameContact","_phoneNumberContact","_exists"];
disableSerialization;

if (count life_contacts > 100) exitWith {hint "Limite de contacts atteinte.";};

_uid 					= getPlayerUID player;
_contacts 				= life_contacts;
_nameContact 			= ctrlText 97605;
_phoneNumberContact 	= ctrlText 97606;
_noteContact 			= ctrlText 97658;

_nameContact 			= _nameContact splitString "'" joinString " ";
_noteContact 			= _noteContact splitString "'" joinString " ";

if (_nameContact in ["Identité", ""]) exitWith {hint "Identité invalide.";};
if (_phoneNumberContact in ["Numéro", ""]) exitWith {hint "Numéro invalide.";};
if (_noteContact isEqualTo "Note") then {_noteContact = ""};

_exists 				= [_contacts, _phoneNumberContact] call BIS_fnc_findNestedElement;
if (!(_exists isEqualTo [])) exitWith {hint "Contact déjà existant."};

_contacts pushBack [_nameContact, _phoneNumberContact, _noteContact];
life_contacts 			= [_contacts,[],{_x select 0},"ASCEND"] call BIS_fnc_sortBy;
[_uid, _nameContact, _phoneNumberContact, _noteContact] remoteExec ["unity_srv_fnc_iPhone_X_saveContact",2];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_phoneContacts", []]);
[] call unity_fnc_iPhone_X_appContactsList;
