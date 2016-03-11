class CarShops {
    /*
        Format:
        { Classname, rental price, license required, { varname, >= value } }

        { varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "RDS_Lada_Civ_01", 150, "", { "life_levelshop", 1 }},
      { "RDS_S1203_Civ_01", 250, "", { "life_levelshop", 2 }},
      { "RDS_Gaz24_Civ_01", 300, "", { "life_levelshop", 4 }},
      { "rhs_uaz_open_MSV_01", 400, "", { "life_levelshop", 5 }},
      { "C_Van_01_transport_F", 1750, "", { "life_levelshop", 6 }},
      { "C_Van_01_fuel_F", 2750, "", { "life_levelshop", 8 }},
      { "UAZ_Unarmed", 550, "", { "life_levelshop", 7 }},
      { "RDS_Octavia_Civ_01", 500, "", { "life_levelshop", 8 }},
      { "C_Quadbike_01_F", 350, "", { "life_levelshop", 9 }}
        };
    };

    
    class donator_car {
        side = "civ";
        vehicles[] = {
      { "C_SUV_01_F", 3250, "donator", { "life_civ_donator", 1 }},
      { "C_Van_01_transport_F", 1500, "donator", { "life_civ_donator", 1 }},
      { "rhs_gaz66_ammo_vmf", 7000, "donator", { "life_civ_donator", 1 }},
      { "RDS_Golf4_Civ_01", 300, "donator", { "life_civ_donator", 1 }},
      { "max_Dodge_multy", 6000, "donator", { "life_civ_donator", 1 }},
      { "O_MRAP_02_F", 12500, "donator", { "life_civ_donator", 1 }},
      { "DAR_MK27T", 25000, "donator", { "life_civ_donator", 1 }},
      { "RHS_Ural_Open_Civ_01", 3000, "donator", { "life_civ_donator", 1 }}
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
      { "l_mas_cars_LR_soft_Med", 100, "", { "life_mediclevel", 1 }},
      { "RDS_S1203_Civ_02", 100, "", { "life_mediclevel", 1 }},
      { "B_mas_cars_Hilux_Med ", 125, "", { "life_mediclevel", 2 }},
      { "B_mas_cars_LR_Med", 125, "", { "life_mediclevel", 2 }},
      { "I_mas_cars_UAZ_Med", 150, "", { "life_mediclevel", 3 }},
      { "B_mas_HMMWV_MEV", 200, "", { "life_mediclevel", 4 }},
      { "B_mas_HMMWV_MEV_des", 200, "", { "life_mediclevel", 4 }}
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_mas_UH1Y_MEV_F", 100, "", { "life_mediclevel", 2 }},
            { "GR_Bell412_1", 100, "", { "life_mediclevel", 1 }},
            { "UH1H", 100, "", { "life_mediclevel", 2 }},
            { "RHS_UH60M_MEV_d ", 100, "", { "life_mediclevel", 3 }},
            { "RHS_UH60M_MEV", 100, "", { "life_mediclevel", 3 }},
            { "B_mas_UH60M_MEV", 100, "", { "life_mediclevel", 4 }}
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "RDS_Ikarus_Civ_01", 500, "", { "life_levelshop", 10 }},
      {"RHS_Ural_Open_Civ_01", 3750, "", { "life_levelshop", 10 }},
      { "B_mas_cars_Hilux_Unarmed", 1850, "", { "life_levelshop", 13 }},
      { "O_Truck_02_covered_F", 5250, "", { "life_levelshop", 13 }},
      { "B_mas_cars_LR_Unarmed", 2000, "", { "life_levelshop", 15 }},
      { "rhs_gaz66_ammo_vmf", 7750, "", { "life_levelshop", 16 }},
      { "O_Truck_03_ammo_F", 9750, "", { "life_levelshop", 17 }},
      { "I_mas_cars_UAZ_M2", 4500, "", { "life_levelshop", 18 }},
      { "B_mas_cars_Hilux_M2", 6750, "", { "life_levelshop", 19 }},
      { "B_Truck_01_box_F", 12500, "", { "life_levelshop", 19 }},
      { "I_mas_cars_LR_soft_M2", 8750, "", { "life_levelshop", 20 }},
      { "B_Truck_01_fuel_F", 15000, "", { "life_levelshop", 21 }},
      { "I_mas_cars_UAZ_MG", 9760, "", { "life_levelshop", 22 }},
      { "B_mas_cars_Hilux_MG", 10750, "", { "life_levelshop", 23 }},
      { "RHS_Ural_Fuel_MSV_01", 18750, "", { "life_levelshop", 24 }},
      { "DAR_LHS_16", 22750, "", { "life_levelshop", 26 }},
      { "B_G_Offroad_01_armed_F", 11000, "", { "life_levelshop", 29 }},
      { "DAR_MK27T", 27000, "", { "life_levelshop", 30 }},
      { "C_Hatchback_01_F", 3000, "", { "life_levelshop", 33 }},
      { "_Truck_01_ammo_F", 35000, "", { "life_levelshop", 35 }},
      { "C_SUV_01_F", 4500, "", { "life_levelshop", 36 }},
      { "max_Dodge_multy", 6750, "", { "life_levelshop", 39 }},
      { "I_mas_cars_UAZ_SPG9", 15000, "", { "life_levelshop", 40 }},
      { "B_mas_cars_Hilux_SPG9", 16500, "", { "life_levelshop", 42 }},
      { "O_MRAP_02_F", 15000, "", { "life_levelshop", 44 }}
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
        { "rhsusf_m998_d_2dr", 100, "", { "life_coplevel", 1 }},
      { "rhsusf_m998_d_4dr", 125, "", { "life_coplevel", 2 }},
      { "DAR_M1152", 150, "", { "life_coplevel", 3 }},
      { "rhsusf_m1025_d", 175, "", { "life_coplevel", 4 }},
      { "rhsusf_m1025_d_m2", 200, "", { "life_coplevel", 5 }},
      { "DAR_M1165_GMV", 225, "", { "life_coplevel", 6 }},
        { "DAR_MK23ADT", 1000, "", { "life_coplevel", 6 } },
      { "DAR_M1151", 250, "", { "life_coplevel", 8 }},
      { "max_Dodge_multy", 250, "", { "life_coplevel", 8 }},
      { "DAR_M1151_Deploy", 250, "", { "life_coplevel", 10 }},
      { "DAR_M1167", 275, "", { "life_coplevel", 12 }},
      { "UAZ_Unarmed", 200, "", { "life_coplevel", 12}},
      { "B_mas_cars_Hilux_Unarmed", 200, "", { "life_coplevel", 12}},
      { "rhsusf_m113d_usarmy", 1337, "", { "life_coplevel", 16 }}
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
      { "GR_Mi8_1", 15000, "", { "life_levelshop", 32 }},
      { "GR_Mi_171_2", 30000, "", { "life_levelshop", 49 }}
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
      { "GR_UH1H_6", 1000, "", { "life_coplevel", 4 } },
      { "B_Heli_Light_01_F", 1000, "", { "life_coplevel", 5 } },
      { "RHS_CH_47F", 1000, "", { "life_coplevel", 5 } },
      { "GR_UH1H_3", 2000, "", { "life_coplevel", 6 } },
      { "GR_UH1H_2", 3000, "", { "life_coplevel", 7 } },
      { "GR_AW101_1", 5000, "", { "life_coplevel", 8 } },
      { "GR_UH60_1", 6000, "", { "life_coplevel", 9 } },
      { "B_Plane_CAS_01_F", 1, "", { "life_coplevel", 17 } },
      { "B_UAV_02_F", 1, "", { "life_coplevel", 17 } },
      { "B_Heli_Light_01_armed_F", 20000, "", { "life_coplevel", 16 } }
        };
    };

  class cop_drone {
    side = "cop";
    vehicles[] = {
      { "B_UAV_01_F", 1000, "", { "life_coplevel", 4 } },
      { "B_UAV_02_CAS_F", 5000, "", { "life_coplevel", 17 } }
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
class CfgVehicles {
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
        chopShop = 3000;
    insurance = 2500;
    };

    class RDS_S1203_Civ_01 {
        vItemSpace = 17;
        storageFee[] = { 25, 0, 3000, 0 };
        chopShop = 7500;
    };

    class RDS_Gaz24_Civ_01 {
        vItemSpace = 17;
        storageFee[] = { 35, 0, 6500, 0 };
        chopShop = 12500;
    };
    
    class O_Truck_02_covered_F {
        vItemSpace = 85;
        storageFee[] = { 35, 0, 0, 0 };
        chopShop = 12500;
    };
    
    class B_Truck_01_box_F {
        vItemSpace = 140;
        storageFee[] = { 35, 0, 0, 0 };
        chopShop = 12500;
    };
    
    class C_Van_01_fuel_F {
        vItemSpace = 55;
        storageFee[] = { 35, 0, 0, 0 };
        chopShop = 12500;
    };
    
    class rhs_uaz_open_MSV_01 {
        vItemSpace = 15;
        storageFee[] = { 45, 0 , 0, 0 };
        insurance = 16000;
        chopShop = 45000;
    };
    
    class O_Truck_03_ammo_F {
        vItemSpace = 115;
        storageFee[] = { 45, 0 , 0, 0 };
        insurance = 16000;
        chopShop = 45000;
    };

    
    class DAR_MK27T {
        vItemSpace = 195;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
    };
    
    class C_Van_01_transport_F {
        vItemSpace = 40;
        storageFee[] = { 20, 0, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
    };

    class UAZ_Unarmed {
        vItemSpace = 17;
        storageFee[] = { 45, 0, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
    };
    
    class DAR_LHS_16 {
        vItemSpace = 180;
        storageFee[] = { 45, 0, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
    };
    

    class RDS_Octavia_Civ_01 {
        vItemSpace = 19;
        storageFee[] = { 50, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Quadbike_01_F {
        vItemSpace = 5;
        storageFee[] = { 20, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class RDS_Ikarus_Civ_01 {
        vItemSpace = 20;
        storageFee[] = { 55, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_mas_cars_Hilux_Unarmed {
        vItemSpace = 20;
        storageFee[] = { 60, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_mas_cars_LR_Unarmed {
        vItemSpace = 20;
        storageFee[] = { 65, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class rhs_gaz66_ammo_vmf {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class rhs_gaz66_vmf {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class I_mas_cars_UAZ_M2 {
        vItemSpace = 10;
        storageFee[] = { 85, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class B_mas_cars_Hilux_M2 {
        vItemSpace = 10;
        storageFee[] = { 90, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

    class I_mas_cars_LR_soft_M2 {
        vItemSpace = 10;
        storageFee[] = { 95, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_mas_cars_UAZ_MG {
        vItemSpace = 10;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_mas_cars_Hilux_MG {
        vItemSpace = 10;
        storageFee[] = { 105, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class GR_Bell412_3 {
        vItemSpace = 10;
        storageFee[] = { 750, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class RHS_Ural_Open_Civ_01 {
        vItemSpace = 75;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class RHS_Ural_Fuel_MSV_01 {
        vItemSpace = 165;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 15;
        storageFee[] = { 110, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class rhs_tigr_vdv {
        vItemSpace = 10;
        storageFee[] = { 125, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class GR_Mi8_1 {
        vItemSpace = 40;
        storageFee[] = { 2000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Hatchback_01_F {
        vItemSpace = 17;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_SUV_01_F {
        vItemSpace = 20;
        storageFee[] = { 150, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class max_Dodge_multy {
        vItemSpace = 10;
        storageFee[] = { 200, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_mas_cars_UAZ_SPG9 {
        vItemSpace = 10;
        storageFee[] = { 250, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_mas_cars_Hilux_SPG9 {
        vItemSpace = 10;
        storageFee[] = { 260, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_Truck_01_ammo_F {
        vItemSpace = 210;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
    
    class B_Truck_01_fuel_F {
        vItemSpace = 155;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
    

  class GR_Mi_171_2 {
        vItemSpace = 10;
        storageFee[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class O_MRAP_02_F {
        vItemSpace = 10;
        storageFee[] = { 350, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };


};
