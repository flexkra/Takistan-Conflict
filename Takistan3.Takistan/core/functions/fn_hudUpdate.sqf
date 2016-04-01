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

LIFEctrl(IDC_UI_XY_UI_EXP) htmlLoad "http://www.grundschule-schnellmark.de/";
LIFEctrl(IDC_UI_XY_UI_FOOD) progressSetPosition (1 / (100 / life_hunger));
LIFEctrl(IDC_UI_XY_UI_WATER) progressSetPosition (1 / (100 / life_thirst));
LIFEctrl(IDC_LIFE_HEALTH_TEXT) progressSetPosition (1 - (damage player));
//LIFEctrl(IDC_LIFE_BAR_EXP) progressSetPosition (1 / (100 / (life_exp +1)));
LIFEctrl(IDC_UI_XY_UI_BLOOD) progressSetPosition (1 / (100 / (life_blood +1)));

//LIFEctrl(IDC_LIFE_FOOD_TEXT) ctrlsetText format["%1", life_hunger];
//LIFEctrl(IDC_LIFE_WATER_TEXT) ctrlsetText format["%1", life_thirst];
//LIFEctrl(IDC_LIFE_HEALTH_TEXT) ctrlsetText format["%1", round((1 - (damage player)) * 100)];
//LIFEctrl(IDC_LIFE_EXP_TEXT) ctrlsetText format["%1", life_exp];
LIFEctrl(IDC_UI_XY_UI_LEVEL) ctrlsetText format["%1", life_level];
//LIFEctrl(IDC_LIFE_BLOOD_TEXT) ctrlsetText format["%1", life_bloodstatus];
//LIFEctrl(IDC_LIFE_LEVEL_TEXT2) ctrlsetText format["%1", (life_level + 1)];
