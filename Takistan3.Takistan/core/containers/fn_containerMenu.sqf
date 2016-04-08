#include "..\..\script_macros.hpp"
/*
	File: fn_containerMenu.sqf
	Author: xydra "xydra" xydra

	Shows the container menu
*/
private["_cInv","_pInv","_pIcon","_cIcon","_item","_amount"];
disableSerialization;

createDialog "container_menu";

_cInv = CONTROL(54000,5401);
_pInv = CONTROL(54000,5402);
lbClear _cInv;
lbClear _pInv;

{
	if(ITEM_VALUE(configName _x) > 0) then {
		_pInv lbAdd format["%2 [x%1]",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
		_pInv lbSetData [(lbSize _pInv)-1,configName _x];
		_pIcon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
		if(!(EQUAL(_pIcon,""))) then {
			_pInv lbSetPicture [(lbSize _pInv)-1,_pIcon];
		};
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));

{
	_item = _x select 0;
	_amount = _x select 1;
	_cInv = lbAdd format["%2 [x%1]",_amount,localize (getText(_item >> "displayName"))];
	_cInv = lbSetData [(lbSize _cInv)-1,_item];
	_cIcon = M_CONFIG(getText,"VirtualItems",configName _item,"icon");
	if(!(EQUAL(_cIcon,""))) then {
		_cInv lbSetPicture [(lbSize _cInv)-1,_cIcon];
	};
} forEach life_container_inventory;