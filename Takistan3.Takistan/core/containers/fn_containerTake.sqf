#include "..\..\script_macros.hpp"
/*
	File: fn_containerTake.sqf
	Author: xydra "xydra" xydra
	
	Description:
	
*/
private["_index","_item","_size","_cSpace","_itemWeight","_space","_found","_cAmount","_cItem","_index"];
disableSerialization;

if((lbCurSel 5401) == -1) exitWith {hint localize "STR_Container_SelectItem";};
_index = lbCurSel 5401;
_item = CONTROL_DATA(5401);
_cSpace = life_container_space;
_itemWeight = ITEM_WEIGHT(_item);
_space = life_container_space - _itemWeight;

//Error checks
if(!([true,_item,1] call life_fnc_handleInv)) exitWith {hint localize "STR_Container_NoSpace"};

life_container_space = _space;

_found = false;
{
    _cItem = _x select 0;
    _cAmount = _x select 1;
    if(_cItem == _item) then {
        _found = true;
  	     if(_cAmount == 1) then {
            _index = life_container_inventory find _x;
            life_container_inventory deleteAt _index;
        } else {
            _x set[1,_cAmount-1];
        };
         
    };
    if(_found) exitWith {};
} forEach life_container_inventory;

[] call life_fnc_containerMenu;