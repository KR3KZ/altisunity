class Socket_Reciever {
    tag = "SOCK";
    class SQL_Socket {
        file = "core\session";
        class dataQuery {};
        class insertPlayerInfo {};
        class requestReceived {};
        class syncData {};
        class updatePartial {};
        class updateRequest {};
    };
};

class SpyGlass {
    tag = "SPY";
    class Functions {
        file = "SpyGlass";
        class cookieJar{};
        class notifyAdmins{};
        class observe{};
    };
};

class Life_Client_Core {
    tag = "life";

    class Master_Directory {
        file = "core";
        class initCiv {};
        class initCop {};
        class initMedic {};
        class setupActions {};
        class setupEVH {};
        class survival {};
        class welcomeNotification {};
    };

    class Actions {
        file = "core\actions";
        class arrestAction {};
        class buyLicense {};
        class captureHideout {};
        class catchFish {};
        class dpFinish {};
        class dropFishingNet {};
        class escortAction {};
        class gather {};
        class getDPMission {};
        class gutAnimal {};
        class healHospital {};
        class impoundAction {};
        class mine {};
        class newsBroadcast {};
        class packupSpikes {};
        class pickupItem {};
        class pickupMoney {};
        class postBail {};
        class processAction {};
        class pulloutAction {};
        class putInCar {};
        class removeContainer {};
        class repairTruck {};
        class restrainAction {};
        class robAction {};
        class searchAction {};
        class searchVehAction {};
        class seizePlayerAction {};
        class serviceChopper {};
        class stopEscorting {};
        class storeVehicle {};
        class surrender {};
        class ticketAction {};
        class unrestrain {};
    };

    class Admin {
        file = "core\admin";
        class adminCompensate {};
        class adminDebugCon {};
        class adminFreeze {};
        class admingetID {};
        class adminGodMode {};
        class adminid {};
        class admininfo {};
        class adminMarkers {};
        class adminMenu {};
        class adminQuery {};
        class adminSpectate {};
        class adminTeleport {};
        class adminTpHere {};
    };

    class Civilian {
        file = "core\civilian";
        class civLoadout {};
        class civMarkers {};
        class demoChargeTimer {};
        class freezePlayer {};
        class jail {};
        class jailMe {};
        class knockedOut {};
        class knockoutAction {};
        class removeLicenses {};
        class robPerson {};
        class robReceive {};
        class tazed {};
    };

    class Config {
        file = "core\config";
        class houseConfig {};
        class itemWeight {};
        class vehicleAnimate {};
        class vehicleWeightCfg {};
    };

    class Cop {
        file = "core\cop";
        class bountyReceive {};
        class containerInvSearch {};
        class copInteractionMenu {};
        class copLights {};
        class copLoadout {};
        class copMarkers {};
        class copSearch {};
        class copSiren {};
        class doorAnimate {};
        class fedCamDisplay {};
        class licenseCheck {};
        class licensesRead {};
        class questionDealer {};
        class radar {};
        class repairDoor {};
        class restrain {};
        class searchClient {};
        class seizeClient {};
        class sirenLights {};
        class spikeStripEffect {};
        class ticketGive {};
        class ticketPaid {};
        class ticketPay {};
        class ticketPrompt {};
        class vehInvSearch {};
        class wantedGrab {};
    };

    class Dialog_Controls {
        file = "dialog\function";
        class bankDeposit {};
        class bankTransfer {};
        class bankWithdraw {};
        class displayHandler {};
        class gangDeposit {};
        class gangWithdraw {};
        class garageLBChange {};
        class impoundMenu {};
        class progressBar {};
        class safeFix {};
        class safeInventory {};
        class safeOpen {};
        class safeTake {};
        class sellGarage {};
        class setMapPosition {};
        class spawnConfirm {};
        class spawnMenu {};
        class spawnPointCfg {};
        class spawnPointSelected {};
        class unimpound {};
        class vehicleGarage {};
        class wireTransfer {};
    };

