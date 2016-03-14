#include "..\script_macros.hpp"
/*
	Master client initialization file
*/
[] call life_fnc_marker;
life_firstSpawn = true;
life_session_completed = false;
private["_handle","_timeStamp"];
0 cutText["Setting up client, please wait...","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
[] call compile PreprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile PreprocessFileLineNumbers "core\configuration.sqf";

//Set bank amount for new players
switch (playerSide) do {
	case west: {
		BANK = LIFE_SETTINGS(getNumber,"bank_cop");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
	};
	case civilian: {
		BANK = LIFE_SETTINGS(getNumber,"bank_civ");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
	};
	case independent: {
		BANK = LIFE_SETTINGS(getNumber,"bank_med");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
	};
};

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil {TON_fnc_clientGangLeader})};

diag_log "::Life Client:: Received server functions.";
0 cutText ["Waiting for the server to be ready...","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_server_isReady"};
waitUntil{(life_server_isReady OR !isNil "life_server_extDB_notLoaded")};

if(!isNil "life_server_extDB_notLoaded" && {life_server_extDB_notLoaded != ""}) exitWith {
	diag_log life_server_extDB_notLoaded;
	999999 cutText [life_server_extDB_notLoaded,"BLACK FADED"];
	999999 cutFadeOut 99999999;
};

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText["Finishing client setup procedure","BLACK FADED"];
0 cutFadeOut 9999999;

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

switch (playerSide) do {
	case west: {
		_handle = [] spawn life_fnc_initCop;
		waitUntil {scriptDone _handle};
	};
	case civilian: {
		//Initialize Civilian Settings
		_handle = [] spawn life_fnc_initCiv;
		waitUntil {scriptDone _handle};
	};
	case independent: {
		//Initialize Medics and blah
		_handle = [] spawn life_fnc_initMedic;
		waitUntil {scriptDone _handle};
	};
};

player SVAR ["restrained",false,true];
player SVAR ["Escorting",false,true];
player SVAR ["transporting",false,true];
player SVAR ["playerSurrender",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log format["                End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "------------------------------------------------------------------------------------------------------";

life_sidechat = false;
[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player SVAR ["steam64ID",steamid];
player SVAR ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
	life_disable_getIn = false;
	player moveInCargo (_this select 0);
	life_disable_getOut = true;
";

[] spawn life_fnc_survival;

{_x setMarkerAlphaLocal 0} foreach ["Chaman","Garmsar","Zavarak","Sakhee","Sultansafee","Huzrutimam","Shukurkalay","Terroristenanwärter_1","Terroristenanwärter_2","Terroristenanwärter","Transport_1_1","Transport_1_2","Transport_1_3","Transport_2_1","Transport_2_2","Transport_2_3","Transport_3_1","Transport_3_2_1","Transport_3_2_2","Transport_4_1","Transport_4_2","schakaleins_1_1_0","schakaleins_1_1_1","schakaleins_1_2_0","schakaleins_1_2_1","blond_1_1_0","blond_1_1_1","blond_1_2_0","blond_1_2_1","blond_1_3_0","blond_1_3_1","blond_1_4_0","blond_1_4_1","blond_1_5_0","blond_1_5_1","schakalzwei_1_1_0","schakalzwei_1_1_1","glauben_1_1_0","glauben_1_1_1","glauben_1_2_0","glauben_1_2_1","glauben_1_3_0","glauben_1_3_1","propaganda_1_1_0","propaganda_1_1_1","propaganda_1_2_0","propaganda_1_2_1","propaganda_1_3_0","propaganda_1_3_1","schakaldrei_1_1_0","schakaldrei_1_1_1","schakaldrei_1_2_0","schakaldrei_1_2_1","schakaldrei_1_3_0","schakaldrei_1_3_1","abhoeren_1_1_0","abhoeren_1_1_1","abhoeren_1_2_0","abhoeren_1_2_1","abhoeren_1_3_0","abhoeren_1_3_1","abhoeren_1_4_0","abhoeren_1_4_1","abhoeren_1_5_0","abhoeren_1_5_1","abhoeren_1_6_0","abhoeren_1_6_1","abhoeren_1_7_0","abhoeren_1_7_1","hoellenfeuer_1_1_0","hoellenfeuer_1_1_1","hoellenfeuer_1_2_0","hoellenfeuer_1_2_1","hoellenfeuer_1_3_0","hoellenfeuer_1_3_1","hoellenfeuer_1_4_0","hoellenfeuer_1_4_1","hoellenfeuer_1_5_0","hoellenfeuer_1_5_1","hoellenfeuer_1_6_0","hoellenfeuer_1_6_1","hoellenfeuer_1_7_0","hoellenfeuer_1_7_1","hoellenfeuer_1_8_0","hoellenfeuer_1_8_1","hoellenfeuer_1_9_0","hoellenfeuer_1_9_1","schakalvier_1_1_0","schakalvier_1_1_1","schakalvier_1_2_0","schakalvier_1_2_1","schakalvier_1_3_0","schakalvier_1_3_1","schakalvier_1_4_0","schakalvier_1_4_1","schakalvier_1_5_0","schakalvier_1_5_1","schakalvier_1_6_0","schakalvier_1_6_1","transport_1_1_0","transport_1_1_1","transport_1_2_0","transport_1_2_1","transport_1_3_0","transport_1_3_1","transport_2_1_0","transport_2_1_1","transport_2_2_0","transport_2_2_1","transport_2_3_0","transport_2_3_1","transport_3_1_0","transport_3_1_1","transport_3_2_0","transport_3_2_1","transport_3_2_2","transport_4_1_0","transport_4_1_1"];
"Basar" setMarkerAlphaLocal 0.2;

[] spawn {
	while {true} do {
		waitUntil{(!isNull (findDisplay 49)) && (!isNull (findDisplay 602))}; // Check if Inventory and ESC dialogs are open
		(findDisplay 49) closeDisplay 2; // Close ESC dialog
		(findDisplay 602) closeDisplay 2; // Close Inventory dialog
	};
};

CONSTVAR(life_paycheck); //Make the paycheck static.
if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;};

if(EQUAL(LIFE_SETTINGS(getNumber,"Pump_service"),1)) then{
	[] execVM "core\fn_Setup_Sation_Service.sqf";
};

[getPlayerUID player,player getVariable["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];

player enableFatigue false;
0 setOvercast 1;
sleep 2;
0 setRain 0;