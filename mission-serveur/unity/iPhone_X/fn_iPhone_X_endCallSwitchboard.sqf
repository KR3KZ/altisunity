/*
    File: iPhone_X_endCallSwitchboard.sqf
    Author: Neyzhak

    Description:
    End call switchboard

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_type","_display","_iPhone_X_phoneNumber","_fromNum"];
disableSerialization;

_fromNum = _this select 0;

if !(isNil "life_phoneNumberEnterprise") then
{
	if ((life_phoneNumberEnterprise in life_phoneNumber_company) || (life_phoneNumberEnterprise in life_phoneNumber_services)) then
	{
		_exists = [life_switchboard, _fromNum] call BIS_fnc_findNestedElement;

		if (!(_exists isEqualTo [])) then {
			life_switchboard = ([life_switchboard, (_exists select 0)] call BIS_fnc_removeIndex);
			if ((playerSide == west) AND (life_coplevel > 0)) then {[life_switchboard] remoteExec ["unity_srv_fnc_iPhone_X_setSwitchboardPMC",2];};
			if ((playerSide == independent) AND (life_mediclevel > 0)) then {[life_switchboard] remoteExec ["unity_srv_fnc_iPhone_X_setSwitchboardIDAP",2];};
			if (playerSide == civilian) then {[life_switchboard] remoteExec ["unity_srv_fnc_iPhone_X_setSwitchboardCOMPANY",2];};
		};
	};
};
