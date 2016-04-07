#include "..\..\script_macros.hpp"
/*
	File: fn_initContainer.sqf
	Author: xydra "xydra" xydra
*/
private[];

if(count life_container = 0) exitWith {};
life_container_inventory = life_container select 0;
life_container_gear = life_container select 1;
life_container_duration = life_container select 2;
life_container_type = life_container select 3;

life_container_size = life_container_type * (LIFE_SETTINGS(getNumber,"container_type_size"));

life_container_space = 0;
{
	_item = _x select 0;
	_amount = _x select 1;
	_weight = ITEM_WEIGHT(_item);
	_weightAcc = _weight * _amount;
	ADD(life_container_space,_weightAcc);
} forEach life_container_inventory;