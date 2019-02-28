/*
    File: fn_iPhone_X_appAddOffense.sqf
    Author: Neyzhak

    Description:
    Open app add offense

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_nameContact","_iPhone_X_phoneNumberContact","_iPhone_X_clock_home"];
disableSerialization;

_name 										= [_this,0,"",[""]] call BIS_fnc_param;
_bankAccount 								= [_this,1,[],[[]]] call BIS_fnc_param;

if (_bankAccount isEqualType []) then {_bankAccount = _bankAccount select 0;};

_bankAccount 								= _bankAccount select 0;

_display 									= findDisplay 97000;
_ctrl 										= [97004,97006,97118,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98133,98144,98177];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [98155,true];

_background_iPhone_X_background 			= _display displayCtrl 97002;
_iPhone_X_nameOffense = _display 			displayCtrl 98156;
_iPhone_X_phoneNumberOffense = _display 	displayCtrl 98157;
_iPhone_X_noteOffense = _display 			displayCtrl 98158;
_iPhone_X_totalAmende = _display 			displayCtrl 98159;
_iPhone_X_amende_01 = _display 				displayCtrl 98250;
_iPhone_X_amende_02 = _display 				displayCtrl 98252;
_iPhone_X_amende_03 = _display 				displayCtrl 98255;
_iPhone_X_amende_04 = _display 				displayCtrl 98257;
_iPhone_X_onTheRun = _display 				displayCtrl 98161;
_iPhone_X_date = _display 					displayCtrl 98162;
_iPhone_X_hour = _display 					displayCtrl 98163;
_iPhone_X_clock_home = _display 			displayCtrl 97500;

_background_iPhone_X_background 			ctrlSetText "unity_iPhone_X\iPhone_X_appAddContact.paa";
_iPhone_X_nameOffense 						ctrlSetText _name;
_iPhone_X_phoneNumberOffense 				ctrlSetText "Téléphone";
_iPhone_X_noteOffense 						ctrlSetText "Informations";
_iPhone_X_totalAmende 						ctrlSetText "0";
_iPhone_X_onTheRun 							ctrlSetText "N'est pas en cavale";
_iPhone_X_date 								ctrlSetText "jj/mm/aaaa";
_iPhone_X_hour 								ctrlSetText "hh:mm";
_iPhone_X_amende_01 						ctrlSetText ((life_amende select 0) select 0);
_iPhone_X_amende_02 						ctrlSetText ((life_amende select 1) select 0);
_iPhone_X_amende_03 						ctrlSetText ((life_amende select 2) select 0);
_iPhone_X_amende_04 						ctrlSetText ((life_amende select 3) select 0);
_iPhone_X_amende_01 						ctrlSetTextColor [0.737,0.027,0.027,1];
_iPhone_X_amende_02 						ctrlSetTextColor [0.737,0.027,0.027,1];
_iPhone_X_amende_03 						ctrlSetTextColor [0.737,0.027,0.027,1];
_iPhone_X_amende_04 						ctrlSetTextColor [0.737,0.027,0.027,1];
_iPhone_X_onTheRun 							ctrlSetTextColor [0.737,0.027,0.027,1];
_iPhone_X_clock_home 						ctrlSetTextColor [0,0,0,1];

life_valueAmendeTotal 						= 0;
life_amende_01 								= false;
life_amende_02 								= false;
life_amende_03 								= false;
life_amende_04 								= false;
life_onTheRun 								= false;

if (_bankAccount < 250000) then {[player, [1]] remoteExec ["unity_srv_fnc_iPhone_X_getValueAmende",2];};
if ((_bankAccount >= 250000) && (_bankAccount < 500000)) then {[player, [2]] remoteExec ["unity_srv_fnc_iPhone_X_getValueAmende",2];};
if ((_bankAccount >= 500000) && (_bankAccount < 750000)) then {[player, [3]] remoteExec ["unity_srv_fnc_iPhone_X_getValueAmende",2];};
if ((_bankAccount >= 750000) && (_bankAccount < 1000000)) then {[player, [4]] remoteExec ["unity_srv_fnc_iPhone_X_getValueAmende",2];};
if (_bankAccount >= 1000000) then {[player, [5]] remoteExec ["unity_srv_fnc_iPhone_X_getValueAmende",2];};
