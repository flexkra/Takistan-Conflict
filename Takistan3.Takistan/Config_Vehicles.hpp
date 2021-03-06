class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "RDS_Lada_Civ_01", 150, "none", { "life_level", 1 }},
            { "RDS_S1203_Civ_01", 250, "none", { "life_level", 2 }},
            { "RDS_Gaz24_Civ_01", 300, "none", { "life_level", 4 }},
            { "rhs_uaz_open_MSV_01", 400, "none", { "life_level", 5 }},
            { "C_Van_01_transport_F", 1750, "none", { "life_level", 6 }},
            { "C_Van_01_fuel_F", 2750, "none", { "life_level", 8 }},
            { "UAZ_Unarmed", 550, "none", { "life_level", 7 }},
            { "RDS_Octavia_Civ_01", 500, "none", { "life_level", 8 }},
            { "C_Quadbike_01_F", 350, "none", { "life_level", 9 }}
        };
    };

    
    class donator_car {
        side = "civ";
        vehicles[] = {
            { "C_SUV_01_F", 3250, "donator", { "life_level", 1 }},
            { "C_Van_01_transport_F", 1500, "donator", { "life_level", 1 }},
            { "rhs_gaz66_ammo_vmf", 7000, "donator", { "life_level", 1 }},
            { "RDS_Golf4_Civ_01", 300, "donator", { "life_level", 1 }},
            { "max_Dodge_multy", 6000, "donator", { "life_level", 1 }},
            { "O_MRAP_02_F", 12500, "donator", { "life_level", 1 }},
            { "DAR_MK27T", 25000, "donator", { "life_level", 1 }},
            { "RHS_Ural_Open_Civ_01", 3000, "donator", { "life_level", 1 }}
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "I_mas_cars_LR_soft_Med", 100, "none", { "life_mediclevel", 1 }},
            { "RDS_S1203_Civ_02", 100, "none", { "life_mediclevel", 1 }},
            { "B_mas_cars_Hilux_Med", 125, "none", { "life_mediclevel", 2 }},
            { "B_mas_cars_LR_Med", 125, "none", { "life_mediclevel", 2 }},
            { "I_mas_cars_UAZ_Med", 150, "none", { "life_mediclevel", 3 }},
            { "B_mas_HMMWV_MEV", 200, "none", { "life_mediclevel", 4 }},
            { "B_mas_HMMWV_MEV_des", 200, "none", { "life_mediclevel", 4 }}
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "GR_Bell412_1", 100, "none", { "life_mediclevel", 1 }},
            { "B_mas_UH1Y_MEV_F", 100, "none", { "life_mediclevel", 2 }},
            //{ "UH1H", 100, "none", { "life_mediclevel", 2 }},
            //{ "RHS_UH60M_MEV_d", 100, "none", { "life_mediclevel", 3 }},
            { "RHS_UH60M_MEV", 100, "none", { "life_mediclevel", 3 }},
            { "B_mas_UH60M_MEV", 100, "none", { "life_mediclevel", 4 }}
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "RDS_Ikarus_Civ_01", 500, "none", { "life_level", 10 }},
            { "RHS_Ural_Open_Civ_01", 3750, "none", { "life_level", 10 }},
            { "B_mas_cars_Hilux_Unarmed", 1850, "none", { "life_level", 13 }},
            { "O_Truck_02_covered_F", 5250, "none", { "life_level", 13 }},
            { "B_mas_cars_LR_Unarmed", 2000, "none", { "life_level", 15 }},
            { "rhs_gaz66_ammo_vmf", 7750, "none", { "life_level", 16 }},
            { "O_Truck_03_ammo_F", 9750, "none", { "life_level", 17 }},
            { "I_mas_cars_UAZ_M2", 4500, "none", { "life_level", 18 }},
            { "B_mas_cars_Hilux_M2", 6750, "none", { "life_level", 19 }},
            { "B_Truck_01_box_F", 12500, "none", { "life_level", 19 }},
            { "I_mas_cars_LR_soft_M2", 8750, "none", { "life_level", 20 }},
            { "B_Truck_01_fuel_F", 15000, "none", { "life_level", 21 }},
            { "I_mas_cars_UAZ_MG", 9760, "none", { "life_level", 22 }},
            { "B_mas_cars_Hilux_MG", 10750, "none", { "life_level", 23 }},
            { "RHS_Ural_Fuel_MSV_01", 18750, "none", { "life_level", 24 }},
            { "DAR_LHS_16", 22750, "none", { "life_level", 26 }},
            { "B_G_Offroad_01_armed_F", 11000, "none", { "life_level", 29 }},
            { "DAR_MK27T", 27000, "none", { "life_level", 30 }},
            { "C_Hatchback_01_F", 3000, "none", { "life_level", 33 }},
            { "B_Truck_01_ammo_F", 35000, "none", { "life_level", 35 }},
            { "C_SUV_01_F", 4500, "none", { "life_level", 36 }},
            { "max_Dodge_multy", 6750, "none", { "life_level", 39 }},
            { "I_mas_cars_UAZ_SPG9", 15000, "none", { "life_level", 40 }},
            { "B_mas_cars_Hilux_SPG9", 16500, "none", { "life_level", 42 }},
            { "O_MRAP_02_F", 15000, "none", { "life_level", 44 }}
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "rhsusf_m998_d_2dr", 100, "none", { "life_coplevel", 1 }},
            { "rhsusf_m998_d_4dr", 125, "none", { "life_coplevel", 2 }},
            { "DAR_M1152", 150, "none", { "life_coplevel", 3 }},
            { "rhsusf_m1025_d", 175, "none", { "life_coplevel", 4 }},
            { "rhsusf_m1025_d_m2", 200, "none", { "life_coplevel", 5 }},
            { "DAR_M1165_GMV", 225, "none", { "life_coplevel", 6 }},
            { "DAR_MK23ADT", 1000, "none", { "life_coplevel", 6 } },
            { "DAR_M1151", 250, "none", { "life_coplevel", 8 }},
            { "max_Dodge_multy", 250, "none", { "life_coplevel", 8 }},
            { "DAR_M1151_Deploy", 250, "none", { "life_coplevel", 10 }},
            { "DAR_M1167", 275, "none", { "life_coplevel", 12 }},
            { "UAZ_Unarmed", 200, "none", { "life_coplevel", 12}},
            { "B_mas_cars_Hilux_Unarmed", 200, "none", { "life_coplevel", 12}},
            { "rhsusf_m113d_usarmy", 1337, "none", { "life_coplevel", 16 }}
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "GR_Mi8_1", 15000, "none", { "life_level", 24 }},
            { "GR_Mi_171_2", 30000, "none", { "life_level", 32 }},
            { "O_Heli_Light_02_unarmed_F", 80000, "none", { "life_level", 49 }}
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "GR_UH1H_6", 1000, "none", { "life_coplevel", 4 } },
            { "B_Heli_Light_01_F", 1000, "none", { "life_coplevel", 5 } },
            { "RHS_CH_47F", 1000, "none", { "life_coplevel", 5 } },
            { "GR_UH1H_3", 2000, "none", { "life_coplevel", 6 } },
            { "GR_UH1H_2", 3000, "none", { "life_coplevel", 7 } },
            { "GR_AW101_1", 5000, "none", { "life_coplevel", 8 } },
            { "GR_UH60_1", 6000, "none", { "life_coplevel", 9 } },
            { "B_Plane_CAS_01_F", 1, "none", { "life_coplevel", 17 } },
            { "B_UAV_02_F", 1, "none", { "life_coplevel", 17 } },
            { "B_Heli_Light_01_armed_F", 20000, "none", { "life_coplevel", 16 } }
        };
    };

  class cop_drone {
    side = "cop";
    vehicles[] = {
            { "B_UAV_01_F", 1000, "none", { "life_coplevel", 4 } },
            { "B_UAV_02_CAS_F", 5000, "none", { "life_coplevel", 17 } }
    };
  };

};

