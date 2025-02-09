/*
    File: fn_setupEVH.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master eventhandler file
*/
player addEventHandler ["Killed", {_this spawn life_fnc_onPlayerKilled}];
//player addEventHandler ["HandleDamage", {_this call life_fnc_handleDamage}];
player addEventHandler ["Respawn", {_this spawn life_fnc_onPlayerRespawn}];
//player addEventHandler ["Take", {_this spawn life_fnc_onTakeItem}];
player addEventHandler ["Fired", {_this spawn life_fnc_onFired}];
player addEventHandler ["InventoryClosed", {_this spawn life_fnc_inventoryClosed}];
player addEventHandler ["InventoryOpened", {_this spawn life_fnc_inventoryOpened}];
player addEventHandler ["HandleRating", {0}];

addMissionEventHandler ["Map", {_this spawn life_fnc_checkMap}];
