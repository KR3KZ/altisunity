/*
    File: fn_iPhone_X_appAddContact.sqf
    Author: Neyzhak

    Description:
    Open app add contact

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_nameConversation","_iPhone_X_phoneNumberConversation","_iPhone_X_clock_home"];
disableSerialization;

_display 							= findDisplay 97000;
_ctrl 								= [97004,97006,97007,97118,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97506];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97507,true];

_background_iPhone_X_background 	= _display displayCtrl 97002;
_iPhone_X_nameConversation 			= _display displayCtrl 97607;
_iPhone_X_phoneNumberConversation 	= _display displayCtrl 97608;
_iPhone_X_clock_home 				= _display displayCtrl 97500;

_background_iPhone_X_background 	ctrlSetText "unity_iPhone_X\iPhone_X_appAddConversations.paa";
_iPhone_X_nameConversation 			ctrlSetText "Identité";
_iPhone_X_phoneNumberConversation 	ctrlSetText "Numéro";
_iPhone_X_clock_home 				ctrlSetTextColor [0,0,0,1];
