/*
	author: OhRhion
	description: none
	returns: nothing
*/

private ["_uid","_phoneNumberContact"];

_uid = getPlayerUID player;
_phoneNumberContact = ctrlText 97610;

[_uid, _phoneNumberContact,player] remoteExec ["unity_srv_fnc_iPhone_X_removeContactFromDb",2];

sleep 1;
[] spawn unity_fnc_iPhone_X_appContactsList;
