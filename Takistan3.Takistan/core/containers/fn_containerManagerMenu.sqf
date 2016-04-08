#include "..\..\script_macros.hpp"
/*
	File: fn_containerMenu.sqf
	Author: xydra "xydra" xydra

	Shows the container menu
*/
private[];
disableSerialization;

_periodPrice = LIFE_SETTINGS(getNumber,"container_period_price");
_buyPrice = LIFE_SETTINGS(getNumber,"container_price");
_maxUpgrades = LIFE_SETTINGS(getNumber,"container_max_upgrades");
_baseSize = LIFE_SETTINGS(getNumber,"container_type_size");

_durTextDays = CONTROL(54500,5453);
_durTextCosts = CONTROL(54500,5457);
_upTextUpgrade = CONTROL(54500,5459);
_upTextCosts = CONTROL(54500,5460);
_durLeftText = CONTROL(54500,5461);
_conName = CONTROL(54500,5462);
_sizeInfo = CONTROL(54500,5463);
_upInfo = CONTROL(54500,5464);

_durTextDaysData = CONTROL_DATA(5453);


//Disable Stuff
if(!(life_container_owner)) then { //No Owner
	ctrlEnable [5452,false]; //Sell Button
	ctrlEnable [5454,false]; //Add Button
	ctrlEnable [5458,false]; //Upgrade Button
} else {
	ctrlEnable [5451,false]; //Buy Button
};
if(life_container_type == _maxUpgrades) then { //MaxUpgrades
	ctrlEnable [5458,false]; 
};
if(life_container_duration <= 0) then {	//No Time(Reactivate)
	ctrlEnable [5452,false]; //Sell Button
	ctrlEnable [5454,false]; //Add Button
	ctrlEnable [5458,false]; //Upgrade Button
};
if(_durTextDaysData == 1) then {
	ctrlEnable [5455,false]; //Minus Button
};
if(_durTextDaysData == 10) then {
	ctrlEnable [5454,false]; //Plus Button
};

//Boring Text
//LeftSide
if(life_container_owner) then {
	_conName ctrlSetText format[localize "STR_Container",profileName];
	_sizeInfo ctrlSetText format[localize "STR_Container_CurrentSize",life_container_size];
	if(life_container_type == _maxUpgrades) then {
		_upInfo ctrlSetText format[localize "STR_Container_NoUpgrade"];
	} else {
		_nextSize = (life_container_type+1) * _baseSize;
		_upInfo ctrlSetText format[localize "STR_Container_UpgradeSize",_nextSize];

	};
} else {
	//Time Left
	if(life_container_duration < 6) then {
		_durTime = life_container_duration * 4;
		_durLeftText ctrlSetText format[localize "STR_Container_TimeLeft",_durTime,localize "STR_Global_Hours"];	
	} else {
		_durTime = floor (life_container_duration / 6);
		_durLeftText ctrlSetText format[localize "STR_Container_TimeLeft",_durTime,localize "STR_Global_Days"];	
	};
	_conName ctrlSetText format[localize "STR_Container_NoOwner"];
	_sizeInfo ctrlSetText format[localize "STR_Container_UpgradeSize",_nextSize];
	_upInfo ctrlSetText format[localize "STR_Container_Costs",_buyPrice];
}

//Renew Price
_durDays = parseNumber ctrlText _durTextDays;
_durPrice = _periodPrice * 6 * _durDays;
_durTextCosts ctrlSetText format[localize "STR_Container_Costs",_durPrice];

//Upgrade Price
_upPrice = _buyPrice * 1.5^(life_container_type+1);
_upTextCosts ctrlSetText format[localize "STR_Container_Costs",_upPrice];



