#include "..\..\script_macros.hpp"
/*
	File: fn_buyContainer.sqf
	Author: xydra "xydra" xydra
*/
private["_price","_uid","_duration"];

_uid = steamid;
_price = LIFE_SETTINGS(getNumber,"container_price");
_duration = 6 * (LIFE_SETTINGS(getNumber,"container_init_days"));

if(_uid == "") exitWith {};
if(BANK < _price) exitWith {hint localize "STR_Container_NotEnough"};

SUB(BANK,_price);
[_uid,duration] remoteExec ["TON_fnc_buyContainer",RSERV];
life_container_duration = _duration;
life_container_type = 1;

hint format[localize "STR_Container_Buy",_price];