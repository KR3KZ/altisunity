/*
    File: fn_iPhone_X_appCall.sqf
    Author: Neyzhak

    Description:
    Open app call

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_phoneNumber","_iPhone_X_clock_home"];
disableSerialization;

_display = findDisplay 97000;
_ctrl = [97004,97005,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,97115,97501,97503,97509,97800,97801,97805,98260];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;

ctrlShow [97517,true];

_ctrl2 = [97667,97663,97668,97664,97669,97665,97671,97672,97673,97674,97675,97676,97677,97678];

{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl2;

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;

_background_iPhone_X_background ctrlSetText "nolosharp_textures\phone\iPhone_X_appCall.paa";
_iPhone_X_clock_home ctrlSetTextColor [1,1,1,1];

_callSettings = player getVariable ["iPhone_X_callSettings", ""];

if !(isNil "_callSettings") then
{
	if !(_callSettings isEqualTo []) then
	{
			diag_log format["Je suis dans appCall.SQF et voila _callSettings %1",_callSettings];
		_display 								= findDisplay 97000;

		_iPhone_X_phoneNumber 	= _display displayCtrl 97661;
		_iPhone_X_informations 	= _display displayCtrl 97670;

		_phoneNumberContact 		= _callSettings select 1;
		_phoneNameContact 			= _callSettings select 2;
		_phoneCallInformation		= _callSettings select 3;

		_iPhone_X_phoneNumber ctrlSetText _phoneNameContact;
		_phoneNumberSendCall 		= player getVariable ["iPhone_X_phoneNumberSendCall",""];

		if ((_callSettings select 0) isEqualTo "1") then {
				ctrlShow [97667,true];
				ctrlShow [97663,true];
				buttonSetAction [97663, "_sound = player getVariable [""iPhone_X_soundCall"",""""]; if !(_sound isEqualTo []) then {deleteVehicle _sound;}; playsound ""endcall_sound""; [] spawn unity_fnc_iPhone_X_endCall; _phoneNumberContact = player getVariable [""iPhone_X_phoneNumberReceiveCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberContact] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[] remoteExec [""unity_fnc_iPhone_X_endCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
				_iPhone_X_informations ctrlSetText _phoneCallInformation;
		};

		if ((_callSettings select 0) isEqualTo "2") then {
			ctrlShow [97675,true];
			ctrlShow [97676,true];
			ctrlShow [97677,true];
			ctrlShow [97678,true];
			buttonSetAction [97676, "[player] spawn unity_fnc_iPhone_X_startCall; _phoneNumberSendCall = player getVariable [""iPhone_X_phoneNumberSendCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberSendCall] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[player] remoteExec [""unity_fnc_iPhone_X_startCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
			buttonSetAction [97678, "_sound = player getVariable [""iPhone_X_soundCall"",""""]; if !(_sound isEqualTo []) then {deleteVehicle _sound;}; playsound ""endcall_sound""; [] spawn unity_fnc_iPhone_X_endCall; _phoneNumberSendCall = player getVariable [""iPhone_X_phoneNumberSendCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberSendCall] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[] remoteExec [""unity_fnc_iPhone_X_endCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
			_iPhone_X_informations ctrlSetText _phoneCallInformation;
		};

		if ((_callSettings select 0) isEqualTo "3") then {
			ctrlShow [97667,true]; ctrlShow [97663,true]; ctrlShow [97668,true]; ctrlShow [97664,true]; ctrlShow [97669,true]; ctrlShow [97665,true]; ctrlShow [97671,true]; ctrlShow [97672,true]; ctrlShow [97673,true]; ctrlShow [97674,true];
			if (life_phoneNumberActive isEqualTo _phoneNumberSendCall) then {
				buttonSetAction [97663, "[] spawn unity_fnc_iPhone_X_endCall; _phoneNumberContact = player getVariable [""iPhone_X_phoneNumberReceiveCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberContact] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[] remoteExec [""unity_fnc_iPhone_X_endCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
			} else {
				buttonSetAction [97663, "[] spawn unity_fnc_iPhone_X_endCall; _phoneNumberSendCall = player getVariable [""iPhone_X_phoneNumberSendCall"",""""]; _exists = [iPhone_X_listNumberClient, _phoneNumberSendCall] call BIS_fnc_findNestedElement; if (!(_exists isEqualTo [])) then {[] remoteExec [""unity_fnc_iPhone_X_endCall"", ((iPhone_X_listNumberClient select (_exists select 0)) select 1)]};"];
			};

			_iPhone_X_informations ctrlSetText (_callSettings select 3);
			_hour 	= _callSettings select 4;
			_minute = _callSettings select 5;
			_second = _callSettings select 6;

			while {life_phoneInCall} do
			{
				_time = format["%1:%2:%3", if (_hour < 10) then {"0" + (str _hour)} else {_hour}, if (_minute < 10) then {"0" + (str _minute)} else {_minute}, if (_second < 10) then {"0" + (str _second)} else {_second}];
				_second = _second + 1;
				if (_second >= 60) then {_second = 0; _minute = _minute + 1};
				if (_minute >= 60) then {_minute = 0; _hour = _hour + 1};
				_iPhone_X_informations ctrlSetText _time;
				player setVariable ["iPhone_X_callSettings", ["3", _phoneNumberContact, _phoneNameContact, _time, _hour, _minute, _second]];
				sleep 1;
			};
		};
	}
	else
	{
			diag_log format["Je suis dans appCall.SQF  _callSettings est vide %1",_callSettings];
	};
}
else
{
	diag_log format["Je suis dans appCall.SQF mais je n'ai plus aucun _callSettings %1",_callSettings];
};
