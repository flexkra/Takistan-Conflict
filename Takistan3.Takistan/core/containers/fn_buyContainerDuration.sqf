#include "..\..\script_macros.hpp"
/*
	File: fn_buyContainerDuration.sqf
	Author: xydra "xydra" xydra
*/
private["_periodPrice","_durTextDaysData","_duration","_price"];

_periodPrice = LIFE_SETTINGS(getNumber,"container_period_price");
_durTextDaysData = parseNumber ctrlText _durTextDays;

_duration = 6 * _durTextDaysData
_price = _duration * _dayPrice;

if(BANK < _price) exitWith {hint format[localize "STR_GNOTF_NotEnoughMoney",(_price - BANK)]};

SUB(BANK,_price);
ADD(life_container_duration,_duration);
hint format[localize "STR_Container_RenewBuy",_price]

[] call life_fnc_containerManagerMenu;