    class Functions {
        file = "core\functions";
        class AAN {};
        class accType {};
        class actionKeyHandler {};
        class animSync {};
        class calWeightDiff {};
        class checkMap {};
        class clearVehicleAmmo {};
        class dropItems {};
        class escInterupt {};
        class fetchCfgDetails {};
        class fetchDeadGear {};
        class fetchVehInfo {};
        class isDamaged {};
        class giveDiff {};
        class handleDamage {};
        class handleInv {};
        class handleItem {};
        class hideObj {};
        class hudSetup {};
        class hudUpdate {};
        class inventoryClosed {};
        class inventoryOpened {};
        class isUIDActive {};
        class keyHandler {};
        class loadDeadGear {};
        class loadGear {};
        class nearATM {};
        class nearestDoor {};
        class nearUnits {};
        class numberText {};
        class onFired {};
        class onTakeItem {};
        class playerSkins {};
        class playerTags {};
        class postNewsBroadcast {};
        class pullOutVeh {};
        class pushObject {};
        class receiveItem {};
        class receiveMoney {};
        class revealObjects {};
        class saveGear {};
        class simDisable {};
        class stripDownPlayer {};
        class teleport {};
        class whereAmI {};
    };

    class Gangs {
        file = "core\gangs";
        class createGang {};
        class gangCreated {};
        class gangDisband {};
        class gangDisbanded {};
        class gangInvite {};
        class gangInvitePlayer {};
        class gangKick {};
        class gangLeave {};
        class gangMenu {};
        class gangNewLeader {};
        class gangUpgrade {};
        class initGang {};
    };

    class Housing {
        file = "core\housing";
        class buyHouse {};
        class buyHouseGarage {};
        class containerMenu {};
        class copBreakDoor {};
        class copHouseOwner {};
        class garageRefund {};
        class getBuildingPositions {};
        class houseMenu {};
        class initHouses {};
        class lightHouse {};
        class lightHouseAction {};
        class lockHouse {};
        class lockupHouse {};
        class placeContainer {};
        class PlayerInBuilding {};
        class raidHouse {};
        class sellHouse {};
        class sellHouseGarage {};
    };

    class Items {
        file = "core\items";
        class blastingCharge {};
        class boltcutter {};
        class defuseKit {};
        class flashbang {};
        class jerrycanRefuel {};
        class jerryRefuel {};
        class lockpick {};
        class placestorage {};
        class spikeStrip {};
        class storageBox {};
    };

    class Medical_System {
        file = "core\medical";
		class clickRespawn {};
        class deathScreen {};
        class medicLights {};
        class medicLoadout {};
        class medicMarkers {};
        class medicRequest {};
        class medicSiren {};
        class medicSirenLights {};
        class onPlayerKilled {};
        class onPlayerRespawn {};
        class requestMedic {};
        class respawned {};
        class revived {};
        class revivePlayer {};
    };

    class Network {
        file = "core\functions\network";
        class broadcast {};
        class corpse {};
        class jumpFnc {};
        class say3D {};
        class setFuel {};
        class soundDevice {};
    };

    class Player_Menu {
        file = "core\pmenu";
        class cellphone {};
        class giveItem {};
        class giveMoney {};
        class keyDrop {};
        class keyGive {};
        class keyMenu {};
        class p_openMenu {};
        class p_updateMenu {};
        class pardon {};
        class removeItem {};
        class s_onChar {};
        class s_onCheckedChange {};
        class s_onSliderChange {};
        class settingsMenu {};
        class updateViewDistance {};
        class useItem {};
        class wantedAddP {};
        class wantedInfo {};
        class wantedList {};
        class wantedMenu {};
    };

    class Shops {
        file = "core\shops";
        class 3dPreviewDisplay {};
        class 3dPreviewExit {};
        class 3dPreviewInit {};
        class atmMenu {};
        class buyClothes {};
        class changeClothes {};
        class chopShopMenu {};
        class chopShopSelection {};
        class chopShopSell {};
        class clothingFilter {};
        class clothingMenu {};
        class fuelLBchange {};
        class fuelStatOpen {};
        class levelCheck {};
        class vehicleShopBuy {};
        class vehicleShopLBChange {};
        class vehicleShopMenu {};
        class virt_buy {};
        class virt_menu {};
        class virt_sell {};
        class virt_update {};
        class weaponShopAccs {};
        class weaponShopBuySell {};
        class weaponShopFilter {};
        class weaponShopMags {};
        class weaponShopMenu {};
        class weaponShopSelection {};
    };

    class Vehicle {
        file = "core\vehicle";
        class addVehicle2Chain {};
        class colorVehicle {};
        class deviceMine {};
        class FuelRefuelcar {};
        class fuelStore {};
        class fuelSupply {};
        class lockVehicle {};
        class openInventory {};
        class vehiclecolor3DRefresh {};
        class vehicleOwners {};
        class vehicleWeight {};
        class vehInventory {};
        class vehStoreItem {};
        class vehTakeItem {};
        class vInteractionMenu {};
    };
};

