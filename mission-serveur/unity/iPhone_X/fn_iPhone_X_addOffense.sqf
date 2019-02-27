/*
    File: fn_iPhone_X_addOffense.sqf
    Author: Neyzhak

    Description:
    Add offense

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_uid","_contacts","_nameContact","_phoneNumberContact","_exists"];
disableSerialization;

_nameOffense = ctrlText 98156;
_phoneNumberOffense = ctrlText 98157;
_noteOffense = ctrlText 98158;
_valueAmendeTotal = ctrlText 98159;
_valueAmendeReal = ctrlText 98160;
_valueAmendeReal = ctrlText 98160;
_date = ctrlText 98162;
_hour = ctrlText 98163;
_amende_01 = ctrlText 98250;
_amende_02 = ctrlText 98252;
_amende_03 = ctrlText 98255;
_amende_04 = ctrlText 98257;

if (life_amende_01) then {_amende_01 = "1"} else {_amende_01 = "0"};
if (life_amende_02) then {_amende_02 = "1"} else {_amende_02 = "0"};
if (life_amende_03) then {_amende_03 = "1"} else {_amende_03 = "0"};
if (life_amende_04) then {_amende_04 = "1"} else {_amende_04 = "0"};

_amende = [_amende_01,_amende_02,_amende_03,_amende_04];

_nameOffense = _nameOffense splitString "'" joinString " ";
_noteOffense = _noteOffense splitString "'" joinString " ";

diag_log "------------- ADD OFFENSE CLIENT 1 --------------";
diag_log format ["Result : %1", _amende];
diag_log "-----------------------------------------";

if (_nameOffense in ["Identité", ""]) exitWith {hint "Identité invalide.";};
if ((_phoneNumberOffense isEqualTo "Téléphone") OR (_phoneNumberOffense isEqualTo "")) then {_phoneNumberOffense = "Inconnu"};
if ((_noteOffense isEqualTo "Informations") OR (_noteOffense isEqualTo "")) exitWith {hint "Merci de remplir le champ : informations.";};
if (_valueAmendeTotal isEqualTo "") then {_valueAmendeTotal = "0"};
if ((_valueAmendeReal isEqualTo "") OR (_valueAmendeReal isEqualTo "Montant réel...")) then {_valueAmendeReal = "0"};
if ((count _date) != 10) exitWith {hint "Date invalide. (Requis : jj/mm/aaaa).";};
if ((count _hour) != 5) exitWith {hint "Heure invalide. (Requis : hh:mm).";};

if (life_onTheRun) then
{
	[name player, _nameOffense, _phoneNumberOffense, _noteOffense, _valueAmendeTotal, _valueAmendeReal, [1], _date, _hour, _amende] remoteExec ["unity_srv_fnc_iPhone_X_saveOffense",2];
} else {
	[name player, _nameOffense, _phoneNumberOffense, _noteOffense, _valueAmendeTotal, _valueAmendeReal, [0], _date, _hour, _amende] remoteExec ["unity_srv_fnc_iPhone_X_saveOffense",2];
};

diag_log "------------- ADD OFFENSE CLIENT 2 --------------";
diag_log format ["Result : %1", _amende];
diag_log "-----------------------------------------";

[] call unity_fnc_iPhone_X_appPMC;
