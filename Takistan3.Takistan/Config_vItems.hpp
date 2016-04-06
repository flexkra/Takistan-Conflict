/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ziegenmilch", "dattel", "fladen", "guertel", "pipe", "behaelter", "flask", "bandage", "kochsalz", "morphin", "epikit", "coalp", "mehl" };
    };

    class tankstelle {
        name = "STR_Shops_Tankstelle";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ziegenmilch", "dattel", "fladen", "fuelF" };
    };

    class bandit {
        name = "STR_Shops_Bandit";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ziegenmilch", "dattel", "fladen", "bandage", "kochsalz", "morphin", "epikit" };
    };

    class heroin {
        name = "STR_Shops_Heroin";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "marijuana_refined", "marijuana", "heroin_processed", "heroin_refined" };
    };

    class dirtydoc {
        name = "STR_Shops_Dirtydoc";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "bandage", "kochsalz", "morphin", "epikit" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oil_processed" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "burger", "cola", "spikeStrip", "strahler", "barrier", "barricade", "lockpick", "tape", "bandage", "kochsalz", "morphin", "epikit", "defusekit" };
    };

    class medic {
        name = "STR_Shops_Medic";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "burger", "cola", "fuelFull", "strahler", "barrier", "barricade", "tape",  "lockpick" };
    };

    class electrostore {
        name = "STR_Shops_Electrostore";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "battery", "gehaeuse", "antenne" , "abhoergeraet" };
    };

    class electrostore2 {
        name = "STR_Shops_Electrostore";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "battery", "gehaeuse", "antenne", "abhoergeraet" };
    };

    class blackstore  {
        name = "STR_Shops_Blackstore";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "lockpick", "blastingcharge", "depotwaffen", "nitroglycerin", "boltcutter" };
    };

    class hehler {
        name = "STR_Shops_Hehler";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar", "information" };
    };

    class fladen {
        name = "STR_Shops_Fladen";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "fladen" };
    };

    
};

class VirtualGangShops {
    class werkstatt {
        name = "STR_Shops_Werkstatt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "battery", "gehaeuse", "antenne", "abhoergeraet", "blastingcharge", "boltcutter" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelempty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_spikestrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_goldbar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltcutters.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defusekit.paa";
    };

