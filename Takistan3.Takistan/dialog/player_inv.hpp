#include "player_sys.sqf"

class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = true;
	enableSimulation = true;

	class controlsBackground {

		size = 1;
		color = "#FFFFFF";

		class menu_synced: life_RscPicture
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

		class handy_icon: life_RscPicture
		{
			idc = 1205;
			text = "icons\handy.paa";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class group_icon: life_RscPicture
		{
			idc = 1208;
			text = "icons\group.paa";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class banking_icon: life_RscPicture
		{
			idc = 1208;
			text = "icons\banking.paa";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class schluessel_icon: life_RscPicture
		{
			idc = 1206;
			text = "icons\keys.paa";
			x = 0.39 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class speichern_icon: life_RscPicture
		{
			idc = 1207;
			text = "icons\speichern.paa";
			x = 0.42 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class inventar_icon: life_RscPicture
		{
			idc = 1210;
			text = "icons\inventar.paa";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class craft_icon: life_RscPicture
		{
			idc = 1211;
			text = "icons\craft.paa";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class geldmenu_icon: life_RscPicture
		{
			idc = 1212;
			text = "icons\geldmenu.paa";
			x = 0.39 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class wanted_icon: life_RscPicture
		{
			idc = 1213;
			text = "icons\wanted.paa";
			x = 0.42 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class wantedplus_icon: life_RscPicture
		{
			idc = 1214;
			text = "icons\wantedplus.paa";
			x = 0.42 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class settings_icon: life_RscPicture
		{
			idc = 1215;
			text = "icons\settings.paa";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class admin_icon: life_RscPicture
		{
			idc = 1216;
			text = "icons\anadmin.paa";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.45 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class adminplus_icon: life_RscPicture
		{
			idc = 1217;
			text = "icons\adminplus.paa";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.45 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
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

	class controls {


		class handy_button: Life_RscButtonMenu
		{
			idc = 2406;
			x = 0.34 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Anrufen"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""Life_cell_phone"";";
		};


		class schluessel_button: Life_RscButtonMenu
		{
			idc = 2409;
			x = 0.4 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Schluessel"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""life_key_management"";";
		};

		class speichern_button: Life_RscButtonMenu
		{
			idc = 2402;
			x = 0.43 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Speichern"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call SOCK_fnc_syncData;";
		};

		class inventar_button: Life_RscButtonMenu
		{
			idc = 2405;
			x = 0.37 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Inventar"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""inventar"";";
		};

		class group_button: Life_RscButtonMenu
		{
			idc = 2407;
			x = 0.34 * safezoneW + safezoneX;
			y = 0.515 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Gruppe"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
		};

		class banking_button: Life_RscButtonMenu
		{
			idc = 2407;
			x = 0.34 * safezoneW + safezoneX;
			y = 0.565 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Banking"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""banking"";";
		};

		class craft_button: Life_RscButtonMenu
		{
			idc = 2424;
			x = 0.37 * safezoneW + safezoneX;
			y = 0.565 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Crafting"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""life_craft"";";
		};

		class settings_button: Life_RscButtonMenu
		{
			idc = 2425;
			x = 0.37 * safezoneW + safezoneX;
			y = 0.515 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Einstellungen"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call life_fnc_settingsMenu;";
		};

		class admin_button: Life_RscButtonMenu
		{
			idc = 9803;
			x = 0.34 * safezoneW + safezoneX;
			y = 0.465 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Admin"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""life_admin_menu"";";
		};

		class Wanted_button: Life_RscButtonMenu
		{
			idc = 9800;
			x = 0.43 * safezoneW + safezoneX;
			y = 0.515 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Wanted +"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""life_wantedadd2"";";
		};

		class WantedPlus_button: Life_RscButtonMenu
		{
			idc = 9801;
			x = 0.43 * safezoneW + safezoneX;
			y = 0.565 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Wanted-Liste"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call life_fnc_wantedMenu;";
		};

		class geldmenu_button: Life_RscButtonMenu
		{
			idc = 2409;
			x = 0.4 * safezoneW + safezoneX;
			y = 0.565 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Porte­mon­naie"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "createDialog ""geld"";";
		};


	};
};