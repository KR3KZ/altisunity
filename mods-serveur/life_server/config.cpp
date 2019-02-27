class DefaultEventhandlers;
class CfgPatches {
    class life_server {
        units[] = {"C_man_1"};
        weapons[] = {};
        requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_Soft_F_Offroad_01","A3_Characters_F"};
        fileName = "life_server.pbo";
        author = "Tonic";
    };
};

class CfgFunctions {
    class MySQL_Database {
        tag = "DB";
        class MySQL
        {
            file = "\life_server\Functions\MySQL";
            class numberSafe {};
            class mresArray {};
            class queryRequest{};
            class asyncCall{};
            class insertRequest{};
            class updateRequest{};
            class mresToArray {};
            class insertVehicle {};
            class bool {};
            class mresString {};
            class updatePartial {};
        };
    };

    class Life_System {
        tag = "life";
        class Wanted_Sys {
            file = "\life_server\Functions\WantedSystem";
            class wantedFetch {};
            class wantedPerson {};
            class wantedBounty {};
            class wantedRemove {};
            class wantedAdd {};
            class wantedCrimes {};
            class wantedProfUpdate {};
        };

        class Jail_Sys {
            file = "\life_server\Functions\Jail";
            class jailSys {};
        };

        class Client_Code {
            file = "\life_server\Functions\Client";
        };
    };

    class TON_System {
        tag = "TON";
        class Systems {
            file = "\life_server\Functions\Systems";
            class managesc {};
            class cleanup {};
            class huntingZone {};
            class getID {};
            class vehicleCreate {};
            class spawnVehicle {};
            class getVehicles {};
            class vehicleStore {};
            class vehicleDelete {};
            class spikeStrip {};
            class transferOwnership {};
            class federalUpdate {};
            class chopShopSell {};
            class clientDisconnect {};
            class entityRespawned {};
            class cleanupRequest {};
            class keyManagement {};
            class vehicleUpdate {};
            class recupkeyforHC {};
            class handleBlastingCharge {};
            class terrainSort {};
        };

        class Housing {
            file = "\life_server\Functions\Housing";
            class addHouse {};
            class addContainer {};
            class deleteDBContainer {};
            class fetchPlayerHouses {};
            class initHouses {};
            class sellHouse {};
            class sellHouseContainer {};
            class updateHouseContainers {};
            class updateHouseTrunk {};
            class houseCleanup {};
            class houseGarage {};
        };

        class Gangs {
            file = "\life_server\Functions\Gangs";
            class insertGang {};
            class queryPlayerGang {};
            class removeGang {};
            class updateGang {};
        };

        class Actions {
            file = "\life_server\Functions\Actions";
            class pickupAction {};
        };

        class PlayTime {
            file = "\life_server\Functions\PlayTime";
            class setPlayTime {};
            class getPlayTime {};
        };
    };

	class Unity_Server {
		tag = "unity_srv";
		class iPhone_X {
			file = "\life_server\unity\iPhone_X";
			class iPhone_X_getPhoneNumber {};
            class iPhone_X_checkPhoneNumberSubscription {};
            class iPhone_X_checkPhoneNumberIsUse {};
            class iPhone_X_addPhoneNumber {};
            class iPhone_X_saveContact {};
            class iPhone_X_getContacts {};
            class iPhone_X_removeContactFromDb {};
            class iPhone_X_deleteContact {};
            class iPhone_X_getSMS {};
            class iPhone_X_saveConversation {};
            class iPhone_X_getConversations {};
            class iPhone_X_sendSMS {};
            class iPhone_X_getSettings {};
            class iPhone_X_saveWallpaper {};
            class iPhone_X_saveSound {};
            class iPhone_X_savePhoneNumberActive {};
            class iPhone_X_updatePhoneNumberActive {};
            class iPhone_X_saveLastSMS {};
            class iPhone_X_getListNumber {};
            class iPhone_X_getOffense {};
            class iPhone_X_getSearchOffense {};
            class iPhone_X_saveOffense {};
            class iPhone_X_getSearchPlayer {};
            class iPhone_X_getAmende {};
            class iPhone_X_getValueAmende {};
            class iPhone_X_getOnTheRun {};
            class iPhone_X_getSearchPlayerRapport {};
            class iPhone_X_saveRapport {};
            class iPhone_X_getSearchRapport {};
            class iPhone_X_getRapports {};
            class iPhone_X_getSearchBankAccount {};
            class iPhone_X_callSwitchboard {};
            class iPhone_X_getSwitchboardPMC {};
            class iPhone_X_setSwitchboardPMC {};
            class iPhone_X_getSwitchboardIDAP {};
            class iPhone_X_setSwitchboardIDAP {};
            class iPhone_X_getSwitchboardCOMPANY {};
            class iPhone_X_setSwitchboardCOMPANY{};
            class iPhone_X_getSMSEnterprise {};
            class iPhone_X_saveSilent {};
            class iPhone_X_getEvents {};
            class iPhone_X_saveEvent {};
		};
	};
};

class CfgVehicles {
    class Car_F;
    class CAManBase;
    class Civilian;
    class Civilian_F : Civilian {
        class EventHandlers;
    };

    class C_man_1 : Civilian_F {
        class EventHandlers: EventHandlers {
            init = "(_this select 0) execVM ""\life_server\fix_headgear.sqf""";
        };
    };
};
