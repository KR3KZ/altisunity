#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_HUD_BACKGROUND 0x80
#define ST_MULTI          0x10
#define ST_NO_RECT        0x200

/*
    File: iPhone_X.hpp
    Author: Neyzhak

    Description:
    iPhone_X display

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/

class iPhone_X
{
	idd = 97000;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] spawn unity_fnc_iPhone_X_settings;";

	class ControlsBackground
	{
		class iPhone_X_background: Life_RscPicture
		{
			idc = 97002;
			x = safeZoneX + safeZoneW * 0.5625;
			y = safeZoneY + safeZoneH * 0.21701389;
			w = safeZoneW * 0.41210938;
			h = safeZoneH * 0.72743056;
			text = "";
		};

		/*class iPhone_X_snowflake_01: Life_RscPicture
		{
			idc = 99001;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_snowflake.paa";
			show = false;
		};*/

		class iPhone_X_bottom: Life_RscPicture
		{
			idc = 97004;
			x = safeZoneX + safeZoneW * 0.5625;
			y = safeZoneY + safeZoneH * 0.21501389;
			w = safeZoneW * 0.41210938;
			h = safeZoneH * 0.72743056;
			text = "";
			show = false;
		};

		class iPhone_X_shadow: Life_RscPicture
		{
			idc = 97114;
			x = safeZoneX + safeZoneW * 0.5625;
			y = safeZoneY + safeZoneH * 0.21701389;
			w = safeZoneW * 0.41210938;
			h = safeZoneH * 0.72743056;
			text = "";
			colorText[] = {0,0,0,1};
			show = false;
		};

		class iPhone_X_shadow_home: Life_RscPicture
		{
			idc = 97115;
			x = safeZoneX + safeZoneW * 0.5625;
			y = safeZoneY + safeZoneH * 0.21701389;
			w = safeZoneW * 0.41210938;
			h = safeZoneH * 0.72743056;
			text = "";
			colorText[] = {0,0,0,0.5};
			show = false;
		};
	};

	class Controls
	{

		class iPhone_X_icon_appPhone: Life_RscPicture
		{
			idc = 97006;
			x = safeZoneX + safeZoneW * 0.708203126;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_phone.paa";
			show = false;
		};

		class iPhone_X_icon_appContact: Life_RscPicture
		{
			idc = 97007;
			x = safeZoneX + safeZoneW * 0.740625002;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_contact.paa";
			show = false;
		};

		class iPhone_X_icon_appSMS: Life_RscPicture
		{
			idc = 97008;
			x = safeZoneX + safeZoneW * 0.773046878;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_sms.paa";
			show = false;
		};

		class iPhone_X_icon_appSettings: Life_RscPicture
		{
			idc = 97009;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_settings.paa";
			show = false;
		};

		class iPhone_X_icon_appGPS: Life_RscPicture
		{
			idc = 97010;
			x = safeZoneX + safeZoneW * 0.708203126;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_GPS.paa";
			show = false;
		};

		class iPhone_X_icon_appUber: Life_RscPicture
		{
			idc = 97011;
			x = safeZoneX + safeZoneW * 0.740625002;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_uber.paa";
			show = false;
		};


		class iPhone_X_icon_appCamera: Life_RscPicture
		{
			idc = 97012;
			x = safeZoneX + safeZoneW * 0.773046878;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_camera.paa";
			show = false;
		};


		class iPhone_X_icon_appIPAD: Life_RscPicture
		{
			idc = 97017;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_ipad.paa";
			show = false;
		};
        /*
		class iPhone_X_icon_appPMC: Life_RscPicture
		{
			idc = 97013;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_settings.paa";
			show = false;
		};
        */
		class iPhone_X_icon_appEvent: Life_RscPicture
		{
			idc = 97016;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.40541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\app_event.paa";
			show = false;
		};

		class iPhone_X_icon_appSwitchboard: Life_RscPicture
		{
			idc = 97014;
			x = safeZoneX + safeZoneW * 0.708203126;
			y = safeZoneY + safeZoneH * 0.40541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			text = "unity_iPhone_X\iPhone_X_icon_emergency.paa";
			show = false;
		};

		class iPhone_X_button_appPhone: Life_RscButtonMenu
		{
			idc = 97106;
			x = safeZoneX + safeZoneW * 0.708203126;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appPhone;";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_button_appContactsList: Life_RscButtonMenu
		{
			idc = 97107;
			x = safeZoneX + safeZoneW * 0.740625002;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appContactsList;";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_button_appSMSList: Life_RscButtonMenu
		{
			idc = 97108;
			x = safeZoneX + safeZoneW * 0.773046878;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appSMSList;";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_button_appSettings: Life_RscButtonMenu
		{
			idc = 97109;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.79708056;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appSettings;";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_button_appGPS: Life_RscButtonMenu
		{
			idc = 97110;
			x = safeZoneX + safeZoneW * 0.708203126;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "closeDialog 0; [] call mav_gps_fnc_initNavigation;";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_button_appUber: Life_RscButtonMenu
		{
			idc = 97111;
			x = safeZoneX + safeZoneW * 0.740625002;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "closeDialog 0; createDialog ""RscDisplayTaxiMenu"";";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_button_appCamera: Life_RscButtonMenu
		{
			idc = 97112;
			x = safeZoneX + safeZoneW * 0.773046878;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appCamera";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};


		class iPhone_X_button_appIpad: Life_RscButtonMenu
		{
			idc = 97117;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "closeDialog 0; createDialog ""playerSettings"";";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		/*class iPhone_X_button_appPMC: Life_RscButtonMenu
		{
			idc = 97113;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.34541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appPMC";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};
        */
		class iPhone_X_button_appEvent: Life_RscButtonMenu
		{
            idc = 97118;
			x = safeZoneX + safeZoneW * 0.805468754;
			y = safeZoneY + safeZoneH * 0.40541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appEvent";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_button_appSwitchboard: Life_RscButtonMenu
		{
			idc = 97015;
			x = safeZoneX + safeZoneW * 0.708203126;
			y = safeZoneY + safeZoneH * 0.40541667;
			w = safeZoneW * 0.02246094;
			h = safeZoneH * 0.03993056;
			action = "[] spawn unity_fnc_iPhone_X_appSwitchboard";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		class iPhone_X_clock_home: Life_RscText
		{
			idc = 97500;
			style = ST_CENTER;
			x = safeZoneX + safeZoneW * 0.70448282;
			y = safeZoneY + safeZoneH * 0.31725;
			w = safeZoneW * 0.02872032;
			h = safeZoneH * 0.01081667;
			text = "";
			sizeEx = 0.012 * safezoneW;
			colorBackground[] = {0,0,0,0};
			shadow = 0;
			show = false;
		};

		class iPhone_X_clock: Life_RscText
		{
			idc = 97501;
			style = ST_CENTER;
			x = safeZoneX + safeZoneW * 0.72088282;
			y = safeZoneY + safeZoneH * 0.37;
			w = safeZoneW * 0.09532032;
			h = safeZoneH * 0.04541667;
			text = "";
			sizeEx = 0.05 * safezoneW;
			colorBackground[] = {0,0,0,0};
			shadow = 0;
			show = false;
		};

		class iPhone_X_phoneNumberActive: Life_RscText
		{
			idc = 97800;
			style = ST_CENTER;
			x = safeZoneX + safeZoneW * 0.72088282;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.09532032;
			h = safeZoneH * 0.04541667;
			text = "Aucune SIM";
			sizeEx = 0.02 * safezoneW;
			colorBackground[] = {0,0,0,0};
			shadow = 0;
			show = false;
		};

		class iPhone_X_faceIDGroup: Life_RscControlsGroup
		{
			idc = 97116;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{
				class iPhone_X_faceID: Life_RscPicture
				{
					idc = 97216;
					x = safeZoneX + safeZoneW * 0.69854219;
					y = safeZoneY + safeZoneH * 0.30690278;
					w = safeZoneW * 0.13914844;
					h = safeZoneH * 0.49570834;
					text = "";
				};

				class iPhone_X_text_faceID: Life_RscStructuredText
				{
					idc = 97217;
					x = safeZoneX + safeZoneW * 0.69854219;
					y = safeZoneY + safeZoneH * 0.81302796;
					w = safeZoneW * 0.13914844;
					h = safeZoneH * 0.03688316;
					text = "";
					colorBackground[] = {0,0,0,0};
				};

				class iPhone_X_separator_faceID: Life_RscText
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.69854219;
					y = safeZoneY + safeZoneH * 0.80258056;
					w = safeZoneW * 0.13914844;
					h = safeZoneH * 0.0025;
					colorBackground[] = {1,1,1,1};
				};

				class iPhone_X_base_faceID: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.5625;
					y = safeZoneY + safeZoneH * 0.21701389;
					w = safeZoneW * 0.41210938;
					h = safeZoneH * 0.72743056;
					text = "unity_iPhone_X\iPhone_X_base.paa";
				};
			};
		};

		class iPhone_X_appCameraGroup: Life_RscControlsGroup
		{
			idc = 97502;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{
				class iPhone_X_appCamera: Life_RscPicture
				{
					idc = 97602;
					x = safeZoneX + safeZoneW * 0.61524219;
					y = safeZoneY + safeZoneH * 0.4569278;
					w = safeZoneW * 0.30720834;
					h = safeZoneH * 0.24834844;
					text = "";
				};

				class iPhone_X_icon_reverseCamera: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.63090625;
					y = safeZoneY + safeZoneH * 0.56302778;
					w = safeZoneW * 0.01632032;
					h = safeZoneH * 0.03661112;
					text = "unity_iPhone_X\iPhone_X_icon_reverseCamera.paa";
				};

				class iPhone_X_button_reverseCamera: Life_RscButtonMenu
				{
					idc = 97603;
					x = safeZoneX + safeZoneW * 0.63090625;
					y = safeZoneY + safeZoneH * 0.56302778;
					w = safeZoneW * 0.01632032;
					h = safeZoneH * 0.03661112;
					action = "[] spawn unity_fnc_iPhone_X_appFrontCamera;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_base_appCamera: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.5625;
					y = safeZoneY + safeZoneH * 0.21701389;
					w = safeZoneW * 0.41210938;
					h = safeZoneH * 0.72743056;
					text = "unity_iPhone_X\iPhone_X_base.paa";
					angle = -90;
				};

				class iPhone_X_icon_home_appCamera: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.61590625;
					y = safeZoneY + safeZoneH * 0.48002778;
					w = safeZoneW * 0.015;
					h = safeZoneH * 0.025;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
					angle = -90;
				};

				class iPhone_X_button_home_appCamera: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.61590625;
					y = safeZoneY + safeZoneH * 0.48002778;
					w = safeZoneW * 0.015;
					h = safeZoneH * 0.025;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appPhoneGroup: Life_RscControlsGroup
		{
			idc = 97503;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{
				class iPhone_X_phoneNumber: Life_RscEdit
				{
					idc = 97613;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.71898438;
					y = safeZoneY + safeZoneH * 0.37263889;
					w = safeZoneW * 0.10114063;
					h = safeZoneH * 0.03;
					text = "Numéro";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 10;
					onMouseButtonClick = "_text = ctrlText 97613; if (_text isEqualTo ""Numéro"") then {ctrlSetText [97613,""""]};";
				};

				class iPhone_X_button_back: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.8225;
					y = safeZoneY + safeZoneH * 0.37563889;
					w = safeZoneW * 0.01;
					h = safeZoneH * 0.02;
					action = "ctrlSetText [97613,''];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appAddContactAppPhone: Life_RscButtonMenu
				{
					idc = 97656;
					x = safeZoneX + safeZoneW * 0.7065;
					y = safeZoneY + safeZoneH * 0.37563889;
					w = safeZoneW * 0.01;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appAddContact";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_01: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.46141667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = ((ctrlText _display) + '1'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_02: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.46141667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '2'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_03: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.46141667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '3'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_04: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '4'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_05: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '5'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_06: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '6'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_07: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.59241667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '7'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_08: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.59241667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '8'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_09: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.59241667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '9'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_00: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.65861667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '0'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_star: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.65861667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '*'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_number_diese: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.65861667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_display = ((findDisplay 97000) displayCtrl 97613); if ((ctrlText _display) == 'Numéro') then {ctrlSetText [97613,''];}; _num = (ctrlText _display + '#'); _display ctrlSetText format['%1',_num];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_phoneCall: Life_RscButtonMenu
				{
					idc = 97660;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.72471667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_phoneNumberContact = ctrlText 97613; [_phoneNumberContact] spawn unity_fnc_iPhone_X_sendCall;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appContactsListAppPhone: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.748625002;
					y = safeZoneY + safeZoneH * 0.81451667;
					w = safeZoneW * 0.0125;
					h = safeZoneH * 0.0225;
					action = "[] spawn unity_fnc_iPhone_X_appContactsList;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appPhone: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appPhone: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appContactsListGroup: Life_RscControlsGroup
		{
			idc = 97504;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_button_addContact: Life_RscButtonMenu
				{
					idc = 97654;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.33841667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appAddContact;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appContactsList: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appContactsList: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appContactsListGroup_2: Life_RscControlsGroup
				{
					idc = 97514;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.4795;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appAddContactGroup: Life_RscControlsGroup
		{
			idc = 97505;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameContact: Life_RscEdit
				{
					idc = 97605;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.43013889;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "Identité";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 19;
					onMouseButtonClick = "_text = ctrlText 97605; if (_text isEqualTo ""Identité"") then {ctrlSetText [97605,""""]};";
				};

				class iPhone_X_phoneNumberContact: Life_RscEdit
				{
					idc = 97606;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.55113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "Numéro";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 10;
					onMouseButtonClick = "_text = ctrlText 97606; if (_text isEqualTo ""Numéro"") then {ctrlSetText [97606,""""]};";
				};

				class iPhone_X_noteContact: Life_RscEdit
				{
					idc = 97658;
					style = ST_LEFT + ST_MULTI;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.58;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.066;
					text = "Note";
					sizeEx = 0.015 * safezoneW;
					lineSpacing = 1;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 65;
					onMouseButtonClick = "_text = ctrlText 97658; if (_text isEqualTo ""Note"") then {ctrlSetText [97658,""""]};";
				};

				class iPhone_X_button_okContact: Life_RscButtonMenu
				{
					idc = 97627;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_addContact";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appContactsListAppAddContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70305002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.05824219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appContactsList";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appPhoneAppAddContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.776625002;
					y = safeZoneY + safeZoneH * 0.81451667;
					w = safeZoneW * 0.0125;
					h = safeZoneH * 0.0225;
					action = "[] spawn unity_fnc_iPhone_X_appPhone;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appAddContact: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appAddContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSMSListGroup: Life_RscControlsGroup
		{
			idc = 97506;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_button_addConversation: Life_RscButtonMenu
				{
					idc = 97655;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.33841667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appAddConversation;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appSMSList: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSMSList: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appSMSListGroup_2: Life_RscControlsGroup
				{
					idc = 97516;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.4795;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appAddConversationGroup: Life_RscControlsGroup
		{
			idc = 97507;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameConversation: Life_RscEdit
				{
					idc = 97607;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.43013889;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "Identité";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 19;
					onMouseButtonClick = "_text = ctrlText 97607; if (_text isEqualTo ""Identité"") then {ctrlSetText [97607,""""]};";
				};

				class iPhone_X_phoneNumberConversation: Life_RscEdit
				{
					idc = 97608;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.55113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "Numéro";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 10;
					onMouseButtonClick = "_text = ctrlText 97608; if (_text isEqualTo ""Numéro"") then {ctrlSetText [97608,""""]};";
				};

				class iPhone_X_button_okConversation: Life_RscButtonMenu
				{
					idc = 97629;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_addConversation";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appSMSListAppAddConversation: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70305002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.05724219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appSMSList";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appAddConversation: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appAddConversation: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSettingsGroup: Life_RscControlsGroup
		{
			idc = 97508;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_button_wallpaper: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37263889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					action = "[] spawn unity_fnc_iPhone_X_appWallpaper";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_sounds: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.40763889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					action = "[] spawn unity_fnc_iPhone_X_appSound";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_SIM: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.44263889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					action = "[] spawn unity_fnc_iPhone_X_appSIM";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appSettings: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSettings: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appContactGroup: Life_RscControlsGroup
		{
			idc = 97509;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameContactAppContact: Life_RscText
				{
					idc = 97609;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.43013889;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_phoneNumberContactAppContact: Life_RscText
				{
					idc = 97610;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.55113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_noteContactAppContact: Life_RscText
				{
					idc = 97659;
					style = ST_LEFT + ST_MULTI + ST_NO_RECT;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.58;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.066;
					text = "";
					sizeEx = 0.015 * safezoneW;
					lineSpacing = 1;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};
                class DeleteContact
                {
                    type = 1;
                    idc = -1;
                    x = safeZoneX + safeZoneW * 0.733125;
                    y = safeZoneY + safeZoneH * 0.66333334;
                    w = safeZoneW * 0.070625;
                    h = safeZoneH * 0.03;
                    style = 0+2;
                    text = "SUPPRIMER";
                    borderSize = 0;
                    colorBackground[] = {0.6,0,0,1};
                    colorBackgroundActive[] = {0.6,0.302,0,1};
                    colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
                    colorBorder[] = {0,0,0,0};
                    colorDisabled[] = {0,0,0,0};
                    colorFocused[] = {0,0,0,0};
                    colorShadow[] = {0,0,0,0};
                    colorText[] = {0,0,0,1};
                    font = "PuristaMedium";
                    offsetPressedX = 0;
                    offsetPressedY = 0;
                    offsetX = 0;
                    offsetY = 0;
                    action = "[] spawn unity_fnc_iPhone_X_removeContact";
                    sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
                    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
                    soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
                    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
                    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

                };
				class iPhone_X_button_SMSAppContact: Life_RscButtonMenu
				{
					idc = 97657;
					x = safeZoneX + safeZoneW * 0.745;
					y = safeZoneY + safeZoneH * 0.47141667;
					w = safeZoneW * 0.02;
					h = safeZoneH * 0.03;
					action = "_nameContact = ctrlText 97609; _phoneNumberContact = ctrlText 97610; [_nameContact, _phoneNumberContact] spawn unity_fnc_iPhone_X_appSMSFromContact";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_callAppContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.7775;
					y = safeZoneY + safeZoneH * 0.47141667;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.03;
					action = "_phoneNumberContact = ctrlText 97610; [_phoneNumberContact] spawn unity_fnc_iPhone_X_sendCall;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_editContactAppContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appContactsListAppContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70305002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.03824219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appContactsList";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appPhoneAppContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.776625002;
					y = safeZoneY + safeZoneH * 0.81451667;
					w = safeZoneW * 0.0125;
					h = safeZoneH * 0.0225;
					action = "[] spawn unity_fnc_iPhone_X_appPhone;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appContact: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appContact: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSMSGroup: Life_RscControlsGroup
		{
			idc = 97510;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameContactAppSMS: Life_RscText
				{
					idc = 97620;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.33741667;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_SMS: Life_RscEdit
				{
					idc = 97621;
					style = ST_LEFT;
					x = safeZoneX + safeZoneW * 0.73;
					y = safeZoneY + safeZoneH * 0.8175;
					w = safeZoneW * 0.084;
					h = safeZoneH * 0.02;
					text = "Message...";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 1500;
					onMouseButtonClick = "_text = ctrlText 97621; if (_text isEqualTo ""Message..."") then {ctrlSetText [97621,""""]};";
					onSetFocus = "_text = ctrlText 97621; if (_text isEqualTo ""Message..."") then {ctrlSetText [97621,""""]};";
					onKeyUp="if (_this select 1 == 28 || _this select 1 == 156) then { _message = ctrlText 97621; [_message] spawn unity_fnc_iPhone_X_sendSMS; _sms = ((findDisplay 97000) displayCtrl 97621); _sms ctrlSetText ""Message...""};";
				};

				class iPhone_X_button_sendSMS: Life_RscButtonMenu
				{
					idc = 97622;
					x = safeZoneX + safeZoneW * 0.8178;
					y = safeZoneY + safeZoneH * 0.8155;
					w = safeZoneW * 0.0115;
					h = safeZoneH * 0.0235;
					action = "_message = ctrlText 97621; [_message] spawn unity_fnc_iPhone_X_sendSMS; _sms = ((findDisplay 97000) displayCtrl 97621); _sms ctrlSetText ""Message...""";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_smiley: Life_RscButtonMenu
				{
					idc = 97623;
					x = safeZoneX + safeZoneW * 0.708;
					y = safeZoneY + safeZoneH * 0.8145;
					w = safeZoneW * 0.018;
					h = safeZoneH * 0.027;
					action = "";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_appSMSListAppSMS: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70305002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01024219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appSMSList";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appSMS: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSMS: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appSMSGroup_2: Life_RscControlsGroup
				{
					idc = 97511;
					x = safeZoneX + safeZoneW * 0.703; //0.702
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.134;
					h = safeZoneH * 0.435;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appWallpaperGroup: Life_RscControlsGroup
		{
			idc = 97512;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_picture_wallpaper_01: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.664;
					y = safeZoneY + safeZoneH * 0.35063889;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_1.paa";
				};

				class iPhone_X_picture_wallpaper_02: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.7075;
					y = safeZoneY + safeZoneH * 0.35063889;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_2.paa";
				};

				class iPhone_X_picture_wallpaper_03: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.751;
					y = safeZoneY + safeZoneH * 0.35063889;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_3.paa";
				};

				class iPhone_X_picture_wallpaper_04: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.664;
					y = safeZoneY + safeZoneH * 0.502;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_4.paa";
				};

				class iPhone_X_picture_wallpaper_05: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.7075;
					y = safeZoneY + safeZoneH * 0.502;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_5.paa";
				};

				class iPhone_X_picture_wallpaper_06: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.751;
					y = safeZoneY + safeZoneH * 0.502;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_6.paa";
				};

				class iPhone_X_picture_wallpaper_07: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.664;
					y = safeZoneY + safeZoneH * 0.65813889;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_7.paa";
				};

				class iPhone_X_picture_wallpaper_08: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.7075;
					y = safeZoneY + safeZoneH * 0.65813889;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_8.paa";
				};

				class iPhone_X_picture_wallpaper_09: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.751;
					y = safeZoneY + safeZoneH * 0.65813889;
					w = safeZoneW * 0.1225;
					h = safeZoneH * 0.197;
					text = "unity_iPhone_X\iPhone_X_background_9.paa";
				};

				class iPhone_X_button_wallpaper_01: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.705;
					y = safeZoneY + safeZoneH * 0.375;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [1]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_02: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.74825;
					y = safeZoneY + safeZoneH * 0.375;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [2]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_03: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.7915;
					y = safeZoneY + safeZoneH * 0.375;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [3]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_04: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.705;
					y = safeZoneY + safeZoneH * 0.5275;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [4]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_05: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.74825;
					y = safeZoneY + safeZoneH * 0.5275;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [5]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_06: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.7915;
					y = safeZoneY + safeZoneH * 0.5275;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [6]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_07: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.705;
					y = safeZoneY + safeZoneH * 0.68;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [7]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_08: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.74825;
					y = safeZoneY + safeZoneH * 0.68;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [8]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_wallpaper_09: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.7915;
					y = safeZoneY + safeZoneH * 0.68;
					w = safeZoneW * 0.041;
					h = safeZoneH * 0.148;
					action = "[player, [9]] remoteExec [""unity_srv_fnc_iphone_x_savewallpaper"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appWallpaper: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appWallpaper: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSoundGroup: Life_RscControlsGroup
		{
			idc = 97513;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_text_sound_1: Life_RscText
				{
					idc = 97714;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.40163889;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					text = "Sonnerie 1";
					sizeEx = 0.0175 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_text_sound_2: Life_RscText
				{
					idc = 97715;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.43663889;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					text = "Sonnerie 2";
					sizeEx = 0.0175 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_text_sound_3: Life_RscText
				{
					idc = 97716;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.4716;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					text = "Sonnerie 3";
					sizeEx = 0.0175 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_sound_1: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.40163889;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					action = "[player, [1]] remoteExec [""unity_srv_fnc_iphone_x_savesound"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_sound_2: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.43663889;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					action = "[player, [2]] remoteExec [""unity_srv_fnc_iphone_x_savesound"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_sound_3: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.4716;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					action = "[player, [3]] remoteExec [""unity_srv_fnc_iphone_x_savesound"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_silent: Life_RscPicture
				{
					idc = 97717;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.5086;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.025;
					text = "";
				};

				class iPhone_X_text_silent: Life_RscText
				{
					idc = 97718;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.5066;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					text = "Silencieux";
					sizeEx = 0.0175 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_silent: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.719;
					y = safeZoneY + safeZoneH * 0.5066;
					w = safeZoneW * 0.118;
					h = safeZoneH * 0.03;
					action = "[] spawn unity_fnc_iPhone_X_silent";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appSound: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSound: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSIMGroup: Life_RscControlsGroup
		{
			idc = 97515;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_text_SIM_1: Life_RscText
				{
					idc = 97616;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37263889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					text = "PRINCIPAL : aucune SIM";
					sizeEx = 0.0175 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_text_SIM_2: Life_RscText
				{
					idc = 97617;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.40763889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					text = "SECONDAIRE : aucune SIM";
					sizeEx = 0.0175 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_text_SIM_3: Life_RscText
				{
					idc = 97618;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.44263889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					text = "ENTREPRISE : aucune SIM";
					sizeEx = 0.0175 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_SIM_1: Life_RscButtonMenu
				{
					idc = 97719;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37263889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					action = "[player, life_phoneNumberPrimary] remoteExec [""unity_srv_fnc_iPhone_X_updatePhoneNumberActive"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_SIM_2: Life_RscButtonMenu
				{
					idc = 97720;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.40763889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					action = "[player, life_phoneNumberSecondary] remoteExec [""unity_srv_fnc_iPhone_X_updatePhoneNumberActive"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_button_SIM_3: Life_RscButtonMenu
				{
					idc = 97721;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.44263889;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.03;
					action = "[player, life_phoneNumberEnterprise] remoteExec [""unity_srv_fnc_iPhone_X_updatePhoneNumberActive"",2];";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appSIM: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSIM: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appNotificationsGroup: Life_RscControlsGroup
		{
			idc = 97801;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_background_notifications: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.5625;
					y = safeZoneY + safeZoneH * -0.05;
					w = safeZoneW * 0.41210938;
					h = safeZoneH * 0.72743056;
					text = "unity_iPhone_X\iPhone_X_bottom.paa";
				};

				class iPhone_X_nameContact_notifications: Life_RscText
				{
					idc = 97802;
					style = ST_LEFT;
					x = safeZoneX + safeZoneW * 0.72088282;
					y = safeZoneY + safeZoneH * 0.515;
					w = safeZoneW * 0.09532032;
					h = safeZoneH * 0.04541667;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0.98,0.027,0.027,1};
					shadow = 0;
				};

				class iPhone_X_SMS_notifications: Life_RscText
				{
					idc = 97803;
					style = ST_LEFT;
					x = safeZoneX + safeZoneW * 0.72088282;
					y = safeZoneY + safeZoneH * 0.53;
					w = safeZoneW * 0.09532032;
					h = safeZoneH * 0.04541667;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {1,1,1,1};
					shadow = 0;
				};

				class iPhone_X_time_notifications: Life_RscText
				{
					idc = 97804;
					style = ST_LEFT;
					x = safeZoneX + safeZoneW * 0.72088282;
					y = safeZoneY + safeZoneH * 0.545;
					w = safeZoneW * 0.09532032;
					h = safeZoneH * 0.04541667;
					text = "";
					sizeEx = 0.0135 * safezoneW;
					colorText[] = {1,1,1,1};
					shadow = 0;
				};

				class iPhone_X_icon_SMS: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.707046878;
					y = safeZoneY + safeZoneH * 0.5384;
					w = safeZoneW * 0.01446094;
					h = safeZoneH * 0.02693056;
					text = "unity_iPhone_X\iPhone_X_icon_sms.paa";
				};
			};
		};

		class iPhone_X_appCallGroup: Life_RscControlsGroup
		{
			idc = 97517;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_phoneNumberAppCall: Life_RscText
				{
					idc = 97661;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.72088282;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.09532032;
					h = safeZoneH * 0.04541667;
					text = "";
					sizeEx = 0.020 * safezoneW;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_informations: Life_RscText
				{
					idc = 97670;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.71898438;
					y = safeZoneY + safeZoneH * 0.41263889;
					w = safeZoneW * 0.10114063;
					h = safeZoneH * 0.03;
					text = "";
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_picture_unhookValidate: Life_RscPicture
				{
					idc = 97675;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.72471667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					text = "unity_iPhone_X\iPhone_X_icon_unhook.paa";
				};

				class iPhone_X_button_unhookValidate: Life_RscButtonMenu
				{
					idc = 97676;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.72471667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_picture_hangup: Life_RscPicture
				{
					idc = 97667;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.72471667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					text = "unity_iPhone_X\iPhone_X_icon_hangup.paa";
				};

				class iPhone_X_button_hangup: Life_RscButtonMenu
				{
					idc = 97663;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.72471667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_picture_hangupValidate: Life_RscPicture
				{
					idc = 97677;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.72471667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					text = "unity_iPhone_X\iPhone_X_icon_hangup.paa";
				};

				class iPhone_X_button_hangupValidate: Life_RscButtonMenu
				{
					idc = 97678;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.72471667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_picture_increaseVolume: Life_RscPicture
				{
					idc = 97668;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					text = "unity_iPhone_X\iPhone_X_icon_increaseVolume.paa";
				};

				class iPhone_X_button_increaseVolume: Life_RscButtonMenu
				{
					idc = 97664;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_radio = player getVariable [""iPhone_X_radio"", """"]; _volume = _radio call TFAR_fnc_getSwVolume; if (_volume < 10) then {_volume = _volume + 1}; [_radio, _volume] call TFAR_fnc_setSwVolume;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_picture_decreaseVolume: Life_RscPicture
				{
					idc = 97669;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.59241667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					text = "unity_iPhone_X\iPhone_X_icon_decreaseVolume.paa";
				};

				class iPhone_X_button_decreaseVolume: Life_RscButtonMenu
				{
					idc = 97665;
					x = safeZoneX + safeZoneW * 0.755625002;
					y = safeZoneY + safeZoneH * 0.59241667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_radio = player getVariable [""iPhone_X_radio"", """"]; _volume = _radio call TFAR_fnc_getSwVolume; if !(_volume isEqualTo 0) then {_volume = _volume - 1}; [_radio, _volume] call TFAR_fnc_setSwVolume;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_picture_speakers: Life_RscPicture
				{
					idc = 97671;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					text = "unity_iPhone_X\iPhone_X_icon_speakersOFF.paa";
				};

				class iPhone_X_button_speakers: Life_RscButtonMenu
				{
					idc = 97672;
					x = safeZoneX + safeZoneW * 0.797046878;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "_radio = player getVariable [""iPhone_X_radio"", """"]; [_radio] call TFAR_fnc_setSwSpeakers; _speakers = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwSpeakers; if (_speakers) then {ctrlSetText [97671,""unity_iPhone_X\iPhone_X_icon_speakersON.paa""];} else {ctrlSetText [97671,""unity_iPhone_X\iPhone_X_icon_speakersOFF.paa""];};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_picture_mute: Life_RscPicture
				{
					idc = 97673;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					text = "unity_iPhone_X\iPhone_X_icon_muteOFF.paa";
				};

				class iPhone_X_button_mute: Life_RscButtonMenu
				{
					idc = 97674;
					x = safeZoneX + safeZoneW * 0.714503126;
					y = safeZoneY + safeZoneH * 0.52641667;
					w = safeZoneW * 0.025;
					h = safeZoneH * 0.045;
					action = "if (TF_tangent_iPhone_X_pressed) then {_info = ""Mute""; [_info] call TFAR_fnc_oniPhoneXTangentReleased; ctrlSetText [97673,""unity_iPhone_X\iPhone_X_icon_muteON.paa""];} else {_info = ""Appel en cours...""; [_info] call TFAR_fnc_oniPhoneXTangentPressed; ctrlSetText [97673,""unity_iPhone_X\iPhone_X_icon_muteOFF.paa""];};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};
			};
		};

		class iPhone_X_appPMCGroup: Life_RscControlsGroup
		{
			idc = 98133;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_text_addOffenseAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Ajouter une infraction";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_addOffenseAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appSearchPlayer;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_01: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.389;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_text_searchOffenseAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.39;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Rechercher une infraction";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_searchOffenseAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.39;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appSearchOffense;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_02: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.409;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_text_offenseAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.41;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Infractions";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_offenseAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.41;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appOffenseList; if (life_coplevel > 0) then {[player] remoteExec [""unity_srv_fnc_iPhone_X_getOffense"",2];};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_03: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.429;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_text_onTheRunListAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.43;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Individus recherchés";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_onTheRunListAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.43;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appOnTheRunList; if (life_coplevel > 0) then {[player] remoteExec [""unity_srv_fnc_iPhone_X_getOnTheRun"",2];};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_04: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.449;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_text_addRapportAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.45;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Ajouter un rapport";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_addRapportAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.45;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appAddRapport;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_05: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.469;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_text_searchRapportAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.47;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Rechercher un rapport";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_searchRapportAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.47;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appSearchRapport;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_06: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.489;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_text_rapportsAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.49;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Rapports";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_rapportsAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.49;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appRapportsList; if (life_coplevel > 0) then {[player] remoteExec [""unity_srv_fnc_iPhone_X_getRapports"",2];};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_07: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.509;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_text_bankAccountAppPMCGroup: Life_RscText
				{
					idc = -1;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.51;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Compte en banque";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_bankAccountAppPMCGroup: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.51;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					action = "[] spawn unity_fnc_iPhone_X_appSearchBankAccount;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class Separator_08: Life_RscText
				{
					idc = -1;
					style = ST_HUD_BACKGROUND;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.529;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.001;
					colorBackground[] = {0.8,0.8,0.8,1};
				};

				class iPhone_X_icon_home_appPMC: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appPMC: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appOffenseListGroup: Life_RscControlsGroup
		{
			idc = 98144;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_icon_home_appOffenseList: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appOffenseList: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appOffenseListGroup_2: Life_RscControlsGroup
				{
					idc = 98145;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.4795;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appOffenseGroup: Life_RscControlsGroup
		{
			idc = 98122;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameOffenseAppOffense: Life_RscText
				{
					idc = 98123;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.43013889;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_phoneNumberOffenseAppOffense: Life_RscText
				{
					idc = 98124;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.55113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_noteOffenseAppOffense: Life_RscText
				{
					idc = 98125;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.60113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_amendeTotalAppOffense: Life_RscText
				{
					idc = 98126;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.62113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_amendeRealAppOffense: Life_RscText
				{
					idc = 98127;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.64113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_onTheRunAppOffense: Life_RscText
				{
					idc = 98128;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.66113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_dateAppOffense: Life_RscText
				{
					idc = 98129;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.68113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_hourAppOffense: Life_RscText
				{
					idc = 98130;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.70113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_amendeListAppOffense: Life_RscText
				{
					idc = 98131;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.72113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_namePlayerAppOffense: Life_RscText
				{
					idc = 98132;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.74113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				/*class iPhone_X_button_editOffenseAppOffense: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};*/

				class iPhone_X_button_appOffenseListAppOffense: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70305002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.03824219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appPMC";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appOffense: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appOffense: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appAddOffenseGroup: Life_RscControlsGroup
		{
			idc = 98155;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameOffense: Life_RscText
				{
					idc = 98156;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.43013889;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "Identité";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 19;
					onMouseButtonClick = "_text = ctrlText 98156; if (_text isEqualTo ""Identité"") then {ctrlSetText [98156,""""]};";
				};

				class iPhone_X_phoneNumberOffense: Life_RscEdit
				{
					idc = 98157;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.55113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "Téléphone";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 10;
					onMouseButtonClick = "_text = ctrlText 98157; if (_text isEqualTo ""Téléphone"") then {ctrlSetText [98157,""""]};";
				};

				class iPhone_X_noteOffense: Life_RscEdit
				{
					idc = 98158;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.60113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0225;
					text = "Informations";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 150;
					onMouseButtonClick = "_text = ctrlText 98158; if (_text isEqualTo ""Informations"") then {ctrlSetText [98158,""""]};";
				};

				class iPhone_X_text_amende_01: Life_RscText
				{
					idc = 98250;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.62113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0.737,0.027,0.027,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_amende_01: Life_RscButtonMenu
				{
					idc = 98251;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.62113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					action = "_amende = (findDisplay 97000) displayCtrl 98250; _amendeTotal = (findDisplay 97000) displayCtrl 98159; if !(life_amende_01) then {_value = life_valueAmende select 0; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal + _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.027,0.576,0.047,1]; life_amende_01 = true;} else {_value = life_valueAmende select 0; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal - _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.737,0.027,0.027,1]; life_amende_01 = false;};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_text_amende_02: Life_RscText
				{
					idc = 98252;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.64113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0.737,0.027,0.027,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_amende_02: Life_RscButtonMenu
				{
					idc = 98254;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.64113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					action = "_amende = (findDisplay 97000) displayCtrl 98252; _amendeTotal = (findDisplay 97000) displayCtrl 98159; if !(life_amende_02) then {_value = life_valueAmende select 1; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal + _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.027,0.576,0.047,1]; life_amende_02 = true;} else {_value = life_valueAmende select 1; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal - _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.737,0.027,0.027,1]; life_amende_02 = false;};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_text_amende_03: Life_RscText
				{
					idc = 98255;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.66113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0.737,0.027,0.027,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_amende_03: Life_RscButtonMenu
				{
					idc = 98256;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.66113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					action = "_amende = (findDisplay 97000) displayCtrl 98255; _amendeTotal = (findDisplay 97000) displayCtrl 98159; if !(life_amende_03) then {_value = life_valueAmende select 2; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal + _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.027,0.576,0.047,1]; life_amende_03 = true;} else {_value = life_valueAmende select 2; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal - _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.737,0.027,0.027,1]; life_amende_03 = false;};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_text_amende_04: Life_RscText
				{
					idc = 98257;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.68113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0.737,0.027,0.027,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_amende_04: Life_RscButtonMenu
				{
					idc = 98258;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.68113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					action = "_amende = (findDisplay 97000) displayCtrl 98257; _amendeTotal = (findDisplay 97000) displayCtrl 98159; if !(life_amende_04) then {_value = life_valueAmende select 3; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal + _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.027,0.576,0.047,1]; life_amende_04 = true;} else {_value = life_valueAmende select 3; _value = _value select 0; life_valueAmendeTotal = life_valueAmendeTotal - _value; _amendeTotal ctrlSetText format [""%1"",life_valueAmendeTotal]; _amende ctrlSetTextColor [0.737,0.027,0.027,1]; life_amende_04 = false;};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_totalAmende: Life_RscText
				{
					idc = 98159;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.70113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0225;
					text = "0";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_totalAmendeReal: Life_RscEdit
				{
					idc = 98160;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.72113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0225;
					text = "Montant réel...";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98160; if (_text isEqualTo ""Montant réel..."") then {ctrlSetText [98160,""""]};";
				};

				class iPhone_X_text_onTheRun: Life_RscText
				{
					idc = 98161;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.74113889;
					w = safeZoneW * 0.089;
					h = safeZoneH * 0.0225;
					text = "N'est pas en cavale";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0.737,0.027,0.027,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_button_onTheRun: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.74113889;
					w = safeZoneW * 0.089;
					h = safeZoneH * 0.0225;
					action = "_onTheRun = (findDisplay 97000) displayCtrl 98161; if !(life_onTheRun) then {_onTheRun ctrlSetTextColor [0.027,0.576,0.047,1]; _onTheRun ctrlSetText ""Est en cavale""; life_onTheRun = true;} else {_onTheRun ctrlSetTextColor [0.737,0.027,0.027,1]; _onTheRun ctrlSetText ""N'est pas en cavale""; life_onTheRun = false;};";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_date: Life_RscEdit
				{
					idc = 98162;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.46113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "jj/mm/aaaa";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98162; if (_text isEqualTo ""jj/mm/aaaa"") then {ctrlSetText [98162,""""]};";
				};

				class iPhone_X_hour: Life_RscEdit
				{
					idc = 98163;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.48113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "hh:mm";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98163; if (_text isEqualTo ""hh:mm"") then {ctrlSetText [98163,""""]};";
				};

				class iPhone_X_button_okOffense: Life_RscButtonMenu
				{
					idc = 98161;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_addOffense";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appAddOffense: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appAddOffense: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSearchOffenseGroup: Life_RscControlsGroup
		{
			idc = 98166;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_text_searchOffense: Life_RscEdit
				{
					idc = 98167;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Rechercher...";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98167; if (_text isEqualTo ""Rechercher..."") then {ctrlSetText [98167,""""]};";
					onKeyDown = "_this call unity_fnc_iPhone_X_searchOffense;";
				};

				class iPhone_X_icon_home_appSearchOffense: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSearchOffense: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSearchPlayerGroup: Life_RscControlsGroup
		{
			idc = 98177;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_text_searchPlayer: Life_RscEdit
				{
					idc = 98178;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Rechercher...";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98178; if (_text isEqualTo ""Rechercher..."") then {ctrlSetText [98178,""""]};";
					onKeyDown = "_this call unity_fnc_iPhone_X_searchPlayer;";
				};

				class iPhone_X_icon_home_appSearchPlayer: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSearchPlayer: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appOnTheRunListGroup: Life_RscControlsGroup
		{
			idc = 98188;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_icon_home_appOnTheRunList: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appOnTheRunList: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appOnTheRunListGroup_2: Life_RscControlsGroup
				{
					idc = 98189;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.4795;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appAddRapportGroup: Life_RscControlsGroup
		{
			idc = 98199;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameRapport: Life_RscEdit
				{
					idc = 98200;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.62013889;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "Identité";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 50;
					onMouseButtonClick = "_text = ctrlText 98200; if (_text isEqualTo ""Identité"") then {ctrlSetText [98200,""""]};";
				};

				class iPhone_X_phoneNumberRapport: Life_RscEdit
				{
					idc = 98201;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.55113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "Téléphone";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 10;
					onMouseButtonClick = "_text = ctrlText 98201; if (_text isEqualTo ""Téléphone"") then {ctrlSetText [98201,""""]};";
				};

				class iPhone_X_noteRapport: Life_RscEdit
				{
					idc = 98202;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.60113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0225;
					text = "Rapport";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 150;
					onMouseButtonClick = "_text = ctrlText 98202; if (_text isEqualTo ""Rapport"") then {ctrlSetText [98202,""""]};";
				};

				class iPhone_X_dateAppRapport: Life_RscEdit
				{
					idc = 98203;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.46113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "jj/mm/aaaa";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98203; if (_text isEqualTo ""jj/mm/aaaa"") then {ctrlSetText [98203,""""]};";
				};

				class iPhone_X_hourAppRapport: Life_RscEdit
				{
					idc = 98204;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.48113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "hh:mm";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98204; if (_text isEqualTo ""hh:mm"") then {ctrlSetText [98204,""""]};";
				};

				class iPhone_X_button_okRapport: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_addRapport";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appAddRapport: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appAddRapport: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSearchRapportGroup: Life_RscControlsGroup
		{
			idc = 98210;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_text_searchRapport: Life_RscEdit
				{
					idc = 98211;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Rechercher...";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98211; if (_text isEqualTo ""Rechercher..."") then {ctrlSetText [98211,""""]};";
					onKeyDown = "_this call unity_fnc_iPhone_X_searchRapport;";
				};

				class iPhone_X_icon_home_appSearchRapport: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSearchRapport: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appRapportsListGroup: Life_RscControlsGroup
		{
			idc = 98220;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_icon_home_appRapportsList: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appRapportsList: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appRapportsListGroup_2: Life_RscControlsGroup
				{
					idc = 98221;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.4795;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appRapportGroup: Life_RscControlsGroup
		{
			idc = 98230;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_nameRapportAppRapport: Life_RscText
				{
					idc = 98231;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70898438;
					y = safeZoneY + safeZoneH * 0.43013889;
					w = safeZoneW * 0.11914063;
					h = safeZoneH * 0.027;
					text = "";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_phoneNumberRapportAppRapport: Life_RscText
				{
					idc = 98232;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.55113889;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_noteRapportAppRapport: Life_RscText
				{
					idc = 98233;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.60113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_namePlayerAppRapport: Life_RscText
				{
					idc = 98234;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.74113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_dateAppRapport: Life_RscText
				{
					idc = 98235;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.68113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_hourAppRapport: Life_RscText
				{
					idc = 98236;
					x = safeZoneX + safeZoneW * 0.70398438;
					y = safeZoneY + safeZoneH * 0.70113889;
					w = safeZoneW * 0.131;
					h = safeZoneH * 0.0625;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				/*class iPhone_X_button_editOffenseAppOffense: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};*/

				class iPhone_X_button_appRapportListAppRapport: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70305002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.03824219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appPMC";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appRapport: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appRapport: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSearchBankAccountGroup: Life_RscControlsGroup
		{
			idc = 98240;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_text_searchBankAccount: Life_RscEdit
				{
					idc = 98241;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "Rechercher...";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onMouseButtonClick = "_text = ctrlText 98241; if (_text isEqualTo ""Rechercher..."") then {ctrlSetText [98241,""""]};";
					onKeyDown = "_this call unity_fnc_iPhone_X_searchBankAccount;";
				};

				class iPhone_X_text_bankAccount: Life_RscText
				{
					idc = 98242;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.70215;
					y = safeZoneY + safeZoneH * 0.39;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.02;
					text = "";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_icon_home_appSearchBankAccount: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSearchBankAccount: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_appSwitchboardGroup: Life_RscControlsGroup
		{
			idc = 98260;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_icon_home_appSwitchboardList: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appSwitchboardList: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appSwitchboardListGroup_2: Life_RscControlsGroup
				{
					idc = 98261;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.4795;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appEventGroup: Life_RscControlsGroup
		{
			idc = 98270;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{

				class iPhone_X_button_addEvent: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.33841667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appAddEvent;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appEvent: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appEvent: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};

				class iPhone_X_appEventGroup_2: Life_RscControlsGroup
				{
					idc = 98271;
					x = safeZoneX + safeZoneW * 0.702;
					y = safeZoneY + safeZoneH * 0.37;
					w = safeZoneW * 0.135;
					h = safeZoneH * 0.4795;
					show = false;

					class VScrollbar
					{
						width = 0.004 * safezoneW;
						height = 0;
						autoScrollSpeed = -1;
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						shadow = 0;
						scrollSpeed = 0.1;
						color[] = {1,0,0,0.6};
						colorActive[] = {0.5,0.5,1,1};
						colorDisabled[] = {1,1,1,0.3};
						thumb = "#(argb,8,8,3)color(0,0,0,0.25)";
						arrowEmpty = "#(argb,8,8,3)color(0,0,0,0.1)";
						arrowFull = "#(argb,8,8,3)color(0,0,0,0.1)";
						border = "#(argb,8,8,3)color(0,0,0,0.1)";
					};

		    		class HScrollbar : HScrollbar
		    		{
		        		height = 0;
		    		};

					class Controls
					{

					};
				};
			};
		};

		class iPhone_X_appEventLoadGroup: Life_RscControlsGroup
		{
			idc = 98280;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{
                class frameName
                {
                    type = 0;
                    idc = 98286;
                    x = safeZoneX + safeZoneW * 0.703125;
                    y = 0.37398991;
                    w = 0.31757576;
                    h = 0.04909091;
                    style = 64;
                    text = "";
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {0,0,0,1};
                    font = "PuristaMedium";
                    sizeEx = 0.030 * safezoneW;

                };
                class frameDesc
                {
                    type = 0;
                    idc = 98287;
                    x = safeZoneX + safeZoneW * 0.703125;
                    y = 0.45398991;
                    w = 0.31757576;
                    h = 0.13909091;
                    style = 64;
                    text = "";
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {0,0,0,1};
                    font = "PuristaMedium";
                    sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

                };
				class iPhone_X_nameEvent: Life_RscText
				{
					idc = 98281;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.37398991;
					w = 0.31757576;
					h = 0.04909091;
					text = "";
					sizeEx = 0.020 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

				class iPhone_X_descriptionEvent: Life_RscText
				{
					idc = 98282;
					style = ST_LEFT + ST_MULTI + ST_NO_RECT;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.45398991;
					w = 0.31757576;
					h = 0.13909091;
					text = "";
					sizeEx = 0.015 * safezoneW;
					lineSpacing = 1;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};
				class iPhone_X_dateEvent: Life_RscText
				{
					idc = 98283;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.61;
					w = 0.31757576;
					h = 0.0490909;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};

                class iPhone_X_positionEvent: Life_RscText
				{
					idc = 98284;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.67;
					w = 0.31757576;
					h = 0.04909091;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};
				class iPhone_X_priceEvent: Life_RscText
				{
					idc = 98285;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.73;
					w = 0.31757576;
					h = 0.04909091;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};
				class iPhone_X_button_appEventAppEventLoad: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.70305002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.03824219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_appEvent";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appEventLoad: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appEventLoad: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};


		class iPhone_X_appAddEventGroup: Life_RscControlsGroup
		{
			idc = 98290;
			w = 1.5 * safezoneW;
			h = 1.5 * safezoneH;
			show = false;

			class VScrollbar : VScrollbar
			{
       			width = 0;
    		};

    		class HScrollbar : HScrollbar
    		{
        		height = 0;
    		};

			class Controls
			{
			    //Titre event
				class iPhone_X_nameAddEvent: Life_RscEdit
				{
					idc = 98291;
					style = ST_CENTER;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.37398991;
					w = 0.31757576;
					h = 0.04909091;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 19;
					onSetFocus = "_text = ctrlText 98291; if (_text isEqualTo ""Votre événement"") then {ctrlSetText [98291,""""]};";
				};
				class DateText
                		{
                			type = 0;
                			idc = -1;
                			x = safeZoneX + safeZoneW * 0.703125;
                			y = 0.68055556;
                			w = 0.09303031;
                			h = 0.0409091;
                			style = 0;
                			text = "Date";
                			colorBackground[] = {0,0,0,0};
                			colorText[] = {0,0,0,1};
                			font = "PuristaMedium";
                			sizeEx = 0.015 * safezoneW;

                		};
				class Heure
						{
							type = 0;
							idc = -1;
							x = safeZoneX + safeZoneW * 0.703125;
							y = 0.78055556;
							w = 0.09303031;
							h = 0.0409091;
							style = 0;
							text = "Heure";
							colorBackground[] = {0,0,0,0};
							colorText[] = {0,0,0,1};
							font = "PuristaMedium";
							sizeEx = 0.015 * safezoneW;

				};
                //ComboBox Jours Event
				class iPhone_X_dayAddEvent: Life_RscCombo
				{
					idc = 982901;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.73055556;
                	w = 0.09303031;
					h = safeZoneH * 0.0225;
				};
				//ComboBox Mois Event
                class iPhone_X_monthAddEvent: Life_RscCombo
                {
                	idc = 982902;
                	x = safeZoneX + safeZoneW * 0.703125+0.1;
                	y = 0.73055556;
                	w = 0.09303031;
                	h = safeZoneH * 0.0225;
                };
				//Heure
                class iPhone_X_hourAddEvent: Life_RscCombo
                {
                	idc = 982904;
                	x = safeZoneX + safeZoneW * 0.703125;
                	y = 0.83055557;
                    w = 0.09303031;
                	h = safeZoneH * 0.0225;
                };
                //Minutes
                class iPhone_X_minAddEvent: Life_RscCombo
                {
                	idc = 982905;
                	x = safeZoneX + safeZoneW * 0.703125+0.1;
                	y = 0.83055557;
                    w = 0.09303031;
                	h = safeZoneH * 0.0225;
                };
				class iPhone_X_priceAddEvent: Life_RscEdit
				{
					idc = 98295;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.88055558;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					maxChars = 10;
					onSetFocus = "_text = ctrlText 98295; if (_text isEqualTo ""Tarif"") then {ctrlSetText [98295,""""]};";
				};

				class iPhone_X_descriptionAddEvent: Life_RscEdit
				{
					idc = 98296;
					style = ST_LEFT + ST_MULTI;
					x = safeZoneX + safeZoneW * 0.703125;
					y = 0.45101011;
					w = 0.31757576;
					h = 0.22;
					text = "";
					sizeEx = 0.015 * safezoneW;
					lineSpacing = 1;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onSetFocus = "_text = ctrlText 98296; if (_text isEqualTo ""Description"") then {ctrlSetText [98296,""""]};";
				};

				class iPhone_X_positionAddEvent: Life_RscEdit
				{
					idc = 98297;
					x = safeZoneX + safeZoneW * 0.703125 +0.14;
					y = 0.88055558;
					w = safeZoneW * 0.059;
					h = safeZoneH * 0.0225;
					text = "";
					sizeEx = 0.015 * safezoneW;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,0,0,0};
					shadow = 0;
					onSetFocus = "_text = ctrlText 98297; if (_text isEqualTo ""Position"") then {ctrlSetText [98297,""""]};";
				};

				class iPhone_X_button_okEvent: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.82205002;
					y = safeZoneY + safeZoneH * 0.34141667;
					w = safeZoneW * 0.01074219;
					h = safeZoneH * 0.01909723;
					action = "[] spawn unity_fnc_iPhone_X_addEvent";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};
				};

				class iPhone_X_icon_home_appEventLoad: Life_RscPicture
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					text = "unity_iPhone_X\iPhone_X_icon_home.paa";
				};

				class iPhone_X_button_home_appEventLoad: Life_RscButtonMenu
				{
					idc = -1;
					x = safeZoneX + safeZoneW * 0.80948282;
					y = safeZoneY + safeZoneH * 0.31525;
					w = safeZoneW * 0.0175;
					h = safeZoneH * 0.0175;
					action = "[] spawn unity_fnc_iPhone_X_home;";
					colorBackground[] = {0,0,0,0};
					colorBackground2[] = {0,0,0,0};
					colorBackgroundFocused[] = {0,0,0,0};

					class Attributes
					{
						align = "center";
					};
				};
			};
		};

		class iPhone_X_base: Life_RscPicture
		{
			idc = 97001;
			x = safeZoneX + safeZoneW * 0.5625;
			y = safeZoneY + safeZoneH * 0.21701389;
			w = safeZoneW * 0.41210938;
			h = safeZoneH * 0.72743056;
			text = "";
		};

		class iPhone_X_button_master: Life_RscButtonMenu
		{
			idc = 97005;
			x = safeZoneX + safeZoneW * 0.69894219;
			y = safeZoneY + safeZoneH * 0.30690278;
			w = safeZoneW * 0.13914844;
			h = safeZoneH * 0.54570834;
			action = "if !(life_phoneOn) then {[] spawn unity_fnc_iPhone_X_start;} else {[] spawn unity_fnc_iPhone_X_home};";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
		};

		class iPhone_X_button_notifications: Life_RscButtonMenu
		{
			idc = 97805;
			x = safeZoneX + safeZoneW * 0.69894219;
			y = safeZoneY + safeZoneH * 0.52490278;
			w = safeZoneW * 0.13914844;
			h = safeZoneH * 0.055;
			action = "_nameContact = ctrlText 97802; _lastSMS = player getVariable [""iPhone_X_lastSMS"", []]; _phoneNumberContact = _lastSMS select 3; [_nameContact, _phoneNumberContact] spawn unity_fnc_iPhone_X_appSMSFromNotification;";
			colorBackground[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			show = false;
		};

		/*class TEST1: Life_RscText
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.70215;
			y = safeZoneY + safeZoneH * 0.37;
			w = safeZoneW * 0.0655; //0.131
			h = safeZoneH * 0.02;
			text = "";
			colorText[] = {0.84,0.45,0.05,0.5};
			colorBackground[] = {0.84,0.45,0.05,0.5};
		};

		class TEST2: Life_RscText
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.76765;
			y = safeZoneY + safeZoneH * 0.38;
			w = safeZoneW * 0.0655;
			h = safeZoneH * 0.02;
			text = "";
			colorText[] = {0.84,0.45,0.05,0.5};
			colorBackground[] = {0.84,0.45,0.05,0.5};
		};*/
	};
};

class iPhone_X_contacts: Life_RscControlsGroup
{
	idc = 98000;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_contactName: Life_RscText
		{
			idc = 98002;
			style = ST_LEFT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.02;
			text = "";
			sizeEx = 0.02 * safezoneW;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};

		class iPhone_X_contactNumber: Life_RscText
		{
			idc = 98003;
			style = ST_LEFT;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2475;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.018;
			text = "";
			sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
		};

		class Separator: Life_RscText
		{
			idc = 98004;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2725;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.001;
			colorBackground[] = {0.8,0.8,0.8,1};
		};
	};
};

class iPhone_X_conversations: Life_RscControlsGroup
{
	idc = 98100;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_SMSListContactName: Life_RscText
		{
			idc = 98101;
			style = ST_LEFT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.02;
			text = "";
			sizeEx = 0.02 * safezoneW;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};

		class iPhone_X_SMSListLastSMS: Life_RscText
		{
			idc = 98102;
			style = ST_LEFT;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2475;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.018;
			text = "";
			sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
		};

		class Separator: Life_RscText
		{
			idc = 98103;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2725;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.001;
			colorBackground[] = {0.8,0.8,0.8,1};
		};
	};
};

class iPhone_X_receiveSMS: Life_RscControlsGroup
{
	idc = 98110;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_backgroundReceiveSMS: Life_RscText
		{
			idc = 98111;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = 0;
			w = safeZoneW * 0.0965;
			h = safeZoneH * 0.02;
			colorBackground[] = {0.6,0.8,1,0.8};
		};

		class iPhone_X_messageReceiveSMS: Life_RscStructuredText
		{
			idc = 98112;
			style = ST_LEFT + ST_MULTI + ST_NO_RECT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.0915;
			h = safeZoneH * 0.02;
			sizeEx = 0.0175 * safezoneW;
			lineSpacing = 0.8;
			text = "";
			colorText[] = {0.1,0.1,0.1,0.8};
			shadow = 0;
		};
	};
};

class iPhone_X_sendSMS: Life_RscControlsGroup
{
	idc = 98120;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_backgroundSendSMS: Life_RscText
		{
			idc = 98111;
			style = ST_HUD_BACKGROUND;
			x = safeZoneX + safeZoneW * 0.3265;
			y = 0;
			w = safeZoneW * 0.0965;
			h = safeZoneH * 0.02;
			colorBackground[] = {1,1,0.4,0.8};
		};

		class iPhone_X_messageSendSMS: Life_RscStructuredText
		{
			idc = 98112;
			style = ST_LEFT + ST_MULTI + ST_NO_RECT;
			x = safeZoneX + safeZoneW * 0.3265;
			y = 0;
			w = safeZoneW * 0.0915;
			h = safeZoneH * 0.02;
			sizeEx = 0.0175 * safezoneW;
			lineSpacing = 0.8;
			text = "";
			colorText[] = {0.1,0.1,0.1,1};
			shadow = 0;
		};
	};
};

class iPhone_X_SMSEnterprise: Life_RscControlsGroup
{
	idc = 98057;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_backgroundSMSEnterprise: Life_RscText
		{
			idc = 98058;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = 0;
			w = safeZoneW * 0.0965;
			h = safeZoneH * 0.02;
			colorBackground[] = {0.6,0.8,1,0.8};
		};

		class iPhone_X_messageSMSEnterprise: Life_RscStructuredText
		{
			idc = 98059;
			style = ST_LEFT + ST_MULTI + ST_NO_RECT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.0915;
			h = safeZoneH * 0.02;
			sizeEx = 0.0175 * safezoneW;
			lineSpacing = 0.8;
			text = "";
			colorText[] = {0.1,0.1,0.1,0.8};
			shadow = 0;
		};
	};
};

class iPhone_X_offense: Life_RscControlsGroup
{
	idc = 98046;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_nameOffense: Life_RscText
		{
			idc = 98047;
			style = ST_LEFT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.02;
			text = "";
			sizeEx = 0.02 * safezoneW;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};

		class iPhone_X_dateHourOffense: Life_RscText
		{
			idc = 98048;
			style = ST_LEFT;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2475;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.018;
			text = "";
			sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
		};

		class Separator: Life_RscText
		{
			idc = -1;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2725;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.001;
			colorBackground[] = {0.8,0.8,0.8,1};
		};
	};
};

class iPhone_X_onTheRun: Life_RscControlsGroup
{
	idc = 98049;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_nameOnTheRun: Life_RscText
		{
			idc = 98050;
			style = ST_LEFT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.02;
			text = "";
			sizeEx = 0.02 * safezoneW;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};

		class iPhone_X_dateHourOnTheRun: Life_RscText
		{
			idc = 98051;
			style = ST_LEFT;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2475;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.018;
			text = "";
			sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
		};

		class Separator: Life_RscText
		{
			idc = -1;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2725;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.001;
			colorBackground[] = {0.8,0.8,0.8,1};
		};
	};
};

class iPhone_X_rapport: Life_RscControlsGroup
{
	idc = 98052;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_nameRapport: Life_RscText
		{
			idc = 98053;
			style = ST_LEFT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.02;
			text = "";
			sizeEx = 0.02 * safezoneW;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};

		class iPhone_X_dateHourRapport: Life_RscText
		{
			idc = 98054;
			style = ST_LEFT;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2475;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.018;
			text = "";
			sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
		};

		class Separator: Life_RscText
		{
			idc = -1;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2725;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.001;
			colorBackground[] = {0.8,0.8,0.8,1};
		};
	};
};

class iPhone_X_switchboard: Life_RscControlsGroup
{
	idc = 98055;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.05;

	class Controls
	{
		class iPhone_X_fromNumberAppSwitchboard: Life_RscText
		{
			idc = 98056;
			style = ST_LEFT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.02;
			text = "";
			sizeEx = 0.02 * safezoneW;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};

		class Separator: Life_RscText
		{
			idc = -1;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2725;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.001;
			colorBackground[] = {0.8,0.8,0.8,1};
		};
	};
};

class iPhone_X_events: Life_RscControlsGroup
{
	idc = 98060;
	x = 0;
	y = 0;
	w = safeZoneW * 0.135;
	h = safeZoneH * 0.093;

	class Controls
	{
		class iPhone_X_nameEvent: Life_RscText
		{
			idc = 98061;
			style = ST_LEFT;
			x = 0;
			y = 0;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.02;
			text = "";
			sizeEx = 0.02 * safezoneW;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};
        class iPhone_X_dateEvent : Life_RscText
        {
        	idc = 98062;
        	style = ST_LEFT;
			x = 0;
        	y = safeZoneY + safeZoneH * 0.2475;
        	w = safeZoneW * 0.135;
        	h = safeZoneH * 0.02;
        	text = "";
        	sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
        };
		class iPhone_X_priceEvent: Life_RscText
		{
			idc = 98063;
			style = ST_LEFT;
			x = 0;
			y = safeZoneY + safeZoneH * 0.2675;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.018;
			text = "";
			sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
		};
        class iPhone_X_posEvent: Life_RscText
        {
			idc = 98064;
			style = ST_LEFT;
			x = 0;
        	y = safeZoneY + safeZoneH * 0.28722224;
        	w = safeZoneW * 0.135;
        	h = safeZoneH * 0.02;
            text = "";
			sizeEx = 0.018 * safezoneW;
			colorText[] = {0.62,0.62,0.62,1};
			shadow = 0;
        };
		class Separator: Life_RscText
		{
			idc = -1;
			style = ST_HUD_BACKGROUND;
			x = 0;
			y = safeZoneY + safeZoneH * 0.3135;
			w = safeZoneW * 0.135;
			h = safeZoneH * 0.001;
			colorBackground[] = {0.8,0.8,0.8,1};
		};
	};
};
