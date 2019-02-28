/*
	Author: Terra

	Description:
	 Substitute a certain part of a string with another string.

	Parameters:
	1: STRING - Source string
	2: STRING - Part to edit
		* ARRAY OF STRINGS - Multiple parts to edit
	3: STRING - Substitution
	4: (Optional) NUMBER - maximum substitutions
		* Default: 10
	5: (Optional) CASE - Enable maximum limit of substitutions (WARNING: Substituting an expression with the same expression will lead to infinite loops)
		* Default: true

	Returns: STRING
*/

_message 					= "Salut :)";

_toFind 					= ":)";
_replaceBy 					= "lol";

_numberCharToReplace 		= count _toFind;
_numberFind 				= _message find _toFind;

while {_numberFind != -1} do {
	_numberFind 	= _message find _toFind;
	if (_numberFind isEqualTo -1) exitWith {};
	_splitMessage 	= _message splitString "";
	_splitMessage 	deleteRange [(_numberFind +1), _numberCharToReplace -1];
	_splitMessage 	set [_numberFind, _replaceBy];
	_message 		= _splitMessage joinString "";
};

hint str _message;
