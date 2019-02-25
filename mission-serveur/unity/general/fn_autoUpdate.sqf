//auto update
[] spawn {
	private["_nb"];
	_nb = 0;
	while {true} do {
		sleep 60;
		//[] call life_fnc_updateClothing;
		_nb = _nb+1;
		if(_nb == 5) then {
			[] call SOCK_fnc_updateRequest;
			_nb = 0;
		} else {
			//Silent pos Sync
			//[8] call SOCK_fnc_updatePartial;
		};
	};
};
