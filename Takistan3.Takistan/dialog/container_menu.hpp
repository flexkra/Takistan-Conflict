class container_menu {
	idc= 5400;
	name="container_menu";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad ="[] call life_fnc_containerMenu;";
	
	class xy_container_menubackground: Life_RscBackground
	{
		idc = -1;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.134062 * safezoneW;
		h = 0.55 * safezoneH;
	};
	class xy_container_sidemenubg: Life_RscBackground
	{
		idc = -1;
		x = 0.572187 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.118594 * safezoneW;
		h = 0.165 * safezoneH;
	};
	class xy_container_inv: Life_RscListBox
	{
		idc = 5401;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.236 * safezoneH + safezoneY;
		w = 0.12375 * safezoneW;
		h = 0.143 * safezoneH;
	};
	class xy_container_playerinv: Life_RscListBox
	{
		idc = 5402;
		x = 0.577344 * safezoneW + safezoneX;
		y = 0.236 * safezoneH + safezoneY;
		w = 0.108281 * safezoneW;
		h = 0.11 * safezoneH;
	};
	class xy_container_takebutton: Life_RscButton
	{
		idc = 5403;
		text = "$STR_Container_Take";
		x = 0.577344 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.0515625 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "[] call life_fnc_containerTake;";
	};
	class xy_container_storebutton: Life_RscButton
	{
		idc = 5404;
		text = "$STR_Container_Store";
		x = 0.634062 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.0515625 * safezoneW;
		h = 0.022 * safezoneH;
		onButtonClick = "[] call life_fnc_containerStore;";
	};
	class xy_container_gearpic: life_RscPicture
	{
		idc = 5405;
		text = "";
		x = 0.448438 * safezoneW + safezoneX;
		y = 0.423 * safezoneH + safezoneY;
		w = 0.113437 * safezoneW;
		h = 0.341 * safezoneH;
	};
};