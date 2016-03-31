#include "..\..\script_macros.hpp"
/*
	File: fn_requestReceived.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Called by the server saying that we have a response so let's
	sort through the information, validate it and if all valid
	set the client up.
*/
diag_log format["Startshizzle - %1 - %2",count _this, _this];
private["_array"];
diag_log "Load";
life_session_tries = life_session_tries + 1;
if(life_session_completed) exitWith {diag_log "Session completed";}; //Why did this get executed when the client already initialized? Fucking arma...
if(life_session_tries > 3) exitWith {cutText[localize "STR_Session_Error","BLACK FADED"]; 0 cutFadeOut 999999999;};

0 cutText [localize "STR_Session_Received","BLACK FADED"];
0 cutFadeOut 9999999;

//Error handling and junk..
if(isNil "_this") exitWith {diag_log "Nil";[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(typeName _this,"STRING")) exitWith {diag_log "typeName";[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(count _this,0)) exitWith {diag_log "count";[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(SEL(_this,0),"Error")) exitWith {diag_log "Error";[] call SOCK_fnc_insertPlayerInfo;};
if(!(EQUAL(steamid,SEL(_this,0)))) exitWith {diag_log "steamid";[] call SOCK_fnc_dataQuery;};

//Lets make sure some vars are not set before hand.. If they are get rid of them, hopefully the engine purges past variables but meh who cares.
if(!isServer && (!isNil "life_adminlevel" OR !isNil "life_coplevel" OR !isNil "life_donator")) exitWith {
	[profileName,getPlayerUID player,"VariablesAlreadySet"] remoteExecCall ["SPY_fnc_cookieJar",RSERV];
	[profileName,format["Variables set before client initialization...\nlife_adminlevel: %1\nlife_coplevel: %2\nlife_donator: %3",life_adminlevel,life_coplevel,life_donator]] remoteExecCall ["SPY_fnc_notifyAdmins",RCLIENT];
	sleep 0.9;
	failMission "SpyGlass";
};

//Parse basic player information.
CONST(life_adminlevel,parseNumber (SEL(_this,4)));
CONST(life_donator,0);

//Loop through licenses
if(count (SEL(_this,6)) > 0) then {
	{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,6));
};

life_gear = SEL(_this,8);
[true] call life_fnc_loadGear;

diag_log "Pre Sidestuff";
//Parse side specific information.
switch(playerSide) do {
	case west: {
		CONST(life_coplevel, parseNumber(SEL(_this,7)));
		CONST(life_medicLevel,0);
		life_blacklisted = SEL(_this,9);
		if(EQUAL(LIFE_SETTINGS(getNumber,"save_playerStats"),1)) then {
			life_hunger = SEL(SEL(_this,10),0);
			life_thirst = SEL(SEL(_this,10),1);
		};
		diag_log "Pre Money";
		diag_log format["west CASH: %1", SEL(_this,16)];
		diag_log format["west CASH: %1",typeName SEL(_this,16)];
		diag_log format["west BANK: %1", SEL(_this,17)];
		diag_log format["west BANK: %1",typeName SEL(_this,17)];
		CASH = (SEL(_this,16));
		BANK = (SEL(_this,17));
		diag_log "After Money";
	};

	case civilian: {
		CASH = (SEL(_this,2));
		BANK = (SEL(_this,3));
		diag_log format["civilian CASH: %1", SEL(_this,2)];
		diag_log format["civilian CASH: %1",typeName SEL(_this,2)];
		diag_log format["civilian BANK: %1", SEL(_this,3)];
		diag_log format["civilian BANK: %1",typeName SEL(_this,3)];
		life_is_arrested = SEL(_this,7);
		CONST(life_coplevel, 0);
		CONST(life_medicLevel, 0);
		life_houses = SEL(_this,10);
		if(EQUAL(LIFE_SETTINGS(getNumber,"save_playerStats"),1)) then {
			life_hunger = SEL(SEL(_this,9),0);
			life_thirst = SEL(SEL(_this,9),1);
		};
		{
			_house = nearestBuilding (call compile format["%1", SEL(_x,0)]);
			life_vehicles pushBack _house;
		} foreach life_houses;

		life_gangData = SEL(_this,11);
		if(!(EQUAL(count life_gangData,0))) then {
			[] spawn life_fnc_initGang;
		};
		life_gesamtexp = SEL(_this,14);
		life_quest = SEL(_this,15);
		life_questinfo = SEL(_this,16);
		life_payday = SEL(_this,17);
		life_paytime = SEL(_this,18);
	};

	case independent: {
		CONST(life_medicLevel, parseNumber(SEL(_this,7)));
		CONST(life_coplevel,0);
		if(EQUAL(LIFE_SETTINGS(getNumber,"save_playerStats"),1)) then {
			life_hunger = SEL(SEL(_this,9),0);
			life_thirst = SEL(SEL(_this,9),1);
		};
		diag_log "Pre Money";
		CASH = (SEL(_this,16));
		BANK = (SEL(_this,17));
		diag_log "After Money";
		diag_log format["independent CASH: %1", SEL(_this,16)];
		diag_log format["independent CASH: %1",typeName SEL(_this,16)];
		diag_log format["independent BANK: %1", SEL(_this,17)];
		diag_log format["independent BANK: %1",typeName SEL(_this,17)];
	};
};
diag_log "After Sidestuff";
if(count (SEL(_this,13)) > 0) then {
	{life_vehicles pushBack _x;} foreach (SEL(_this,13));
};
diag_log "Final";

diag_log format["CASH: %1", CASH];
diag_log format["CASH type: %1",typeName CASH];
diag_log format["BANK: %1",BANK];
diag_log format["BANK type: %1",typeName BANK];
life_session_completed = true;
