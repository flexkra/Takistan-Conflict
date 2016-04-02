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

_exp = (1 / (100 / (life_exp +1));
if(_exp < 0.05) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_0.paa";
};
if(_exp >= 0.05 && _exp < 0.1) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_5.paa";
};
if(_exp >= 0.1 && _exp < 0.15) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_10.paa";
};
if(_exp >= 0.15 && _exp < 0.2) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_15.paa";
};
if(_exp >= 0.2 && _exp < 0.25) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_20.paa";
};
if(_exp >= 0.25 && _exp < 0.3) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_25.paa";
};
if(_exp >= 0.3 && _exp < 0.35) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_30.paa";
};
if(_exp >= 0.35 && _exp < 0.4) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_35.paa";
};
if(_exp >= 0.4 && _exp < 0.45) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_40.paa";
};
if(_exp >= 0.45 && _exp < 0.5) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_45.paa";
};
if(_exp >= 0.50 && _exp < 0.55) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_50.paa";
};
if(_exp >= 0.55 && _exp < 0.6) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_55.paa";
};
if(_exp >= 0.6 && _exp < 0.65) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_60.paa";
};
if(_exp >= 0.65 && _exp < 0.7) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_65.paa";
};
if(_exp >= 0.7 && _exp < 0.75) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_70.paa";
};
if(_exp >= 0.75 && _exp < 0.8) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_75.paa";
};
if(_exp >= 0.8 && _exp < 0.85) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_80.paa";
};

if(_exp >= 0.85 && _exp < 0.9) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_85.paa";
};
if(_exp >= 0.9 && _exp < 0.95) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_90.paa";
};
if(_exp >= 0.95) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_95.paa";
};
if(life_level == 50) then {
	LIFEctrl(IDC_UI_XY_UI_EXP) ctrlSetText "icons/level_100.paa";
};
LIFEctrl(IDC_UI_XY_UI_FOOD) progressSetPosition (1 / (100 / life_hunger));
LIFEctrl(IDC_UI_XY_UI_WATER) progressSetPosition (1 / (100 / life_thirst));
LIFEctrl(IDC_LIFE_HEALTH) progressSetPosition (1 - (damage player));
LIFEctrl(IDC_UI_XY_UI_BLOOD) progressSetPosition (1 / (100 / (life_blood +1)));
LIFEctrl(IDC_UI_XY_UI_LEVEL) ctrlsetText format["%1", life_level];