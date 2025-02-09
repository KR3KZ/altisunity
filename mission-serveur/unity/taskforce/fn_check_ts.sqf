#include "..\..\script_macros.hpp"

private _ts 		= LIFE_SETTINGS(getText,"teamspeak");
private _channel 	= LIFE_SETTINGS(getText,"channel");

serverts 			= [] call TFAR_fnc_getTeamSpeakServerName;
channelts 			= [] call TFAR_fnc_getTeamSpeakChannelName;

life_tfr_plugin_disabled = !(call TFAR_fnc_isTeamSpeakPluginEnabled);

if(serverts != _ts) then {
		life_wrongTS = true;
	} else {
		life_wrongTS = false;
		if(channelts != _channel) then {
			life_wrongChan = true;
		} else {
			life_wrongChan = false;
		}
};
