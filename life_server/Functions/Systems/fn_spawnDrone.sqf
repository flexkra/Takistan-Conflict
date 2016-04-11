/*
	File: fn_atmosphereFlying.sqf
	Author: synced-gaming.de - xydra

	Description:
	Spawns flying Vehicles to add Atmosphere
*/

_spawn = _this select 0;
_position = _this select 1;
_pos = [_position select 0,_position select 1,400];

if(_spawn) then {
	_group = createGroup west;
	_drone = [_pos, 0, "B_UAV_02_F", WEST] call BIS_fnc_spawnVehicle;
	createVehicleCrew (myUAV select 0);
	_drone setVehicleAmmo 0;
	[_drone] join _group;
	_wp = _group addWaypoint [_pos,1];
	_wp setWaypointType "LOITER";
	_wp setWaypointLoiterType "CIRCLE";
	_wp setWaypointLoiterRadius 200;
	_group setCurrentWaypoint _wp;
	{
		if(side _x == west) then {
	 		_x connectTerminalToUAV _drone;
	 	};
	} forEach allPlayers;
} else {
	{
	  if(_x isKindOf "B_UAV_02_F") then {
	  		deleteVehicle _x;
	  };
	} forEach vehicles;
};
