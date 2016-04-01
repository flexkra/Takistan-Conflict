#include "..\..\script_macros.hpp"
/*
	File: fn_p_openMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens the players virtual inventory menu
*/
if(!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch(playerSide) do {
	case west:
	{
		ctrlShow[2407,false]; //hide group button
		ctrlShow[1208,false]; //hide group button
		ctrlShow[2424,false]; //hide craft button
		ctrlShow[1211,false]; //hide craft button
		ctrlShow[9800,true]; //Wanted
		ctrlShow[9801,true]; //Wanted+
		ctrlShow[9803,false];
		ctrlShow[1217,false]; //admin ^
		ctrlShow[2425,true];
		ctrlShow[1215,true];
	};

	case civilian:
	{
		ctrlShow[9800,false]; //Wanted
		ctrlShow[9801,false]; //Wanted+
		ctrlShow[1213,false]; //Wanted
		ctrlShow[1214,false]; //Wanted+
		ctrlShow[9803,false];
		ctrlShow[1217,false]; //admin ^
		ctrlShow[2425,true];
		ctrlShow[1215,true];
		ctrlShow[2407,true]; //hide group button
		ctrlShow[1208,true]; //hide group button
	};

	case independent:
	{
		ctrlShow[2407,false]; //hide group button
		ctrlShow[1208,false]; //hide group button
		ctrlShow[2424,false]; //hide craft button
		ctrlShow[1211,false]; //hide craft button
		ctrlShow[9800,false]; //Wanted
		ctrlShow[9801,false]; //Wanted+
		ctrlShow[1213,false]; //Wanted
		ctrlShow[1214,false]; //Wanted+
		ctrlShow[9803,false];
		ctrlShow[1217,false]; //admin ^
		ctrlShow[2425,true];
		ctrlShow[1215,true];
	};
};

if(FETCH_CONST(life_adminlevel) < 1) then {
	ctrlShow[9803,false];
	ctrlShow[1217,false]; //admin ^
};

[] call life_fnc_p_updateMenu;

if(FETCH_CONST(life_adminlevel) >= 1) then {
	ctrlShow[9803,true];
	ctrlShow[1217,true]; //admin ^
};