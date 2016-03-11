/*
	File: fn_getWasser.sqf
	Author: synced-gaming.de - Phil
	Description:
	Wasser holen

*/
private["_whichone","_fill1","_fill2","_fill3"];


if !(playerSide == civilian) exitWith {hint "Du bist hier falsch!"};

	life_is_processing = true;
	titleText ["Du sammelst Wasser!", "PLAIN",3];
	sleep 10;
	titleText ["","PLAIN",1];
	[true,"wasser",3] call life_fnc_handleInv;
	sleep 2;
	titleText ["Du hast 3x Wasser erhalten!", "PLAIN",3];
	life_is_processing = false;