#define IDC_UI_XY_UI_EXP	5500
#define IDC_UI_XY_UI_HEALTH	5501
#define IDC_UI_XY_UI_BLOOD	5502
#define IDC_UI_XY_UI_FOOD	5503
#define IDC_UI_XY_UI_WATER	5504
#define IDC_UI_XY_UI_LEVEL	5505
#define IDC_UI_XY_UI_BACKGROUND	2200

class PlayerHUD {
	idd = -1;
	duration = 10e10;
	movingEnable = 1;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	objects[] = {};
	controls[]=
	{
		xy_ui_background,
		xy_ui_health,
		xy_ui_blood,
		xy_ui_food,
		xy_ui_water,
		xy_ui_level,
		xy_ui_exp
	};

	/* Background */
	class xy_ui_background: Life_RscBackground
	{
		colorBackground[] = {0,0,0,0.2};
		idc = IDC_UI_XY_UI_BACKGROUND;
		x = 0.0101562 * safezoneW + safezoneX;
		y = 0.016 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.088 * safezoneH;
	};

	/* Picture */
	class xy_ui_exp: Life_RscPicture
	{
		idc = IDC_UI_XY_UI_EXP;
		text = "";
		x = 0.0153125 * safezoneW + safezoneX;
		y = 0.027 * safezoneH + safezoneY;
		w = 0.04125 * safezoneW;
		h = 0.066 * safezoneH;
	};

	/* Progress */
	class LIFE_RscProgress_HUDCommon : Life_RscProgress {
		colorFrame[] = {0, 0, 0, 0.8};
		x = 0.0617187 * safezoneW + safezoneX;
		w = 0.108281 * safezoneW;
		h = 0.011 * safezoneH;
	};

	class xy_ui_health: LIFE_RscProgress_HUDCommon
	{
		idc = IDC_UI_XY_UI_HEALTH;
		colorBar[] = { 0.8118, 0, 0.0588, 0.8};
		y = 0.027 * safezoneH + safezoneY;
	};
	class xy_ui_blood: LIFE_RscProgress_HUDCommon
	{
		idc = IDC_UI_XY_UI_BLOOD;
		colorBar[] = { 0.8510, 0.1176, 0.0941, 0.8};
		y = 0.038 * safezoneH + safezoneY;
	};
	class xy_ui_food: LIFE_RscProgress_HUDCommon
	{
		idc = IDC_UI_XY_UI_FOOD;
		colorBar[] = { 0, 0.6941, 0.4157, 0.8};
		y = 0.06 * safezoneH + safezoneY;
	};
	class xy_ui_water: LIFE_RscProgress_HUDCommon
	{
		idc = IDC_UI_XY_UI_WATER;
		colorBar[] = { 0.0980, 0.7098, 0.9961, 0.8};
		y = 0.071 * safezoneH + safezoneY;
	};

	/* Text */
	class xy_ui_level: Life_RscText
	{
		idc = IDC_UI_XY_UI_LEVEL;
		text = "15"; //--- ToDo: Localize;
		colorText[] = {1,0.67,0,1};
		x = 0.0204687 * safezoneW + safezoneX;
		y = 0.027 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
	};
};