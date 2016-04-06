#include "..\..\script_macros.hpp"
/*
	File: fn_craftCfg.sqf
	Author: EdgeKiller
	Description:
	Master configuration file for the crafting menu.
*/
private["_craft","_return"];
_craft = [_this,0,"",[""]] call BIS_fnc_param;
if(_craft == "") exitWith {closeDialog 0}; //Bad shop type passed.
[] call life_fnc_SetupLevel;

switch(_craft) do
{


	case "ied":
	{

		_return = [	];

		if (life_quest >= 9) then
			{
			_return pushBack
			["DemoCharge_Remote_Mag", ["explosive",5,"battery",2,"behaelter",4]];
			};
		if ((life_level >= 20) && (life_quest >= 32)) then
			{
			_return pushBack
			["IEDLandSmall_Remote_Mag", ["explosive",1,"battery",1,"behaelter",1]];
			};
		if (life_level >= 26 && (life_quest >= 32)) then
			{
			_return pushBack
			["SatchelCharge_Remote_Mag", ["explosive",7,"battery",2,"behaelter",6]];
			};
		if (life_level >= 30 && (life_quest >= 32)) then
			{
			_return pushBack
			["IEDUrbanSmall_Remote_Mag", ["explosive",1,"battery",1,"behaelter",1,"altpapier",1]];
			};
		if (life_level >= 35 && (life_quest >= 32)) then
			{
			_return pushBack
			["IEDLandBig_Remote_Mag", ["explosive",3,"battery",1,"behaelter",3,"blumenende",6]];
			};
		if (life_level >= 47 && (life_quest >= 32)) then
			{
			_return pushBack
			["IEDUrbanBig_Remote_Mag", ["explosive",3,"battery",1,"behaelter",3,"altpapier",6]];
			};

	};

	case "vest":
	{
		_return = [	];

		if (life_quest >= 9) then
			{
			_return pushBack
			["V_HarnessOGL_brn", ["life_inv_explosive",1,"life_inv_guertel",1]];
			};
	};


	case "funkgeraet":
	{
		_return = [
				//[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
				["tf_anprc148jem", ["life_inv_gehaeuse",1,"life_inv_battery",1,"life_inv_antenne",1]]
			];
	};

};

_return;