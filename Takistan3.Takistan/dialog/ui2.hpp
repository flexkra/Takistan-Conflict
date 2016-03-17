class PlayerHUD {
	idd = -1;
	duration = 10e10;
	movingEnable = 1;
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

	/* Background */
	class xy_ui_background: Life_RscBackground
	{
		colorBackground[] = {0,0,0,0.35};
		idc = 2200;
		x = safezoneX;
        y = safezoneY;
        w = 0.16 * safezoneW;
        h = 0.03 * safezoneH;
	};

	/* Picture */
	class xy_ui_exp: Life_RscPicture
	{
		idc = 5500;
		text = "#(argb,8,8,3)color(1,1,1,0)";
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
		colorBar[] = { 0.8118, 0, 0.0588, 0.8};
		y = 0.247 * safezoneH + safezoneY;
	};
	class xy_ui_blood: LIFE_RscProgress_HUDCommon
	{
		idc = 5502;
		colorBar[] = { 0.8510, 0.1176, 0.0941, 0.8};
		y = 0.269 * safezoneH + safezoneY;
	};
	class xy_ui_food: LIFE_RscProgress_HUDCommon
	{
		idc = 5503;
		colorBar[] = { 0, 0.6941, 0.4157, 0.8};
		y = 0.291 * safezoneH + safezoneY;
	};
	class xy_ui_water: LIFE_RscProgress_HUDCommon
	{
		idc = 5504;
		colorBar[] = { 0.0980, 0.7098, 0.9961, 0.8};
		y = 0.313 * safezoneH + safezoneY;
	};

	/* Text */
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

	class xy_ui_commonText: Life_RscText 
	{
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		style = ST_CENTER;
		x = 0.4 * safezoneW + safezoneX;
		w = 0.154687 * safezoneW;
		h = 0.022 * safezoneH;
	};

	class xy_ui_healthText : xy_ui_commonText
	{
		idc = 5510;
		y = 0.249 * safezoneH + safezoneY;
		text = "$STR_HUD_Health";
	};

	class xy_ui_bloodText : xy_ui_commonText
	{
		idc = 5511;
		y = 0.271 * safezoneH + safezoneY;
		text = "$STR_HUD_Blood";
	};

	class xy_ui_foodText : xy_ui_commonText
	{
		idc = 5512;
		y = 0.293 * safezoneH + safezoneY;
		text = "$STR_HUD_Food";
	};

	class xy_ui_waterText : xy_ui_commonText
	{
		idc = 5513;
		y = 0.315 * safezoneH + safezoneY;
		text = "$STR_HUD_Water";
	};
};