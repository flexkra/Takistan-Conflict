#include "..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	All survival? things merged into one thread.
*/
private["_fnc_food","_fnc_water","_foodTime","_waterTime","_bp","_walkDis","_lastPos","_curPos"];
_fnc_food =  {
	if(life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";}
	else
	{
		SUB(life_hunger,10);
		[] call life_fnc_hudUpdate;
		if(life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";};
		switch(life_hunger) do {
			case 30: {hint localize "STR_NOTF_EatMSG_1";};
			case 20: {hint localize "STR_NOTF_EatMSG_2";};
			case 10: {
				hint localize "STR_NOTF_EatMSG_3";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};
	
_fnc_water = {
	if(life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";}
	else
	{
		SUB(life_thirst,10);
		[] call life_fnc_hudUpdate;
		if(life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";};
		switch(life_thirst) do  {
			case 30: {hint localize "STR_NOTF_DrinkMSG_1";};
			case 20: {
				hint localize "STR_NOTF_DrinkMSG_2";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
			case 10: {
				hint localize "STR_NOTF_DrinkMSG_3";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};

//Setup the time-based variables.
_foodTime = time;
_waterTime = time;
_walkDis = 0;
_bp = "";
_lastPos = visiblePosition player;
_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
_lastState = vehicle player;

[] spawn {
  while {true} do {
    if (life_hideout GVAR "gangOwner" == group player) then {
      sleep 600;
      if (life_hideout GVAR "gangOwner" == group player) then {
        ADD(life_gesamtexp,350);
        ADD(CASH,500);
        if (life_quest == 33) then {ADD(life_questinfo,1);};
        [] call life_fnc_SetupLevel;
        [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Ganggebiet gehalten<br /> Belohnung erhalten <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + 500$  <br /> + 350 Erfahrung"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
      };
    };
  };
};

while {true} do {
	/* Thirst / Hunger adjustment that is time based */
	if((time - _waterTime) > 600) then {[] call _fnc_water; _waterTime = time;};
	if((time - _foodTime) > 850) then {[] call _fnc_food; _foodTime = time;};
	
	/* Adjustment of carrying capacity based on backpack changes */
	if(EQUAL(backpack player,"")) then {
		life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");
		_bp = backpack player;
	} else {
		if(!(EQUAL(backpack player,"")) && {!(EQUAL(backpack player,_bp))}) then {
			_bp = backpack player;
			life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight") + round(FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,_bp,"maximumload") / 4);
		};
	};
	


	if !(call TFAR_fnc_isTeamSpeakPluginEnabled) then {titleText ["Schalte bitte dein TFAR an, um Spielen zu können!", "BLACK", 1];};

	if (life_blood == 1) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.1, 0, 0, 1.0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		"dynamicBlur" ppEffectEnable true; "dynamicBlur" ppEffectAdjust [3]; "dynamicBlur" ppEffectCommit 2; enableCamShake true;
		player SVAR ["unconscious",false,true];
		};
	if (life_blood > 1 && life_blood < 10) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.3, 0, 0, 1.0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		"dynamicBlur" ppEffectEnable true; "dynamicBlur" ppEffectAdjust [1]; "dynamicBlur" ppEffectCommit 2; enableCamShake true;
		};
	if (life_blood > 10 && life_blood < 20) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.6, 0, 0, 1.0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		"dynamicBlur" ppEffectEnable true; "dynamicBlur" ppEffectAdjust [1]; "dynamicBlur" ppEffectCommit 2; enableCamShake true;
		};
	if (life_blood > 20 && life_blood < 30) then {
		"colorCorrections" ppEffectAdjust [0.6, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		player SVAR ["unconscious",false,true];
		};
	if (life_blood > 30 && life_blood < 40) then {
		"colorCorrections" ppEffectAdjust [0.7, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 40 && life_blood < 50) then {
		"colorCorrections" ppEffectAdjust [0.9, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 50 && life_blood < 60) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.2], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 60 && life_blood < 70) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.4], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 70 && life_blood < 80) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.6], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 80 && life_blood < 90) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.8], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 90 && life_blood < 100) then {
		"colorCorrections" ppEffectEnable false;
		"dynamicBlur" ppEffectEnable false;
		player SVAR ["unconscious",false,true];
	};
	if (life_blood == 100) then {
		"colorCorrections" ppEffectEnable false;
		"dynamicBlur" ppEffectEnable false;
		player SVAR ["unconscious",false,true];
	};

	/* Check if the player's state changed? */
	if(vehicle player != _lastState OR {!alive player}) then {
		[] call life_fnc_updateViewDistance;
		_lastState = vehicle player;
	};
	
	/* Check if the weight has changed and the player is carrying to much */
	if(life_carryWeight > life_maxWeight && {!isForcedWalk player}) then {
		player forceWalk true;
		if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
		hint localize "STR_NOTF_MaxWeight";
	} else {
		if(isForcedWalk player) then {
			player forceWalk false;
		};
	};
	
	/* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
	if(!alive player) then {_walkDis = 0;} else {
		_curPos = visiblePosition player;
		_curPos = (SEL(_curPos,0)) + (SEL(_curPos,1));
		if(!(EQUAL(_curPos,_lastPos)) && {(vehicle player == player)}) then {
			ADD(_walkDis,1);
			if(EQUAL(_walkDis,650)) then {
				_walkDis = 0;
				SUB(life_thirst,5);
				SUB(life_hunger,5);
				[] call life_fnc_hudUpdate;
			};
		};
		_lastPos = visiblePosition player;
		_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
	};
	uiSleep 1;
};
	
	
	
