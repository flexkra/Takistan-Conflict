#include "\life_server\script_macros.hpp"
/*
	File: fn_fetchContainers.sqf
	Author: xydra "xydra" xydra

	Get Container Info from Database
*/
private["_query","_container","_array","_return","_queryResult"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;

if(_uid == "") exitWith {};

_query = format["SELECT inventory, gear, duration, type FROM containers WHERE pid='%1' and owned='1'",_uid];
_queryResult = [_query,2,true] call DB_fnc_asyncCall;

if(EXTDB_SETTING(getNumber,"DebugMode") == 1) then {
	diag_log "------------- Container Query Request -------------";
	diag_log format["QUERY: %1",_query];
	diag_log format["Result: %1",_queryResult];
	diag_log "---------------------------------------------------";
};


if(count _queryResult == 0) exitWith {missionNamespace setVariable[format["container_%1",_uid],_queryResult];};
_queryResult = _queryResult select 0;

_return = [];

_new = [(_queryResult select 0)] call DB_fnc_mresToArray;
if(typeName _new == "STRING") then {_new = call compile format["%1", _new];};
_return pushBack _new;
_new = [(_queryResult select 1)] call DB_fnc_mresToArray;
if(typeName _new == "STRING") then {_new = call compile format["%1", _new];};
_return pushBack _new;
_return pushBack (_queryResult select 2);
_return pushBack (_queryResult select 3);

missionNamespace setVariable[format["container_%1",_uid],_return];