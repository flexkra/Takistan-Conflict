#include "..\..\script_macros.hpp"
#define IDC_UI_XY_UI_EXP	5500
#define IDC_UI_XY_UI_HEALTH	5501
#define IDC_UI_XY_UI_BLOOD	5502
#define IDC_UI_XY_UI_FOOD	5503
#define IDC_UI_XY_UI_WATER	5504
#define IDC_UI_XY_UI_LEVEL	5505
#define IDC_UI_XY_UI_BACKGROUND	2200

private["_bounty","_crime"];
disableSerialization;

if(isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};


LIFEctrl(IDC_UI_XY_UI_FOOD) progressSetPosition (life_hunger/100);
LIFEctrl(IDC_UI_XY_UI_WATER) progressSetPosition (life_thirst/100);
LIFEctrl(IDC_UI_XY_UI_HEALTH) progressSetPosition (1 - (damage player));
LIFEctrl(IDC_UI_XY_UI_BLOOD) progressSetPosition (life_blood/100);
LIFEctrl(IDC_UI_XY_UI_LEVEL) ctrlsetText format["%1", life_level];
LIFEctrl(IDC_UI_XY_UI_LEVEL) ctrlSetFontHeight 2;
if(playerSide == civilian) then {
	if(life_exp < 0.05) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_0.paa";
	};
	if(life_exp >= 0.05 && life_exp < 0.1) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_5.paa";
	};
	if(life_exp >= 0.1 && life_exp < 0.15) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_10.paa";
	};
	if(life_exp >= 0.15 && life_exp < 0.2) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_15.paa";
	};
	if(life_exp >= 0.2 && life_exp < 0.25) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_20.paa";
	};
	if(life_exp >= 0.25 && life_exp < 0.3) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_25.paa";
	};
	if(life_exp >= 0.3 && life_exp < 0.35) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_30.paa";
	};
	if(life_exp >= 0.35 && life_exp < 0.4) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_35.paa";
	};
	if(life_exp >= 0.4 && life_exp < 0.45) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_40.paa";
	};
	if(life_exp >= 0.45 && life_exp < 0.5) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_45.paa";
	};
	if(life_exp >= 0.50 && life_exp < 0.55) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_50.paa";
	};
	if(life_exp >= 0.55 && life_exp < 0.6) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_55.paa";
	};
	if(life_exp >= 0.6 && life_exp < 0.65) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_60.paa";
	};
	if(life_exp >= 0.65 && life_exp < 0.7) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_65.paa";
	};
	if(life_exp >= 0.7 && life_exp < 0.75) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_70.paa";
	};
	if(life_exp >= 0.75 && life_exp < 0.8) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_75.paa";
	};
	if(life_exp >= 0.8 && life_exp < 0.85) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_80.paa";
	};
	if(life_exp >= 0.85 && life_exp < 0.9) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_85.paa";
	};
	if(life_exp >= 0.9 && life_exp < 0.95) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_90.paa";
	};
	if(life_exp >= 0.95) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_95.paa";
	};
	if(life_level == 50) then {
		LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\level_100.paa";
	};
};
if(playerSide == west) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\ico_usarmy.paa";
};
if(playerSide == GUER) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons\ico_medics.paa";
};