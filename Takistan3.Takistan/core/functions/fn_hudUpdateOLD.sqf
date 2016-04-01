#include "..\..\script_macros.hpp"
#define IDD_LIFE_MAIN_DISP 2203
#define IDC_LIFE_BAR_FOOD 2200
#define IDC_LIFE_BAR_WATER 2201
#define IDC_LIFE_BAR_HEALTH 2202
#define IDC_LIFE_BAR_EXP 2204
#define IDC_LIFE_BAR_BLOOD 2206
#define IDC_LIFE_FOOD_TEXT 1000
#define IDC_LIFE_WATER_TEXT 1001
#define IDC_LIFE_HEALTH_TEXT 1002
#define IDC_LIFE_EXP_TEXT 1003
#define IDC_LIFE_LEVEL_TEXT 1004
#define IDC_LIFE_LEVEL_TEXT2 1005
#define IDC_LIFE_BLOOD_TEXT 1006

private["_bounty","_crime"];
disableSerialization;

if(isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
LIFEctrl(IDC_LIFE_BAR_FOOD) progressSetPosition (1 / (100 / life_hunger));
LIFEctrl(IDC_LIFE_BAR_WATER) progressSetPosition (1 / (100 / life_thirst));
LIFEctrl(IDC_LIFE_BAR_HEALTH) progressSetPosition (1 - (damage player));
LIFEctrl(IDC_LIFE_BAR_EXP) progressSetPosition (1 / (100 / (life_exp +1)));
LIFEctrl(IDC_LIFE_BAR_BLOOD) progressSetPosition (1 / (100 / (life_blood +1)));

LIFEctrl(IDC_LIFE_FOOD_TEXT) ctrlsetText format["%1", life_hunger];
LIFEctrl(IDC_LIFE_WATER_TEXT) ctrlsetText format["%1", life_thirst];
LIFEctrl(IDC_LIFE_HEALTH_TEXT) ctrlsetText format["%1", round((1 - (damage player)) * 100)];
LIFEctrl(IDC_LIFE_EXP_TEXT) ctrlsetText format["%1", life_exp];
LIFEctrl(IDC_LIFE_LEVEL_TEXT) ctrlsetText format["%1", life_level];
LIFEctrl(IDC_LIFE_BLOOD_TEXT) ctrlsetText format["%1", life_bloodstatus];
LIFEctrl(IDC_LIFE_LEVEL_TEXT2) ctrlsetText format["%1", (life_level + 1)];
