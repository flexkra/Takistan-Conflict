#include "\life_server\script_macros.hpp"
/*
	File: fn_updateRequest.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Ain't got time to describe it, READ THE FILE NAME!
*/
private["_uid","_side","_cash","_bank","_licenses","_gear","_stats","_name","_query","_thread"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;
_side = [_this,2,sideUnknown,[civilian]] call BIS_fnc_param;
_cash = [_this,3,0,[0]] call BIS_fnc_param;
_bank = [_this,4,5000,[0]] call BIS_fnc_param;
_licenses = [_this,5,[],[[]]] call BIS_fnc_param;
_gear = [_this,6,[],[[]]] call BIS_fnc_param;
_stats = [_this,7,[100,100],[[]]] call BIS_fnc_param;
_gesamtexp = [_this,9,0,[0]] call BIS_fnc_param;
_quest = [_this,10,0,[0]] call BIS_fnc_param;
_questinfo = [_this,11,0,[0]] call BIS_fnc_param;
_payday = [_this,12,0,[0]] call BIS_fnc_param;
_paytime = [_this,13,0,[0]] call BIS_fnc_param;

if(EXTDB_SETTING(getNumber,"DebugMode") == 1) then {
	diag_log format["_uid: %1",_uid];
	diag_log format["_name : %1",_name];
	diag_log format["_side: %1",_side];
	diag_log format["_cash: %1",_cash];
	diag_log format["_bank: %1",_bank];
	diag_log format["_licenses: %1",_licenses];
	diag_log format["_gear: %1",_gear];
	diag_log format["_stats: %1",_stats];
	diag_log format["_gesamtexp: %1",_gesamtexp];
	diag_log format["_quest: %1",_quest];
	diag_log format["_questinfo: %1",_questinfo];
	diag_log format["_payday: %1",_payday];
	diag_log format["_paytime: %1",_paytime];
};

//Get to those error checks.
if((_uid == "") OR (_name == "")) exitWith {};

//Parse and setup some data.
_name = [_name] call DB_fnc_mresString;
_gear = [_gear] call DB_fnc_mresArray;
_stats = [_stats] call DB_fnc_mresArray;
_cash = [_cash] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;
_gesamtexp = [_gesamtexp] call DB_fnc_numberSafe;
_quest = [_quest] call DB_fnc_numberSafe;
_questinfo = [_questinfo] call DB_fnc_numberSafe;
_payday = [_payday] call DB_fnc_numberSafe;
_paytime = [_paytime] call DB_fnc_numberSafe;

//Does something license related but I can't remember I only know it's important?
for "_i" from 0 to count(_licenses)-1 do {
	_bool = [(_licenses select _i) select 1] call DB_fnc_bool;
	_licenses set[_i,[(_licenses select _i) select 0,_bool]];
};

_licenses = [_licenses] call DB_fnc_mresArray;

switch (_side) do {
	case west: {_query = format["UPDATE players SET name='%1', cop_cash='%2', cop_bank='%3', cop_gear='%4', cop_licenses='%5', cop_stats='%6' WHERE playerid='%7'",_name,_cash,_bank,_gear,_licenses,_stats,_uid];};
	case civilian: {_query = format["UPDATE players SET name='%1', cash='%2', bankacc='%3', civ_licenses='%4', civ_gear='%5', arrested='%6', civ_stats='%7', gesamtexp='%8', quest='%9', questinfo='%10', payday='%11', paytime='%12' WHERE playerid='%13'",_name,_cash,_bank,_licenses,_gear,[_this select 8] call DB_fnc_bool,_stats,_gesamtexp,_quest,_questinfo,_payday,_paytime,_uid];};
	case independent: {_query = format["UPDATE players SET name='%1', med_cash='%2', med_bank='%3', med_licenses='%4', med_gear='%5', med_stats='%6' WHERE playerid='%7'",_name,_cash,_bank,_licenses,_gear,_stats,_uid];};
};

if(EXTDB_SETTING(getNumber,"DebugMode") == 1) then {
	diag_log "------------- Client Query Update --------------";
	diag_log format["QUERY: %1",_query];
	diag_log "------------------------------------------------";
};
_queryResult = [_query,1] call DB_fnc_asyncCall;
