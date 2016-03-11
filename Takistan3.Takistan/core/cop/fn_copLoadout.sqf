/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka

	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "TRYK_B_TRYK_OCP_T";


/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemWatch";
player assignItem "ItemWatch";

if ((player getVariable "rank") < 7) then {[true,"dogtag",1] call life_fnc_handleInv};
if (((player getVariable "rank") < 12) AND ((player getVariable "rank") > 6)) then {[true,"dogtag",2] call life_fnc_handleInv};
if (((player getVariable "rank") < 16) AND ((player getVariable "rank") > 11)) then {[true,"dogtag",3] call life_fnc_handleInv};
if ((player getVariable "rank") > 15) then {[true,"dogtag",4] call life_fnc_handleInv};

[] call life_fnc_saveGear;

