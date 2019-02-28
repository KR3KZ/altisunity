/*
    File: fn_iPhone_X_appContactsList.sqf
    Author: Neyzhak

    Description:
    Open contacts list

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_nameContact","_phoneNumberContact","_tmp","_ctrlList","_pos"];
disableSerialization;

_display 							= findDisplay 97000;
_ctrlDisplay 						= (_display displayCtrl 97504);
_ctrlGrp 							= (_ctrlDisplay controlsGroupCtrl 97514);
_ctrlList 							= [];
_ctrl 								= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97503,97505,97509];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97504,true];

if (isNil "life_phoneNumberActive") then
{
	ctrlEnable [97654,false];
};

_background_iPhone_X_background 	= _display displayCtrl 97002;
_iPhone_X_clock_home 				= _display displayCtrl 97500;

_background_iPhone_X_background 	ctrlSetText "unity_iPhone_X\iPhone_X_appContactsList.paa";
_iPhone_X_clock_home 				ctrlSetTextColor [0,0,0,1];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_phoneContacts", []]);

if (!(life_contacts isEqualTo [])) then {
	{
		_nameContact 				= _x select 0;
		_phoneNumberContact 		= _x select 1;
		_noteContact 				= _x select 2;
		_tmp 						= _display ctrlCreate ["iPhone_X_contacts", -1, _ctrlGrp];
		_ctrlList 					pushBack _tmp;
		_pos 						= ctrlPosition _tmp;
		_pos 						set [1, (_pos select 1) + (_pos select 3) * _forEachIndex];
		(_tmp controlsGroupCtrl 98002) ctrlSetText _nameContact;
		(_tmp controlsGroupCtrl 98003) ctrlSetText _phoneNumberContact;
		_tmp 						ctrlAddEventHandler ["MouseButtonDown",format ["[%1, '%2', '%3', '%4'] spawn unity_fnc_iPhone_X_appContact;", _forEachIndex, _nameContact, _phoneNumberContact, _noteContact]];
		_tmp 						ctrlSetPosition _pos;
		_tmp 						ctrlCommit 0;
	} forEach life_contacts;
};

player setVariable ["iPhone_X_phoneContacts", _ctrlList];
