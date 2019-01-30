/*
    File: fn_setupStationService.sqf
    Author: NiiRoZz
    Edit: BoGuu - Added Tanoa Stations

    Description:
    Add action fuel action in Station Service.

    put function in init file then execute it with:
    call getFuelpumps;
    getFuelpumps =
    {
        _pos = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
        _Station = nearestobjects [_pos,["Land_fs_feed_F","Land_FuelStation_Feed_F"], 25000];
        _br = toString [13, 10];
        _tab = toString [9];

        _TexteSortie = "_NiiRoZz_Station_Essence = [" + _br;

        {
            _Array = [getpos _x];
            _TexteSortie = _TexteSortie + _tab + (str _Array);
            _TexteSortie = if (_forEachIndex < ((count _Station) - 1)) then {_TexteSortie + ", " + _br} else {_TexteSortie + _br};
        } forEach _Station;
        _TexteSortie = _TexteSortie + "];";
        hint "Completed";
        copyToClipboard _TexteSortie;
    };
*/

private _lythiumPositions = [
	[10665.9,2819.03,3.43323e-005],
	[10672.7,2821.43,6.67572e-005],
	[12233.1,5564.88,1.14441e-005],
	[12237.1,5552.65,2.28882e-005],
	[12243,2594.16,-0.0883694],
	[12249.8,2594.37,-0.0431557],
	[12256.8,2594.46,-0.0877857],
	[17304.4,6219.65,0.138252],
	[17305.3,6226.47,0.193489],
	[17305.8,6233.41,0.0939064],
	[12961.8,17663.9,0],
	[12969,17663.9,0],
	[11411,6625.56,-0.0716858]
];

private _stationPositions = [[["Lythium", _lythiumPositions]]] call TON_fnc_terrainSort;

{
    private _pump = nearestObjects [_x,["Land_fs_feed_F","Land_FuelStation_01_pump_F","Land_FuelStation_02_pump_F"],5] select 0;
    _pump setFuelCargo 0;
    _pump addAction [localize "STR_Action_Pump", life_fnc_fuelStatOpen, 1, 3, true, true, "", '_this distance _target < 5 && cursorObject isEqualTo _target'];
    false
} count _stationPositions;
