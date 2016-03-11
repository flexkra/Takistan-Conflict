#include "..\..\script_macros.hpp"
/*
	File: fn_arrestAction.sqf
	synced-gaming.de - xydra

	Description:
	Torture the targeted person.
*/

private["_victim","_torturer"];
_victim = cursorTarget;
if(_victim == player) exitWith {hint "Fehler 1";};
	
playSound "Schlag";

_r = random 100;
if (_r < 50) then {[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#96281B'> Du hast %1 einen Finger abgeschnitten!",name _victim],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;};
if (_r > 50) then {[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#96281B'> Du hast %1 einen Zeh abgeschnitten!",name _victim],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;};
[profileName,_r] remoteExec ["life_fnc_getTortured",_victim];
if(side _victim == "west" and life_quest == 73) then { ADD(life_questinfo,1); };