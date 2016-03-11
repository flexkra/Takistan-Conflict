class Life_cell_phone {
	idd = 3000;
	name= "life_cell_phone";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_cellphone";

	class controlsBackground {


		class Voxidphone : Life_RscPicture
		{
			idc = 3001;
			text = "icons\menu.paa";
			x = 0.237032 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.8125;
			h = 1.03676;
		};

		class nachricht_icon: life_RscPicture
		{
			idc = 3205;
			text = "icons\nachricht.paa";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class anmedic_icon: life_RscPicture
		{
			idc = 3206;
			text = "icons\anmedic.paa";
			x = 0.39 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class anadmin_icon: life_RscPicture
		{
			idc = 3207;
			text = "icons\anadmin.paa";
			x = 0.42 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class anarmy_icon: life_RscPicture
		{
			idc = 3210;
			text = "icons\anarmy.paa";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.0515624 * safezoneW;
			h = 0.088 * safezoneH;
		};

	};

	class controls {

		class TextToSend : Life_RscTitle
		{

			colorBackground[] = {0, 0, 0, 0};
			idc = 3002;
			text = "$STR_CELL_TextToSend";
			x = 0.09;
			y = 0.210809;
			w = 0.2725;
			h = 0.04;
		};

		   class textEdit : Life_RscEdit
		{

		idc = 3003;
		colorBackground[] = {0, 0, 0, 0.3};
		text = "";
		x = 0.1; y = 0.340086;
		w = 0.3; h = 0.35;

		};

		class TextMsgButton : life_RscButtonMenu
		{
			idc = 3015;
			x = 0.34 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Absenden"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call TON_fnc_cell_textmsg";
		};

		class PlayerList : Life_RscCombo
		{
			idc = 3004;

			x = 0.1; y = 0.28;
			w = 0.2375; h = 0.04;
		};

		class TextCopButton : life_RscButtonMenu
		{
			idc = 3016;
			x = 0.37 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Army"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call TON_fnc_cell_textcop";
		};

		class TextAdminButton : life_RscButtonMenu
		{
			idc = 3017;
			x = 0.43 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
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
			onButtonClick = "[] call TON_fnc_cell_textadmin";
		};

		class AdminMsgButton : life_RscButtonMenu
		{
			idc = 3020;
			text = "Msg Adm";
			colorBackground[] = {0,0.23,1,0.48};
			onButtonClick = "[] call TON_fnc_cell_adminmsg";

			x = 0.1125;
			y = 0.8;
			w = 0.15;
			h = 0.05;
		};

		class AdminMsgAllButton : life_RscButtonMenu
		{
			idc = 3021;
			text = "Msg Adm ALL";
			colorBackground[] = {0,0.23,1,0.48};
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";

			x = 0.25;
			y = 0.8;
			w = 0.15;
			h = 0.05;
		};

		class EMSRequest : life_RscButtonMenu
		{
			idc = 3022;
			x = 0.4 * safezoneW + safezoneX;
			y = 0.615 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.0587 * safezoneH;
			tooltip = "Medic"; //--- ToDo: Localize;
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.4};
			onButtonClick = "[] call TON_fnc_cell_emsrequest";
		};

	};
};