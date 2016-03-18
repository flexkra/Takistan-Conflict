/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class GangShops {
    class miliz {
        name = "STR_Shops_Miliz";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "NONE","Equipment",0},
            { "rhsusf_ANPVS_15","",400}, 
            { "ItemGPS", "", 15 },
            { "ItemMap", "", 10 },
            { "ItemCompass", "", 15 },
            { "ToolKit", "", 50 },
            { "Chemlight_red", "", 20 },
            { "Chemlight_yellow", "", 20 },
            { "ACE_CableTie","",10},
            { "ACE_EarPlugs", "", 20 },
            { "ACE_MapTools", "", 15 }
        };
    };
    class militarycamp {
        name = "STR_Shops_MilitaryCamp";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = { 

        };
        mags[] = {
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_10x_303_M","",75},
             
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             {"CUP_TBG7V_M","",4000},
             
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_10x_303_M","",75},
             
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_20Rnd_762x51_DMR","",400},
             
             {"CUP_5Rnd_127x108_KSVK_M","",875},
             
             {"CUP_10Rnd_9x39_SP5_VSS_M","",700},
             {"CUP_20Rnd_9x39_SP5_VSS_M","",700},
             
             {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",700}
        };
    };
};
class WeaponShops {
    //Armory Shops
    class donator {
        name = "Donatorshop";
        side = "civ";
        license = "donator";
        level = -1;
        msg = "";
        items[] = {
            {"NONE","Waffen",0},
            { "CUP_arifle_AKS_Gold", "Goldene AK", 1337 },
            { "CUP_30Rnd_762x39_AK47_M", "30RND 7,62mm AK", 200 },
            { "CUP_srifle_CZ550","", 3500 },
            { "CUP_5x_22_LR_17_HMR_M", "", 250 },
            { "CUP_arifle_RPK74M", "Schwarze RPK 74", 1750 },
            { "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 100 },
            { "CUP_srifle_SVD_des", "Dragunov Desert", 3750 },
            { "CUP_10Rnd_762x54_SVD_M", "", 200 },
            { "CUP_arifle_XM8_Compact", "", 1750 },
            { "CUP_30Rnd_556x45_Stanag", "", 125 },
            { "CUP_srifle_LeeEnfield", "", 1500 },
            { "CUP_10x_303_M", "", 50 },
            { "CUP_arifle_AKS74U", "", 800 },
            { "CUP_30Rnd_545x39_AK_M", "", 20 },
            
            
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",100}, 
             {"optic_ACO_grn","",125},
             {"optic_mas_acog","",250},
             {"CUP_optic_PSO_1","",400},
             {"CUP_optic_PSO_3","",600},
             
            {"NONE","Ausrüstung",0},
            {"rhsusf_ANPVS_15","",400}, 
            { "ItemGPS", "", 15 },
            { "ItemMap", "", 10 },
            { "ItemCompass", "", 15 },
            { "ToolKit", "", 50 },
            { "Chemlight_red", "", 20 },
            { "Chemlight_yellow", "", 20 },
            { "ACE_CableTie","",10},
            { "ACE_EarPlugs", "", 20 },
            { "ACE_MapTools", "", 15 }
        };
    };
  class tankstellegebraucht {
        name = "Tankstellenshop";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "ToolKit", "", 150 },
            { "ACE_Flashlight_XL50", "", 20 },
            { "ACE_CableTie","",10},
            { "ACE_EarPlugs", "", 5 }
        };
    };
    class genstore {
        name = "Synced Gemischtwaren";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "ItemGPS", "", 30 },
            { "ItemMap", "", 20 },
            { "ItemCompass", "", 30 },
            { "ToolKit", "", 100 },
            { "Chemlight_red", "", 20 },
            { "Chemlight_yellow", "", 20 },
            { "ACE_CableTie","",10},
            { "ACE_EarPlugs", "", 20 },
            { "ACE_MapTools", "", 15 }
        };
    };
    class med_basic {
        name = "PJ Ausrüstung";
        side = "med";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "ItemGPS", "", 10 },
            { "ItemCompass", "", 10 },
            { "ToolKit", "", 10 },
            { "NVGoggles","",50},
            { "Binocular", "", 10 },
            { "Chemlight_green", "", 10 },
            { "Chemlight_blue", "", 10 },
            { "tf_anprc152","",10},
            { "SmokeShell", "", 10 },
            { "SmokeShellRed", "", 10 },
            { "SmokeShellGreen", "", 10 },
            { "acc_flashlight", "", 10 },
            { "ACE_TacticalLadder_Pack", "", 10 },
            { "ACE_EarPlugs", "", 10 },
            { "ACE_CableTie","",10},
            { "ACE_Flashlight_KSF1", "", 10 },
            { "ACE_Flashlight_MX991", "", 10 },
            { "ACE_MapTools", "", 10 }
        };
    };

    //Cop Shops
    class army_equipment {
        name = "Grundausrüstung";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
                        {"tf_anprc152","",10},
            {"ItemGPS","",10},
            {"ItemCompass","",10}, 
            {"NVGoggles" ,"",50},
            {"ToolKit","",10},
            {"Binocular","",10},
            {"Chemlight_green","",10},
            {"Chemlight_blue","",10},
            {"SmokeShell","",10},
            {"SmokeShellRed","",10},
            {"SmokeShellGreen","",10},
            {"acc_flashlight","",10},
                  {"ACE_CableTie","",10},
                  {"ACE_SpareBarrel","",10},
                  {"ACE_Altimeter","",10},
                  {"ACE_TacticalLadder_Pack","",10},
                  {"ACE_EarPlugs","",10},
                  {"ACE_DefusalKit","",10},
                  {"ACE_Flashlight_KSF1","",10},
                  {"ACE_Flashlight_MX991","",10},
                  {"ACE_MapTools","",10}
        };
    };
    class coplevel1 {
        name = "Recruit Waffenspind";
        side = "cop";
        license = "";
        level = 1;
        msg = "Du bist hier falsch!";
        items[] = {
                                        {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                       
                       
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        
                          
                                                {"NONE","Equipment",0},
                        {"NVGoggles","",10},
                                    {"ACE_M84","",10}
                      
                                       

            
        };
    };
    class coplevel2 {
        name = "Private Waffenspind";
        side = "cop";
        license = "";
        level = 2;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                        
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                          
                          
                                                {"NONE","Equipment",0},
                        {"NVGoggles","",10},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                                    {"ACE_M84","",10}
        };
    };

   class coplevel3 {
        name = "Private 1st Waffenspind";
        side = "cop";
        license = "";
        level = 3;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},                      
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                          
                                                {"NONE","Equipment",0},
                        {"NVGoggles","",10},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                                    {"ACE_M84","",10}
        };
    };

   class coplevel4 {
        name = "Specialist Waffenspind";
        side = "cop";
        license = "";
        level = 4;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                          
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10}, 
                                               
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                                                                                         
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"NVGoggles","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"ACE_RangeCard","",50},
                                    {"ACE_M84","",10}
                        
        };
    };


   class coplevel5 {
        name = "Corporal Waffenspind";
        side = "cop";
        license = "";
        level = 5;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                          
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                                                
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        

                        {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"NVGoggles","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"ACE_RangeCard","",50},
                                    {"ACE_M84","",10}
        };
    };

     class coplevel6 {
        name = "Sergeant Waffenspind";
        side = "cop";
        license = "";
        level = 6;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                                              
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"B_UavTerminal","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"ACE_RangeCard","",50},
                                    {"ACE_M84","",10}
        };
    };
    
         class coplevel7 {
        name = "Staff Sergeant Waffenspind";
        side = "cop";
        license = "";
        level = 7;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M24","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                                                                                                  
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"CUP_muzzle_snds_M16","",50},  

                        {"NONE","Equipment",0}, 
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"NVGoggles","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                        {"ACE_ATragMX","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
                        
                        
        };
    };
    
         class coplevel8 {
        name = "Sergeant First Class Waffenspind";
        side = "cop";
        license = "";
        level = 8;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                                                                                                                      
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"CUP_muzzle_snds_M16","",50},    
                                                

                        {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_bipod_VLTOR_Modpod","",50},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };

        class coplevel9 {
        name = "Master Sergeant Waffenspind";
        side = "cop";
        license = "";
        level = 9;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                                                                                                  
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                        {"CUP_muzzle_snds_M16","",50},  
                        

                        {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                        {"ACE_ATragMX","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };

        class coplevel10 {
        name = "Sergeant Major Waffenspind";
        side = "cop";
        license = "";
        level = 10;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                                                {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},

                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                        
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                        {"CUP_muzzle_snds_M16","",50},  
                        

                        {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"NVGoggles","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };

    
        class coplevel11 {
        name = "Command Sgt Major Waffenspind";
        side = "cop";
        license = "";
        level = 11;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                        
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                        
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_muzzle_snds_M16","",50}, 
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };
    
        class coplevel12 {
        name = "Second Lieutenant Waffenspind";
        side = "cop";
        license = "";
        level = 12;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                        {"CUP_srifle_M14","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                        
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                        

                        {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_muzzle_snds_M16","",50}, 
                        {"CUP_muzzle_snds_M9","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                        {"ACE_ATragMX","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };
    
    class coplevel13 {
        name = "First Lieutenant Waffenspind";
        side = "cop";
        license = "";
        level = 13;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                        {"CUP_srifle_M14","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                        
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50}, 
                        

                        {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                        {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_muzzle_snds_M16","",50}, 
                        {"CUP_muzzle_snds_M9","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                        {"ACE_ATragMX","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10},

                                              
        };
    };
    
        class coplevel14 {
        name = "Captain Waffenspind";
        side = "cop";
        license = "";
        level = 14;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                        {"CUP_srifle_M14","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},
                        
                                    {"CUP_smg_MP5SD6","",200},
                                    {"CUP_30Rnd_9x19_MP5","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                        
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                        {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_muzzle_snds_M16","",50}, 
                        {"CUP_muzzle_snds_M9","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };
    
        class coplevel15 {
        name = "Major Waffenspind";
        side = "cop";
        license = "";
        level = 15;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                                    {"CUP_smg_MP5SD6","",200},
                                    {"CUP_30Rnd_9x19_MP5","",10},
                        
                        {"CUP_srifle_M14","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                          
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                          
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                        {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_muzzle_snds_M16","",50}, 
                        {"CUP_muzzle_snds_M9","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                        {"ACE_ATragMX","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };
    
        class coplevel16 {
        name = "Colonel Waffenspind";
        side = "cop";
        license = "";
        level = 16;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                        {"CUP_srifle_M14","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                         
                                    {"CUP_smg_MP5SD6","",200},
                                    {"CUP_30Rnd_9x19_MP5","",10},
                        
                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},  
                        
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_muzzle_snds_M16","",50}, 
                        {"CUP_muzzle_snds_M9","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };

        class coplevel17 {
        name = "General Waffenspind";
        side = "cop";
        license = "";
        level = 17;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10}, 
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                        {"CUP_srifle_M14","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},
                        
                        {"CUP_srifle_AS50","",200},
                        {"CUP_5Rnd_127x99_as50_M","",10},
                        
                        {"CUP_srifle_M107_Base","",200},
                        {"CUP_10Rnd_127x99_M107","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                                    {"CUP_smg_MP5SD6","",200},
                                    {"CUP_30Rnd_9x19_MP5","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                        
                        {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                         
                        
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                                    {"B_UavTerminal","",50},
                        {"Rangefinder","",50},
                        {"ACE_RangeCard","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                                    {"CUP_muzzle_snds_M16","",50}, 
                        {"CUP_muzzle_snds_M9","",50},
                                    {"CUP_muzzle_snds_SCAR_H","",50},
                                    {"CUP_muzzle_snds_AWM","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };
    
    class coplevel18 {
        name = "Commander in Chief Waffenspind";
        side = "cop";
        license = "";
        level = 18;
        msg = "Du bist hier falsch!";
        items[] = {
                                    {"NONE","Waffen",0},
                        {"CUP_arifle_M16A4_Base","",200},
                                                {"CUP_arifle_M16A4_GL","",200},
                        {"CUP_arifle_M4A1_desert","",200},
                                                {"CUP_arifle_M4A1_BUIS_desert_GL","",200},
                        {"CUP_arifle_Mk16_STD_FG","",200},
                        {"CUP_arifle_Mk16_STD_EGLM","",200},
                                                {"CUP_arifle_Mk16_SV","",200},
                        {"CUP_30Rnd_556x45_Stanag","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                                                {"CUP_arifle_G36A_camo","",200},
                        {"CUP_arifle_G36C_camo","",200},
                        {"CUP_arifle_G36K_camo","",200},
                        {"CUP_30Rnd_556x45_G36","",10},
                        
                        {"CUP_arifle_MG36","",200},
                        {"CUP_100Rnd_556x45_BetaCMag","",10},
                        
                        {"CUP_srifle_Mk12SPR","",200},
                        {"CUP_20Rnd_556x45_Stanag","",10},
                        
                        {"CUP_lmg_M249","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_DMR","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                          
                        {"srifle_EBR_F","",200},
                        {"20Rnd_762x51_Mag","",10},  
                        
                        {"CUP_arifle_Mk17_STD_FG","",200},
                        {"CUP_arifle_Mk17_STD_EGLM","",200},
                        {"CUP_arifle_Mk20","",200},
                        {"CUP_20Rnd_762x51_B_SCAR","",10},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_lmg_L110A1","",200},
                        {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","",10},
                        
                        {"CUP_srifle_M24_des","",200},
                        {"CUP_5Rnd_762x51_M24","",10},                    
                        
                        {"CUP_lmg_M60E4","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_glaunch_Mk13","",200},
                        {"CUP_1Rnd_HE_M203","",10},
                        
                        {"CUP_srifle_M40A3","",200},
                        {"CUP_5Rnd_762x51_M24","",10},
                        
                        {"CUP_lmg_Mk48_des","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_M110","",200},
                        {"CUP_20Rnd_762x51_B_M110","",10},
                        
                        {"CUP_lmg_M240","",200},
                        {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",10},
                        
                        {"CUP_srifle_G22_des","",200},
                        {"CUP_5Rnd_762x67_G22","",10},
                        
                        {"CUP_srifle_AWM_des","",200},
                        {"CUP_5Rnd_86x70_L115A1","",10},
                        
                        {"CUP_srifle_M14","",200},
                        {"CUP_20Rnd_762x51_DMR","",10},
                        
                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},
                        
                        {"CUP_launch_Mk153Mod0","",200},
                        {"CUP_SMAW_HEDP_M","",10},
                        
                        {"CUP_hgun_Duty","",200},
                                                {"16Rnd_9x21_Mag","",10},
                        {"CUP_hgun_M9","",200},
                        {"CUP_15Rnd_9x19_M9","",10},
                        
                          
                                                {"NONE","Aufsätze",0},
                        {"CUP_optic_CompM2_Black","",50},
                        {"CUP_optic_RCO","",50},
                        {"optic_NVS","",50},
                        {"CUP_optic_ACOG","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"CUP_optic_SB_11_4x20_PM","",50},
                        {"CUP_optic_SB_3_12x50_PMII","",50},
                        {"CUP_optic_ELCAN_SpecterDR","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"CUP_optic_Leupold_VX3","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_LRPS","",50},
                        {"CUP_muzzle_snds_M16","",50},  
                        
                          
                                                {"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"HandGrenade","",50},
                        {"NVGoggles","",50},
                                    {"CUP_muzzle_mfsup_SCAR_H","",50},
                        {"CUP_bipod_VLTOR_Modpod","",10},
                        {"CUP_Vector21Nite","",50},
                        {"Rangefinder","",50},
                                    {"B_UavTerminal","",50},
                        {"ACE_RangeCard","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
                        {"ACE_HuntIR_M203","",50},
                                    {"ACE_M84","",10}
        };
    };
    
          class weapon3 {
        name = "Level3 Shop";
        side = "civ";
        license = "";
        level = ;
        msg = "Du hast noch nicht das richtige Level";
        items[] = {
           {"NONE","Waffen",0},
               {"CUP_hgun_Makarov","",300},
           {"CUP_8Rnd_9x18_Makarov_M","",20},
             
           {"NONE","Equipment",0},
           { "ToolKit", "", 150 },
           {"Binocular","",200},  
           {"ACE_EarPlugs","",25},
           {"ItemGPS","",35}
        };
    };
  
  class weapon4 {
        name = "Level4 Shop";
        side = "civ";
        license = "";
        level = 4;
        msg = "Du hast noch nicht das richtige Level";
        items[] = {
             {"NONE","Waffen",0},
                   {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"Binocular","",200},  
             {"ACE_EarPlugs","",25},
             {"ItemGPS","",35} 
        };
    };
  
    class weapon5 {
        name = "Level5 Shop";
        side = "civ";
        license = "";
        level = 5;
        msg = "Du hast noch nicht das richtige Level";
        items[] = {
             {"NONE","Waffen",0},
                       {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"Binocular","",200},
             {"rhsusf_ANPVS_14" ,"",400},
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}   
        };
    };
  
    class weapon6 {
        name = "Level6/7 Shop";                                // und 7
        side = "civ";
        license = "";
        level = 6;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                       {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_30Rnd_545x39_AK_M","",55},
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200}, 
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}    
        };
    };  
  
      class weapon8 {
        name = "Level8/9 Shop";                  // und 9
        side = "civ";
        license = "";
        level = 8;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
             {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350},
             {"CUP_30Rnd_545x39_AK_M","",55},
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
        class weapon10 {
        name = "Level10/11 Shop";                   // und 11
        side = "civ";
        license = "";
        level = 10;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350},
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon12 {
        name = "Level12 Shop";                   
        side = "civ";
        license = "";
        level = 12;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon13 {
        name = "Level13 Shop";                   
        side = "civ";
        license = "";
        level = 13;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150},
             {"optic_mas_Holosight_camo","",300},
             
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };
  
        class weapon14 {
        name = "Level14 Shop";                   
        side = "civ";
        license = "";
        level = 14;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150},
             {"optic_mas_Holosight_camo","",300},
             {"optic_ACO_grn","",200},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon15 {
        name = "Level15/16 Shop";                                 // und 16
        side = "civ";
        license = "";
        level = 15;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_30Rnd_556x45_Stanag","",60},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_ACO_grn","",200},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon17 {
        name = "Level17 Shop";                                
        side = "civ";
        license = "";
        level = 17;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_30Rnd_556x45_Stanag","",60},
             

             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon18 {
        name = "Level18 Shop";                                
        side = "civ";
        license = "";
        level = 18;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
               
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
        class weapon19 {
        name = "Level19 Shop";                                
        side = "civ";
        license = "";
        level = 19;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_30Rnd_556x45_Stanag","",60},
                                    
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"FHQ_optic_VCOG_tan","",300},
             {"CUP_optic_RCO","",400},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };   
  
        class weapon20 {
        name = "Level20 Shop";                                
        side = "civ";
        license = "";
        level = 20;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"UP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon21 {
        name = "Level21 Shop";                                
        side = "civ";
        license = "";
        level = 21;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2500},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400}, 
             {"CUP_optic_PSO_1","",500},
             {"CUP_muzzle_PBS4","",3500},
             
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon22 {
        name = "Level22 Shop";                                
        side = "civ";
        license = "";
        level = 22;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2500},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150}, 
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400}, 
             {"CUP_optic_PSO_1","",500},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon23 {
        name = "Level23 Shop";                                
        side = "civ";
        license = "";
        level = 23;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400}, 
             {"CUP_optic_PSO_1","",500},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon24 {
        name = "Level24 Shop";                                
        side = "civ";
        license = "";
        level = 24;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
        class weapon25 {
        name = "Level25 Shop";                                
        side = "civ";
        license = "";
        level = 25;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300}, 
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
  class weapon26 {
        name = "Level26 Shop";                                
        side = "civ";
        license = "";
        level = 26;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon27 {
        name = "Level27 Shop";                                
        side = "civ";
        license = "";
        level = 27;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"CUP_muzzle_PBS4","",3500},
             
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},


               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
  class weapon28 {
        name = "Level28 Shop";                              
        side = "civ";
        license = "";
        level = 28;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon29 {
        name = "Level29 Shop";                               
        side = "civ";
        license = "";
        level = 29;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon30 {
        name = "Level30 Shop";                               
        side = "civ";
        license = "";
        level = 30;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon31 {
        name = "Level31 Shop";                               
        side = "civ";
        license = "";
        level = 31;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon32 {
        name = "Level32 Shop";                               
        side = "civ";
        license = "";
        level = 32;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon33 {
        name = "Level33 Shop";                               
        side = "civ";
        license = "";
        level = 33;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
             {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
    class weapon34 {                                           
        name = "Level34 Shop";                               
        side = "civ";
        license = "";
        level = 34;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon35 {                                           
        name = "Level35 Shop";                               
        side = "civ";
        license = "";
        level = 35;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon36 {                                           
        name = "Level36 Shop";                               
        side = "civ";
        license = "";
        level = 36;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon37 {                                           
        name = "Level37 Shop";                               
        side = "civ";
        license = "";
        level = 37;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon38 {                                           
        name = "Level38 Shop";                               
        side = "civ";
        license = "";
        level = 38;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon39 {                                           
        name = "Level39 Shop";                               
        side = "civ";
        license = "";
        level = 39;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon40 {                                           
        name = "Level40 Shop";                               
        side = "civ";
        license = "";
        level = 40;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon41 {                                           
        name = "Level41 Shop";                               
        side = "civ";
        license = "";
        level = 41;
        msg = "";
        items[] = {
            {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon42 {                                           
        name = "Level42 Shop";                               
        side = "civ";
        license = "";
        level = 42;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon43 {                                           
        name = "Level43 Shop";                               
        side = "civ";
        license = "";
        level = 43;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
                         
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon44 {                                           
        name = "Level44 Shop";                               
        side = "civ";
        license = "";
        level = 44;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  
  class weapon45 {                                           
        name = "Level45 Shop";                               
        side = "civ";
        license = "";
        level = 45;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
             
             {"CUP_srifle_ksvk","",8750},
             {"CUP_5Rnd_127x108_KSVK_M","",875},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  
  class weapon46 {                                           
        name = "Level46 Shop";                               
        side = "civ";
        license = "";
        level = 46;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
             
             {"CUP_srifle_ksvk","",8750},
             {"CUP_5Rnd_127x108_KSVK_M","",875},
             
             {"CUP_srifle_VSSVintorez","",8500},
             {"CUP_10Rnd_9x39_SP5_VSS_M","",700},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon47 {                                           
        name = "Level47 Shop";                               
        side = "civ";
        license = "";
        level = 47;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
             
             {"CUP_srifle_ksvk","",8750},
             {"CUP_5Rnd_127x108_KSVK_M","",875},
             
             {"CUP_srifle_VSSVintorez","",8500},
             {"CUP_10Rnd_9x39_SP5_VSS_M","",700},
             {"CUP_20Rnd_9x39_SP5_VSS_M","",700},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  
  class weapon48 {                                           
        name = "Level48 Shop";                               
        side = "civ";
        license = "";
        level = 48;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
             
             {"CUP_srifle_ksvk","",8750},
             {"CUP_5Rnd_127x108_KSVK_M","",875},
             
             {"CUP_srifle_VSSVintorez","",8500},
             {"CUP_10Rnd_9x39_SP5_VSS_M","",700},
             {"CUP_20Rnd_9x39_SP5_VSS_M","",700},
             
             {"CUP_lmg_L7A2","",8750},
             {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",700},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon49 {                                           
        name = "Level49 Shop";                               
        side = "civ";
        license = "";
        level = 49;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
             
             {"CUP_srifle_ksvk","",8750},
             {"CUP_5Rnd_127x108_KSVK_M","",875},
             
             {"CUP_srifle_VSSVintorez","",8500},
             {"CUP_10Rnd_9x39_SP5_VSS_M","",700},
             {"CUP_20Rnd_9x39_SP5_VSS_M","",700},
             
             {"CUP_lmg_L7A2","",8750},
             {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",700},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon50 {                                           
        name = "Level50 Shop";                               
        side = "civ";
        license = "";
        level = 50;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
                 {"CUP_hgun_Makarov","",300},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_PB6P9","",350},
             {"CUP_8Rnd_9x18_Makarov_M","",20},
             {"CUP_hgun_SA61","",425},
             {"CUP_20Rnd_B_765x17_Ball_M","",30},
             
             {"CUP_arifle_AKS74U","",1100},
             {"CUP_arifle_AK74","",1350}, 
             {"CUP_arifle_AK74M_GL","",1500}, 
             {"CUP_30Rnd_545x39_AK_M","",55},
             {"CUP_1Rnd_HE_GP25_M","",450},
             
             {"CUP_srifle_LeeEnfield","",1850},
             {"CUP_10x_303_M","",75},
             
             {"CUP_arifle_CZ805_A1","",1650},
             {"CUP_arifle_L85A2","",1800},
             {"CUP_arifle_XM8_Carbine","",1950},
             {"CUP_arifle_xm8_sharpshooter","",2200},
             {"CUP_30Rnd_556x45_Stanag","",60},
             
             {"CUP_arifle_RPK74_45","",2250},
             {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","",150},
             
             {"CUP_arifle_CZ805_B","",2750},
             {"CUP_20Rnd_762x51_CZ805B","",250},
             
             {"CUP_arifle_FNFAL_railed","",3250},
             {"CUP_20Rnd_762x51_FNFAL_M","",300},
             
             {"CUP_glaunch_M79","",1000},
             {"CUP_1Rnd_HE_M203","",450},
             
             {"CUP_srifle_SVD","",4250},
             {"CUP_10Rnd_762x54_SVD_M","",450},
             
             {"CUP_launch_RPG7V","",2000},
             {"CUP_PG7V_M","",2000},
             {"CUP_PG7VR_M","",2500},
             {"CUP_PG7VM_M","",3000},
             {"CUP_TBG7V_M","",4000},
             
             {"CUP_arifle_AKM","",5500},
             {"CUP_30Rnd_762x39_AK47_M","",250},
             
             {"CUP_srifle_CZ550","",4750},
             {"CUP_5x_22_LR_17_HMR_M","",300},
             
             {"CUP_srifle_LeeEnfield_rail","",4750},
             {"CUP_10x_303_M","",75},
             
             {"CUP_lmg_Pecheneg","",7250},
             {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","",250},
             
             {"CUP_arifle_Sa58RIS2","",7250},
             {"CUP_30Rnd_Sa58_M_TracerG","",250},
             
             {"CUP_srifle_CZ750","",7500},
             {"CUP_10Rnd_762x51_CZ750_Tracer","",350},
             
             {"CUP_srifle_M14","",8000},
             {"CUP_20Rnd_762x51_DMR","",400},
             
             {"CUP_srifle_ksvk","",8750},
             {"CUP_5Rnd_127x108_KSVK_M","",875},
             
             {"CUP_srifle_VSSVintorez","",8500},
             {"CUP_10Rnd_9x39_SP5_VSS_M","",700},
             {"CUP_20Rnd_9x39_SP5_VSS_M","",700},
             
             {"CUP_lmg_L7A2","",8750},
             {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","",700},
               
             {"NONE","Aufsätze",0},
             {"CUP_optic_Kobra","",150}, 
             {"optic_ACO_grn","",200},
             {"optic_mas_Holosight_camo","",300},
             {"CUP_optic_CompM2_Woodland","",300},
             {"optic_mas_acog","",300},
             {"CUP_optic_RCO","",400},
             {"CUP_optic_ACOG","",500},  
             {"CUP_optic_PSO_1","",500}, 
             {"CUP_optic_PSO_3","",750},
             {"optic_NVS","",500},
             {"FHQ_optic_ACOG","",1000},
             {"CUP_optic_NSPU","",1000},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"CUP_muzzle_PBS4","",3500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             { "ToolKit", "", 150 },
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
};