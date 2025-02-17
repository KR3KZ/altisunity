
class CBA_Extended_EventHandlers;

class CfgVehicles {
    class ACE_Module;
    class ACE_ModuleInteraction: ACE_Module {
        author = ECSTRING(common,ACETeam);
        category = "ACE";
        displayName = CSTRING(Module_DisplayName);
        function = QFUNC(moduleInteraction);
        scope = 1;
        isGlobal = 1;
        isSingular = 1;
        icon = QPATHTOF(UI\Icon_Module_Interaction_ca.paa);
        class Arguments {
            class EnableTeamManagement {
                displayName = CSTRING(EnableTeamManagement_DisplayName);
                description = CSTRING(EnableTeamManagement_Description);
                typeName = "BOOL";
                defaultValue = 1;
            };
            class DisableNegativeRating {
                displayName = CSTRING(DisableNegativeRating_DisplayName);
                description = CSTRING(DisableNegativeRating_Description);
                typeName = "BOOL";
                defaultValue = 0;
            };
        };
        class ModuleDescription {
            description = CSTRING(Module_Description);
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                distance = 4;
                condition = QUOTE(true);
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                selection = "pelvis";

                class ACE_UNITY_promo  {
                    displayName = "Gérer grade";
                    condition = "!(playerSide isEqualTo civilian) && {alive _target}";
                    statement = "";
                    showDisabled = 0;
                    priority = 9.5;
                    class ACE_UNITY_promote {
                        displayName = "Accorder une promotion";
                        distance = 4;
                        condition = "[_player,_target] call unity_ace_fnc_canPromote";
                        statement = "[_target,'prom'] remoteExecCall [""unity_fnc_recProm"",_target]";
                        showDisabled = 0;
                        priority = 9;
                    };
                    class ACE_UNITY_demote {
                        displayName = "Rétrograder";
                        distance = 4;
                        condition = "[_player,_target] call unity_ace_fnc_canDemote";
                        statement = "[_target,'dem'] remoteExecCall [""unity_fnc_recProm"",_target]";
                        showDisabled = 0;
                        priority = 9;
                    };
                };

                class ACE_UNITY_showMenu {
                    displayName = "Montrer";
                    condition = "";
                    statement = "";
                    showDisabled = 0;
                    priority = 9.5;

                    class ACE_UNITY_showID_eii {
                        displayName = "Carte d'identité E.I.I";
                        distance = 4;
                        condition = "_target isKindOf 'Man' && {alive _target} && {!(_target getVariable [""ACE_isUnconscious"", false])} && ""yl_Item_civcard_eii"" in items player";
                        statement = "[_target,'civ_eii'] spawn life_fnc_showCard";
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 0;
                        priority = 9;
                    };

                    class ACE_UNITY_showLicenses {
                        displayName = "Licences";
                        condition = "side _target isEqualTo west";
                        statement = "[_target] remoteExecCall [""life_fnc_licenseCheck"",player];";
                        showDisabled = 0;
                        priority = 7;
                        distance = 2.0;
                    };
                };

                class ACE_PassMagazine {
                    displayName = CSTRING(PassMagazine);
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargomag_ca.paa";

                    class ACE_PassMagazinePrimary {
                        displayName = CSTRING(PassMagazinePrimary);
                        condition = QUOTE([ARR_3(_player,_target,primaryWeapon _target)] call FUNC(canPassMagazine));
                        statement = QUOTE([ARR_3(_player,_target,primaryWeapon _target)] call FUNC(passMagazine));
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 0;
                        icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryweapon_ca.paa";
                    };
                    class ACE_PassMagazineHandgun {
                        displayName = CSTRING(PassMagazineHandgun);
                        condition = QUOTE([ARR_3(_player,_target,handgunWeapon _target)] call FUNC(canPassMagazine));
                        statement = QUOTE([ARR_3(_player,_target,handgunWeapon _target)] call FUNC(passMagazine));
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 0;
                        icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
                    };
                };

                class ACE_TeamManagement {
                    displayName = CSTRING(TeamManagement);
                    condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canJoinTeam) && {GVAR(EnableTeamManagement)});
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = QPATHTOF(UI\team\team_management_ca.paa);

