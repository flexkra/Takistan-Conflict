
#define INFINITE 1e+1000
#define IDC_LIFE_BAR_FOOD 2200
#define IDC_LIFE_BAR_WATER 2201
#define IDC_LIFE_BAR_HEALTH 2202
#define IDC_LIFE_BAR_EXP 2204
#define IDC_LIFE_BAR_BLOOD 2206
#define IDC_LIFE_MAIN_DISP 2203
#define IDC_LIFE_PICTURE_FOOD 1200
#define IDC_LIFE_PICTURE_WATER 1201
#define IDC_LIFE_PICTURE_HEALTH 1202
#define IDC_LIFE_PICTURE_LEVEL 1203
#define IDC_LIFE_FOOD_TEXT 1000
#define IDC_LIFE_WATER_TEXT 1001
#define IDC_LIFE_HEALTH_TEXT 1002
#define IDC_LIFE_EXP_TEXT 1003
#define IDC_LIFE_LEVEL_TEXT 1004
#define IDC_LIFE_BLOOD_TEXT 1006
#define IDC_LIFE_LEVEL_TEXT2 1005
/*
        Name: Dillon "Itsyuka" Modine-Thuen
        File: ui.hpp
*/

class playerHUD {
        idd = -1;
        duration = INFINITE;
        movingEnable = 0;
        fadein = 0;
        fadeout = 0;
        name = "playerHUD";
        onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
        objects[] = {};
        controls[] = {
             //    LIFE_UI_BACK,
                LIFE_UI_BACK,
             //    LIFE_BAR_FOOD,
             //    LIFE_BAR_WATER,
               //  LIFE_BAR_HEALTH,
                LIFE_BAR_EXP,
                LIFE_BAR_BLOOD,
                LIFE_PICTURE_FOOD,
                LIFE_PICTURE_WATER,
                LIFE_PICTURE_HEALTH,
                LIFE_PICTURE_LEVEL,
                LIFE_FOOD_TEXT,
                LIFE_WATER_TEXT,
                LIFE_HEALTH_TEXT,
                LIFE_BLOOD_TEXT,
              //   LIFE_EXP_TEXT,
                LIFE_LEVEL_TEXT,
              //  LIFE_LEVEL_TEXT2

        };

        /* Background *//*
        class LIFE_UI_BACK: Life_RscBackground
        {
                idc = IDD_LIFE_MAIN_DISP;
                colorBackground[] = {0,0,0,0.5};
                x = 0.917656 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0825 * safezoneW;
                h = 0.11 * safezoneH;
        };*/

                class LIFE_UI_BACK: Life_RscBackground
        {
                idc = IDD_LIFE_MAIN_DISP;
                colorBackground[] = {0,0,0,0.5};
                x = safezoneX;
                y = safezoneY;
                w = 0.16 * safezoneW;
                h = 0.03 * safezoneH;
        };

        /* Progress Bars */
        /*
        class LIFE_BAR_FOOD: Life_RscProgress
        {
                idc = IDC_LIFE_BAR_FOOD;
                x = 0.938281 * safezoneW + safezoneX;
                y = 0.83 * safezoneH + safezoneY;
                w = 0.061875 * safezoneW;
                h = 0.022 * safezoneH;
        };
        class LIFE_BAR_WATER: Life_RscProgress
        {
                idc = IDC_LIFE_BAR_WATER;
                x = 0.938281 * safezoneW + safezoneX;
                y = 0.863 * safezoneH + safezoneY;
                w = 0.061875 * safezoneW;
                h = 0.022 * safezoneH;
        };
        class LIFE_BAR_HEALTH: Life_RscProgress
        {
                idc = 2202;
                x = 0.938281 * safezoneW + safezoneX;
                y = 0.896 * safezoneH + safezoneY;
                w = 0.061875 * safezoneW;
                h = 0.022 * safezoneH;
        };
        */
         class LIFE_BAR_EXP: Life_RscProgress
        {
                idc = IDC_LIFE_BAR_EXP;
                x = safezoneX;
                y = 0.03 * safezoneH + safezoneY;
                w = 0.16 * safezoneW;
                h = 0.016 * safezoneH;
        };
        class LIFE_BAR_BLOOD: Life_RscProgress
        {
                idc = IDC_LIFE_BAR_BLOOD;
                colorBar[] = {0.8352941176470588,0.0941176470588235,0.0941176470588235,1};
                x = safezoneX;
                y = 0.045 * safezoneH + safezoneY;
                w = 0.16 * safezoneW;
                h = 0.016 * safezoneH;
        };