    /*class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };*/

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 55;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = -1;
        sellPrice = 65;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class marijuana_refined {
        variable = "marijuana_refined";
        displayName = "STR_Item_MarijuanaR";
        weight = 3;
        buyPrice = -1;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tbacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_cookedMeat.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_cookedMeat.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_cookedMeat.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    //Synced - Stuff

    class dogtag {
        variable = "dogtag" ;
        displayName = "STR_Item_Dogtag";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_dogtags.paa";
    };

    class information {
        variable = "information" ;
        displayName = "STR_Item_Information";
        weight = 3;
        buyPrice = -1;
        sellPrice = 10;
        illegal = true;
        edible = -1;
        icon = "icons\ico_info.paa";
    };

    class depotwaffen {
        variable = "depotwaffen" ;
        displayName = "STR_Item_Depotwaffen";
        weight = 10;
        buyPrice = -1;
        sellPrice = 500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_depotwaffen.paa";
    };

    //Medic
    class bandage {
        variable = "bandage";
        displayName = "STR_Item_Bandage";
        weight = 1;
        buyPrice = 20;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_bandage.paa";
    };

    class traumakit {
        variable = "traumakit";
        displayName = "STR_Item_Traumakit";
        weight = 3;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_traumakit.paa";
    };

    class kochsalz {
        variable = "kochsalz";
        displayName = "STR_Item_Kochsalz";
        weight = 2;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kochsalz.paa";
    };

    class morphin {
        variable = "morphin";
        displayName = "STR_Item_Morphin";
        weight = 3;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_morphin.paa";
    };

    class epikit {
        variable = "epikit";
        displayName = "STR_Item_Epikit";
        weight = 3;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_epikit.paa";
    };

    //Mineitems

    class mehl {
        variable = "mehl";
        displayName = "STR_Item_Mehl";
        weight = 1;
        buyPrice = -1;
        sellPrice = 13;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mehl.paa";
    };

    class getreide {
        variable = "getreide";
        displayName = "STR_Item_Getreide";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_getreide.paa";
    };

    class wasser {
        variable = "wasser";
        displayName = "STR_Item_Wasser";
        weight = 1;
        buyPrice = -1;
        sellPrice = 13;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wasser.paa";
    };

    //Illegal Stuff

    class goldore {
        variable = "goldore";
        displayName = "STR_Item_Goldore";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldore.paa";
    };

    class coalp {
        variable = "coalp";
        displayName = "STR_Item_CoalP";
        weight = 3;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_coalp.paa";
    };

    class sulfuru {
        variable = "sulfuru";
        displayName = "STR_Item_Sulfuru";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_sulfuru.paa";
    };

    class sulfurup {
        variable = "sulfurup";
        displayName = "STR_Item_SulfuruP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 10;
        illegal = true;
        edible = -1;
        icon = "icons\ico_sulfurp.paa";
    };

    class nitre {
        variable = "nitre";
        displayName = "STR_Item_Nitre";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_nitre.paa";
    };

    class potassiumnitrate {
        variable = "potassiumnitrate";
        displayName = "STR_Item_Potassiumnitrate";
        weight = 3;
        buyPrice = -1;
        sellPrice = 10;
        illegal = true;
        edible = -1;
        icon = "icons\ico_potassiumnitrate.paa";
    };

    class nitroglycerin {
        variable = "nitroglycerin";
        displayName = "STR_Item_Nitroglycerin";
        weight = 6;
        buyPrice = 200;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_nitroglycerin.paa";
    };

    class gunpowder {
        variable = "gunpowder";
        displayName = "STR_Item_Gunpowder";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_gunpowder.paa";
    };

    class explosive {
        variable = "explosive";
        displayName = "STR_Item_Explosive";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_gunpowder.paa";
    };

    // Essen und Trinken

    class fladen {
        variable = "fladen";
        displayName = "STR_Item_Fladen";
        weight = 2;
        buyPrice = -1;
        sellPrice = 37;
        illegal = false;
        edible = 30;
        icon = "icons\ico_fladen.paa";
    };

    class burger {
        variable = "burger";
        displayName = "STR_Item_Burger";
        weight = 1;
        buyPrice = 3;
        sellPrice = -1;
        illegal = false;
        edible = 40;
        icon = "icons\ico_burger.paa";
    };

    class dattel {
        variable = "dattel";
        displayName = "STR_Item_Dattel";
        weight = 1;
        buyPrice = 1;
        sellPrice = -1;
        illegal = false;
        edible = 15;
        icon = "icons\ico_dattel.paa";
    };

    class cola {
        variable = "cola";
        displayName = "STR_Item_Cola";
        weight = 1;
        buyPrice = 2;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cola.paa";
    };

    class ziegenmilch {
        variable = "ziegenmilch";
        displayName = "STR_Item_Ziegenmilch";
        weight = 1;
        buyPrice = 2;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ico_ziegenmilch.paa";
    };

    //Crafting 

    class guertel {
        variable = "guertel";
        displayName = "STR_Item_Guertel";
        weight = 2;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_guertel.paa";
    };

    class antenne {
        variable = "antenne" ;
        displayName = "STR_Item_Antenne";
        weight = 2;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_antenne.paa";
    };

    class gehaeuse {
        variable = "gehaeuse";
        displayName = "STR_Item_Gehaeuse";
        weight = 3;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_gehaeuse.paa";
    };

    class behaelter {
        variable = "behaelter";
        displayName = "STR_Item_Behaelter";
        weight = 3;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_behaelter.paa";
    };

    class battery {
        variable = "battery" ;
        displayName = "STR_Item_Battery";
        weight = 1;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_battery.paa";
    };

    class abhoergeraet {
        variable = "abhoergeraet" ;
        displayName = "STR_Item_Abhoergeraet";
        weight = 5;
        buyPrice = 100;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_abhoergeraet.paa";
    };

    class flask {
        variable = "flask" ;
        displayName = "STR_Item_Flask";
        weight = 1;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_flask.paa";
    };

    class altpapier {
        variable = "altpapier" ;
        displayName = "STR_Item_Altpapier";
        weight = 2;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_altpapier.paa";
    };

    class pipe {
        variable = "pipe" ;
        displayName = "STR_Item_Pipe";
        weight = 2;
        buyPrice = 20;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pipe.paa";
    };

    class blumenerde {
        variable = "blumenerde" ;
        displayName = "STR_Item_Blumenerde";
        weight = 3;
        buyPrice = 20;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_blumenerde.paa";
    };

    // Aufbauzeugs

    class barricade {
        variable = "barricade" ;
        displayName = "STR_Item_Barricade";
        weight = 3;
        buyPrice = 10;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_barricade.paa";
    };

    class barrier {
        variable = "barrier" ;
        displayName = "STR_Item_Barrier";
        weight = 3;
        buyPrice = 10;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_barrier-paa";
    };

    class tape {
        variable = "tape" ;
        displayName = "STR_Item_Tape";
        weight = 3;
        buyPrice = 10;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_flatterband.paa";
    };

    class strahler {
        variable = "strahler" ;
        displayName = "STR_Item_Strahler";
        weight = 3;
        buyPrice = 10;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_strahler.paa";
    };

    // Transporte

    class pistolenlieferung {
        variable = "pistolenlieferung";
        displayName = "STR_Item_Pistolenlieferung";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class nahrungsmittel {
        variable = "nahrungsmittel";
        displayName = "STR_Item_Nahrungsmittel";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class munitionslieferung {
        variable = "munitionslieferung";
        displayName = "STR_Item_Munitionslieferung";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class aklieferung {
        variable = "aklieferung";
        displayName = "STR_Item_Aklieferung";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class gestohlenevisiere {
        variable = "gestohlenevisiere";
        displayName = "STR_Item_Gestohlenevisiere";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class uniformen {
        variable = "uniformen";
        displayName = "STR_Item_Uniformen";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class koran {
        variable = "koran";
        displayName = "STR_Item_Koran";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class kondome {
        variable = "kondome";
        displayName = "STR_Item_Kondome";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class sniperkiste {
        variable = "sniperkiste";
        displayName = "STR_Item_Sniperkiste";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
    };
};
