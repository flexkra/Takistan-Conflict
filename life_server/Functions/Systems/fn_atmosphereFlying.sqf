/*
	File: fn_atmosphereFlying.sqf
	Author: synced-gaming.de - xydra

	Description:
	Spawns flying Vehicles to add Atmosphere
*/

_location = _this select 0;
_type = _this select 1;

_location = [_location select 0,_location select 1,250];
_pilottype = "B_RangeMaster_F";
_helitype = "RHS_AH64D";
_jettype = "B_Plane_CAS_01_F";
_fih = 60;


// ** Start Points **
//randomize start point
//side to start from (top, bottom, left, right)
_s = floor random 4;
_pos = floor random 15000;
_pos = _pos - 1000;
_start = [-1000,-1000,300];
switch (_s) do { 
	case 0 : {  _start = [_pos,-1000,300]; }; //top
	case 1 : {  _start = [_pos,14000,300]; }; //bottom
	case 2 : {  _start = [-1000,_pos,300]; }; //left
	case 3 : {  _start = [14000,_pos,300];}; //right
};

_group = createGroup west;


// ** Creation of Vehicles **
//Jet or Heli
if(_type == "random") then {
	_r = floor random 100;
	if(_r <= 25) then {
		_r = 0;
	} else {
		_r = 1;	
	};
} else {
	if(_type == "jet") then {
		_r = 1;
	};
	if(_type == "heli") then {
		_r = 0;
	};
};

//Number of vehicles

switch (_r) do { 
	//heli
	case 0 : {   
		_n = floor random 5;
		switch (_n) do { 
			case 0 : {  
			_heli1 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli1 flyInHeight _fih;
			_heli1 setVehicleAmmoDef 0;
			_heli1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli1pilot moveInDriver _heli1;
			[_heli1] join _group;
		}; 
			case 1 : {  
			_heli1 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli1 flyInHeight _fih;
			_heli1 setVehicleAmmoDef 0;
			_heli1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli1pilot moveInDriver _heli1;
			_heli2 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli2 flyInHeight _fih;
			_heli2 setVehicleAmmoDef 0;
			_heli2pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli2pilot moveInDriver _heli2;
			[_heli1,_heli2] join _group;
		}; 
			case 2 : {  
			_heli1 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli1 flyInHeight _fih;
			_heli1 setVehicleAmmoDef 0;
			_heli1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli1pilot moveInDriver _heli1;
			_heli2 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli2 flyInHeight _fih;
			_heli2 setVehicleAmmoDef 0;
			_heli2pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli2pilot moveInDriver _heli2;
			_heli3 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli3 flyInHeight _fih;
			_heli3 setVehicleAmmoDef 0;
			_heli3pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli3pilot moveInDriver _heli3;
			[_heli1,_heli2,_heli3] join _group;
		}; 
			case 3 : {  
			_heli1 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli1 flyInHeight _fih;
			_heli1 setVehicleAmmoDef 0;
			_heli1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli1pilot moveInDriver _heli1;
			_heli2 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli2 flyInHeight _fih;
			_heli2 setVehicleAmmoDef 0;
			_heli2pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli2pilot moveInDriver _heli2;
			_heli3 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli3 flyInHeight _fih;
			_heli3 setVehicleAmmoDef 0;
			_heli3pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli3pilot moveInDriver _heli3;
			_heli4 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli4 flyInHeight _fih;
			_heli4 setVehicleAmmoDef 0;
			_heli4pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli4pilot moveInDriver _heli4;
			[_heli1,_heli2,_heli3,_heli4] join _group;
		}; 
			case 4 : {  
			_heli1 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli1 flyInHeight _fih;
			_heli1 setVehicleAmmoDef 0;
			_heli1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli1pilot moveInDriver _heli1;
			_heli2 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli2 flyInHeight _fih;
			_heli2 setVehicleAmmoDef 0;
			_heli2pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli2pilot moveInDriver _heli2;
			_heli3 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli3 flyInHeight _fih;
			_heli3 setVehicleAmmoDef 0;
			_heli3pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli3pilot moveInDriver _heli3;
			_heli4 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli4 flyInHeight _fih;
			_heli4 setVehicleAmmoDef 0;
			_heli4pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli4pilot moveInDriver _heli4;
			_heli5 = createVehicle [_helitype, _start, [], 50, "FLY"]; 
			_heli5 flyInHeight _fih;
			_heli5 setVehicleAmmoDef 0;
			_heli5pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_heli5pilot moveInDriver _heli5;
			[_heli1,_heli2,_heli3,_heli4,_heli5] join _group;
		}; 
		};
	}; 
	//jet
	case 1 : {  
		_n = floor random 3;
		switch (_n) do { 
			case 0 : {  
			_jet1 = createVehicle [_jettype, _start, [], 50, "FLY"]; 
			_jet1 setVehicleAmmoDef 0;
			_jet1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_jet1pilot moveInDriver _jet1;
			[_jet1] join _group;
		}; 
			case 1 : {  
			_jet1 = createVehicle [_jettype, _start, [], 50, "FLY"];
			_jet1 setVehicleAmmoDef 0;
			_jet1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_jet1pilot moveInDriver _jet1; 
			_jet2 = createVehicle [_jettype, _start, [], 50, "FLY"]; 
			_jet2 setVehicleAmmoDef 0;
			_jet2pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_jet2pilot moveInDriver _jet2;
			[_jet1,_jet2] join _group;
		}; 
			case 2 : {  
			_jet1 = createVehicle [_jettype, _start, [], 50, "FLY"];
			_jet1 setVehicleAmmoDef 0;
			_jet1pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_jet1pilot moveInDriver _jet1; 
			_jet2 = createVehicle [_jettype, _start, [], 50, "FLY"]; 
			_jet2 setVehicleAmmoDef 0;
			_jet2pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_jet2pilot moveInDriver _jet2;
			_jet3 = createVehicle [_jettype, _start, [], 50, "FLY"]; 
			_jet3 setVehicleAmmoDef 0;
			_jet3pilot = _group createUnit [_pilottype,_start,[],10, "CAN_COLLIDE"];
			_jet3pilot moveInDriver _jet3;
			[_jet1,_jet2,_jet3] join _group;
		}; 

		};

	 }; 
};

{
  _x setFuel 1;
  _x setDamage 0;

} forEach units _group;

// ** Move to Location **
_group addWaypoint [_location,50];

// ** Move to Endpoint **

_startx = _start select 0;
_starty = _start select 1;
_end = [_starty,_startx,300];
_endwp = _group addWaypoint [_end,50];
_endwp setWaypointStatements ["true","{ deleteVehicle _x; } forEach units _group ;"];