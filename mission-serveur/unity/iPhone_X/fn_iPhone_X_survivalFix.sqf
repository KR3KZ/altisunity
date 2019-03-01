_myPos     = getPos player;
_myRadio   = call TFAR_fnc_activeSwPhone;

if (typeName _myRadio == "STRING") then {
	if ((_myRadio find "tf_iPhone_") == -1) then {
		player setVariable ["myRadio", _myRadio, false];
	};
} else {
	player setVariable ["myRadio", false, false];
};
