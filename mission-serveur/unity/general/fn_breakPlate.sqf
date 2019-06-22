_vehicle = _this select 0;
[true,"boltCutter",-1] call life_fnc_handleInv;
_vehicle setVariable ["vehicle_plate_break",1,true];
hint "La plaque du véhicule à été effacée.";