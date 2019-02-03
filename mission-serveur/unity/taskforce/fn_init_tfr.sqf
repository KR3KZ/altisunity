#include "..\..\script_macros.hpp"

private _ts 								= LIFE_SETTINGS(getText,"teamspeak");
private _channel 							= LIFE_SETTINGS(getText,"channel");
private _pass 								= LIFE_SETTINGS(getText,"pass");

tf_radio_channel_name 						= _channel;
tf_radio_channel_password 					= _pass;

TF_terrain_interception_coefficient 		= 4.0;
TF_default_radioVolume 						= 9;

tf_west_radio_code 							= "_unity";
tf_east_radio_code 							= "_unity";
tf_guer_radio_code 							= "_unity";

TF_defaultWestPersonalRadio 				= "tf_anprc152";

TF_give_microdagr_to_soldier 				= false;
TF_give_personal_radio_to_regular_soldier 	= false;
TF_no_auto_long_range_radio 				= true;
TF_same_dd_frequencies_for_side 			= false;
TF_same_lr_frequencies_for_side 			= false;
TF_same_sw_frequencies_for_side 			= false;

serverts 									= [] call TFAR_fnc_getTeamSpeakServerName;
channelts 									= [] call TFAR_fnc_getTeamSpeakChannelName;

life_notTs 									= false;
life_wrongChan 								= false;
life_wrongTS 								= false;
