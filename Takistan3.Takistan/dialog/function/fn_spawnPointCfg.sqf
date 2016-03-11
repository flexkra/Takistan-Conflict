/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","NATO HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","NATO Outpost","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case civilian:
	{
		_return = [
			["civ_spawn_1","Feruz Abad","\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"],
			["civ_spawn_2","Rasman","\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"],
			["civ_spawn_3","Loy Manara","\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"]
		];	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","USAF HQ","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;