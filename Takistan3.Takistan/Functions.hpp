class Socket_Reciever
{
	tag = "SOCK";
	class SQL_Socket
	{
		file = "core\session";
		class requestReceived {};
		class dataQuery {};
		class insertPlayerInfo {};
		class updateRequest {};
		class syncData {};
		class updatePartial {};
	};
};

class Life_Client_Core
{
	tag = "life";

	class Master_Directory
	{
		file = "core";
		class setupActions {};
		class setupEVH {};
		class initCiv {};
		class initCop {};
		class initMedic {};
		class welcomeNotification {};
		class survival {};
	};

	class Admin
	{
		file = "core\admin";
		class admininfo {};
		class adminid {};
		class admingetID {};
		class adminMenu {};
		class adminQuery {};
		class adminSpectate {};
		class adminTeleport {};
		class adminTpHere {};
		class adminDebugCon {};
		class adminCompensate {};
		class adminGodMode {};
		class adminFreeze {};
		class adminMarkers {};
	};

	class Medical_System
	{
		file = "core\medical";
		class onPlayerKilled {};
		class onPlayerRespawn {};
		class respawned {};
		class revivePlayer {};
		class revived {};
		class medicMarkers {};
		class requestMedic {};
		class medicRequest {};
		class deathScreen {};
		class medicLoadout {};
		class blooding {};
		class dammaged {};
		class medicbandage {};
		class medicbandaged {};
		class medichlw {};
		class medichlwed {};
		class medicsurgical {};
		class medicsurgicaled {};
		class medictrans {};
		class medictransed {};
		class unconscious {};
	};

	class Actions
	{
		file = "core\actions";
		class healHospital {};
		class pushVehicle {};
		class repairTruck {};
		class serviceChopper {};
		class dpFinish {};
		class getDPMission {};
		class postBail {};
		class processAction {};
		class arrestAction {};
		class escortAction {};
		class impoundAction {};
		class pulloutAction {};
		class putInCar {};
		class stopEscorting {};
		class restrainAction {};
		class searchAction {};
		class searchVehAction {};
		class unrestrain {};
		class surrender {};
		class pickupItem {};
		class pickupMoney {};
		class ticketAction {};
		class packupSpikes {};
		class storeVehicle {};
		class robAction {};
		class captureHideout {};
		class gather {};
		class getWasser {};
		class torturePerson {};
		class craftAction {};
	};

	class Config
	{
		file = "core\config";
		class itemWeight {};
		class taxRate {};
		class vehicleAnimate {};
		class vehicleWeightCfg {};
		class craftCfg {};
	};

	class Player_Menu
	{
		file = "core\pmenu";
		class wantedList {};
		class wantedInfo {};
		class wantedMenu {};
		class pardon {};
		class giveItem {};
		class giveMoney {};
		class p_openMenu {};
		class p_updateMenu {};
		class removeItem {};
		class useItem {};
		class cellphone {};
		class keyMenu {};
		class keyGive {};
		class keyDrop {};
		class s_onSliderChange {};
		class updateViewDistance {};
		class settingsMenu {};
		class s_onChar {};
		class s_onCheckedChange {};
		class wantedAddP {};
		class craft {};
		class craft_update {};
		class craft_updateFilter {};
		class p_banking {};
		class p_geld {};
		class p_inventar {};
	};

	class Functions
	{
		file = "core\functions";
		class calWeightDiff {};
		class fetchCfgDetails {};
		class handleInv {};
		class hudSetup {};
		class hudUpdate {};
		class tazeSound {};
		class animSync {};
		class simDisable {};
		class keyHandler {};
		class dropItems {};
		class handleDamage {};
		class numberText {};
		class handleItem {};
		class accType {};
		class receiveItem {};
		class giveDiff {};
		class receiveMoney {};
		class playerTags {};
		class clearVehicleAmmo {};
		class pullOutVeh {};
		class nearUnits {};
		class actionKeyHandler {};
		class playerCount {};
		class fetchDeadGear {};
		class loadDeadGear {};
		class isnumeric {};
		class escInterupt {};
		class onTakeItem {};
		class fetchVehInfo {};
		class pushObject {};
		class onFired {};
		class revealObjects {};
		class nearestDoor {};
		class inventoryClosed {};
		class inventoryOpened {};
		class isUIDActive {};
		class saveGear {};
		class loadGear {};
		class stripDownPlayer {};
		class nearATM {};
		class playerSkins {};
		class nearestObjects {};
		class quest {};
		class quest2 {};
		class transport {};
		class territoryReward {};
		class suicideBomb {};
		class setupLevel {};
		class queststart {};
	};

