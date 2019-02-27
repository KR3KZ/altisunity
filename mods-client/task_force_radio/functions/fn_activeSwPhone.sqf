/*
 	Name: TFAR_fnc_activeSwPhone
 	
 	Author(s):
		NKey

 	Description:
		Returns the active SW radio.
	
	Parameters:
		Nothing
 	
 	Returns:
		STRING: Active SW radio
 	
 	Example:
		_radio = call TFAR_fnc_activeSwPhone;
*/
private ["_result"];
_result = nil;
{	
	if (_x call TFAR_fnc_isRadio) exitWith {_result = _x};
	true;
} count (assignedItems player);
if (isNil "_result") then {_result = false};
_result