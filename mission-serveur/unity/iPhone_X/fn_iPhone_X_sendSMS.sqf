/*
	File: fn_iPhone_X_sendSMS.sqf
	Author: Neyzhak

	Description:
	Send SMS

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_message","_SMS","_phoneNumberContact","_display","_ctrlDisplay","_ctrlGrp","_date","_day","_month","_hour","_minute","_datesend"];
disableSerialization;

_message	 					= _this select 0;

if (_message isEqualTo "Message...") exitWith {hint "Message incorrect."};

_message 						= _message splitString "'%" joinString " ";
_message 						= _message splitString '"' joinString " ";

_SMS 							= life_SMS;
_phoneNumberContact 			= player getVariable ["iPhone_X_currentConversation", ""];

_date 							= date;
_day							= str (_date select 2);
_month							= str (_date select 1);
_hour 							= str (_date select 3);
_minute  						= str (_date select 4);
_datesend 						= format["%1/%2 à %3:%4",_day,_month, if(count _hour == 1) then {("0" + _hour)} else {_hour}, if(count _minute == 1) then {("0" + _minute)} else {_minute}];
_datesend						= str("Maintenant");

[player,"smssend",10] spawn unity_fnc_playsoundcheck;
sleep random 0.2;

_SMS pushBack [life_phoneNumberActive, _phoneNumbercontact, _message, _datesend];

if !(isNil "life_phoneNumberSecondary") then {
	[player, life_phoneNumberActive, _phoneNumberContact, _message, life_phoneNumberSecondary] remoteExec ["unity_srv_fnc_iPhone_X_sendSMS", 2];
} else {
	[player, life_phoneNumberActive, _phoneNumberContact, _message] remoteExec ["unity_srv_fnc_iPhone_X_sendSMS", 2];
};

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_conversationSMS", []]);

[] call unity_fnc_iPhone_X_newSMS;

_display = findDisplay 97000;
_ctrlDisplay = (_display displayCtrl 97510);
_ctrlGrp = (_ctrlDisplay controlsGroupCtrl 97511);

_ctrlGrp ctrlSetAutoScrollSpeed 0.000001;
_ctrlGrp ctrlSetAutoScrollDelay 0.000001;
sleep 0.2;
_ctrlGrp ctrlSetAutoScrollSpeed -1;
ctrlSetFocus _ctrlGrp;
