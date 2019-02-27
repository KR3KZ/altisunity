/*
	File: fn_iPhone_X_callSwitchboard.sqf
	Author: Neyzhak

	Description:
	Call switchboard

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_phoneNumberActive","_ownerID","_playerUID","_queryDelete","_queryAdd","_resultAdd","_position","_fromsecond"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_phoneNumberActive = [_this,1,"",[""]] call BIS_fnc_param;
_phoneNumberContact = [_this,2,"",[""]] call BIS_fnc_param;
_fromsecond = [_this,3,"",[""]] call BIS_fnc_param;

if (isNil "_unit" || _phoneNumberActive isEqualTo "" || _phoneNumberContact isEqualTo "") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
_position = mapGridPosition _unit;

if (_playerUID == "") exitWith {};

if (_phoneNumberActive isEqualTo _fromsecond) then {
      _position = "Position Brouillée";
};

diag_log "------------- CALL SB -------------";
diag_log format ["Result : %1, %2, %3", _ownerID, _phoneNumberActive, _phoneNumberContact];
diag_log "-----------------------------------------";

//bluefor
if (_phoneNumberContact isEqualTo "60") then {
  iPhone_X_switchboardPMC pushBack [_ownerID, _phoneNumberActive, date, _phoneNumberContact];
  [_phoneNumberActive, _phoneNumberContact, _position] remoteExec ["unity_fnc_iPhone_X_switchboardReceive", west];
  [iPhone_X_switchboardPMC] remoteExec ["unity_fnc_iPhone_X_switchboardSend", _ownerID];
  diag_log "------------- CALL SB PMC -------------";
};
//medic
if (_phoneNumberContact isEqualTo "66") then {
  iPhone_X_switchboardIDAP pushBack [_ownerID, _phoneNumberActive, date, _phoneNumberContact];
  [_phoneNumberActive, _phoneNumberContact, _position] remoteExec ["unity_fnc_iPhone_X_switchboardReceive", independent];
  [iPhone_X_switchboardIDAP] remoteExec ["unity_fnc_iPhone_X_switchboardSend", _ownerID];
  diag_log "------------- CALL SB IDAP -------------";
};
//company
if ((_phoneNumberContact in life_phoneNumber_company || _phoneNumberContact in life_phoneNumber_services) && !(_phoneNumberContact in ["60","66"]))  then {
  iPhone_X_switchboardCOMPANY pushBack [_ownerID, _phoneNumberActive, date, _phoneNumberContact];
  [_phoneNumberActive, _phoneNumberContact, _position] remoteExec ["unity_fnc_iPhone_X_switchboardReceive", civilian];
  [iPhone_X_switchboardCOMPANY] remoteExec ["unity_fnc_iPhone_X_switchboardSend", _ownerID];
  diag_log "------------- CALL COMPANY -------------";
};
