#include "\life_server\script_macros.hpp"
/*
	File: fn_buyContainer.sqf
	Author: xydra "xydra" xydra

	Buy a container
*/
private["_query","_uid","_duration","_type"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_duration = [_this,1] call BIS_fnc_param;
_type = [_this,2] call BIS_fnc_param;

if(_uid == "") exitWith {};

_query = format["INSERT INTO containers (pid, duration, type, owned) VALUES ('%1', '%2', '%3', '%4')",_uid,_duration,1,1];
if(EXTDB_SETTING(getNumber,"DebugMode") == 1) then {
	diag_log "------------- Container Query Insert -------------";
	diag_log format["Query: %1",_query];
	diag_log "--------------------------------------------------";
};

[_query,1] call DB_fnc_asyncCall;