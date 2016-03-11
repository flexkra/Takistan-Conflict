#include "..\..\script_macros.hpp"
/*
	File: fn_blooding.sqf
	Author: Phil

	Description:
	Spieler blutet
*/
_blutung = life_bloodmulti;
while {true} do
{
	if (damage player == 1) exitWith {life_bloodmulti = 0; life_blood = 100; life_bloodstatus = "";[] call life_fnc_HudUpdate;"colorCorrections" ppEffectEnable false; "dynamicBlur" ppEffectEnable false;};
	if (life_bloodmulti == 0) exitWith { life_bloodstatus = "";[] call life_fnc_HudUpdate;};
	if (damage player == 0) exitWith {life_bloodmulti = 0; life_blood = 100; life_bloodstatus = "";[] call life_fnc_HudUpdate;"colorCorrections" ppEffectEnable false; "dynamicBlur" ppEffectEnable false;};
	if (life_blood <= 0) exitWith {life_blood = 0; life_bloodmulti = 0;[] call life_fnc_unconscious;[] call life_fnc_HudUpdate;};
	life_blood = (life_blood - (0.9 * life_bloodmulti));
	if (_blutung != life_bloodmulti) exitWith {};
	sleep 2;
	player setVariable ["blood",life_blood,true];
	player setVariable ["bloodmulti",life_bloodmulti,true];
	[] call life_fnc_HudUpdate;
};