#include "..\..\script_macros.hpp"
/*
	File: fn_dammaged.sqf
	Author: Phil

	Description:
	Fügt Blutungen hinzu
*/
if (life_bloodmulti > 3) exitWith {life_bloodmulti = 3;};
ADD(life_bloodmulti,1);
if (life_bloodmulti == 0) then {life_bloodstatus = "";};
if (life_bloodmulti == 1) then {life_bloodstatus = "einfache Blutung";};
if (life_bloodmulti == 2) then {life_bloodstatus = "mittlere Blutung";};
if (life_bloodmulti == 3) then {life_bloodstatus = "schwere Blutung";};
[] call life_fnc_HudUpdate;
[] spawn life_fnc_blooding;