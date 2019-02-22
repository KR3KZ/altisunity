private _bodypart				= ["head", "body", "hand_l", "hand_r", "leg_l", "leg_r"];
private _contaminationEffect  	= ppEffectCreate ["ColorCorrections",8510];

if (player inArea "radioactive" && !(player getVariable ["ACE_isUnconscious", false])) then {
	_blood              = player getVariable ["ACE_medical_bloodVolume",100];
	_body               = _bodypart select floor random 6;
	_contaminationEffect ppEffectEnable true;
	_contaminationEffect ppEffectAdjust [1,1,0,[0,0.2,0,0.12],[1,1,1,1],[0.33,0.33,0.33,0],[0,0,0,0,0,0,4]];
	_contaminationEffect ppEffectCommit 10;

	if (_blood > 45) then {
		_blood			= _blood - 1;
		player setVariable["ACE_medical_bloodVolume",_blood,true];
		hint format ["Vous êtes dans une zone contaminé, votre état de santé se dégrade."];
	}
	else {
		_blood			= _blood - 0.5;
		player setVariable["ACE_medical_bloodVolume",_blood,true];
		[player, 0.04, _body, "bullet"] call ace_medical_fnc_addDamageToUnit;
		hint format ["Vos jours sont en danger, sortez le plus rapidement de la zone contaminée."];
	};

	[1] spawn life_fnc_hudUpdate;
	_contaminationEffect ppEffectEnable false;
};
