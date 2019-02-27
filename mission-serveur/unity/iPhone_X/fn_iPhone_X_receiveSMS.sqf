/*
	File: fn_iPhone_X_receiveSMS.sqf
	Author: Neyzhak

	Description:
	Receive SMS

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_uid","_from","_message","_SMS","_conversations","_nameContact","_exists","_phoneNumberContact","_date","_hour","_minute","_time","_display","_ctrlDisplay","_ctrlGrp","_position"];
disableSerialization;

_uid 						= getPlayerUID player;
_from 					= _this select 0;
_message 				= _this select 1;
_to 						= _this select 2;
_position 			= _this select 3;
_SMS 						= life_SMS;
_conversations 	= life_conversations;


_nameContact = [life_contacts, _from] call BIS_fnc_findNestedElement;
if (_nameContact isEqualTo []) then {_nameContact = _from} else {
	_nameContact = [life_contacts, [(_nameContact select 0), 0]] call BIS_fnc_returnNestedElement;
};

if ((_to in life_phoneNumber_company) || (_to in life_phoneNumber_services)) then
{
	if (_to isEqualTo life_phoneNumberEnterprise) then
	{
		_nameContact = format ["%1", _nameContact];

		if ((life_settings select 2) isEqualTo 0) then
		{
			playsound "emergency_sound";
			//[player,"notification_sound",10] spawn life_fnc_playSoundCheck;
		};

		if (_to in life_phoneNumber_company) then
		{
			_position = "•••";
			["SMS ENTREPRISE",format["› %1<br/>› %2", _nameContact, _message],[0.368, 0.368, 0.368, 1]] call life_fnc_showNotification;
		}
		else
		{
			["SMS URGENCE",format["› %1 <br/>› %2 <br/>› %3", _nameContact, _message, _position],[0.980, 1, 0.101, 1]] call life_fnc_showNotification;
		};

		_SMS pushBack [_from, _message, _position];

		{
			ctrlDelete _x;
		} count (player getVariable ["iPhone_X_conversationSMS", []]);
		[player, _to, _message] remoteExec ["unity_srv_fnc_iPhone_X_saveLastSMS", 2];
		[] call unity_fnc_iPhone_X_newSMSEnterprise;

		_date 		= date;
		_hour 		= str (_date select 3);
		_minute  	= str (_date select 4);
		_time 		= format["%1h%2", if(count _hour == 1) then {("0" + _hour)} else {_hour}, if(count _minute == 1) then {("0" + _minute)} else {_minute}];
		player setVariable ["iPhone_X_lastSMS",[_namecontact, _message, _time, _from]];
	};
} else {
	_exists = [_conversations, _from] call BIS_fnc_findNestedElement;
	if (_exists isEqualTo []) then
	{
		reverse _conversations;
		_conversations pushBack [_nameContact, _from, _message];
		reverse _conversations;
		life_conversations = _conversations;
		[_uid, _nameContact, _from, _message] remoteExec ["unity_srv_fnc_iPhone_X_saveConversation",2];

		{
			ctrlDelete _x;
		} count (player getVariable ["iPhone_X_phoneConversations", []]);
	}
	else {
		[player, _from, _message] remoteExec ["unity_srv_fnc_iPhone_X_saveLastSMS", 2];
	};

	if (_to isEqualTo life_phoneNumberActive) then
	{
		_phoneNumberContact = player getVariable ["iPhone_X_currentConversation", ""];

		if (_from isEqualTo _phoneNumberContact) then
		{
			_SMS pushBack [_from, life_phoneNumberActive, _message];
			{
			ctrlDelete _x;
			} count (player getVariable ["iPhone_X_conversationSMS", []]);

			[] call unity_fnc_iPhone_X_newSMS;
		};

		_date = date;
		_hour = str (_date select 3);
		_minute  = str (_date select 4);
		_time = format["%1h%2", if(count _hour == 1) then {("0" + _hour)} else {_hour}, if(count _minute == 1) then {("0" + _minute)} else {_minute}];

		player setVariable ["iPhone_X_lastSMS",[_namecontact, _message, _time, _from]];

		if ((life_settings select 2) isEqualTo 0) then {[player,"notification_sound",10] spawn life_fnc_playSoundCheck};
		["Nouveau SMS",format["› %1 <br/>› %2", _nameContact, _message],[1, 1, 1, 1],""] call life_fnc_showNotification;
	};
};
