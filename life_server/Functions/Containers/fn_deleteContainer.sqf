#include "\life_server\script_macros.hpp"
/*
	File: fn_sellContainer.sqf
	Author: xydra "xydra" xydra

	Deletes a container
*/
private["_query"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;

if(_uid == "") exitWith {};

_query = format["UPDATE containers SET owned='0' WHERE pid='%1'",_uid];
[_query,1] call DB_fnc_asyncCall;