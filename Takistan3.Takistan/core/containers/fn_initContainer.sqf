#include "..\..\script_macros.hpp"
/*
	File: fn_initContainer.sqf
	Author: xydra "xydra" xydra
*/
private["_item","_amount","_weight","_weightAcc"];

if(count life_container == 0) then {
	life_container_inventory = [];
	life_container_gear = [];
	life_container_duration = 0;
	life_container_type = 0;
} else {
	diag_log format["life_container: %1",life_container];
	life_container_inventory = life_container select 0;
	life_container_gear = life_container select 1;
	life_container_duration = life_container select 2;
	life_container_type = life_container select 3;
};


life_container_size = life_container_type * (LIFE_SETTINGS(getNumber,"container_type_size"));

life_container_space = 0;
diag_log format["life_container_inventory: %1",life_container_inventory];
diag_log format["count life_container_inventory: %1",count life_container_inventory];
if(count life_container_inventory == 0) exitWith {};
{
	_item = _x select 0;
	_amount = _x select 1;
	_weight = ITEM_WEIGHT(_item);
	_weightAcc = _weight * _amount;
	ADD(life_container_space,_weightAcc);
} forEach life_container_inventory;