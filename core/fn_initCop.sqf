#include "..\script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if(life_blacklisted) exitWith {
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
	if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};


player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;

// ** set dogtags to 0 before adding right amount
_valdogtag = ITEM_VALUE(dogtag);
[false,"dogtag",_valdogtag] call life_fnc_handleInv;

if ((player getVariable "rank") < 7) then {[true,"dogtag",1] call life_fnc_handleInv};
if (((player getVariable "rank") < 12) AND ((player getVariable "rank") > 6)) then {[true,"dogtag",2] call life_fnc_handleInv};
if (((player getVariable "rank") < 16) AND ((player getVariable "rank") > 11)) then {[true,"dogtag",3] call life_fnc_handleInv};
if ((player getVariable "rank") > 15) then {[true,"dogtag",4] call life_fnc_handleInv};

if (steamid == 76561198016726932) then {
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;


	player forceAddUniform "TRYK_U_B_MARPAT_Desert2_Tshirt";
	player addItemToUniform "FirstAidKit";
	for "_i" from 1 to 3 do {player addItemToUniform "20Rnd_mas_762x51_Stanag";};
	player addVest "TRYK_V_ArmorVest_Ranger2";
	for "_i" from 1 to 2 do {player addItemToVest "9Rnd_45ACP_Mag";};
	for "_i" from 1 to 4 do {player addItemToVest "MiniGrenade";};
	for "_i" from 1 to 2 do {player addItemToVest "1Rnd_HE_Grenade_shell";};
	player addBackpack "B_TacticalPack_blk";
	player addItemToBackpack "ACE_Flashlight_KSF1";
	player addItemToBackpack "ACE_EarPlugs";
	player addItemToBackpack "Toolkit";
	for "_i" from 1 to 8 do {player addItemToBackpack "ACE_CableTie";};
	for "_i" from 1 to 12 do {player addItemToBackpack "20Rnd_762x51_Mag";};
	for "_i" from 1 to 8 do {player addItemToBackpack "HandGrenade";};
	player addHeadgear "H_Beret_Colonel";
	player addGoggles "G_Aviator";


	player addWeapon "arifle_mas_hk417c_d";
	player addPrimaryWeaponItem "acc_pointer_IR";
	player addPrimaryWeaponItem "FHQ_optic_ACOG_tan";
	player addWeapon "hgun_ACPC2_F";
	player addWeapon "Rangefinder";


	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "tf_anprc152";
	player linkItem "ItemGPS";
	player linkItem "ACE_NVG_Wide";

	[true,"cola",5] call life_fnc_handleInv;
	[true,"burger",5] call life_fnc_handleInv;
	[true,"morphin",5] call life_fnc_handleInv;
	[true,"bandage",5] call life_fnc_handleInv;

};


waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
