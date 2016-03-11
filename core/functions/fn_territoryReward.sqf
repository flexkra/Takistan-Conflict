#include "..\..\script_macros.hpp"
/*
	File: fn_territoryReward.sqf
	Author: xydra
	Give that man a cookie
*/

// _pos, Spieler von Gewinnerseite

private["_pos","_side"];

_over = _this select 0;
_side = _this select 1;

if (playerSide != _side) exitWith {};
if (playerSide == civilian) then {
if(!_over) then {
  			//Minütlich
  			ADD(CASH,75);
  			ADD(life_gesamtexp,75);
  			[format ["<t align='left'><t size='0.6' shadow='1'><t color='#9FF781'><br /> Gebiet erfolgreich gehalten! <br/> + 75$ <br/> + 75 EXP"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
  } else {
  			//Ende des Territoryfights
  			ADD(CASH,1500);
  			ADD(life_gesamtexp,1500);
			  [format ["<t align='left'><t size='0.6' shadow='1'><t color='#9FF781'><br /> Gebietskampf gewonnen! <br/> + 1500$ <br/> + 1500 EXP"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
        if (life_quest == 33) then {ADD(life_questinfo,1);};
        if (life_quest == 71) then {ADD(life_questinfo,1);};
        
};
[] call life_fnc_SetupLevel;
};

if (playerSide == west) then {
if(!_over) then {
  			//Minütlich
			ADD(CASH,100);
  			[format ["<t align='left'><t size='0.6' shadow='1'><t color='#9FF781'><br /> Gebiet erfolgreich gehalten! <br/> + 100$ <br/> Weiter so Kameraden!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
  } else {
  			//Ende des Territoryfights
  			ADD(CASH,2000);
			  [format ["<t align='left'><t size='0.6' shadow='1'><t color='#9FF781'><br /> Gebietskampf gewonnen! <br/> + 2000$ <br/> Saubere Arbeit, abrücken!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
      
};
[] call life_fnc_SetupLevel;
};