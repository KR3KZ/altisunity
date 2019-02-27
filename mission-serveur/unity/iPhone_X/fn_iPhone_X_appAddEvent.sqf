#include "..\..\script_macros.hpp"
/*
    File: fn_iPhone_X_appAddEvent.sqf

    Author: Neyzhak

    Description: Open app add event

*/
private["_display","_ctrl","_background_iPhone_X_background","_iPhone_X_nameContact","_iPhone_X_phoneNumberContact","_iPhone_X_clock_home","_comboJours","_comboMois","_comboAnnee","_comboHeure","_comboMinutes"];
disableSerialization;

_comboJours = CONTROL(97000,982901);
lbClear _comboJours;
for [{_i=1}, {_i<32}, {_i=_i+1}] do
{
    if(_i<10)then{
        _comboJours lbAdd format ["%1",(str 0 +str _i)];
        _comboJours lbSetData [(lbSize _comboJours)-1,(str 0 +str _i)];
    }else{
        _comboJours lbAdd format ["%1",_i];
        _comboJours lbSetData [(lbSize _comboJours)-1,str(_i)];
    };
};
lbSort [_comboJours, "ASC"];

_comboMois = CONTROL(97000,982902);
lbClear _comboMois;
for [{_i=1}, {_i<13}, {_i=_i+1}] do
{
    if(_i<10)then{
        _comboMois lbAdd format ["%1",(str 0 +str _i)];
        _comboMois lbSetData [(lbSize _comboMois)-1,(str 0 +str _i)];
    }else{
        _comboMois lbAdd format ["%1",_i];
        _comboMois lbSetData [(lbSize _comboMois)-1,str(_i)];
    };
};
lbSort [_comboMois, "ASC"];

_comboHeure = CONTROL(97000,982904);
lbClear _comboHeure;
for [{_i=0}, {_i<24}, {_i=_i+1}] do
{
    if(_i<10)then{
        _comboHeure lbAdd format ["%1",(str 0 +str _i)];
        _comboHeure lbSetData [(lbSize _comboHeure)-1,(str 0 +str _i)];
    }else{
        _comboHeure lbAdd format ["%1",_i];
        _comboHeure lbSetData [(lbSize _comboHeure)-1,str(_i)];
    };
};
lbSort [_comboHeure, "ASC"];

_combMinutes = CONTROL(97000,982905);
lbClear _combMinutes;
for [{_i=0}, {_i<60}, {_i=_i+1}] do
{
    if(_i<10)then{
        _combMinutes lbAdd format ["%1",(str 0 +str _i)];
        _combMinutes lbSetData [(lbSize _combMinutes)-1,(str 0 +str _i)];
    }else{
        _combMinutes lbAdd format ["%1",_i];
        _combMinutes lbSetData [(lbSize _combMinutes)-1,str(_i)];
    };
};
lbSort [_combMinutes, "ASC"];


_display = findDisplay 97000;

_ctrl = [97004,97006,97118,97007,97008,97009,97010,97011,97012,97013,97014,97015,97016,97017,97106,97107,97108,97109,97110,97111,97112,97113,97117,98270];
{
	(_display displayCtrl _x) ctrlShow false;
} forEach _ctrl;


lbSetCurSel [982905,0];
lbSetCurSel [982904,0];

//Affichage Fenêtre
ctrlShow [98290,true];
//Affichage Jours
ctrlShow [982901,true];
//Affichage Mois
ctrlShow [982902,true];
//Affichage Année
ctrlShow [982903,true];
//Affichage Heure
ctrlShow [982904,true];
//Affichage Mins
ctrlShow [982905,true];

_background_iPhone_X_background = _display displayCtrl 97002;
_iPhone_X_clock_home = _display displayCtrl 97500;
_iPhone_X_nameEvent = _display displayCtrl 98291;
_iPhone_X_description = _display displayCtrl 98296;
_iPhone_X_price = _display displayCtrl 98295;
_iPhone_X_position = _display displayCtrl 98297;


_background_iPhone_X_background ctrlSetText "unity_iPhone_X\iPhone_X_appAddEvent.paa";
_iPhone_X_clock_home ctrlSetTextColor [0,0,0,1];
_iPhone_X_nameEvent ctrlSetText "Votre événement";
_iPhone_X_description ctrlSetText "Description";
_iPhone_X_position ctrlSetText "Position";
_iPhone_X_price ctrlSetText "Tarif";
