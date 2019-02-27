#define ST_CENTER         0x02

/*
    File: iPhone_X_addPhoneNumber.hpp
    Author: Neyzhak

    Description:
    iPhone_X_addPhoneNumber display
*/

class iPhone_X_addPhoneNumber
{
	idd = 97850;
	movingEnable = true;
	enableSimulation = true;

	class ControlsBackground
	{
		class iPhone_X_NoloTelecom_background: Life_RscText
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3671875;
			y = safeZoneY + safeZoneH * 0.32291667;
			w = safeZoneW * 0.265625;
			h = safeZoneH * 0.32986112;
			colorBackground[] = {0,0,0,0.7};
		};
	};

	class Controls
	{

		class iPhone_X_NoloTelecom_title: Life_RscText
		{
			idc = -1;
			style = ST_CENTER;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.34722223;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.03819445;
			text = "NOLOTÉLÉCOM";
			colorBackground[] = {0,0,0,0.5};
		};

		class iPhone_X_NoloTelecom_text: Life_RscStructuredText
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.41013889;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.08819445;
			text = "<t align='center'>Choisissez un abonnement.<br></br>Principal : 15 000€.<br></br>Secondaire : 500 000€.</t>";
			colorBackground[] = {0,0,0,0};
		};

		class iPhone_X_NoloTelecom_phoneNumberPrimary: Life_RscButtonMenu
		{
			idc = 97851;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.51736112;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.025;
			text = "NUMÉRO PRINCIPAL";
			action = "[] spawn unity_fnc_iPhone_X_addPhoneNumberPrimary;";
			colorBackground[] = {0,0,0,0.25};

			class Attributes
			{
				align = "center";
			};
		};

		class iPhone_X_NoloTelecom_phoneNumberSecondary: Life_RscButtonMenu
		{
			idc = 97852;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.56597223;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.025;
			text = "NUMÉRO SECONDAIRE";
			action = "[] spawn unity_fnc_iPhone_X_addPhoneNumberSecondary;";
			colorBackground[] = {0,0,0,0.25};

			class Attributes
			{
				align = "center";
			};
		};

		/*class iPhone_X_NoloTelecom_phoneNumberEnterprise: Life_RscButtonMenu
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.61458334;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.025;
			text = "NUMÉRO ENTREPRISE";
			action = "[] spawn unity_fnc_iPhone_X_addPhoneNumberEnterprise";
			colorBackground[] = {0,0,0,0.25};

			class Attributes
			{
				align = "center";
			};
		};*/
	};
};
