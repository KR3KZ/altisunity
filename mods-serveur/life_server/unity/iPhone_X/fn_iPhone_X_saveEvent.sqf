/*
	File: fn_iPhone_X_saveEvent.sqf
*/
private ["_uid", "_nameEvent", "_description", "_price", "_position", "_date","_company","_query"];
_uid  = [_this,0,"",[""]] call BIS_fnc_param;
_nameEvent = [_this,1,"",[""]] call BIS_fnc_param;
_description = [_this,2,"",[""]] call BIS_fnc_param;
_price = [_this,3,"",[""]] call BIS_fnc_param;
_position = [_this,4,"",[""]] call BIS_fnc_param;
_date = [_this,5,"",[""]] call BIS_fnc_param;
_company = [_this,6,"",[""]] call BIS_fnc_param;
if (_uid isEqualTo "" || _nameEvent isEqualTo "" || _description isEqualTo "" || _price isEqualTo "" || _position isEqualTo ""  || _date isEqualTo "") exitWith {};

_query = format ["INSERT INTO event ( `name_ev`, `desc_ev`, `date_start_ev`, `price_ev`, `position_ev`, `player_id`, `company_id`) VALUES ('%1', '%2', '%3', '%4', '%5', '%6', '%7')",_nameEvent, _description, _date, _price, _position,_uid,'0'];
diag_log format ["Query : %1", _query];
//[format["Nouvel évènement : %1",_nameEvent],format["Consulter l'application event pour savoir ce qui se passera en %1",_position]] remoteExec ["unity_fnc_iPhone_X_appEventAlert", 0];

[_query,1] call DB_fnc_asyncCall;
//INSERT INTO `event`(`id_ev`, `name_ev`, `desc_ev`, `date_start_ev`, `time_start_ev`, `price_ev`, `position_ev`, `player_id`, `company_id`) VALUES (1, 'Mazel\'Teuf', 'Grosse Teuf chez les juif', '2018-01-11 16:06:44', 2300, 1000, '123432', 76561198375072223, 1);
//INSERT INTO `event`(`id_ev`, `name_ev`, `desc_ev`, `date_start_ev`, `price_ev`, `position_ev`, `player_id`, `company_id`) VALUES (1, 'Mazel\'Teuf', 'Grosse Teuf chez les juif', '2018-01-11 16:06:44', 1000, '123432', 76561198375072223, 1);