                    class ACE_AssignTeamRed {
                        displayName = CSTRING(AssignTeamRed);
                        condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canJoinTeam));
                        statement = QUOTE([ARR_2(_target,'RED')] call DFUNC(joinTeam));
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 1;
                        icon = QPATHTOF(UI\team\team_red_ca.paa);
                    };
                    class ACE_AssignTeamGreen {
                        displayName = CSTRING(AssignTeamGreen);
                        condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canJoinTeam));
                        statement = QUOTE([ARR_2(_target,'GREEN')] call DFUNC(joinTeam));
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 1;
                        icon = QPATHTOF(UI\team\team_green_ca.paa);
                    };
                    class ACE_AssignTeamBlue {
                        displayName = CSTRING(AssignTeamBlue);
                        condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canJoinTeam));
                        statement = QUOTE([ARR_2(_target,'BLUE')] call DFUNC(joinTeam));
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 1;
                        icon = QPATHTOF(UI\team\team_blue_ca.paa);
                    };
                    class ACE_AssignTeamYellow {
                        displayName = CSTRING(AssignTeamYellow);
                        condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canJoinTeam));
                        statement = QUOTE([ARR_2(_target,'YELLOW')] call DFUNC(joinTeam));
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 1;
                        icon = QPATHTOF(UI\team\team_yellow_ca.paa);
                    };
                    class ACE_UnassignTeam {
                        displayName = CSTRING(LeaveTeam);
                        condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canJoinTeam) && {assignedTeam _target != 'MAIN'});
                        statement = QUOTE([ARR_2(_target,'MAIN')] call DFUNC(joinTeam));
                        exceptions[] = {"isNotSwimming"};
                        showDisabled = 1;
                        icon = QPATHTOF(UI\team\team_white_ca.paa);
                    };
                };
				/*
                class ACE_JoinGroup {
                    displayName = CSTRING(JoinGroup);
                    condition = QUOTE(GVAR(EnableTeamManagement) && {[ARR_2(_player,_target)] call DFUNC(canJoinGroup)});
                    statement = QUOTE([_player] joinSilent group _target);
                    modifierFunction = QUOTE(call FUNC(modifyJoinGroupAction));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = QPATHTOF(UI\team\team_management_ca.paa);
                };
                class ACE_GetDown {
                    displayName = CSTRING(GetDown);
                    condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canInteractWithCivilian));
                    statement = QUOTE([ARR_2(_player,_target)] call DFUNC(getDown));
                    showDisabled = 0;
                };
                class ACE_SendAway {
                    displayName = CSTRING(SendAway);
                    condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canInteractWithCivilian));
                    statement = QUOTE([ARR_2(_player,_target)] call DFUNC(sendAway));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
				*/
                class ACE_Pardon {
                    displayName = CSTRING(Pardon);
                    condition = QUOTE([ARR_2(_player,_target)] call DFUNC(canPardon));
                    statement = QUOTE([ARR_2(_player,_target)] call DFUNC(pardon));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class ACE_GetOut {
                    displayName = CSTRING(GetOut);
                    condition = QUOTE(!(isNull objectParent _target) && [ARR_2(_player,_target)] call DFUNC(canInteractWithCivilian));
                    statement = QUOTE([_target] call EFUNC(common,unloadPerson));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };

                class GVAR(PullOutBody) {
                    displayName = CSTRING(PullOutBody);
                    condition = QUOTE(call DFUNC(canPullOutBody));
                    statement = QUOTE(call DFUNC(pullOutBody));
                    exceptions[] = {"isNotSwimming"};
                    icon = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\getout_ca.paa";
                };
            };

            class ACE_Torso {
                displayName = CSTRING(Torso);
                selection = "spine3";
                distance = 1.50;
                condition = "";
                statement = "";
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_Head {
                displayName = CSTRING(Head);
                selection = "pilot";
                distance = 1.50;
                condition = "";
                statement = "";
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_ArmLeft {
                displayName = CSTRING(ArmLeft);
                selection = "LeftForeArm";
                distance = 1.50;
                condition = "";
                statement = "";
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_ArmRight {
                displayName = CSTRING(ArmRight);
                selection = "RightForeArm";
                distance = 1.50;
                condition = "";
                statement = "";
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_LegLeft {
                displayName = CSTRING(LegLeft);
                selection = "LKnee";
                distance = 1.50;
                condition = "";
                statement = "";
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_LegRight {
                displayName = CSTRING(LegRight);
                selection = "RKnee";
                distance = 1.50;
                condition = "";
                statement = "";
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_Weapon {
                displayName = CSTRING(Weapon);
                position = QUOTE(call DFUNC(getWeaponPos));
                distance = 1.50;
                condition = "";
                statement = "";
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_TapShoulderRight {
                displayName = CSTRING(TapShoulder);
                selection = "rightshoulder";
                distance = 2.0;
                condition = QUOTE([ARR_2(_player, _target)] call DFUNC(canTapShoulder));
                statement = QUOTE([ARR_3(_player, _target, 0)] call DFUNC(tapShoulder));
                exceptions[] = {"isNotSwimming"};
            };
            class ACE_TapShoulderLeft {
                displayName = CSTRING(TapShoulder);
                selection = "leftshoulder";
                distance = 2.0;
                condition = QUOTE([ARR_2(_player, _target)] call DFUNC(canTapShoulder));
                statement = QUOTE([ARR_3(_player, _target, 1)] call DFUNC(tapShoulder));
                exceptions[] = {"isNotSwimming"};
            };
        };

        class ACE_SelfActions {
            class ACE_TeamManagement {
                displayName = CSTRING(TeamManagement);
                condition = QUOTE(GVAR(EnableTeamManagement));
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement = "";
                showDisabled = 1;
                icon = QPATHTOF(UI\team\team_management_ca.paa);

                class ACE_JoinTeamRed {
                    displayName = CSTRING(JoinTeamRed);
                    condition = QUOTE(true);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    statement = QUOTE([ARR_2(_player,'RED')] call DFUNC(joinTeam));
                    showDisabled = 1;
                    icon = QPATHTOF(UI\team\team_red_ca.paa);
                };
                class ACE_JoinTeamGreen {
                    displayName = CSTRING(JoinTeamGreen);
                    condition = QUOTE(true);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    statement = QUOTE([ARR_2(_player,'GREEN')] call DFUNC(joinTeam));
                    showDisabled = 1;
                    icon = QPATHTOF(UI\team\team_green_ca.paa);
                };
                class ACE_JoinTeamBlue {
                    displayName = CSTRING(JoinTeamBlue);
                    condition = QUOTE(true);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    statement = QUOTE([ARR_2(_player,'BLUE')] call DFUNC(joinTeam));
                    showDisabled = 1;
                    icon = QPATHTOF(UI\team\team_blue_ca.paa);
                };
                class ACE_JoinTeamYellow {
                    displayName = CSTRING(JoinTeamYellow);
                    condition = QUOTE(true);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    statement = QUOTE([ARR_2(_player,'YELLOW')] call DFUNC(joinTeam));
                    showDisabled = 1;
                    icon = QPATHTOF(UI\team\team_yellow_ca.paa);
                };
                class ACE_LeaveTeam {
                    displayName = CSTRING(LeaveTeam);
                    condition = QUOTE(assignedTeam _player != 'MAIN');
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    statement = QUOTE([ARR_2(_player,'MAIN')] call DFUNC(joinTeam));
                    showDisabled = 1;
                    icon = QPATHTOF(UI\team\team_white_ca.paa);
                };
                class ACE_BecomeLeader {
                    displayName = CSTRING(BecomeLeader);
                    condition = QUOTE(_this call DFUNC(canBecomeLeader));
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    statement = QUOTE(_this call DFUNC(doBecomeLeader));
                    showDisabled = 1;
                    icon = QPATHTOF(UI\team\team_white_ca.paa);
                };
                class ACE_LeaveGroup {
                    displayName = CSTRING(LeaveGroup);
                    condition = QUOTE(count (units group _player) > 1);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    statement = QUOTE(_oldGroup = units group _player; _newGroup = createGroup side _player; [_player] joinSilent _newGroup; {_player reveal _x} forEach _oldGroup;);
                    showDisabled = 1;
                    icon = QPATHTOF(UI\team\team_management_ca.paa);
                };
            };

            class ACE_Equipment {
                displayName = CSTRING(Equipment);
                condition = QUOTE(true);
                exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                statement = "";
                showDisabled = 1;
                icon = "";  // @todo
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                position = QUOTE(call DFUNC(getVehiclePos));
                selection = "";
                distance = 4;
                condition = "true";
                class ACE_Passengers {
                    displayName = CSTRING(Passengers);
                    condition = QUOTE(alive _target);
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
                };
				class ACE_unity_inspectVehicle {
                    displayName = "Inspecter état";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {([_target] call life_fnc_isDamaged)}";
                    statement = "[_target] spawn unity_fnc_check_vehicle";
                    showDisabled = 0;
                };
				class ACE_unity_lockpick {
                    displayName = "Crocheter le véhicule";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_lockpick > 0)}";
                    statement = "[_target] spawn life_fnc_lockpick";
                    showDisabled = 0;
                };
				class ACE_unity_unflipVehicle {
                    displayName = "$STR_vInAct_Unflip";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {!(typeOf (_target) in [""C_Kart_01_Blu_F"",""C_Kart_01_Red_F"",""C_Kart_01_Fuel_F"",""C_Kart_01_Vrana_F""])} && {!(canMove _target)} && {count crew _target == 0}";
                    statement = "_target setPos [getPos _target select 0, getPos _target select 1, (getPos _target select 2)+0.5];";
                };
                class ACE_unity_breakPlate {
                    displayName = "Effacer la plaque d'immatriculation";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_boltCutter > 0)}";
                    statement = "[_target] spawn unity_fnc_breakPlate";
                    showDisabled = 0;
                };
				class Cop_vehInterraction {
                    displayName = "Interaction Milice";
                    condition = "(playerSide isEqualTo west) && alive _target";
                    statement = "";
                    showDisabled = 0;
                    priority = 4.2;
                    class Cop_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Cop_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
					/*
                    class Cop_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Cop_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
					*/
                };
				class Med_vehInteraction {
                    displayName = "Interaction Médecin";
                    condition = "playerSide isEqualTo independent && (alive _target)";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class Med_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Med_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                };
				class Admin_vehInteraction {
                    displayName = "Interaction Admin";
                    condition = "(alive _target) && (!isNil ""life_adminlevel"") && {(call life_adminlevel) > 0}";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class AdminDriver {
                        displayName = "Admin Driver";
                        distance = 4.0;
                        priority = 1.0;
                        condition = "";
                        statement = "_target lock false; player action [""getInDriver"", _target]; _target lock true;";
                    };
                    class AdminPassenger {
                        displayName = "Admin Passager";
                        distance = 4.0;
                        priority = 1.1;
                        condition = "";
                        statement = "_target lock false; player action [""getInCargo"", _target]; _target lock true;";
                    };
                    class AdminGunner {
                        displayName = "Admin Gunner";
                        distance = 4.0;
                        priority = 1.2;
                        condition = "";
                        statement = "_target lock false; player action [""getInGunner"", _target]; _target lock true;";
                    };
                    class Admin_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        priority = 1.3;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Admin_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        priority = 1.4;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                    class Admin_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Admin_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
                };
            };
        };

        class ACE_SelfActions {
            class ACE_Passengers {
                displayName = CSTRING(Passengers);
                condition = QUOTE(alive _target);
                statement = "";
                insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
            };
            class GVAR(smashWindshield) {
                displayName = CSTRING(SmashWindshield);
                condition = QUOTE(_player == driver _target && {private _damage = _target getHitPointDamage 'HitGlass1'; _damage > 0.5 && {_damage < 1}});
                statement = QUOTE(playSound3D [ARR_2('A3\Sounds_F\weapons\hits\glass_2.wss',_target)]; _target setHitPointDamage [ARR_2('HitGlass1',1)];);
            };
        };
    };

    class Car_F: Car{};
    class Quadbike_01_base_F: Car_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class GVAR(flip) {
                    displayName = CSTRING(Flip);
                    condition = QUOTE(call DFUNC(canFlip));
                    statement = QUOTE([ARR_3(QQGVAR(flip),_target,_target)] call CBA_fnc_targetEvent);
                };
                class GVAR(push) {
                    displayName = CSTRING(Push);
                    condition = QUOTE(_target call FUNC(canPush));
                    statement = QUOTE(call FUNC(push));
                };
				class ACE_unity_inspectVehicle {
                    displayName = "Inspecter état";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {([_target] call life_fnc_isDamaged)}";
                    statement = "[_target] spawn unity_fnc_check_vehicle";
                    showDisabled = 0;
                };
				class ACE_unity_lockpick {
                    displayName = "Crocheter le véhicule";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_lockpick > 0)}";
                    statement = "[_target] spawn life_fnc_lockpick";
                    showDisabled = 0;
                };
				class ACE_unity_unflipVehicle {
                    displayName = "$STR_vInAct_Unflip";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {!(typeOf (_target) in [""C_Kart_01_Blu_F"",""C_Kart_01_Red_F"",""C_Kart_01_Fuel_F"",""C_Kart_01_Vrana_F""])} && {!(canMove _target)} && {count crew _target == 0}";
                    statement = "_target setPos [getPos _target select 0, getPos _target select 1, (getPos _target select 2)+0.5];";
                };
                class ACE_unity_breakPlate {
                    displayName = "Effacer la plaque d'immatriculation";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_boltCutter > 0)}";
                    statement = "[_target] spawn unity_fnc_breakPlate";
                    showDisabled = 0;
                };
				class Cop_vehInterraction {
                    displayName = "Interaction Milice";
                    condition = "(playerSide isEqualTo west) && alive _target";
                    statement = "";
                    showDisabled = 0;
                    priority = 4.2;
                    class Cop_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Cop_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
					/*
                    class Cop_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Cop_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
					*/
                };
				class Med_vehInteraction {
                    displayName = "Interaction Médecin";
                    condition = "playerSide isEqualTo independent && (alive _target)";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class Med_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Med_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                };
				class Admin_vehInteraction {
                    displayName = "Interaction Admin";
                    condition = "(alive _target) && (!isNil ""life_adminlevel"") && {(call life_adminlevel) > 0}";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class AdminDriver {
                        displayName = "Admin Driver";
                        distance = 4.0;
                        priority = 1.0;
                        condition = "";
                        statement = "_target lock false; player action [""getInDriver"", _target]; _target lock true;";
                    };
                    class AdminPassenger {
                        displayName = "Admin Passager";
                        distance = 4.0;
                        priority = 1.1;
                        condition = "";
                        statement = "_target lock false; player action [""getInCargo"", _target]; _target lock true;";
                    };
                    class AdminGunner {
                        displayName = "Admin Gunner";
                        distance = 4.0;
                        priority = 1.2;
                        condition = "";
                        statement = "_target lock false; player action [""getInGunner"", _target]; _target lock true;";
                    };
                    class Admin_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        priority = 1.3;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Admin_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        priority = 1.4;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                    class Admin_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Admin_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
                };
            };
        };
    };
    class Kart_01_Base_F: Car_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class GVAR(flip) {
                    displayName = CSTRING(Flip);
                    condition = QUOTE(call DFUNC(canFlip));
                    statement = QUOTE([ARR_3(QQGVAR(flip),_target,_target)] call CBA_fnc_targetEvent);
                };
                class GVAR(push) {
                    displayName = CSTRING(Push);
                    condition = QUOTE(_target call FUNC(canPush));
                    statement = QUOTE(call FUNC(push));
                };
            };
        };
    };

    class Tank: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                position = QUOTE(call DFUNC(getVehiclePos));
                selection = "";
                distance = 4;
                condition = "true";
                class ACE_Passengers {
                    displayName = CSTRING(Passengers);
                    condition = QUOTE(alive _target);
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
                };
				class ACE_unity_inspectVehicle {
                    displayName = "Inspecter état";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {([_target] call life_fnc_isDamaged)}";
                    statement = "[_target] spawn unity_fnc_check_vehicle";
                    showDisabled = 0;
                };
				class ACE_unity_lockpick {
                    displayName = "Crocheter le véhicule";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_lockpick > 0)}";
                    statement = "[_target] spawn life_fnc_lockpick";
                    showDisabled = 0;
                };
				class ACE_unity_unflipVehicle {
                    displayName = "$STR_vInAct_Unflip";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {!(typeOf (_target) in [""C_Kart_01_Blu_F"",""C_Kart_01_Red_F"",""C_Kart_01_Fuel_F"",""C_Kart_01_Vrana_F""])} && {!(canMove _target)} && {count crew _target == 0}";
                    statement = "_target setPos [getPos _target select 0, getPos _target select 1, (getPos _target select 2)+0.5];";
                };
                class ACE_unity_breakPlate {
                    displayName = "Effacer la plaque d'immatriculation";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_boltCutter > 0)}";
                    statement = "[_target] spawn unity_fnc_breakPlate";
                    showDisabled = 0;
                };
				class Cop_vehInterraction {
                    displayName = "Interaction Milice";
                    condition = "(playerSide isEqualTo west) && alive _target";
                    statement = "";
                    showDisabled = 0;
                    priority = 4.2;
                    class Cop_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Cop_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
					/*
                    class Cop_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Cop_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
					*/
                };
				class Med_vehInteraction {
                    displayName = "Interaction Médecin";
                    condition = "playerSide isEqualTo independent && (alive _target)";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class Med_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Med_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                };
				class Admin_vehInteraction {
                    displayName = "Interaction Admin";
                    condition = "(alive _target) && (!isNil ""life_adminlevel"") && {(call life_adminlevel) > 0}";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class AdminDriver {
                        displayName = "Admin Driver";
                        distance = 4.0;
                        priority = 1.0;
                        condition = "";
                        statement = "_target lock false; player action [""getInDriver"", _target]; _target lock true;";
                    };
                    class AdminPassenger {
                        displayName = "Admin Passager";
                        distance = 4.0;
                        priority = 1.1;
                        condition = "";
                        statement = "_target lock false; player action [""getInCargo"", _target]; _target lock true;";
                    };
                    class AdminGunner {
                        displayName = "Admin Gunner";
                        distance = 4.0;
                        priority = 1.2;
                        condition = "";
                        statement = "_target lock false; player action [""getInGunner"", _target]; _target lock true;";
                    };
                    class Admin_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        priority = 1.3;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Admin_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        priority = 1.4;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                    class Admin_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Admin_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
                };
            };
        };

        class ACE_SelfActions {
            class ACE_Passengers {
                displayName = CSTRING(Passengers);
                condition = QUOTE(alive _target);
                statement = "";
                insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
            };
        };
    };

    class Motorcycle: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                selection = "";
                distance = 10;
                condition = "true";
                class ACE_Passengers {
                    displayName = CSTRING(Passengers);
                    condition = QUOTE(alive _target);
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
                };
				class ACE_unity_inspectVehicle {
                    displayName = "Inspecter état";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {([_target] call life_fnc_isDamaged)}";
                    statement = "[_target] spawn unity_fnc_check_vehicle";
                    showDisabled = 0;
                };
				class ACE_unity_lockpick {
                    displayName = "Crocheter le véhicule";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_lockpick > 0)}";
                    statement = "[_target] spawn life_fnc_lockpick";
                    showDisabled = 0;
                };
				class ACE_unity_unflipVehicle {
                    displayName = "$STR_vInAct_Unflip";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {!(typeOf (_target) in [""C_Kart_01_Blu_F"",""C_Kart_01_Red_F"",""C_Kart_01_Fuel_F"",""C_Kart_01_Vrana_F""])} && {!(canMove _target)} && {count crew _target == 0}";
                    statement = "_target setPos [getPos _target select 0, getPos _target select 1, (getPos _target select 2)+0.5];";
                };
                class ACE_unity_breakPlate {
                    displayName = "Effacer la plaque d'immatriculation";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_boltCutter > 0)}";
                    statement = "[_target] spawn unity_fnc_breakPlate";
                    showDisabled = 0;
                };
				class Cop_vehInterraction {
                    displayName = "Interaction Milice";
                    condition = "(playerSide isEqualTo west) && alive _target";
                    statement = "";
                    showDisabled = 0;
                    priority = 4.2;
                    class Cop_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Cop_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
					/*
                    class Cop_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Cop_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
					*/
                };
				class Med_vehInteraction {
                    displayName = "Interaction Médecin";
                    condition = "playerSide isEqualTo independent && (alive _target)";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class Med_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Med_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                };
				class Admin_vehInteraction {
                    displayName = "Interaction Admin";
                    condition = "(alive _target) && (!isNil ""life_adminlevel"") && {(call life_adminlevel) > 0}";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class AdminDriver {
                        displayName = "Admin Driver";
                        distance = 4.0;
                        priority = 1.0;
                        condition = "";
                        statement = "_target lock false; player action [""getInDriver"", _target]; _target lock true;";
                    };
                    class AdminPassenger {
                        displayName = "Admin Passager";
                        distance = 4.0;
                        priority = 1.1;
                        condition = "";
                        statement = "_target lock false; player action [""getInCargo"", _target]; _target lock true;";
                    };
                    class AdminGunner {
                        displayName = "Admin Gunner";
                        distance = 4.0;
                        priority = 1.2;
                        condition = "";
                        statement = "_target lock false; player action [""getInGunner"", _target]; _target lock true;";
                    };
                    class Admin_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        priority = 1.3;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Admin_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        priority = 1.4;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                    class Admin_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Admin_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
                };
            };
        };

        class ACE_SelfActions {
            class ACE_Passengers {
                displayName = CSTRING(Passengers);
                condition = QUOTE(alive _target);
                statement = "";
                exceptions[] = {"isNotSwimming"};
                insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
            };
        };
    };

    class Air;
    class Helicopter: Air {
        GVAR(bodyWidth) = 3;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                position = QUOTE([ARR_2(_target, EGVAR(interact_menu,cameraPosASL))] call DFUNC(getVehiclePosComplex));
                selection = "";
                distance = 4;
                condition = "true";
                class ACE_Passengers {
                    displayName = CSTRING(Passengers);
                    condition = QUOTE(alive _target);
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
                };
				class ACE_unity_inspectVehicle {
                    displayName = "Inspecter état";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {([_target] call life_fnc_isDamaged)}";
                    statement = "[_target] spawn unity_fnc_check_vehicle";
                    showDisabled = 0;
                };
				class ACE_unity_lockpick {
                    displayName = "Crocheter le véhicule";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_lockpick > 0)}";
                    statement = "[_target] spawn life_fnc_lockpick";
                    showDisabled = 0;
                };
				class ACE_unity_unflipVehicle {
                    displayName = "$STR_vInAct_Unflip";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {!(typeOf (_target) in [""C_Kart_01_Blu_F"",""C_Kart_01_Red_F"",""C_Kart_01_Fuel_F"",""C_Kart_01_Vrana_F""])} && {!(canMove _target)} && {count crew _target == 0}";
                    statement = "_target setPos [getPos _target select 0, getPos _target select 1, (getPos _target select 2)+0.5];";
                };
                class ACE_unity_breakPlate {
                    displayName = "Effacer la plaque d'immatriculation";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_boltCutter > 0)}";
                    statement = "[_target] spawn unity_fnc_breakPlate";
                    showDisabled = 0;
                };
				class Cop_vehInterraction {
                    displayName = "Interaction Milice";
                    condition = "(playerSide isEqualTo west) && alive _target";
                    statement = "";
                    showDisabled = 0;
                    priority = 4.2;
                    class Cop_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Cop_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
					/*
                    class Cop_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Cop_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
					*/
                };
				class Med_vehInteraction {
                    displayName = "Interaction Médecin";
                    condition = "playerSide isEqualTo independent && (alive _target)";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class Med_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Med_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                };
				class Admin_vehInteraction {
                    displayName = "Interaction Admin";
                    condition = "(alive _target) && (!isNil ""life_adminlevel"") && {(call life_adminlevel) > 0}";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class AdminDriver {
                        displayName = "Admin Driver";
                        distance = 4.0;
                        priority = 1.0;
                        condition = "";
                        statement = "_target lock false; player action [""getInDriver"", _target]; _target lock true;";
                    };
                    class AdminPassenger {
                        displayName = "Admin Passager";
                        distance = 4.0;
                        priority = 1.1;
                        condition = "";
                        statement = "_target lock false; player action [""getInCargo"", _target]; _target lock true;";
                    };
                    class AdminGunner {
                        displayName = "Admin Gunner";
                        distance = 4.0;
                        priority = 1.2;
                        condition = "";
                        statement = "_target lock false; player action [""getInGunner"", _target]; _target lock true;";
                    };
                    class Admin_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        priority = 1.3;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Admin_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        priority = 1.4;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                    class Admin_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Admin_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
                };
            };
        };

        class ACE_SelfActions {
            class ACE_Passengers {
                displayName = CSTRING(Passengers);
                condition = QUOTE(alive _target);
                statement = "";
                insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
            };
        };
    };

    class Plane: Air {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                position = QUOTE([ARR_2(_target, EGVAR(interact_menu,cameraPosASL))] call DFUNC(getVehiclePosComplex));
                selection = "";
                distance = 4;
                condition = "true";
                class ACE_Passengers {
                    displayName = CSTRING(Passengers);
                    condition = QUOTE(alive _target);
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
                };
				class ACE_unity_inspectVehicle {
                    displayName = "Inspecter état";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {([_target] call life_fnc_isDamaged)}";
                    statement = "[_target] spawn unity_fnc_check_vehicle";
                    showDisabled = 0;
                };
				class ACE_unity_lockpick {
                    displayName = "Crocheter le véhicule";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_lockpick > 0)}";
                    statement = "[_target] spawn life_fnc_lockpick";
                    showDisabled = 0;
                };
				class ACE_unity_unflipVehicle {
                    displayName = "$STR_vInAct_Unflip";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {!(typeOf (_target) in [""C_Kart_01_Blu_F"",""C_Kart_01_Red_F"",""C_Kart_01_Fuel_F"",""C_Kart_01_Vrana_F""])} && {!(canMove _target)} && {count crew _target == 0}";
                    statement = "_target setPos [getPos _target select 0, getPos _target select 1, (getPos _target select 2)+0.5];";
                };
                class ACE_unity_breakPlate {
                    displayName = "Effacer la plaque d'immatriculation";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_boltCutter > 0)}";
                    statement = "[_target] spawn unity_fnc_breakPlate";
                    showDisabled = 0;
                };
				class Cop_vehInterraction {
                    displayName = "Interaction Milice";
                    condition = "(playerSide isEqualTo west) && alive _target";
                    statement = "";
                    showDisabled = 0;
                    priority = 4.2;
                    class Cop_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Cop_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
					/*
                    class Cop_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Cop_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
					*/
                };
				class Med_vehInteraction {
                    displayName = "Interaction Médecin";
                    condition = "playerSide isEqualTo independent && (alive _target)";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class Med_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Med_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                };
				class Admin_vehInteraction {
                    displayName = "Interaction Admin";
                    condition = "(alive _target) && (!isNil ""life_adminlevel"") && {(call life_adminlevel) > 0}";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class AdminDriver {
                        displayName = "Admin Driver";
                        distance = 4.0;
                        priority = 1.0;
                        condition = "";
                        statement = "_target lock false; player action [""getInDriver"", _target]; _target lock true;";
                    };
                    class AdminPassenger {
                        displayName = "Admin Passager";
                        distance = 4.0;
                        priority = 1.1;
                        condition = "";
                        statement = "_target lock false; player action [""getInCargo"", _target]; _target lock true;";
                    };
                    class AdminGunner {
                        displayName = "Admin Gunner";
                        distance = 4.0;
                        priority = 1.2;
                        condition = "";
                        statement = "_target lock false; player action [""getInGunner"", _target]; _target lock true;";
                    };
                    class Admin_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        priority = 1.3;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Admin_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        priority = 1.4;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                    class Admin_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Admin_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
                };
            };
        };

        class ACE_SelfActions {
            class ACE_Passengers {
                displayName = CSTRING(Passengers);
                condition = QUOTE(alive _target);
                statement = "";
                insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
            };
        };
    };

    class VTOL_Base_F;
    class VTOL_01_base_F: VTOL_Base_F {
        GVAR(bodyWidth) = 4;
        GVAR(bodyLength) = 10;
    };
    class VTOL_02_base_F: VTOL_Base_F {
        GVAR(bodyWidth) = 3;
        GVAR(bodyLength) = 7;
    };

    class Ship;
    class Ship_F: Ship {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                position = QUOTE(call DFUNC(getVehiclePos));
                selection = "";
                distance = 4;
                condition = "true";

                class ACE_Push {
                    displayName = CSTRING(Push);
                    distance = 6;
                    condition = QUOTE(_target call FUNC(canPush));
                    statement = QUOTE(_this call FUNC(push));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class ACE_Passengers {
                    displayName = CSTRING(Passengers);
                    condition = QUOTE(alive _target);
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
                };
				class ACE_unity_inspectVehicle {
                    displayName = "Inspecter état";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {([_target] call life_fnc_isDamaged)}";
                    statement = "[_target] spawn unity_fnc_check_vehicle";
                    showDisabled = 0;
                };
				class ACE_unity_lockpick {
                    displayName = "Crocheter le véhicule";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_lockpick > 0)}";
                    statement = "[_target] spawn life_fnc_lockpick";
                    showDisabled = 0;
                };
				class ACE_unity_unflipVehicle {
                    displayName = "$STR_vInAct_Unflip";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {!(typeOf (_target) in [""C_Kart_01_Blu_F"",""C_Kart_01_Red_F"",""C_Kart_01_Fuel_F"",""C_Kart_01_Vrana_F""])} && {!(canMove _target)} && {count crew _target == 0}";
                    statement = "_target setPos [getPos _target select 0, getPos _target select 1, (getPos _target select 2)+0.5];";
                };
                class ACE_unity_breakPlate {
                    displayName = "Effacer la plaque d'immatriculation";
                    distance = 4;
                    condition = "alive _target && {speed _target == 0} && {(life_inv_boltCutter > 0)}";
                    statement = "[_target] spawn unity_fnc_breakPlate";
                    showDisabled = 0;
                };
				class Cop_vehInterraction {
                    displayName = "Interaction Milice";
                    condition = "(playerSide isEqualTo west) && alive _target";
                    statement = "";
                    showDisabled = 0;
                    priority = 4.2;
                    class Cop_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Cop_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
					/*
                    class Cop_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Cop_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
					*/
                };
				class Med_vehInteraction {
                    displayName = "Interaction Médecin";
                    condition = "playerSide isEqualTo independent && (alive _target)";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class Med_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Med_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                };
				class Admin_vehInteraction {
                    displayName = "Interaction Admin";
                    condition = "(alive _target) && (!isNil ""life_adminlevel"") && {(call life_adminlevel) > 0}";
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    class AdminDriver {
                        displayName = "Admin Driver";
                        distance = 4.0;
                        priority = 1.0;
                        condition = "";
                        statement = "_target lock false; player action [""getInDriver"", _target]; _target lock true;";
                    };
                    class AdminPassenger {
                        displayName = "Admin Passager";
                        distance = 4.0;
                        priority = 1.1;
                        condition = "";
                        statement = "_target lock false; player action [""getInCargo"", _target]; _target lock true;";
                    };
                    class AdminGunner {
                        displayName = "Admin Gunner";
                        distance = 4.0;
                        priority = 1.2;
                        condition = "";
                        statement = "_target lock false; player action [""getInGunner"", _target]; _target lock true;";
                    };
                    class Admin_Impound {
                        displayName = "$STR_vInAct_Impound";
                        distance = 4.0;
                        priority = 1.3;
                        condition = "";
                        statement = "[_target] spawn life_fnc_impoundAction";
                    };
                    class Admin_Info {
                        displayName = "$STR_vInAct_Registration";
                        distance = 4.0;
                        priority = 1.4;
                        condition = "";
                        statement = "[_target] spawn life_fnc_searchVehAction";
                    };
                    class Admin_ForceUnlock {
                        displayName = "Déverrouiller";
                        distance = 4.0;
                        condition = "locked _target == 2";
                        statement = "[_target,0] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",false,true];";
                    };
                    class Admin_ForceLock {
                        displayName = "Verrouiller";
                        distance = 4.0;
                        condition = "locked _target == 0";
                        statement = "[_target,2] remoteExecCall [""life_fnc_lockVehicle"",_target]; _target setVariable [""locked"",true,true];";
                    };
                };
            };
        };

        class ACE_SelfActions {
            class ACE_Passengers {
                displayName = CSTRING(Passengers);
                condition = QUOTE(alive _target);
                statement = "";
                insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
            };
        };
    };

    class Boat_F;
    class Boat_Transport_02_base_F: Boat_F {
        GVAR(canPush) = 1;
    };

    class StaticWeapon: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                selection = "gunnerview";
                distance = 4;
                condition = "true";
                class ACE_Passengers {
                    displayName = CSTRING(Passengers);
                    condition = QUOTE(alive _target);
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
                };
                class GVAR(flip) {
                    displayName = CSTRING(Flip);
                    condition = QUOTE(call DFUNC(canFlip));
                    statement = QUOTE([ARR_3(QQGVAR(flip),_target,_target)] call CBA_fnc_targetEvent);
                };
            };
        };

        class ACE_SelfActions {
            class ACE_Passengers {
                displayName = CSTRING(Passengers);
                condition = QUOTE(alive _target);
                statement = "";
                insertChildren = QUOTE(_this call DFUNC(addPassengersActions));
            };
        };
    };

    class StaticMGWeapon: StaticWeapon {};
    class HMG_01_base_F: StaticMGWeapon {};

    class HMG_01_high_base_F: HMG_01_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.172852,0.164063,-0.476091]";
            };
        };
    };

    class AA_01_base_F: StaticMGWeapon {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,0.515869,-0.200671]";
            };
        };
    };

    class AT_01_base_F: StaticMGWeapon {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,0.515869,-0.200671]";
            };
        };
    };

    class ThingX;
    class ReammoBox_F: ThingX {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                selection = "";
                distance = 2;
                condition = "true";
                class ACE_OpenBox {
                    displayName = CSTRING(OpenBox);
                    condition = QUOTE((alive _target) && {(getNumber (configFile >> 'CfgVehicles' >> (typeOf _target) >> 'disableInventory')) == 0});
                    statement = QUOTE(_player action [ARR_2(QUOTE(QUOTE(Gear)), _target)]);
                    showDisabled = 0;
                };
            };
        };
        class ACE_SelfActions {};
    };
    class Slingload_base_F: ReammoBox_F {};
    class Slingload_01_Base_F: Slingload_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                distance = 5;
            };
        };
    };
    class Pod_Heli_Transport_04_base_F: Slingload_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                distance = 5;
            };
        };
    };

    class ACE_RepairItem_Base: ThingX {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                selection = "";
                distance = 2;
                condition = "true";
            };
        };

        class ACE_SelfActions {};
    };

    class Lamps_base_F;
    class Land_PortableLight_single_F: Lamps_base_F {
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                distance = 2;

                class GVAR(TurnOn) {
                    displayName = CSTRING(TurnOn);
                    icon = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa";
                    condition = QUOTE(alive _target && !(_target getVariable [ARR_2(QQGVAR(isLightOn),true)]));
                    statement = QUOTE([ARR_3(QQGVAR(setLight),[ARR_2(_target,true)],_target)] call CBA_fnc_targetEvent);
                };
                class GVAR(TurnOff) {
                    displayName = CSTRING(TurnOff);
                    icon = "\A3\ui_f\data\igui\cfg\actions\ico_cpt_land_OFF_ca.paa";
                    condition = QUOTE(alive _target && _target getVariable [ARR_2(QQGVAR(isLightOn),true)]);
                    statement = QUOTE([ARR_3(QQGVAR(setLight),[ARR_2(_target,false)],_target)] call CBA_fnc_targetEvent);
                };
            };
        };
    };

    class FloatingStructure_F;
    class Land_Camping_Light_F: FloatingStructure_F {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                distance = 2;

                class GVAR(TurnOn) {
                    displayName = CSTRING(TurnOn);
                    icon = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa";
                    condition = QUOTE(alive _target && !isCollisionLightOn _target);
                    statement = QUOTE([ARR_3(QQGVAR(setCollisionLight),[ARR_2(_target,true)],_target)] call CBA_fnc_targetEvent);
                };
                class GVAR(TurnOff) {
                    displayName = CSTRING(TurnOff);
                    icon = "\A3\ui_f\data\igui\cfg\actions\ico_cpt_land_OFF_ca.paa";
                    condition = QUOTE(alive _target && isCollisionLightOn _target);
                    statement = QUOTE([ARR_3(QQGVAR(setCollisionLight),[ARR_2(_target,false)],_target)] call CBA_fnc_targetEvent);
                };
            };
        };
    };

    class RoadCone_F: ThingX {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(MainAction);
                selection = "";
                distance = 2;
                condition = "true";
            };
        };
    };

    class RoadBarrier_F: RoadCone_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,0,0.500671]";
            };
        };
    };
};
