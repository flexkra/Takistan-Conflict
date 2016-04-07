#include "..\..\script_macros.hpp"
/*
	File: fn_buyContainerDuration.sqf
	Author: xydra "xydra" xydra
*/
private[];

_uid = steamid;
_durationPrice = LIFE_SETTINGS(getNumber,"container_duration_price");
_dayPrice = 6 * _durationPrice;
_price = 7 * _dayPrice;