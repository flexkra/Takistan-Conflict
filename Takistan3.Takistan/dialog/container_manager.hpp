class container_manager {
	idd= 54500;
	name="container_menu_locker";
	movingEnable = true;
	enableSimulation = true;
	onLoad ="[] spawn life_fnc_containerManagerMenu;";
	objects[] = {};
	controls[]=
	{
		xy_container_manager_background,
		xy_container_manager_header,
		xy_container_manager_buybutton,
		xy_container_manager_sellbutton,
		xy_container_manager_addDurationTime,
		xy_container_manager_addDurationPlusButton,
		xy_container_manager_addDurationMinus,
		xy_container_manager_addDurationAccept,
		xy_container_manager_addDurationTextHeader,
		xy_container_manager_addDurationTextCosts,
		xy_container_manager_upgradeButton,
		xy_container_manager_upgradeTextHeader,
		xy_container_manager_upgradeTextCosts,
		xy_container_manager_durationInfoText,
		xy_container_manager_lockerInfoText,
		xy_container_manager_sizeInfoText,
		xy_container_manager_nextUpgradeInfoText
	};

	class xy_container_manager_background: Life_RscBackground
	{
		idc = -1;
		x = 0.407187 * safezoneW + safezoneX;
		y = 0.335 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.231 * safezoneH;
		colorBackground[] = {0,0,0,0.2};
	};
	class xy_container_manager_header: Life_RscText
	{
		idc = -1;
		text = "$STR_Container_Manager"; //--- ToDo: Localize;
		x = 0.407187 * safezoneW + safezoneX;
		y = 0.335 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0.9922,0.8902,0.0235,1};
	};
	class xy_container_manager_buybutton: Life_RscButtonMenu
	{
		idc = 5451;
		text = "$STR_Global_Buy"; //--- ToDo: Localize;
		x = 0.4175 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "[] call life_fnc_buyContainer;";
	};
	class xy_container_manager_sellbutton: Life_RscButtonMenu
	{
		idc = 5452;
		text = "$STR_Global_Sell"; //--- ToDo: Localize;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "[] call life_fnc_sellContainer;";
	};
	class xy_container_manager_addDurationTime: Life_RscText
	{
		idc = 5453;
		text = "1"; //--- ToDo: Localize;
		x = 0.587656 * safezoneW + safezoneX;
		y = 0.412 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_addDurationPlusButton: Life_RscButtonMenu
	{
		idc = 5454;
		text = "+"; //--- ToDo: Localize;
		x = 0.613437 * safezoneW + safezoneX;
		y = 0.412 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "{_t = ctrlText 5453; _t = parseNumber _t; _t = format[""%1"",_t+1]; ctrlSetText[5453,_t];}"
	};
	class xy_container_manager_addDurationMinus: Life_RscButtonMenu
	{
		idc = 5455;
		text = "-"; //--- ToDo: Localize;
		x = 0.556719 * safezoneW + safezoneX;
		y = 0.412 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "{_t = ctrlText 5453; _t = parseNumber _t; _t = format[""%1"",_t-1]; ctrlSetText[5453,_t];}"
	};
	class xy_container_manager_addDurationAccept: Life_RscButtonMenu
	{
		idc = -1;
		text = "$STR_Container_Renew"; //--- ToDo: Localize;
		x = 0.556719 * safezoneW + safezoneX;
		y = 0.445 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "[] call life_fnc_buyContainerDuration;";
	};
	class xy_container_manager_addDurationTextHeader: Life_RscText
	{
		idc = 5456;
		text = "$STR_Container_RenewQM"; //--- ToDo: Localize;
		x = 0.556719 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.0515625 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_addDurationTextCosts: Life_RscText
	{
		idc = 5457;
		text = ""; //--- ToDo: Localize;
		x = 0.556718 * safezoneW + safezoneX;
		y = 0.379 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_upgradeButton: Life_RscButtonMenu
	{
		idc = 5458;
		text = "$STR_Container_Upgrade"; //--- ToDo: Localize;
		x = 0.556719 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "[] call life_fnc_containerUpgrade;";
	};
	class xy_container_manager_upgradeTextHeader: Life_RscText
	{
		idc = 5459;
		text = "$STR_Container_UpgradeQM"; //--- ToDo: Localize;
		x = 0.556719 * safezoneW + safezoneX;
		y = 0.478 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_upgradeTextCosts: Life_RscText
	{
		idc = 5460;
		text = ""; //--- ToDo: Localize;
		x = 0.556719 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0670312 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_durationInfoText: Life_RscText
	{
		idc = 5461;
		text = ""; //--- ToDo: Localize;
		x = 0.412344 * safezoneW + safezoneX;
		y = 0.401 * safezoneH + safezoneY;
		w = 0.128906 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_lockerInfoText: Life_RscText
	{
		idc = 5462;
		text = ""; //--- ToDo: Localize;
		x = 0.412344 * safezoneW + safezoneX;
		y = 0.368 * safezoneH + safezoneY;
		w = 0.128906 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_sizeInfoText: Life_RscText
	{
		idc = 5463;
		text = ""; //--- ToDo: Localize;
		x = 0.412344 * safezoneW + safezoneX;
		y = 0.445 * safezoneH + safezoneY;
		w = 0.128906 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class xy_container_manager_nextUpgradeInfoText: Life_RscText
	{
		idc = 5464;
		text = ""; //--- ToDo: Localize;
		x = 0.412344 * safezoneW + safezoneX;
		y = 0.467 * safezoneH + safezoneY;
		w = 0.128906 * safezoneW;
		h = 0.022 * safezoneH;
	};
};