class Unity_Client_Core {
    tag = "unity";

	class General {
		file = "unity\general";
		class autoUpdate {};
		class deathScreen {};
		class playSound {};
		class playSoundCheck {};
		class radioactive {};
	};

	class iPhone_X {
		file = "unity\iPhone_X";
		class iPhone_X_master {};
        class iPhone_X_settings {};
        class iPhone_X_start {};
        class iPhone_X_home {};
        class iPhone_X_clock {};
        class iPhone_X_appPhone {};
        class iPhone_X_appContactsList {};
        class iPhone_X_appAddContact {};
        class iPhone_X_appContact {};
        class iPhone_X_addContact {};
        class iPhone_X_appSMSList {};
        class iPhone_X_appAddConversation {};
        class iPhone_X_addConversation {};
        class iPhone_X_appSettings {};
        class iPhone_X_appCamera {};
        class iPhone_X_appFrontCamera {};;
        class iPhone_X_addPhoneNumberPrimary {};
        class iPhone_X_addPhoneNumberSecondary {};
        class iPhone_X_addPhoneNumberEnterprise {};
        class iPhone_X_masterAddPhoneNumber {};
        class iPhone_X_phoneNumberPrimary {};
        class iPhone_X_phoneNumberSecondary {};
        class iPhone_X_phoneNumberEnterprise {};
        class iPhone_X_phoneNumberActive {};
        class iPhone_X_contacts {};
        class iPhone_X_conversations {};
        class iPhone_X_SMS {};
        class iPhone_X_appSMS {};
        class iPhone_X_sendSMS {};
        class iPhone_X_receiveSMS {};
        class iPhone_X_removeContact {};
        class iPhone_X_newSMS {};
        class iPhone_X_setSettings {};
        class iPhone_X_appWallpaper {};
        class iPhone_X_appSound {};
        class iPhone_X_appSIM {};
        class iPhone_X_appSMSFromContact {};
        class iPhone_X_appSMSNew {};
        class iPhone_X_getPhoneNumberSubscription {};
        class iPhone_X_getPhoneNumberIsUse {};
        class iPhone_X_appSMSFromNotification {};
        class iPhone_X_appCall {};
        class iPhone_X_listNumber {};
        class iPhone_X_endCall {};
        class iPhone_X_startCall {};
        class iPhone_X_receiveCall {};
        class iPhone_X_sendCall {};
        class iPhone_X_offense {};
        class iPhone_X_appPMC {};
        class iPhone_X_appOffenseList {};
        class iPhone_X_appOffense {};
        class iPhone_X_appAddOffense {};
        class iPhone_X_addOffense {};
        class iPhone_X_appSearchOffense {};
        class iPhone_X_searchOffense {};
        class iPhone_X_appSearchPlayer {};
        class iPhone_X_searchPlayer {};
        class iPhone_X_amende {};
        class iPhone_X_valueAmende {};
        class iPhone_X_appOnTheRunList {};
        class iPhone_X_onTheRun {};
        class iPhone_X_searchPlayerRapport {};
        class iPhone_X_appAddRapport {};
        class iPhone_X_addRapport {};
        class iPhone_X_appSearchRapport {};
        class iPhone_X_searchRapport {};
        class iPhone_X_rapport {};
        class iPhone_X_appRapport {};
        class iPhone_X_appRapportsList {};
        class iPhone_X_appSearchBankAccount {};
        class iPhone_X_searchBankAccount {};
        class iPhone_X_bankAccount {};
        class iPhone_X_appSwitchboard {};
        class iPhone_X_switchboard {};
        class iPhone_X_switchboardSend {};
        class iPhone_X_switchboardReceive {};
        class iPhone_X_receiveCallSwitchboard {};
        class iPhone_X_endCallSwitchboard {};
        class iPhone_X_SMSEnterprise {};
        class iPhone_X_newSMSEnterprise {};
        class iPhone_X_TFARNumber {};
        class iPhone_X_silent {};
        class iPhone_X_appEvent {};
        class iPhone_X_events {};
        class iPhone_X_appAddEvent {};
        class iPhone_X_appEventAlert {};
        class iPhone_X_appEventLoad {};
        class iPhone_X_addEvent {};
	};

	class TaskForce {
		file = "unity\taskforce";
		class check_ts {};
		class init_tfr {};
	};

	class Vehicle {
		file = "unity\vehicle";
		class check_vehicle {};
		class repair_vehicle {};
	};
};
