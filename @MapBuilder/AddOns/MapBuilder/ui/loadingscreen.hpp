// basic defines
//
class MB_RscLoadingText : MB_RscText
{
	style = 2;
	x = safezoneX + safezoneW * 0.5;
	y = safezoneY + safezoneH * 0.8;
	w = 0.9;
	h = 0.04902;
	sizeEx = 0.03921;
	colorText[] = {1,1,1,1.0};
};
class MB_RscProgressNotFreeze : MB_RscProgress
{
	idc = -1;
	type = 45;
	style = 0;
	x = "SafeZoneX + (SafeZoneW * 0)";
	y = "SafeZoneY + (SafezoneH * 0.9)";
	w = "SafeZoneW * 1.0";
	h = "SafeZoneH * 0.05";
	texture = "#(argb,8,8,3)color(0,0,0,0)";
};
//
// the loading screen itself
//
class MB_LoadingScreen
{ 
	idd = 667;
	duration = 10e10;
	fadein = 0;
	fadeout = 0;
	name = "Map Builder Loading Screen";
	class controlsBackground
	{
		class blackBG : MB_RscText
		{
			x = safezoneX;
			y = safezoneY;
			w = safezoneW;
			h = safezoneH;
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,1};
		};
		class nicePic : MB_RscPicture
		{
			type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO; // ST_PICTURE + ST_KEEP_ASPECT_RATIO
			x = safezoneX + safezoneW * 0.25;
			y = safezoneY + safezoneH * 0.25;
			w = safezoneW * 0.5;
			h = safezoneH * 0.5;
			autoplay = 1; // Play video automatically (only for style ST_PICTURE with text pointing to an .ogv file)
			loops = 1; // Number of video repeats (only for style ST_PICTURE with text pointing to an .ogv file)
			text = "\mb\mapbuilder\data\mb.paa";
		};
	};
	class controls
	{
		class Title1 : MB_RscLoadingText
		{
			text = ""; // "Loading" text in the middle of the screen
		};
		class CA_Progress : MB_RscProgress // progress bar, has to have idc 104
		{
			idc = 104;
			type = 8; // CT_PROGRESS
			style = 0; // ST_SINGLE
			texture = "#(rgb,8,8,3)color(0,1,0,0.75)";
		};
		class CA_Progress2 : MB_RscProgressNotFreeze // progress bar that will go reverse
		{
			idc = 103;
		};
		class Name2: MB_RscText // the text on the top-left
		{
			idc = 101;
			style = ST_CENTER;
			x = safezoneX + safezoneW * 0.05;
			y = safezoneY + safezoneH * 0.85;
			w = safezoneW * 0.9;
			h = safezoneH * 0.1;
			text = "";
			sizeEx = 0.05;
			colorText[] = {1.0,1.0,1.0,1.0};
		};
	};
};
class MB_LoadingScreenVideo
{ 
	idd = 668;
	duration = 10e10;
	fadein = 0;
	fadeout = 0;
	name = "Map Builder Loading Screen";
	class controlsBackground
	{
		class Video : MB_RscPicture
		{
			type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO; // ST_PICTURE + ST_KEEP_ASPECT_RATIO
			x = safezoneX + safezoneW * 0;
			y = safezoneY + safezoneH * 0;
			w = safezoneW * 1;
			h = safezoneH * 1;
			autoplay = 1; // Play video automatically (only for style ST_PICTURE with text pointing to an .ogv file)
			loops = 1; // Number of video repeats (only for style ST_PICTURE with text pointing to an .ogv file)
			text = "\mb\mapbuilder\data\videos\intro.ogv";
		};
	};
};