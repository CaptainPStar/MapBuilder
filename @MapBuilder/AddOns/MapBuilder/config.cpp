#define DEBUG

class CfgPatches
{
	class MapBuilder
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.12;
		requiredAddons[] = {};
		version = "0.9";
		projectName = "MapBuilder";
		author = "NeoArmageddon";
	};
};

class CfgMods
{
	class Mod_Base;
	class MapBuilder: Mod_Base
	{
		picture = "MB\MapBuilder\data\mb.paa";
		logo = "MB\MapBuilder\data\mb.paa";
		logoOver = "MB\MapBuilder\data\mb_reversed.paa";
		action = "http://map-builder.info";
		dlcColor[] = {0.31,0.78,0.78,1};
		overview = "Map Builder 0.9";
		hideName = 0;
		hidePicture = 0;
		name = "Map Builder";
		//dir = "MapBuilder";
		//appId = 275700;
	};
};

class CfgFactionClasses
{
	class MapBuilder_Faction
	{
		displayname = "Map Builder";
		priority = 8;
		side = 7;
		addon = "MapBuilder";

		class subCategories
		{
			class MapBuilder
			{
				displayname = "Map Builder";
				moduleClass = "MapBuilder_ModuleEmpty";
			};
		};
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};
	class MapBuilder_ModuleBase: Module_F
	{
		mapSize = 1;
		author = "NeoArmageddon";
		vehicleClass = "Modules";
		category = "MapBuilder_Faction";
		subCategory = "MapBuilder";		
		side = 7;
		
		scope = 1;
		scopeCurator = 1;
		
		icon =  "\MB\MapBuilder\data\mapbuilder_mapicon.paa";
		
		displayName = "MB Modules";
		function = "";
		functionPriority = 10;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;

		class Arguments{};
		class ModuleDescription: ModuleDescription
		{
			description = "MB Module Base";
		};
	};
	class MapBuilder_Module: MapBuilder_ModuleBase
	{
		displayName = "Map Builder";
		function = "mb_fnc_setup";
		scopeCurator = 1;
		scope = 2;
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			//class Units: Units {};
			// Module specific arguments
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Map Builder Main Module. Placing this on the map grants all players access to Map Builder via action menu."; // Short description, will be formatted as structured text
			//sync[] = {}; // Array of synced entities (can contain base classes)
		};
	};
	class MapBuilder_ModuleEmpty: MapBuilder_ModuleBase
	{
		mapSize = 0;
		category = "Curator";
		subCategory = "";
		icon = "";

		displayName = "";
		function = "";
		scopeCurator = 1;
	};
};

#include "\MB\MapBuilder\ui\ui.hpp"

#ifndef DEBUG
class CfgFunctions
{
	#include "\MB\MapBuilder\functions\functions.hpp"
};
#endif