#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Blah
*/
private["_shop","_sideCheck","_spawnPoints","_shopFlag","_shopTitle","_disableBuy"];
(SEL(_this,3)) params [
	["_shop","",[""]],
	["_sideCheck",sideUnknown,[civilian]],
	["_spawnPoints","",["",[]]],
	["_shopFlag","",[""]],
	["_shopTitle","",[""]],
	["_disableBuy",false,[true]]
];

diag_log format["_shop: %1",_shop];
diag_log format["_sideCheck: %1",_sideCheck];
diag_log format["_spawnPoints: %1",_spawnPoints];
diag_log format["_shopFlag: %1",_shopFlag];
diag_log format["_shopTitle: %1",_shopTitle];
diag_log format["_disableBuy: %1",_disableBuy];

disableSerialization;
//Long boring series of checks
if(dialog) exitWith {};
if(_shop == "") exitWith {};
if(_sideCheck != sideUnknown && {playerSide != _sideCheck}) exitWith {hint localize "STR_Shop_Veh_NotAllowed"};
if(!createDialog "Life_Vehicle_Shop_v2") exitWith {};

life_veh_shop = [_shop,_spawnpoints,_shopFlag,_disableBuy]; //Store it so so other parts of the system can access it.

diag_log format["life_veh_shop: %1",life_veh_shop];

ctrlSetText [2301,_shopTitle];

if(_disableBuy) then {
	//Disable the buy button.
	ctrlEnable [2309,false];
};

//Fetch the shop config.
_vehicleList = M_CONFIG(getArray,"CarShops",_shop,"vehicles");

diag_log format["_vehicleList: %1",_vehicleList];

_control = CONTROL(2300,2302);
lbClear _control; //Flush the list.
ctrlShow [2330,false];
ctrlShow [2304,false];

//Loop through
{
	_className = SEL(_x,0);
	_basePrice = SEL(_x,1);
	_levelAssert = SEL(_x,3);
	_levelName = SEL(_levelAssert,0);
	_levelType = "SCALAR";
	_levelValue = SEL(_levelAssert,1);
	_showall = true;

	if(!(EQUAL(_levelValue,-1))) then {
		_level = GVAR_MNS _levelName;
		if(typeName _level == typeName {}) then {_level = FETCH_CONST(_level);};

		_showall = switch(_levelType) do {
			case "SCALAR": {_level >= _levelValue};
			case "BOOL": {_level};
			case "EQUAL": {EQUAL(_level,_levelValue)};
			default {false};
		};
	};

	if(_showall) then {
		_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
		_control lbAdd (_vehicleInfo select 3);
		_control lbSetPicture [(lbSize _control)-1,(_vehicleInfo select 2)];
		_control lbSetData [(lbSize _control)-1,_className];
		_control lbSetValue [(lbSize _control)-1,_ForEachIndex];
	};
} foreach _vehicleList;
