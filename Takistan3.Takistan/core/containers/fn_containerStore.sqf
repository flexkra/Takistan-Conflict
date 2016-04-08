#include "..\..\script_macros.hpp"
/*
	File: fn_containerStore.sqf
	Author: xydra "xydra" xydra
	
	Description:
	
*/
private["_index","_item","_size","_cSpace","_itemWeight","_space","_found","_cAmount","_cItem","_array"];
disableSerialization;

if((lbCurSel 5402) == -1) exitWith {hint localize "STR_Container_SelectItem";};
_index = lbCurSel 5402;
_item = CONTROL_DATA(5402);
_cSpace = life_container_space;
_itemWeight = ITEM_WEIGHT(_item);
_space = life_container_space + _itemWeight;

//Error checks
if(life_container_size < _space) exitWith {hint localize "STR_NOTF_InvFull"};

life_container_space = _space;

_found = false;
{
    _cItem = _x select 0;
    _cAmount = _x select 1;
    if(_cItem == _item) then {
  	     _x set[1,_cAmount+1];
         _found = true;
    };
    //if(_found) exitWith {};
} forEach life_container_inventory;

if(!(_found)) then {
  _array = [];
  _array pushBack _item;
  _array pushBack 1;
  life_container_inventory pushBack _array;
};

[] call life_fnc_containerMenu;