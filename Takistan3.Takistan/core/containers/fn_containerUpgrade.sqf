#include "..\..\script_macros.hpp"
/*
	File: fn_containerUpgrade.sqf
	Author: xydra "xydra" xydra
*/
private[];

_buyPrice = LIFE_SETTINGS(getNumber,"container_price");

_upPrice = floor (_buyPrice * 1.5^(life_container_type));

if(BANK < _upPrice) exitWith {hint format[localize "STR_GNOTF_NotEnoughMoney",(_upPrice - BANK)]};

SUB(BANK,_upPrice);
ADD(life_container_type,1);
life_container_size = life_container_type * (LIFE_SETTINGS(getNumber,"container_type_size"));

hint format[localize "STR_Container_UpgradeBuy",_upPrice];
[] call life_fnc_containerManagerMenu;