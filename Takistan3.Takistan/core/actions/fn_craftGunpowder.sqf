#include "..\..\script_macros.hpp"
/*
	File: fn_craftGunpowder.sqf
	Author: synced-gaming.de - Phil
	Description:
	Schwarzpulver herstellen etc.

*/
private["_whichone","_fill1","_fill2","_fill3"];

disableSerialization;
if !(playerSide == civilian) exitWith {hint "Du bist hier falsch!"};
_whichone = _this select 0;

if (_whichone == 1) then {
	if ([false,"sulfurp",1] call life_fnc_handleInv) then {
	life_is_processing = true;
	titleText ["Du hast Schwefel eingefüllt!", "PLAIN",3];
	sleep 10;
	titleText ["","PLAIN",1];
	player SVAR ["gunpowderfill1",true,false];
	life_is_processing = false;

	};
};


if (_whichone == 2) then {
	if ([false,"potassiumnitrate",1] call life_fnc_handleInv) then {
	life_is_processing = true;
	titleText ["Du hast Kaliumnitrat eingefüllt!", "PLAIN",3];
	sleep 10;
	titleText ["","PLAIN",1];
	player SVAR ["gunpowderfill2",true,false];
	life_is_processing = false;
	};

};


if (_whichone == 3) then {
	if ([false,"coalp",1] call life_fnc_handleInv) then {
	life_is_processing = true;
	titleText ["Du hast Holzkohle eingefüllt!", "PLAIN",3];
	sleep 10;
	titleText ["","PLAIN",1];
	player SVAR ["gunpowderfill3",true,false];
	life_is_processing = false;
	};
};

if (_whichone == 4) then
{
if ((player GVAR ["gunpowderfill1",false]) && (player GVAR ["gunpowderfill2",false]) && (player GVAR ["gunpowderfill3",false])) then
{
	if ([true,"gunpowder",1] call life_fnc_handleInv) then {
	life_is_processing = true;
	titleText ["Du stellst Schwarzpulver her!", "PLAIN",3];
	sleep 15;
	titleText ["","PLAIN",1];
	titleText ["Du hast 1x Schwarzpulver erhalten!", "PLAIN",3];
	player SVAR ["gunpowderfill1",false,false];
	player SVAR ["gunpowderfill2",false,false];
	player SVAR ["gunpowderfill3",false,false];
	life_is_processing = false;
	};
};
};

