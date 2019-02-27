/*
	author: OhRhion
	description: removeContact
	returns: nothing
*/

private ["_uid","_phoneNumberContact","_unit","_ownerID","_query","_querySelect","_result"];

diag_log "Remove Function Called";
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_phoneNumberContact = [_this,1,"",[""]] call BIS_fnc_param;
_unit = [_this,2,objNull,[objNull]] call BIS_fnc_param;
_ownerID = owner _unit;

diag_log _uid;
diag_log _phoneNumberContact;
diag_log _ownerID;
_query = format ["DELETE FROM iphone_contacts WHERE player_id=%1 AND phone_number_contact=%2",_uid,_phoneNumberContact];
[_query,1] call DB_fnc_asyncCall;
sleep 0.5;
_querySelect = format ["SELECT name_contact, phone_number_contact, note_contact FROM iphone_contacts WHERE player_id='%1' ORDER BY name_contact", _uid];
_result = [_querySelect,2,true] call DB_fnc_asyncCall;
[_result] remoteExec ["unity_fnc_iPhone_X_contacts", _ownerID];