        /* Text */

        class LIFE_FOOD_TEXT: Life_RscText
        {
                idc = IDC_LIFE_FOOD_TEXT;
                text = "";
                colorText[] = {0.7764705882352941,0.7764705882352941,0.7764705882352941,1};
                x = 0.048 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.020625 * safezoneW;
                h = 0.011 * safezoneH;
        };
        class LIFE_WATER_TEXT: Life_RscText
        {
                idc = IDC_LIFE_WATER_TEXT;
                text = "";
                colorText[] = {0.4,0.6980392156862745,1,1};
                x = 0.088 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.020625 * safezoneW;
                h = 0.011 * safezoneH;
        };
        class LIFE_HEALTH_TEXT: Life_RscText
        {
                idc = IDC_LIFE_HEALTH_TEXT;
                text = "";
                colorText[] = {0.8352941176470588,0.0941176470588235,0.0941176470588235,1};
                x = 0.128 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.020625 * safezoneW;
                h = 0.011 * safezoneH;
        };
/*       class LIFE_EXP_TEXT: Life_RscText
        {
                idc = IDC_LIFE_EXP_TEXT;
                text = "";
                x = 0.5 * safezoneW + safezoneX;
                y = 0.98 * safezoneH + safezoneY;
                w = 0.020625 * safezoneW;
                h = 0.011 * safezoneH;
        };
  */
       class LIFE_LEVEL_TEXT: Life_RscText
        {
                idc = IDC_LIFE_LEVEL_TEXT;
                text = "";
                colorText[] = {1,0.67,0,1};
                x = 0.013 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.020625 * safezoneW;
                h = 0.011 * safezoneH;
        };
        class LIFE_BLOOD_TEXT: Life_RscText
        {
                idc = IDC_LIFE_BLOOD_TEXT;
                text = "";
                colorText[] = {0.8352941176470588,0.0941176470588235,0.0941176470588235,1};
                sizeEx = 0.040;
                x = 0.035 * safezoneW + safezoneX;
                y = 0.063 * safezoneH + safezoneY;
                w = 0.1 * safezoneW;
                h = 0.02 * safezoneH;
        };
/*
    class LIFE_LEVEL_TEXT2: Life_RscText
        {
                idc = IDC_LIFE_LEVEL_TEXT2;
                text = "";
                x = 0.725 * safezoneW + safezoneX;
                y = 0.98 * safezoneH + safezoneY;
                w = 0.020625 * safezoneW;
                h = 0.011 * safezoneH;
        };
        */

        /* Icons */
        class LIFE_PICTURE_FOOD: life_RscPicture
        {
                idc = IDC_LIFE_PICTURE_FOOD;
                text = "icons\food.paa";
                x = 0.04 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.03; h = 0.04;
        };
        class LIFE_PICTURE_WATER: life_RscPicture
        {
                idc = IDC_LIFE_PICTURE_WATER;
                text = "icons\water.paa";
                x = 0.08 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.03; h = 0.04;
        };
        class LIFE_PICTURE_HEALTH: life_RscPicture
        {
                idc = IDC_LIFE_PICTURE_HEALTH;
                text = "icons\health.paa";
                x = 0.12 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.03; h = 0.04;
        };
                class LIFE_PICTURE_LEVEL: life_RscPicture
        {
                idc = IDC_LIFE_PICTURE_LEVEL;
                text = "icons\level.paa";
                x = 0.001 * safezoneW + safezoneX;
                y = 0.005 * safezoneH + safezoneY;
                w = 0.03; h = 0.04;
        };
};