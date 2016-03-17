class PlayerHUD {
	idd = -1;
	duration = 10e10;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	objects[] = {};
	controls[] = {
		xy_ui_background,
		xy_ui_exp,
		xy_ui_health,
		xy_ui_blood,
		xy_ui_food,
		xy_ui_water
	};

	class xy_ui_background: Life_RscBackground
	{
		colorBackground[] = {0,0,0,0.35};
		idc = 2200;
		x = 0.298906 * safezoneW + safezoneX;
		y = 0.236 * safezoneH + safezoneY;
		w = 0.242344 * safezoneW;
		h = 0.154 * safezoneH;
	};

	class xy_ui_exp: RscPicture
	{
		idc = 5500;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 0.304062 * safezoneW + safezoneX;
		y = 0.247 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.121 * safezoneH;
	};

	/* Progress */
	class LIFE_RscProgress_HUDCommon : Life_RscProgress {
		colorFrame[] = {0, 0, 0, 0.8};
		x = 0.37625 * safezoneW + safezoneX;
		w = 0.154687 * safezoneW;
		h = 0.022 * safezoneH;
	};

	class xy_ui_health: LIFE_RscProgress_HUDCommon
	{
		idc = 5501;
		text = "Health"; //--- ToDo: Localize;
		colorBar[] = { 0.8118, 0, 0.0588, 0.8};
		y = 0.258 * safezoneH + safezoneY;
	};
	class xy_ui_blood: LIFE_RscProgress_HUDCommon
	{
		idc = 5502;
		text = "Blood"; //--- ToDo: Localize;
		colorBar[] = { 0.8510, 0.1176, 0.0941, 0.8};
		y = 0.28 * safezoneH + safezoneY;
	};
	class xy_ui_food: LIFE_RscProgress_HUDCommon
	{
		idc = 5503;
		text = "Food"; //--- ToDo: Localize;
		colorBar[] = { 0, 0.6941, 0.4157, 0.8};
		y = 0.302 * safezoneH + safezoneY;
	};
	class xy_ui_water: LIFE_RscProgress_HUDCommon
	{
		idc = 5504;
		text = "Water"; //--- ToDo: Localize;
		colorBar[] = { 0.0980, 0.7098, 0.9961, 0.8};
		y = 0.324 * safezoneH + safezoneY;
	};

	class xy_ui_level: Life_RscText
	{
	idc = 5505;
	text = "1"; //--- ToDo: Localize;
	colorText[] = { 0.9765, 0.4118, 0.0549, 0.8};
	x = 0.329844 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.055 * safezoneH;
	};
};