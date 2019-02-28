/*
    File: fn_iPhone_X_appSwitchboard.sqf
    Author: Neyzhak

    Description:
    Open app switchboard

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_nameContact","_phoneNumberContact","_tmp","_ctrlList","_pos"];
disableSerialization;

_display 								= findDisplay 97000;
_ctrl 									= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [98260,true];

_background_iPhone_X_background 		= _display displayCtrl 97002;
_iPhone_X_clock_home 					= _display displayCtrl 97500;

_background_iPhone_X_background 		ctrlSetText "unity_iPhone_X\iPhone_X_appSwitchboard.paa";
_iPhone_X_clock_home 					ctrlSetTextColor [0,0,0,1];

if (life_phoneNumberActive isEqualTo []) exitWith {};

if !(isNil "life_phoneNumberActive") then {
	if ((playerSide == west) AND (call life_coplevel > 0)) then {[player] remoteExec ["unity_srv_fnc_iPhone_X_getSwitchboardPMC",2]; diag_log "------------- APP SB 1 -------------";};
	if ((playerSide == independent) AND (call life_mediclevel > 0)) then {[player] remoteExec ["unity_srv_fnc_iPhone_X_getSwitchboardIDAP",2]; diag_log "------------- APP SB 2 -------------";};
	if !(isNil "life_phoneNumberEnterprise") then
	{
		if ((life_phoneNumberEnterprise in life_phoneNumber_company || life_phoneNumberEnterprise in life_phoneNumber_services ) &&  playerSide == civilian) then {[player] remoteExec ["unity_srv_fnc_iPhone_X_getSwitchboardCOMPANY",2]; diag_log "------------- APP SB 3 -------------";};
	};
};
