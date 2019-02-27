/*
	File: fn_iPhone_X_newSMSEnterprise.sqf
	Author: Neyzhak

	Description:
	New SMS enterprise

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_phoneNumberContact","_result","_display","_ctrlDisplay","_ctrlGrp","_ctrlList","_fromNum","_toNum","_message","_type","_tmp","_textCtrl","_backgroundCtrl","_posGrp","_posTxt","_textHeight","_posBG","_tmpPos","_diff"];
disableSerialization;

diag_log str life_SMS;

{
	ctrlDelete _x;
} count (player getVariable ["iPhone_X_conversationSMS", []]);

_display = findDisplay 97000;
_ctrlDisplay = (_display displayCtrl 97510);
_ctrlGrp = (_ctrlDisplay controlsGroupCtrl 97511);
_ctrlList = [];

if (!(life_SMS isEqualTo [])) then {
	{
		_fromNum = _x select 0;
		_message = _x select 1;
		_position = _x select 2;
		_toFind = "<3";
		_replaceBy = "<img size='1' color='#FFFFFF' image='nolosharp_textures\phone\iPhone_X_emoji_ht.paa'/>";
		_numberCharToReplace = count _toFind;
		_numberFind = _message find _toFind;
		while {_numberFind != -1} do {
		_numberFind = _message find _toFind;
		if (_numberFind isEqualTo -1) exitWith {};
		_splitMessage = _message splitString "";
		_splitMessage deleteRange [(_numberFind +1), _numberCharToReplace -1];
		_splitMessage set [_numberFind, _replaceBy];
		_message = _splitMessage joinString "";
		};
		_message = format["<t color='#000000'>%1</t><br></br><t color='#F10000'>De : %2</t><br></br><t color='#F10000'>Position : %3</t>",_message, _fromNum, _position];
		_tmp = _display ctrlCreate ["iPhone_X_SMSEnterprise", -1, _ctrlGrp];
		_backgroundCtrl = (_tmp controlsGroupCtrl 98058);
		_textCtrl = (_tmp controlsGroupCtrl 98059);
		_tmp ctrlAddEventHandler ["MouseButtonDown",format ["[%1, '%2', '%3'] spawn unity_fnc_iPhone_X_appSMS;", _forEachIndex, _fromNum, _fromNum]];
		_textCtrl ctrlSetStructuredText parseText _message;
		_posGrp = ctrlPosition _tmp;
		_posBG = ctrlPosition _backgroundCtrl;
		_posTxt = ctrlPosition _textCtrl;
		_textHeight = ctrlTextHeight _textCtrl;

		if (!(_ctrlList isEqualTo [])) then {
			_tmpPos = ctrlPosition (_ctrlList select ((count _ctrlList) - 1));
			_posGrp set [1, ((_tmpPos select 1) + (_tmpPos select 3) + 0.001)];
		} else {
			_posGrp set [1, (_posGrp select 1) + 0.005];
		};

		if (_textHeight > (_posBG select 3)) then {
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

player setVariable ["iPhone_X_currentConversation", life_phoneNumberEnterprise];
player setVariable ["iPhone_X_conversationSMS", _ctrlList];

_ctrlGrp ctrlSetAutoScrollSpeed 0.000001;
_ctrlGrp ctrlSetAutoScrollDelay 0.000001;
sleep 0.2;
_ctrlGrp ctrlSetAutoScrollSpeed -1;
ctrlSetFocus _ctrlGrp;
