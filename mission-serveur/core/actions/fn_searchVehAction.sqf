#include "..\..\script_macros.hpp"
/*
    File: fn_searchVehAction.sqf
    Author:

    Description:

*/
private _vehicle = cursorObject;

if ((_vehicle isKindOf "Car") || !(_vehicle isKindOf "Air") || !(_vehicle isKindOf "Ship")) then {
    _owners = _vehicle getVariable "vehicle_info_owners";
    if (isNil "_owners") exitWith {hint localize "STR_NOTF_VehCheat"; deleteVehicle _vehicle;};

    life_action_inUse = true;
    hint localize "STR_NOTF_Searching";

    sleep 3;
    life_action_inUse = false;

    if (player distance _vehicle > 10 || !alive player || !alive _vehicle) exitWith {hint localize "STR_NOTF_SearchVehFail";};

    if (_vehicle getVariable ["vehicle_plate_break", 0] != 0) exitWith {
        hint parseText format [localize "STR_NOTF_SearchVeh","Plaque illisible..."];
    };

    _owners = [_owners] call life_fnc_vehicleOwners;

    if (_owners == "any<br/>") then {
        _owners = "No owners, impound it<br/>";
    };
    hint parseText format [localize "STR_NOTF_SearchVeh",_owners];
};
