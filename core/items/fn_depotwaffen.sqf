/*
    File: fn_depotwaffen.sqf
    Author: Jester

    Description:
    Geklaute Waffen aus dem Depot spawnen lassen
*/

//Close inventory
closeDialog 0;

_pos = position player;

_random = round (random 12);

switch (_random) do
{
	case 0:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_M16A4_Base", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_30Rnd_556x45_Stanag", 5];
	};

	case 1:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_M4A1_desert", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_30Rnd_556x45_Stanag", 5];
	};
	case 2:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_Mk16_STD_FG", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_30Rnd_556x45_Stanag", 5];
	};
  case 3:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_Mk16_SV", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_30Rnd_556x45_Stanag", 5];
	};
  case 4:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_G36A", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_30Rnd_556x45_G36", 5];
	};
  case 5:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_G36C", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_30Rnd_556x45_G36", 5];
	};
  case 6:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_G36K", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_30Rnd_556x45_G36", 5];
	};
  case 7:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_srifle_Mk12SPR", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_20Rnd_556x45_Stanag", 5];
	};
  case 8:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_lmg_M249", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_200Rnd_TE4_Red_Tracer_556x45_M24", 5];
	};
  case 9:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_arifle_Mk17_STD_FG", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_20Rnd_762x51_B_SCAR", 5];
	};
  case 10:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_srifle_M24_des", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_5Rnd_762x51_M24", 5];
	};
 case 11:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_lmg_M60A4", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 5];
	};
 case 12:
	{
		_weapon_holder = createVehicle ["groundWeaponHolder", _pos, [], 0, "can_collide"];
		_weapon_holder addWeaponCargoGlobal ["CUP_srifle_M40A3", 1];
		_weapon_holder addMagazineCargoGlobal ["CUP_5Rnd_762x51_M24", 5];
	};

};

/*
adduniformcargo
addvestcargo
addmagazinecargo
addBackpackCargoGlobal
*/
//weapon1 = createVehicle ["groundweaponHolder",Position player,[], 0, "can_collide"] ;weapon1 addweaponcargo ["srifle_mas_hk417_d", 1];