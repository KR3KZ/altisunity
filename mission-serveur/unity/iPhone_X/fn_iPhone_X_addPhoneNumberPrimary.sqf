/*
    File: fn_iPhone_X_addPhoneNumberPrimary.sqf
    Author: Neyzhak

    Description:
    Add phone number primary

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_uid","_type","_price","_phoneNumber"];
disableSerialization;

_uid 				= getPlayerUID player;
_type 				= "1";
_price 				= 950;

_phoneNumber = [0,6];
while {(count _phoneNumber < 10)} do {
	_phoneNumber = [0,6];
	for "_i" from 0 to 7 do {
		_phoneNumber pushBack (selectRandom [0,1,2,3,4,5,6,7,8,9]);
	};
};

_phoneNumber 		= _phoneNumber joinString "";

if((time - life_action_delay) < 10) exitWith {hint "Merci de patienter quelques instants avant d'acheter un abonnement."};
life_action_delay = time;

[player, _type] remoteExec ["unity_srv_fnc_iPhone_X_checkPhoneNumberSubscription",2];
waitUntil {!(iPhone_X_checkPhoneNumberSubscription isEqualTo [])};

if (iPhone_X_checkPhoneNumberSubscription) exitWith {hint "Vous possédez déjà un abonnement principal."; iPhone_X_checkPhoneNumberSubscription = []; diag_log format ["Subscription exit primary : %1", iPhone_X_checkPhoneNumberSubscription];};

if (_price > life_cash) exitWith {hint "Vous n'avez pas assez d'argent pour acheter l'abonnement"};

[player, _phoneNumber, _type] remoteExec ["unity_srv_fnc_iPhone_X_checkPhoneNumberIsUse",2];
waitUntil {!(iPhone_X_checkPhoneNumberIsUse isEqualTo [])};

if (iPhone_X_checkPhoneNumberIsUse) exitWith {hint "Erreur lors de l'achat de l'abonnement, merci de réessayer."; iPhone_X_checkPhoneNumberIsUse = []; diag_log format ["IsUse exit primary : %1", iPhone_X_checkPhoneNumberIsUse];};

[_uid, _phoneNumber, _type] remoteExec ["unity_srv_fnc_iPhone_X_addPhoneNumber",2];

hint format["Abonnement en cours de finalisation..."];
sleep 5;

[player] remoteExec ["unity_srv_fnc_iPhone_X_getPhoneNumber",2];

iPhone_X_checkPhoneNumberSubscription 	= [];
iPhone_X_checkPhoneNumberIsUse 			= [];
life_cash 								= life_cash - _price;

hint format["Abonnement finalisé et opérationnel. Votre numéro principal est : %1", _phoneNumber];

closeDialog 0;
