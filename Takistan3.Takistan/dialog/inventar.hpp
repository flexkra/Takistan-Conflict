#include "player_sys.sqf"

class Inventar {

	idd = inventar_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad ="[] spawn life_fnc_p_inventar;";

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

		class itemHeader: life_RscText
		{
			idc = -1;
			text = $STR_PM_cItems;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class PlayersName: itemHeader
		{
			idc = carry_weight;
			style = 1;
			text = "";
			x = 0.3 * safezoneW + safezoneX;
			y = 0.32 * safezoneH + safezoneY;
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

		class itemList: life_RscListbox
		{
			idc = item_list;
			colorBackground[] = {0, 0, 0, 0.5};
			x = 0.34 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.1 * safezoneH;
			sizeEx = 0.030;
		};

		class itemEdit: life_RscEdit
		{
			idc = item_edit;
			text = "1";
			x = 0.34 * safezoneW + safezoneX;
			y = 0.58 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class inventar_wegwerfen: life_RscPicture
		{
			idc = 1201;
			text = "icons\wegwerfen.paa";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class inventar_geben: life_RscPicture
		{
			idc = 1202;
			text = "icons\geben.paa";
			x = 0.375 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class inventar_benutzen: life_RscPicture
		{
			idc = 1203;
			text = "icons\benutzen.paa";
			x = 0.42 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class RemoveButton: life_RscButtonMenu
		{
			x = 0.34 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Wegwerfen"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call life_fnc_removeItem;";
		};

		class DropButton: life_RscButtonMenu
		{
			idc = 2002;
			x = 0.39 * safezoneW + safezoneX;
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
			onButtonClick = "[] call life_fnc_giveItem;";

		};

		class UseButton: life_RscButtonMenu
		{
			x = 0.43 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Benutzen"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call life_fnc_useItem;";

		};

	};
};