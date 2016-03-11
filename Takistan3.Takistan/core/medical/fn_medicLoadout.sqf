/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

/*
RemoveAllWeapons player;
{player removeMagazine _x;} foreach (magazines player);
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;
removeAllAssignedItems player;
removeAllItems player;
removeAllWeapons player;

if(hmd player != "") then {
	player unlinkItem (hmd player);
};
{
	player unassignItem _x;
	player removeItem _x;
} foreach (assignedItems player);
*/

player forceAddUniform "TRYK_U_B_Snowt";
player addHeadgear "TRYK_H_woolhat";
player addVest "TRYK_V_tacv1LC_BK";
player addBackpack "TRYK_B_Medbag_BK";

/*
player addWeapon "hlc_smg_MP5N";
player addMagazine "hlc_30Rnd_9x19_B_MP5";
player addMagazine "hlc_30Rnd_9x19_B_MP5";
*/

player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player additem "ToolKit";

// [[player,0,"textures\medic_uniform.paa"],"life_fnc_setTexture",true,false] spawn life_fnc_MP;

[] call life_fnc_saveGear;