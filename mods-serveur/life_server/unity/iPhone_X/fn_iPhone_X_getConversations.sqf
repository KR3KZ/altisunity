/*
	File: fn_iPhone_X_getConversations.sqf
	Author: Neyzhak

	Description:
	Get conversations for player with phone number active

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT name_contact, phone_number_contact, last_sms FROM iphone_conversations WHERE player_id='%1' order by creation_date desc", _playerUID];
_result = [_query,2,true] call DB_fnc_asyncCall;

diag_log "------------- CONVERSATIONS -------------";
diag_log format ["Conversations for player : %1", _playerUID];
diag_log format ["Number of conversations : %1", count _result];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

if (_result isEqualTo []) then
{
	_query = format ["INSERT INTO iphone_conversations (player_id, phone_number_contact, name_contact, last_sms) VALUES ('%1','50','#Depanneur','""Le Centre automobile d‘altis entretient et répare votre automobile""'),('%1','66','#Idap','""L‘O.N.G médicale à votre service""'), ('%1','61','#Polisraël','""La police de l’état indépendant d’israël""'),('%1','62','#Garde Républicaine','""La police de la nouvelle république d‘altis""'), ('%1','300','*Le BarMitzvah','""Soirées privés ou professionnelles, le BarMitzvah vous accueil pour vos évènements""'),('%1','350','*Holdi‘Sraël','""Alt‘is in the air - Diamantaire - Luxury Costumes - Mazel Car Prestige - Shalom H.L.M""'), ('%1','369','*Snack D3','""Have a break ? Have a Kebab""'),('%1','380','*Coiffeur/Barbier','""Chez Arlendo il y‘a le look qu‘il te faut""')",_playerUID];

	[_query,1] call DB_fnc_asyncCall;
	sleep 2;

	[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getConversations",2];
} else {
	[_result] remoteExec ["unity_fnc_iPhone_X_conversations", _ownerID];
};
