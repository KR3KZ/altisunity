/*
    File: fn_iPhone_X_addRapport.sqf
    Author: Neyzhak

    Description:
    Add rapport

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_uid","_contacts","_nameContact","_phoneNumberContact","_exists"];
disableSerialization;

_nameRapport 			= ctrlText 98200;
_phoneNumberRapport 	= ctrlText 98201;
_noteRapport 			= ctrlText 98202;
_date 					= ctrlText 98203;
_hour 					= ctrlText 98204;

_nameRapport 			= _nameRapport splitString "'" joinString " ";
_noteRapport 			= _noteRapport splitString "'" joinString " ";

if (_nameRapport in ["Identité", ""]) exitWith {hint "Identité invalide.";};
if ((_phoneNumberRapport isEqualTo "Téléphone") OR (_phoneNumberRapport isEqualTo "")) then {_phoneNumberRapport = "Inconnu"};
if ((_noteRapport isEqualTo "Rapport") OR (_noteRapport isEqualTo "")) exitWith {hint "Merci de remplir le champ : rapport";};
if ((count _date) != 10) exitWith {hint "Date invalide. (Requis : jj/mm/aaaa).";};
if ((count _hour) != 5) exitWith {hint "Heure invalide. (Requis : hh:mm).";};

[name player, _nameRapport, _phoneNumberRapport, _noteRapport, _date, _hour] remoteExec ["unity_srv_fnc_iPhone_X_saveRapport",2];

[] call unity_fnc_iPhone_X_appPMC;
