#include "player_sys.sqf"

class geld {

	idd = geld_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad ="[] spawn life_fnc_p_geld;";

	class controlsBackground {

		size = 1;
		color = "#FFFFFF";

		class menu_inventar: life_RscPicture
		{
			idc = 1200;
			text = "icons\menu.paa";
			x = 0.237032 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.8125;
			h = 1.03676;

		};

		class MainBackground:life_RscText {
			colorBackground[] = {0, 0, 0, 0.5};
			idc = -1;
			x = 0.1;
			y = 0.175 + (11 / 250);
			w = 0.3;
			h = 0.21 - (22 / 250);
		};

		class moneyStatusInfo : Life_RscStructuredText
		{
			idc = 2015;
			sizeEx = 0.020;
			text = "";
			x = 0.11;
			y = 0.18 + (11 / 250);
			w = 0.3; h = 0.6;
		};
	};
	class controls
	{

		class NearPlayers: life_RscListbox
		{
			idc = 2022;
			x = 0.34 * safezoneW + safezoneX;
			y = 0.51 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.07 * safezoneH;
			sizeEx = 0.030;
		};

		class moneyEdit: life_RscEdit
		{
			idc = 2018;
			text = "1";
			x = 0.34 * safezoneW + safezoneX;
			y = 0.58 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};


		class inventar_geben: life_RscPicture
		{
			idc = 1203;
			text = "icons\geben.paa";
			x = 0.42 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};


		class GebenButton: life_RscButtonMenu
		{
			x = 0.43 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Geben"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call life_fnc_giveMoney";

		};

	};
};
