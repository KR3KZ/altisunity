#include "..\..\script_macros.hpp"

private _ts 		= LIFE_SETTINGS(getText,"teamspeak");
private _channel 	= LIFE_SETTINGS(getText,"channel");
private _pass 		= LIFE_SETTINGS(getText,"pass");

if(FETCH_CONST(life_adminlevel) < 1) then {
    [] spawn {
		    sleep 30;
        while {true} do
        {
      			waitUntil {life_wrongTs || life_wrongChan || life_tfr_plugin_disabled};

            if (life_tfr_plugin_disabled) then {
              0 cutText ["Merci d'activer le plugin TeamSpeak TASK FORCE RADIO ou vous serez éjecté après 5 minutes.","BLACK FADED"];
              0 cutFadeOut 99999999;
              disableUserInput true;

              [] spawn {
                  sleep 300;
                  if (life_tfr_plugin_disabled) then {
                      [] call SOCK_fnc_updateRequest;
                      sleep 2;
                      [player] remoteExec ["TON_fnc_cleanupRequest",2];
                      ["ChanTS", false, true] call BIS_fnc_endMission;
                  };
              };

              waitUntil {!life_tfr_plugin_disabled};
              disableUserInput false;
              0 cutText ["","BLACK IN"];
              hint "Merci de rester dans le channel TASK FORCE RADIO, bon jeu !";
            };

            if (life_wrongChan) then {
                0 cutText ["Merci de vous rendre sur le channel TASK FORCE RADIO pour pouvoir jouer ou vous serez éjecté après 5 minutes.","BLACK FADED"];
                0 cutFadeOut 99999999;
                disableUserInput true;

                [] spawn {
                    sleep 300;
                    if (life_wrongChan) then {
                        [] call SOCK_fnc_updateRequest;
                        sleep 2;
                        [player] remoteExec ["TON_fnc_cleanupRequest",2];
                        ["ChanTS", false, true] call BIS_fnc_endMission;
                    };
                };

                waitUntil {!life_wrongChan};
                disableUserInput false;
                0 cutText ["","BLACK IN"];
                hint "Merci de rester dans le channel TASK FORCE RADIO, bon jeu !";
            };

            if (life_wrongTS) then {
                hint "Le TASK FORCE RADIO est obligatoire ! Vous devez être sur notre onglet/serveur TeamSpeak pour jouer ! Vous serez immobilisé dans 30 secondes";
                sleep 30;
                0 cutText ["Merci de vous rendre sur le TeamSpeak Unity pour pouvoir jouer ou vous serez éjecté après 5 minutes.","BLACK FADED"];
                0 cutFadeOut 99999999;
                disableUserInput true;

                [] spawn {
                    sleep 300;
                    if (life_wrongTS) then {
                        [] call SOCK_fnc_updateRequest;
                        sleep 2;
                        //[[player], "TON_fnc_cleanupRequest", false] spawn life_fnc_MP;
                        [player] remoteExec ["TON_fnc_cleanupRequest",2];
                        ["ServerTs", false, true] call BIS_fnc_endMission;
                    };
                };

                waitUntil {!life_wrongTS};
                disableUserInput false;
                0 cutText ["","BLACK IN"];
                hint "Merci de rester dans le channel TASK FORCE RADIO, bon jeu !";
            };
        };
    };
};
