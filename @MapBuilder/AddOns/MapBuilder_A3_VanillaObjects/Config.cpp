class CfgPatches
{
	class MapBuilder_A3_VanillaObjects
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F","A3_Structures_F","A3_Roads_F","A3_Signs_F","A3_Soft_F"};
		author[] = {"NeoArmageddon"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicleClasses
{
	class Car
	{
		displayName = "Cars";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Armored
	{
		displayName = "Armored";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Air
	{
		displayName = "Air";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Support
	{
		displayName = "Supports";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Objects
	{
		displayName = "Objects";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Ammo
	{
		displayName = "Ammo";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Mines
	{
		displayName = "Mines";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Ship
	{
		displayName = "Ships";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Static
	{
		displayName = "Static";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Backpacks
	{
		displayName = "Backpacks";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Autonomous
	{
		displayName = "Autonomous";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Submarine
	{
		displayName = "Submarines";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Uniforms
	{
		displayName = "Uniforms";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Wreck
	{
		displayName = "Wrecks";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Wreck_sub
	{
		displayName = "Wrecks (Submerged)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Anomalies
	{
		displayName = "Anomalies";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Targets
	{
		displayName = "Targets";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Test
	{
		displayName = "TEST";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class WeaponsPrimary
	{
		displayName = "Weapons (Primary)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class WeaponsSecondary
	{
		displayName = "Weapons (Launchers)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class WeaponsHandguns
	{
		displayName = "Weapons (Sidearms)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class WeaponAccessories
	{
		displayName = "Weapon Accessories";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Magazines
	{
		displayName = "Magazines";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Items
	{
		displayName = "Items";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class ItemsHeadgear
	{
		displayName = "Items (Headgear)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class ItemsVests
	{
		displayName = "Items (Vests)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class ItemsUniforms
	{
		displayName = "Items (Uniforms)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Intel
	{
		displayName = "Intel";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Virtual
	{
		displayName = "Virtual Entities";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Cargo
	{
		displayName = "Objects (Construction)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Container
	{
		displayName = "Objects (Containers)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Garbage
	{
		displayName = "Objects (Garbage)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Flag
	{
		displayName = "Objects (Flags)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Submerged
	{
		displayName = "Objects (Sea)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Lamps
	{
		displayName = "Objects (Lamps)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Communication
	{
		displayName = "Objects (Communications)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Helpers
	{
		displayName = "Objects (Helpers)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Dead_bodies
	{
		displayName = "Objects (Dead bodies)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Furniture
	{
		displayName = "Objects (Furniture)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Military
	{
		displayName = "Objects (Military)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Misc
	{
		displayName = "Objects";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Signs
	{
		displayName = "Objects (Signs)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Small_items
	{
		displayName = "Objects (Small)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Training
	{
		displayName = "Objects (Training)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Shelters
	{
		displayName = "Objects (Shelters)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Fortifications
	{
		displayName = "Objects (Fortifications)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Tents
	{
		displayName = "Objects (Camping)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Market
	{
		displayName = "Objects (Market)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures
	{
		displayName = "Structures";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Commercial
	{
		displayName = "Structures (Commercial)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Cultural
	{
		displayName = "Structures (Cultural)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Industrial
	{
		displayName = "Structures (Industrial)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Infrastructure
	{
		displayName = "Structures (Infrastructure)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Military
	{
		displayName = "Structures (Military)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Town
	{
		displayName = "Structures (Town)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Transport
	{
		displayName = "Structures (Transport)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Village
	{
		displayName = "Structures (Village)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Walls
	{
		displayName = "Structures (Walls)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Fences
	{
		displayName = "Structures (Fences)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Slums
	{
		displayName = "Structures (Slums)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Objects_Sports
	{
		displayName = "Objects (Sports)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Structures_Sports
	{
		displayName = "Structures (Sports)";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
	class Explosives
	{
		displayName = "Explosives";
		mapbuilder_library = "A3 Vanilla";
		mapbuilder_objEval = "{([""a3_"", _x] call BIS_fnc_inString)} count (unitAddons _this) == count (unitAddons _this) && count (unitAddons _this)>0";
	};
};