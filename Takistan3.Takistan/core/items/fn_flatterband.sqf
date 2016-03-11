/*
	File: fn_flatterband.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by: synced-gaming.de
	
	Description:
	Creates a tape.
*/
private["_position","_tape"];
_tape = "TapeSign_F" createVehicle [0,0,0];
_tape attachTo[player,[0,5.5,0.2]];
_tape setDir 90;
_tape setVariable["item","tapeDeployed",true];


life_action_tapeDeploy = player addAction["tapee aufstellen",{if(!isNull life_tape) then {detach life_tape; life_tape = ObjNull;}; player removeAction life_action_tapeDeploy; life_action_tapeDeploy = nil;},"",999,false,false,"",'!isNull life_tape'];
life_tape = _tape;
waitUntil {isNull life_tape};
if(!isNil "life_action_tapeDeploy") then {player removeAction life_action_tapeDeploy;};
if(isNull _tape) exitWith {life_tape = ObjNull;};
[false,"tape",1] call life_fnc_handleInv;
_tape setPos [(getPos _tape select 0),(getPos _tape select 1),0];
_tape allowDamage false;
_tape addAction ["tapee aufheben", { deleteVehicle life_tape},"",0,false,true,"",' cursorTarget == _tape'];
//life_action_tapePickup = player addAction["tapee aufheben",life_fnc_packUptape,"",0,false,false,"",
//' _tape = nearestObjects[getPos player,["TapeSign_F"],8] select 0; !isNil "_tape" && !isNil {(_tape getVariable "item")}'];
[[_tape],"TON_fnc_tape",false,false] spawn life_fnc_MP; //Send it to the server for monitoring.