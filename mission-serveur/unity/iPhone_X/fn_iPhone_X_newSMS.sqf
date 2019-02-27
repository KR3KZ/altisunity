/*
	File: fn_iPhone_X_newSMS.sqf
	Author: Neyzhak

	Description:
	SMS

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_fromNum","_toNum","_message","_type","_tmp","_textCtrl","_backgroundCtrl","_posGrp","_posTxt","_textHeight","_posBG","_tmpPos","_diff","_datereception"];
disableSerialization;

diag_log str life_SMS;

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_conversationSMS", []]);

_display 			= findDisplay 97000;
_ctrlDisplay 	= (_display displayCtrl 97510);
_ctrlGrp 			= (_ctrlDisplay controlsGroupCtrl 97511);
_ctrlList 		= [];

if (!(life_SMS isEqualTo [])) then {
	{
		_fromNum 							= _x select 0;
		_toNum 								= _x select 1;
		_message 							= _x select 2;
		_datereception 				= _x select 3;
		_toFind 							= "<3";
		_replaceBy 						= "<img size='1' color='#FFFFFF' image='unity_iPhone_X\iPhone_X_emoji_ht.paa'/>";
		_numberCharToReplace = count _toFind;
		_numberFind = _message find _toFind;
		while {_numberFind != -1} do
		{
			_numberFind 		= _message find _toFind;
			if (_numberFind isEqualTo -1) exitWith {};
			_splitMessage 	= _message splitString "";
			_splitMessage deleteRange [(_numberFind +1), _numberCharToReplace -1];
			_splitMessage set [_numberFind, _replaceBy];
			_message 				= _splitMessage joinString "";
		};
		_message 					= format["<t color='#000000'>%1</t><br></br><t color='#008000' size='0.8' align='right'>%2</t>",_message,_datereception];
		_type							= ["iPhone_X_sendSMS", "iPhone_X_receiveSMS"] select ((_x select 1) == life_phoneNumberActive);
		_tmp 							= _display ctrlCreate [_type, -1, _ctrlGrp];
		_backgroundCtrl 	= (_tmp controlsGroupCtrl 98111);
		_textCtrl 				= (_tmp controlsGroupCtrl 98112);
		_textCtrl ctrlSetStructuredText parseText _message;
		_posGrp 					= ctrlPosition _tmp;
		_posBG 						= ctrlPosition _backgroundCtrl;
		_posTxt 					= ctrlPosition _textCtrl;
		_textHeight 			= ctrlTextHeight _textCtrl;

		if (!(_ctrlList isEqualTo [])) then
		{
			_tmpPos = ctrlPosition (_ctrlList select ((count _ctrlList) - 1));
			_posGrp set [1, ((_tmpPos select 1) + (_tmpPos select 3) + 0.001)];
		}
		else
		{
			_posGrp set [1, (_posGrp select 1) + 0.005];
		};

		if (_textHeight > (_posBG select 3)) then
		{
			_diff = (_textHeight - (_posBG select 3));
			_posGrp set [3, ((_posGrp select 3) + _diff)];
			_posBG set [3, ((_posBG select 3) + _diff)];
			_posTxt set [3, ((_posTxt select 3) + (_diff))];
			_posTxt set [1, (((_posBG select 3) / 2) - ((_posTxt select 3) / 2))];
		};

		_tmp ctrlSetPosition _posGrp;
		_textCtrl ctrlSetPosition _posTxt;
		_backgroundCtrl ctrlSetPosition _posBG;
		_tmp ctrlCommit 0;
		_textCtrl ctrlCommit 0;
		_backgroundCtrl ctrlCommit 0;
		_ctrlList pushBack _tmp;
	} forEach life_SMS;
};

player setVariable ["iPhone_X_conversationSMS", _ctrlList];

_display 			= findDisplay 97000;
_ctrlDisplay 	= (_display displayCtrl 97510);
_ctrlGrp 			= (_ctrlDisplay controlsGroupCtrl 97511);

_ctrlGrp ctrlSetAutoScrollSpeed 0.000001;
_ctrlGrp ctrlSetAutoScrollDelay 0.000001;
sleep 0.2;
_ctrlGrp ctrlSetAutoScrollSpeed -1;
ctrlSetFocus _ctrlGrp;