	class Network
	{
		file = "core\functions\network";
		class broadcast {};
		class MP {};
		class MPexec {};
		class corpse {};
		class jumpFnc {};
		class soundDevice {};
		class setFuel {};
		class say3D {};
	};

	class Civilian
	{
		file = "core\civilian";
		class jailMe {};
		class jail {};
		class knockedOut {};
		class knockoutAction {};
		class robReceive {};
		class robPerson {};
		class demoChargeTimer {};
		class civLoadout {};
		class freezePlayer {};
		class wiretapping {};
	};

	class Vehicle
	{
		file = "core\vehicle";
		class colorVehicle {};
		class openInventory {};
		class lockVehicle {};
		class vehicleOwners {};
		class vehStoreItem {};
		class vehTakeItem {};
		class vehInventory {};
		class vInteractionMenu {};
		class vehicleWeight {};
		class addVehicle2Chain {};
		class FuelRefuelcar {};
	};

	class Cop
	{
		file = "core\cop";
		class copMarkers {};
		class vehInvSearch {};
		class copSearch {};
		class bountyReceive {};
		class searchClient {};
		class restrain {};
		class spikeStripEffect {};
		class copInteractionMenu {};
		class repairDoor {};
		class doorAnimate {};
		class copLoadout {};
		class wantedGrab {};
		class seizeObjects {};
	};

	class Gangs
	{
		file = "core\gangs";
		class initGang {};
		class createGang {};
		class gangCreated {};
		class gangMenu {};
		class gangKick {};
		class gangLeave {};
		class gangNewLeader {};
		class gangUpgrade {};
		class gangInvitePlayer {};
		class gangInvite {};
		class gangDisband {};
		class gangDisbanded {};
	};

	class Shops
	{
		file = "core\shops";
		class atmMenu {};
		class buyClothes {};
		class changeClothes {};
		class clothingMenu {};
		class clothingFilter {};
		class vehicleShopMenu {};
		class vehicleShopLBChange {};
		class vehicleShopBuy {};
		class weaponShopFilter {};
		class weaponShopMenu {};
		class weaponShopSelection {};
		class weaponShopBuySell {};
		class weaponShopMags {};
		class virt_buy {};
		class virt_menu {};
		class virt_update {};
		class virt_sell {};
		class chopShopMenu {};
		class chopShopSelection {};
		class chopShopSell {};
		class FuelStatOpen {};
		class FuelLBchange {};
	};

	class Items
	{
		file = "core\items";
		class lockpick {};
		class spikeStrip {};
		class jerryRefuel {};
		class boltcutter {};
		class blastingCharge {};
		class defuseKit {};
		class bandage {};
		class bandaged {};
		class bandagemate {};
		class barricade {};
		class barrier {};
		class depotwaffen {};
		class epi {};
		class epimate {};
		class flatterband {};
		class kochsalz {};
		class kochsalzmate {};
		class strahler {};
	};

	class Dialog_Controls
	{
		file = "dialog\function";
		class setMapPosition {};
		class displayHandler {};
		class spawnConfirm {};
		class spawnMenu {};
		class spawnPointCfg {};
		class spawnPointSelected {};
		class progressBar {};
		class impoundMenu {};
		class unimpound {};
		class sellGarage {};
		class bankDeposit {};
		class bankWithdraw {};
		class bankTransfer {};
		class garageLBChange {};
		class safeInventory {};
		class safeOpen {};
		class safeTake {};
		class safeFix {};
		class vehicleGarage {};
		class gangDeposit {};
		class wireTransfer {};
		class gangWithdraw {};
	};

	class Containers
	{
		file = "core\containers";
		class buyContainer {};
		class buyContainerDuration {};
		class containerMenu {};
		class containerStore {};
		class containerTake {};
		class initContainer {};
		class sellContainer {};
		class containerManagerMenu {};
		class containerUpgrade {};
	};
};
