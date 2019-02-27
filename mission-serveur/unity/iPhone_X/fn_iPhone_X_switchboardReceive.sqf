/*
	File: fn_iPhone_X_switchboardReceive.sqf
	Author: Neyzhak

	Description:
	Switchboard receive

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_uid","_from","_message","_SMS","_conversations","_nameContact","_exists","_phoneNumberContact","_date","_hour","_minute","_time","_display","_ctrlDisplay","_ctrlGrp"];
disableSerialization;

_from = _this select 0;
_to = _this select 1;
_position = _this select 2;

_nameContact = [life_contacts, _from] call BIS_fnc_findNestedElement;
if (_nameContact isEqualTo []) then {
	_nameContact = _from;
}
else
{
	_nameContact = [life_contacts, [(_nameContact select 0), 0]] call BIS_fnc_returnNestedElement;
};


if ((_to in life_phoneNumber_company) || (_to in life_phoneNumber_services)) then
{
	if !(isNil "life_phoneNumberEnterprise") then
	{
		if (_to isEqualTo life_phoneNumberEnterprise) then
		{
			if (_to in life_phoneNumber_company) then
			{
					[format["Appel au %1",_to],format["› %1 essaye de joindre le standard", _nameContact],[0.368, 0.368, 0.368, 1]] call life_fnc_showNotification;
			}
			else
			{
					[format["Urgence au %1",_to],format["› %1 essaye de vous joindre <br/>› %2", _nameContact, _position],[0.980, 1, 0.101, 1]] call life_fnc_showNotification;
			};

			if ((life_settings select 2) isEqualTo 0) then
			{
				playsound "emergency_sound";
			};
		};
	};
};
