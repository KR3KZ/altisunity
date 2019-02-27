/*
    File: fn_iPhone_X_appSMSList.sqf
    Author: Neyzhak

    Description:
    Open app SMS list

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_nameContact","_phoneNumberContact","_tmp","_ctrlList","_pos"];
disableSerialization;

_display = findDisplay 97000;
_ctrlDisplay = (_display displayCtrl 97506);
_ctrlGrp = (_ctrlDisplay controlsGroupCtrl 97516);
_ctrlList = [];
_ctrl = [97004,97006,97118,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97507,97510];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97506,true];

if (isNil "life_phoneNumberActive") then
{
	ctrlEnable [97655,false];
};

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;

_background_iPhone_X_background ctrlSetText "nolosharp_textures\phone\iPhone_X_appSMSList.paa";
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_phoneConversations", []]);

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_conversationSMS", []]);

player setVariable ["iPhone_X_currentConversation", []];

if (!(life_conversations isEqualTo [])) then {
	{
		_phoneNumberContact = _x select 1;
		//recupération du nom du contact si dans ma liste
		_nameContact = [life_contacts, _phoneNumberContact] call BIS_fnc_findNestedElement;
		if (_nameContact isEqualTo []) then {
			_nameContact = _x select 0;;
		}
		else
		{
			_nameContact = [life_contacts, [(_nameContact select 0), 0]] call BIS_fnc_returnNestedElement;
		};
		_lastSMS = _x select 2;
		_tmp = _display ctrlCreate ["iPhone_X_conversations", -1, _ctrlGrp];
		_ctrlList pushBack _tmp;
		_pos = ctrlPosition _tmp;
		_pos set [1, (_pos select 1) + (_pos select 3) * _forEachIndex];
		(_tmp controlsGroupCtrl 98101) ctrlSetText _nameContact;
		(_tmp controlsGroupCtrl 98102) ctrlSetText _lastSMS;
		_tmp ctrlAddEventHandler ["MouseButtonDown",format ["[%1, '%2', '%3'] spawn unity_fnc_iPhone_X_appSMS;", _forEachIndex, _nameContact, _phoneNumberContact]];
		_tmp ctrlSetPosition _pos;
		_tmp ctrlCommit 0;
	} forEach life_conversations;
};

player setVariable ["iPhone_X_phoneConversations", _ctrlList];
