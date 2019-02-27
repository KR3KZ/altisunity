/*
    File: fn_iPhone_X_addEvent.sqf
    Author: Neyzhak

    Description:
    Add event

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private["_uid","_events","_nameEvent","_description","_price","_position","_day","_month","_hour","_minute","_currentYear","_currentDay","_currentMonth","_date","_company","_exit","_eventPrice"];
disableSerialization;
[0] call life_fnc_getRealDate;
while {life_currentDate select 0 == -1} do {};
_currentYear  =  life_currentDate select 2;
_currentDay   = life_currentDate select 0;
_currentMonth = life_currentDate select 1;

diag_log _currentYear;
diag_log _currentDay;
diag_log _currentMonth;


_display      = findDisplay 97000;

_uid          = getPlayerUID player;
_events       = life_events;
_nameEvent    = ctrlText 98291;
_description  = ctrlText 98296;
_price        = ctrlText  98295;
_position     = ctrlText 98297;
_day          = lbData[982901,(lbCurSel 982901)];
_month        = lbData[982902,(lbCurSel 982902)];
_hour         = lbData[982904,(lbCurSel 982904)];
_minute       = lbData[982905,(lbCurSel 982905)];
_company      = 0;
_date         = format ["%1-%2-%3 %4:%5", _currentYear,_month,_day,_hour,_minute];
_exit				  = false;
_eventPrice   = 100000;


if (_nameEvent in ["Nom de votre événement", ""]) exitWith {["Erreur de saisie","Le nom de votre évènement est obligaoire",[1, 0, 0, 1]] call life_fnc_showNotification;};
if (_description in ["Description", ""]) exitWith {["Erreur de saisie","Merci de donner une description à votre évènement pour pouvoir l'annoncer sur l'application",[1, 0, 0, 1]] call life_fnc_showNotification;};

if (_price call BIS_fnc_parseNumber == -1) exitWith {["Erreur de saisie","Merci d'indiquer un prix d'entrée, si votre évènement est gratuit alors mettez 0",[1, 0, 0, 1]] call life_fnc_showNotification;};
if (_price isEqualTo "Tarif") exitWith {["Erreur de saisie","Merci d'indiquer un prix d'entrée, si votre évènement est gratuit alors mettez 0",[1, 0, 0, 1]] call life_fnc_showNotification;};


if (_position call BIS_fnc_parseNumber == -1)exitWith {["Erreur de saisie","La position de l'évènement est obligatoire est être composé uniquement de chiffre",[1, 0, 0, 1]] call life_fnc_showNotification;};
if (count(toArray _position) != 6 )exitWith {["Erreur de saisie","La position de votre évènement semble invalide (Doit être composé de 6 chiffres, ex 163145)",[1, 0, 0, 1]] call life_fnc_showNotification;};
if (_position isEqualTo "Position") exitWith {["Erreur de saisie","La position de votre évènement semble invalide (Doit être composé de 6 chiffres, ex 163145)",[1, 0, 0, 1]] call life_fnc_showNotification;};




if (_currentMonth > parseNumber _month && parseNumber _month != 1)exitWith {["Erreur de saisie","La date que vous indiquez semble ou invalide, ou dans le passé, ou trop lointaine, merci de vérifier",[1, 0, 0, 1]] call life_fnc_showNotification;};
if (parseNumber _month == 1 && _currentMonth == 12)then{
        _currentYear = _currentYear+1
};
if(parseNumber _month == 1 && _currentYear == life_currentDate select 2)exitWith {["Erreur de saisie","La date que vous indiquez semble ou invalide, ou dans le passé, ou trop lointaine, merci de vérifier",[1, 0, 0, 1]] call life_fnc_showNotification;};
if(parseNumber _month == _currentMonth && parseNumber _day < _currentDay )exitWith {["Erreur de saisie","La date que vous indiquez semble ou invalide, ou dans le passé, ou trop lointaine, merci de vérifier",[1, 0, 0, 1]] call life_fnc_showNotification;};
if(parseNumber _month in [4,6,9,11] && parseNumber _day > 30) exitWith {["Erreur de saisie","La date que vous indiquez semble ou invalide, ou dans le passé, ou trop lointaine, merci de vérifier",[1, 0, 0, 1]] call life_fnc_showNotification;};
if( parseNumber _month isEqualTo 2 &&  ((  _currentYear%4 isEqualTo 0 &&   _currentYear%100 > 0)  ||  _currentYear%400 == 0 )&& parseNumber _day > 29)exitWith {["Erreur de saisie","La date que vous indiquez semble ou invalide, ou dans le passé, ou trop lointaine, merci de vérifier",[1, 0, 0, 1]] call life_fnc_showNotification;};
if( parseNumber _month isEqualTo 2 &&  (!( _currentYear%4 isEqualTo 0 &&   _currentYear%100 > 0)  ||  !(_currentYear%400 == 0))&& parseNumber _day > 28)exitWith {["Erreur de saisie","La date que vous indiquez semble ou invalide, ou dans le passé, ou trop lointaine, merci de vérifier",[1, 0, 0, 1]] call life_fnc_showNotification;};


//Prélevement de l'argent
if (_eventPrice > life_atmbank) then {
    if (_eventPrice > life_cash) then {
        _exit = true;
    } else {
        life_cash = life_cash - _eventPrice;
    };
} else {
    life_atmbank = life_atmbank - _eventPrice;
};

if (_exit) exitWith {
	["Création de l'évènement impossible", format["Vous devez posséder %1 € pour annoncer un évènement",_eventPrice], [0.333, 0.101, 0.545, 1]] call life_fnc_showNotification;
};


_events pushBack [_nameEvent, _description, _date,_price, _position];
[_uid, _nameEvent, _description, _price, _position , _date,_company] remoteExec ["unity_srv_fnc_iPhone_X_saveEvent",2];
[] call unity_fnc_iPhone_X_home;
