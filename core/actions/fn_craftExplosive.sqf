#include "..\..\script_macros.hpp"
/*
	File: fn_craftExplosive.sqf
	Author: synced-gaming.de - Phil
	Description:
	Sprengstoff herstellen etc.

*/
private["_whichone","_fill1","_fill2","_fill3"];

disableSerialization;
if !(playerSide == civilian) exitWith {hint "Du bist hier falsch!"};
_whichone = _this select 0;

if (_whichone == 1) then {
	if ([false,"gunpowder",1] call life_fnc_handleInv) then {
		life_is_processing = true;
	titleText ["Du hast Schwalzpulver eingefüllt!", "PLAIN",3];
	sleep 10;
	titleText ["","PLAIN",1];
	player SVAR ["explosivefill1",true,false];
	life_is_processing = false;
	};
};


if (_whichone == 2) then {
	if ([false,"nitroglycerin",1] call life_fnc_handleInv) then {
	life_is_processing = true;
	titleText ["Du hast Nitroglyzerin eingefüllt!", "PLAIN",3];
	sleep 10;
	titleText ["","PLAIN",1];
	player SVAR ["explosivefill2",true,false];
	life_is_processing = false;
	} else {
		hint "Du hast kein Nitroglyzerin!";
	}
};


if (_whichone == 3) then {
	if ([false,"behaelter",1] call life_fnc_handleInv) then {
	life_is_processing = true;
	titleText ["Du bringst einen Behaelter an!", "PLAIN",3];
	sleep 10;
	_pos = getMarkerPos "hier";
	_behaelter = "plp_cts_CanisterBlue" createVehicle _pos;
	_behaelter setPos [(getPos _behaelter) select 0, (getPos _behaelter) select 1, 0.5];
	_behaelter addAction["Sprengstoff herstellen",{ [[4],"life_fnc_craftExplosive",player,false] spawn life_fnc_MP;},"",0,false,false,"",'(player GVAR ["explosivefill1",false]) && (player GVAR ["explosivefill2",false]) && (player GVAR ["explosivefill3",false]) && !life_is_processing'];
	titleText ["","PLAIN",1];
	player SVAR ["explosivefill3",true,false];
	life_is_processing = false;
	};
};

if (_whichone == 4) then
{
if ((player GVAR ["explosivefill1",false]) && (player GVAR ["explosivefill2",false]) && (player GVAR ["explosivefill3",false])) then
{
	if ([true,"explosive",1] call life_fnc_handleInv) then {
	life_is_processing = true;
	titleText ["Du stellst Sprengstoff her!", "PLAIN",3];
	sleep 15;
	titleText ["","PLAIN",1];
	titleText ["Du hast 1x Sprengstoff erhalten!", "PLAIN",3];
	player SVAR ["explosivefill1",false,false];
	player SVAR ["explosivefill2",false,false];
	player SVAR ["explosivefill3",false,false];
	_pos = getMarkerPos "hier";
	_behaelter = _pos nearestObject "plp_cts_CanisterBlue";
	deleteVehicle _behaelter;
	SUB(life_gesamtlevel,100);
  	[format ["<t align='left'><t size='0.6' shadow='1'><t color='#9FF781'><br /> Sprengstoff hergestellt! <br/> + 100 EXP"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
	life_is_processing = false;
	};
};
};
