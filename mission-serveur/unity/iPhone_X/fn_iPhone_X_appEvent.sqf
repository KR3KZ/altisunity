/*
    File: fn_iPhone_X_appEvent.sqf
    Author: Neyzhak

    Description:
    Open app event

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_ctrl","_background_iPhone_X_background","_iPhone_X_clock_home","_eventName","_eventDesc","_eventDate","_eventPrice","_eventPos","_tmp","_pos"];
disableSerialization;

_display 							= findDisplay 97000;
_ctrlDisplay 						= (_display displayCtrl 98270);
_ctrlGrp 							= (_ctrlDisplay controlsGroupCtrl 98271);
_ctrlList 							= [];
_ctrl 								= [97004,97118,97006,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98270,98290,98280,98281,98282,98283,98284,98285,98286,98287];
{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;
[player] remoteExec ["unity_srv_fnc_iPhone_X_getEvents",2];
sleep 0.5;
ctrlShow [98270,true];

_background_iPhone_X_background 	= _display displayCtrl 97002;
_iPhone_X_clock_home 				= _display displayCtrl 97500;

_background_iPhone_X_background 	ctrlSetText "unity_iPhone_X\iPhone_X_appEventList.paa";
_iPhone_X_clock_home 				ctrlSetTextColor [0,0,0,1];

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_events", []]);

if (!(life_events isEqualTo [])) then {
	{
        _eventName 					= str format["%1",_x select 0];
        _eventDesc 					= str format["%1",_x select 1];
        _eventDate 					= str format["Date: %1",_x select 2];
        _eventPrice 				= str format["Prix: %1",_x select 3];
        _eventPos 					= str format["Position: %1",_x select 4];
		_tmp 						= _display ctrlCreate ["iPhone_X_events", -1, _ctrlGrp];
		_ctrlList 					pushBack _tmp;
		_pos 						= ctrlPosition _tmp;
		_pos 						set [1, (_pos select 1) + (_pos select 3) * _forEachIndex];
		(_tmp controlsGroupCtrl 98061) ctrlSetText format["%1",_x select 0];
		(_tmp controlsGroupCtrl 98062) ctrlSetText format["Date: %1",_x select 2];
		(_tmp controlsGroupCtrl 98063) ctrlSetText format["Prix: %1",_x select 3];
		(_tmp controlsGroupCtrl 98064) ctrlSetText format["Position: %1",_x select 4];
		_tmp 						ctrlAddEventHandler ["MouseButtonDown",format ["[%1,%2,%3,%4,%5,%6] spawn unity_fnc_iPhone_X_appEventLoad;", _forEachIndex, _eventName, _eventDesc, _eventDate, _eventPrice, _eventPos]];
		_tmp 						ctrlSetPosition _pos;
		_tmp 						ctrlCommit 0;
	} forEach life_events;
};
player setVariable ["iPhone_X_events", _ctrlList];
