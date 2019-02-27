/*
    File: fn_iPhone_X_appSMS.sqf
    Author: Neyzhak

    Description:
    Open app SMS

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_index","_nameContact","_phoneNumberContact","_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_iPhone_X_nameContactAppSMS"];
disableSerialization;

_index = _this select 0;
_nameContact = _this select 1;
_phoneNumberContact = _this select 2;

_display = findDisplay 97000;

_ctrl = [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97503,97506,97510];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97510,true];

ctrlEnable [97621,true];
ctrlShow [97621,true];
ctrlEnable [97622,true];
ctrlEnable [97623,true];

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;
_iPhone_X_nameContactAppSMS = _display displayCtrl 97620;

if (isNil "life_phoneNumberActive") then
{
	ctrlEnable [97621,false];
	ctrlEnable [97622,false];
	ctrlEnable [97623,false];
};

if !(isNil "life_phoneNumberEnterprise") then
{
	if (life_phoneNumberEnterprise isEqualTo _phoneNumberContact) then
	{
		ctrlEnable [97621,false];
		ctrlShow [97621,false];
		ctrlEnable [97622,false];
		ctrlEnable [97623,false];
		_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appSMSEnterprise.paa";
	};
};

if !(isNil "life_phoneNumberEnterprise") then
{
	if !(life_phoneNumberEnterprise isEqualTo _phoneNumberContact) then
	{
		_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appSMS.paa";
	};
} else {
	_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appSMS.paa";
};

_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_conversationSMS", []]);

player setVariable ["iPhone_X_currentConversation", []];

_iPhone_X_nameContactAppSMS ctrlSetText _nameContact;

if (isNil "life_phoneNumberActive") exitWith {};
if (life_phoneNumberActive isEqualTo []) exitWith {};

if !(isNil "life_phoneNumberEnterprise") then
{
	if (life_phoneNumberEnterprise isEqualTo _phoneNumberContact) then
	{
		[player, _phoneNumberContact] remoteExec ["unity_srv_fnc_iPhone_X_getSMSEnterprise",2];
	};
};

if !(isNil "life_phoneNumberEnterprise") then
{
	if !(life_phoneNumberEnterprise isEqualTo _phoneNumberContact) then
	{
		[player, life_phoneNumberActive, _phoneNumberContact] remoteExec ["unity_srv_fnc_iPhone_X_getSMS",2];
	};
} else {
	[player, life_phoneNumberActive, _phoneNumberContact] remoteExec ["unity_srv_fnc_iPhone_X_getSMS",2];
};