/*
    Vehicle Configs (Contains textures and other stuff)

    storageFee (Getting vehicles out of garage) format:
        INDEX 0: Civilian Price
        INDEX 1: Cop Price
        INDEX 3: EMS Price
        INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

    Textures config follows { Texture Name, side, {texture(s)path}}
    Texture(s)path follows this format:
        INDEX 0: Texture Layer 0
        INDEX 1: Texture Layer 1
        INDEX 2: Texture Layer 2
        etc etc etc
*/
class LifeCfgVehicles {
    class Default {
        vItemSpace = 10;
        storageFee[] = { 50, 50, 50, 50 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class RDS_Lada_Civ_01 {
        vItemSpace = 15;
        storageFee[] = { 20, 0, 20, 0 };
        garageSell[] = { 50, 50, 50, 50 };
        chopShop = 3000;
        insurance = 2500;
        textures[] = {};
    };

    class RDS_S1203_Civ_01 {
        vItemSpace = 17;
        storageFee[] = { 25, 0, 3000, 0 };
        garageSell[] = { 85, 85, 85, 85 };
        chopShop = 7500;
        textures[] = {};
    };

    class RDS_Gaz24_Civ_01 {
        vItemSpace = 17;
        storageFee[] = { 35, 0, 6500, 0 };
        garageSell[] = { 100, 100, 100, 100 };
        chopShop = 12500;
        textures[] = {};
    };
    
    class O_Truck_02_covered_F {
        vItemSpace = 85;
        storageFee[] = { 525, 525, 525, 525 };
        garageSell[] = { 1750, 1750, 1750, 1750 };
        chopShop = 12500;
        textures[] = {};
    };
    
    class B_Truck_01_box_F {
        vItemSpace = 140;
        storageFee[] = { 35, 0, 0, 0 };
        garageSell[] = { 4150, 4150, 4150, 4150 };
        chopShop = 12500;
    };
    
    class C_Van_01_fuel_F {
        vItemSpace = 55;
        storageFee[] = { 35, 0, 0, 0 };
        garageSell[] = { 920, 920, 920, 920 };
        chopShop = 12500;
    };
    
    class rhs_uaz_open_MSV_01 {
        vItemSpace = 15;
        storageFee[] = { 45, 0 , 0, 0 };
        garageSell[] = { 135, 135, 135, 135 };
        insurance = 16000;
        chopShop = 45000;
    };
    
    class O_Truck_03_ammo_F {
        vItemSpace = 115;
        storageFee[] = { 400, 400 , 400, 400 };
        garageSell[] = { 3250, 3250, 3250, 3250 };
        insurance = 16000;
        chopShop = 45000;
    };

    
    class DAR_MK27T {
        vItemSpace = 195;
        storageFee[] = { 100, 0, 0, 0 };
        garageSell[] = { 3250, 3250, 3250, 3250 };
        insurance = 16000;
        chopShop = 45000;
    };
    
    class C_Van_01_transport_F {
        vItemSpace = 40;
        storageFee[] = { 20, 0, 0, 0 };
        garageSell[] = { 585, 585, 585, 585 };
        insurance = 16000;
        chopShop = 45000;
    };

    class UAZ_Unarmed {
        vItemSpace = 17;
        storageFee[] = { 45, 0, 0, 0 };
        garageSell[] = { 185, 185, 185, 185 };
        insurance = 16000;
        chopShop = 45000;
    };
    
    class DAR_LHS_16 {
        vItemSpace = 180;
        storageFee[] = { 45, 0, 0, 0 };
        garageSell[] = { 7585, 7585, 7585, 7585 };
        insurance = 16000;
        chopShop = 45000;
    };
    

    class RDS_Octavia_Civ_01 {
        vItemSpace = 19;
        storageFee[] = { 50, 0, 0, 0 };
        garageSell[] = { 170, 170, 170, 170 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Quadbike_01_F {
        vItemSpace = 5;
        storageFee[] = { 20, 0, 0, 0 };
        garageSell[] = { 120, 120, 120, 120 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class RDS_Ikarus_Civ_01 {
        vItemSpace = 20;
        storageFee[] = { 50, 50, 50, 50 };
        garageSell[] = { 165, 165, 165, 165 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_mas_cars_Hilux_Unarmed {
        vItemSpace = 20;
        storageFee[] = { 85, 185, 185, 185 };
        garageSell[] = { 615, 615, 615, 615 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_mas_cars_LR_Unarmed {
        vItemSpace = 20;
        storageFee[] = { 100, 200, 200, 200 };
        garageSell[] = { 665, 665, 665, 665 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class rhs_gaz66_ammo_vmf {
        vItemSpace = 100;
        storageFee[] = { 175, 775, 775, 775 };
        garageSell[] = { 2585, 2585, 2585, 2585 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class rhs_gaz66_vmf {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class I_mas_cars_UAZ_M2 {
        vItemSpace = 10;
        storageFee[] = { 85, 0, 0, 0 };
        garageSell[] = { 1500, 1500, 1500, 1500 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class B_mas_cars_Hilux_M2 {
        vItemSpace = 10;
        storageFee[] = { 90, 0, 0, 0 };
        garageSell[] = { 2250, 2250, 2250, 2250 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class I_mas_cars_LR_soft_M2 {
        vItemSpace = 10;
        storageFee[] = { 95, 0, 0, 0 };
        garageSell[] = { 2920, 2920, 2920, 2920 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_mas_cars_UAZ_MG {
        vItemSpace = 10;
        storageFee[] = { 100, 0, 0, 0 };
        garageSell[] = { 3250, 3250, 3250, 3250 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_mas_cars_Hilux_MG {
        vItemSpace = 10;
        storageFee[] = { 105, 0, 0, 0 };
        garageSell[] = { 3585, 3585, 3585, 3585 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class GR_Bell412_3 {
        vItemSpace = 10;
        storageFee[] = { 150, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class RHS_Ural_Open_Civ_01 {
        vItemSpace = 75;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 1250, 1250, 1250, 1250 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class RHS_Ural_Fuel_MSV_01 {
        vItemSpace = 165;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 6250, 6250, 6250, 6250 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 15;
        storageFee[] = { 110, 0, 0, 0 };
        garageSell[] = { 3665, 3665, 3665, 3665 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class rhs_tigr_vdv {
        vItemSpace = 10;
        storageFee[] = { 125, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class GR_Mi8_1 {
        vItemSpace = 40;
        storageFee[] = { 200, 0, 0, 0 };
        garageSell[] = { 5000, 5000, 5000, 5000 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Hatchback_01_F {
        vItemSpace = 17;
        storageFee[] = { 100, 0, 0, 0 };
        garageSell[] = { 1000, 1000, 1000, 1000 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_SUV_01_F {
        vItemSpace = 20;
        storageFee[] = { 150, 0, 0, 0 };
        garageSell[] = { 1085, 1085, 1085, 1085 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class max_Dodge_multy {
        vItemSpace = 10;
        storageFee[] = { 200, 0, 0, 0 };
        garageSell[] = { 2250, 2250, 2250, 2250 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_mas_cars_UAZ_SPG9 {
        vItemSpace = 10;
        storageFee[] = { 250, 0, 0, 0 };
        garageSell[] = { 5000, 5000, 5000, 5000 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_mas_cars_Hilux_SPG9 {
        vItemSpace = 10;
        storageFee[] = { 260, 0, 0, 0 };
        garageSell[] = { 5500, 5500, 5500, 5500 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_Truck_01_ammo_F {
        vItemSpace = 210;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
    
    class B_Truck_01_fuel_F {
        vItemSpace = 155;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 5000, 5000, 5000, 5000 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
    

  class GR_Mi_171_2 {
        vItemSpace = 10;
        storageFee[] = { 350, 0, 0, 0 };
        garageSell[] = { 10000, 10000, 10000, 10000 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        garageSell[] = { 20000, 20000, 20000, 20000 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class O_MRAP_02_F {
        vItemSpace = 10;
        storageFee[] = { 350, 0, 0, 0 };
        garageSell[] = { 5000, 5000, 5000, 5000 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
  class RDS_S1203_Civ_02 {
        vItemSpace = 10;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
    class B_mas_cars_Hilux_Med {
        vItemSpace = 10;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
};