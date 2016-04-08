#include "..\..\script_macros.hpp"
/*
	File: fn_sellContainer.sqf
	Author: xydra "xydra" xydra
*/
private["_uid","_price","_sellPrice","_durationPrice","_endPrice"];

_uid = steamid;
_price = LIFE_SETTINGS(getNumber,"container_price");

if(_uid == "") exitWith {};


[_uid] remoteExec ["TON_fnc_deleteContainer",RSERV];
_upPrice = _price * 1.5^life_container_type;
_sellPrice = floor (_upPrice/2);
_durationPrice = life_container_duration * 100;
_endPrice = (_sellPrice + _durationPrice);
ADD(CASH,_endPrice);

life_cotainer_owner = false;

hint format[localize "STR_Container_Sell",_endPrice];