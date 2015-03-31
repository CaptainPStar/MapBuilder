class CfgPatches
{
	class MapBuilder_A3_ExtraObjects
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Structures_F","A3_Roads_F","A3_Signs_F","A3_Soft_F"};
		author[] = {"NeoArmageddon"};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgVehicleClasses
{
	class MB_A3_Trees
	{
		displayName = "MapBuilder A3 Trees";
		mapbuilder_displayname = "Trees";
		mapbuilder_library = "A3 Extra";
	};
	class MB_A3_Bushes : MB_A3_Trees
	{
		displayName = "MB A3 Bushes";
		mapbuilder_displayname = "Bushes";
	};
	class MB_A3_Corals : MB_A3_Trees
	{
		displayName = "MB A3 Corals";
		mapbuilder_displayname = "Corals";
	};
	class MB_A3_Rocks : MB_A3_Trees
	{
		displayName = "MB A3 Rocks";
		mapbuilder_displayname = "Rocks";
	};
	class MB_A3_Rocks_Sharp : MB_A3_Trees
	{
		displayName = "MB A3 Rocks (Sharp)";
		mapbuilder_displayname = "Rocks (Sharp)";
	};
	class MB_A3_Rocks_Blunt : MB_A3_Trees
	{
		displayName = "MB A3 Rocks (Blunt)";
		mapbuilder_displayname = "Rocks (Blunt)";
	};
	class MB_A3_Rocks_Water : MB_A3_Trees
	{
		displayName = "MB A3 Rocks (Water)";
		mapbuilder_displayname = "Rocks (Water)";
	};
	class MB_A3_Structures_Bootcamp : MB_A3_Trees
	{
		displayName = "MB A3 Structures Bootcamp";
		mapbuilder_displayname = "Structures Bootcamp";
	};
	class MB_A3_Structures_epa : MB_A3_Trees
	{
		displayName = "MB A3 Structures EPA";
		mapbuilder_displayname = "Objects EPA";
	};
	class MB_A3_Structures_epb : MB_A3_Trees
	{
		displayName = "MB A3 Structures EPB";
		mapbuilder_displayname = "Objects EPB";
	};
	class MB_A3_Structures_epc : MB_A3_Trees
	{
		displayName = "MB A3 Structures EPC";
		mapbuilder_displayname = "Objects EPC";
	};
	class MB_A3_StructuresF_Bridges : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Bridges";
		mapbuilder_displayname = "Structures Bridges";
	};
	class MB_A3_StructuresF_Furniture : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Furniture";
		mapbuilder_displayname = "Structures Furniture";
	};
	class MB_A3_StructuresF_Research : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Research";
		mapbuilder_displayname = "Structures Research";
	};
	class MB_A3_StructuresF_Dominants : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Dominants";
		mapbuilder_displayname = "Structures Dominants";
	};
	class MB_A3_StructuresF_Civ : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Civ";
		mapbuilder_displayname = "Structures Civilian";
	};
	class MB_A3_StructuresF_Households : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Households";
		mapbuilder_displayname = "Structures Households";
	};
	class MB_A3_StructuresF_Ind : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Ind";
		mapbuilder_displayname = "Structures Industrial";
	};
	class MB_A3_StructuresF_Items : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Items";
		mapbuilder_displayname = "Structures Items";
	};
	class MB_A3_StructuresF_Mil : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Mil";
		mapbuilder_displayname = "Structures Military";
	};
	class MB_A3_StructuresF_Naval : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Naval";
		mapbuilder_displayname = "Structures Naval";
	};
	class MB_A3_StructuresF_System : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF System";
		mapbuilder_displayname = "Structures System";
	};
	class MB_A3_StructuresF_Training : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Training";
		mapbuilder_displayname = "Structures Training";
	};
	class MB_A3_StructuresF_Walls : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Walls";
		mapbuilder_displayname = "Structures Walls";
	};
	class MB_A3_StructuresF_Wrecks : MB_A3_Trees
	{
		displayName = "MB A3 StructuresF Wrecks";
		mapbuilder_displayname = "Structures Wrecks";
	};
	class MB_A3_SignsF_SignT : MB_A3_Trees
	{
		displayName = "MB A3 SignsF SignT";
		mapbuilder_displayname = "Signs (T)";
	};
	class MB_A3_SignsF_SignM : MB_A3_Trees
	{
		displayName = "MB A3 SignsF SignM";
		mapbuilder_displayname = "Signs (M)";
	};
};

class CfgVehicles
{
	class House_F;
	class House_Small_F;
	class cargo_house_base_F;
	class cargo_hq_base_F;
	class cargo_patrol_base_F;
	class Helipad_base_F;
	class Land_VASICore;
	class Ruins_F;
	class Church_F;
	class Garbage_base_F;
	class Lamps_base_F;
	class FloatingStructure_F;
	class PlayGround_base_F;
	class Indpipe_base_F;
	class Powerlines_base_F;
	class Hbarrier_base_F;
	class Piers_base_F;
	class Wall_F;
	class Nonstrategic;
	class Strategic;
	class Wreck_base_F;
	class Uwreck_base_F;
	class Constructions_base_F;
	class Static;
	class House;
	class Camping_base_F;
	class Sign_F;
	class Thing;
	class ThingX;
	class TargetBase;
	class Building;
	class Cemetery_base_F;
	class Furniture_base_F;
	class SportsGrounds_base_F;
	class Items_base_F;
	class Scrapyard_base_F;
	class t_BroussonetiaP1s_F: Static
	{
		scope = 2;
		displayName = "t_BroussonetiaP1s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_broussonetiap1s_f.p3d";
	};
	class t_FicusB1s_F: Static
	{
		scope = 2;
		displayName = "t_FicusB1s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_ficusb1s_f.p3d";
	};
	class t_FicusB2s_F: Static
	{
		scope = 2;
		displayName = "t_FicusB2s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_ficusb2s_f.p3d";
	};
	class t_FraxinusAV2s_F: Static
	{
		scope = 2;
		displayName = "t_FraxinusAV2s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_fraxinusav2s_f.p3d";
	};
	class t_OleaE1s_F: Static
	{
		scope = 2;
		displayName = "t_OleaE1s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_oleae1s_f.p3d";
	};
	class t_OleaE2s_F: Static
	{
		scope = 2;
		displayName = "t_OleaE2s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_oleae2s_f.p3d";
	};
	class t_PhoenixC1s_F: Static
	{
		scope = 2;
		displayname = "t_PhoenixC1s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_phoenixc1s_f.p3d";
	};
	class t_PhoenixC3s_F: Static
	{
		scope = 2;
		displayName = "t_PhoenixC3s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_phoenixc3s_f.p3d";
	};
	class t_PinusP3s_F: Static
	{
		scope = 2;
		displayName = "t_PinusP3s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_pinusp3s_f.p3d";
	};
	class t_PinusS1s_F: Static
	{
		scope = 2;
		displayName = "t_PinusS1s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_pinuss1s_f.p3d";
	};
	class t_PinusS2s_b_F: Static
	{
		scope = 2;
		displayName = "t_PinusS2s_b_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_pinuss2s_b_f.p3d";
	};
	class t_PinusS2s_F: Static
	{
		scope = 2;
		displayName = "t_PinusS2s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_pinuss2s_f.p3d";
	};
	class t_poplar2f_dead_F: Static
	{
		scope = 2;
		displayName = "t_poplar2f_dead_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_poplar2f_dead_f.p3d";
	};
	class t_PopulusN3s_F: Static
	{
		scope = 2;
		displayName = "t_PopulusN3s_F";
		vehicleClass = "MB_A3_Trees";
		model = "a3\plants_f\tree\t_populusn3s_f.p3d";
	};
	class b_ArundoD2s_F: Static
	{
		scope = 2;
		displayName = "b_ArundoD2s_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_ArundoD2s_F.p3d";
	};
	class b_ArundoD3s_F: Static
	{
		scope = 2;
		displayName = "b_ArundoD3s_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_ArundoD3s_F.p3d";
	};
	class b_FicusC1s_F: Static
	{
		scope = 2;
		displayName = "b_FicusC1s_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_FicusC1s_F.p3d";
	};
	class b_ficusC2d_F: Static
	{
		scope = 2;
		displayName = "b_ficusC2d_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_ficusC2d_F.p3d";
	};
	class b_FicusC2s_F: Static
	{
		scope = 2;
		displayName = "b_FicusC2s_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_FicusC2s_F.p3d";
	};
	class b_NeriumO2d_F: Static
	{
		scope = 2;
		displayName = "b_NeriumO2d_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_NeriumO2d_F.p3d";
	};
	class b_NeriumO2s_F: Static
	{
		scope = 2;
		displayName = "b_NeriumO2s_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_NeriumO2s_F.p3d";
	};
	class b_NeriumO2s_white_F: Static
	{
		scope = 2;
		displayName = "b_NeriumO2s_white_F";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_NeriumO2s_white_F.p3d";
	};
	class b_Thistle_Thorn_Green: Static
	{
		scope = 2;
		displayName = "b_Thistle_Thorn_Green";
		vehicleClass = "MB_A3_Bushes";
		model = "a3\plants_f\Bush\b_Thistle_Thorn_Green.p3d";
	};
	class bw_SetBig_Brains_F: Static
	{
		scope = 2;
		displayName = "bw_SetBig_Brains_F";
		vehicleClass = "MB_A3_Corals";
		model = "a3\plants_f\Bush\bw_SetBig_Brains_F.p3d";
	};
	class bw_SetBig_corals_F: Static
	{
		scope = 2;
		displayName = "bw_SetBig_corals_F";
		vehicleClass = "MB_A3_Corals";
		model = "a3\plants_f\Bush\bw_SetBig_corals_F.p3d";
	};
	class bw_SetBig_TubeG_F: Static
	{
		scope = 2;
		displayName = "bw_SetBig_TubeG_F";
		vehicleClass = "MB_A3_Corals";
		model = "a3\plants_f\Bush\bw_SetBig_TubeG_F.p3d";
	};
	class bw_SetBig_TubeY_F: Static
	{
		scope = 2;
		displayName = "bw_SetBig_TubeY_F";
		vehicleClass = "MB_A3_Corals";
		model = "a3\plants_f\Bush\bw_SetBig_TubeY_F.p3d";
	};
	class bw_SetSmall_Brains_F: Static
	{
		scope = 2;
		displayName = "bw_SetSmall_Brains_F";
		vehicleClass = "MB_A3_Corals";
		model = "a3\plants_f\Bush\bw_SetSmall_Brains_F.p3d";
	};
	class bw_SetSmall_TubeG_F: Static
	{
		scope = 2;
		displayName = "bw_SetSmall_TubeG_F";
		vehicleClass = "MB_A3_Corals";
		model = "a3\plants_f\Bush\bw_SetSmall_TubeG_F.p3d";
	};
	class bw_SetSmall_TubeY_F: Static
	{
		scope = 2;
		displayName = "bw_SetSmall_TubeY_F";
		vehicleClass = "MB_A3_Corals";
		model = "a3\plants_f\Bush\bw_SetSmall_TubeY_F.p3d";
	};
	class BluntRock_apart: Static
	{
		scope = 2;
		displayname = "BluntRock_apart";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntRock_apart.p3d";
	};
	class BluntRock_monolith: Static
	{
		scope = 2;
		displayName = "BluntRock_monolith";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntRock_monolith.p3d";
	};
	class BluntRock_spike: Static
	{
		scope = 2;
		displayName = "BluntRock_spike";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntRock_spike.p3d";
	};
	class BluntRock_wallH: Static
	{
		scope = 2;
		displayName = "BluntRock_wallH";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntRock_wallH.p3d";
	};
	class BluntRock_wallV: Static
	{
		scope = 2;
		displayName = "BluntRock_wallV";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntRock_wallV.p3d";
	};
	class BluntStone_01: Static
	{
		scope = 2;
		displayName = "BluntStone_01";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntStone_01.p3d";
	};
	class BluntStone_01_LC: Static
	{
		scope = 2;
		displayName = "BluntStone_01_LC";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntStone_01_LC.p3d";
	};
	class BluntStone_02: Static
	{
		scope = 2;
		displayName = "BluntStone_02";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntStone_02.p3d";
	};
	class BluntStone_02_LC: Static
	{
		scope = 2;
		displayName = "BluntStone_02_LC";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntStone_02_LC.p3d";
	};
	class BluntStone_03: Static
	{
		scope = 2;
		displayName = "BluntStone_03";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntStone_03.p3d";
	};
	class BluntStone_03_LC: Static
	{
		scope = 2;
		displayName = "BluntStone_03_LC";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntStone_03_LC.p3d";
	};
	class BluntStones_erosion: Static
	{
		scope = 2;
		displayname = "BluntStones_erosion";
		vehicleClass = "MB_A3_Rocks_Blunt";
		model = "a3\rocks_f\Blunt\BluntStones_erosion.p3d";
	};
	class sharp_Rock_apart: Static
	{
		scope = 2;
		displayName = "sharp_Rock_apart";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpRock_apart.p3d";
	};
	class sharp_Rock_monolith: Static
	{
		scope = 2;
		displayName = "sharp_Rock_monolith";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpRock_monolith.p3d";
	};
	class sharp_Rock_spike: Static
	{
		scope = 2;
		displayName = "sharp_Rock_spike";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpRock_spike.p3d";
	};
	class sharp_Rock_wallH: Static
	{
		scope = 2;
		displayname = "sharp_Rock_wallH";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpRock_wallH.p3d";
	};
	class sharp_Rock_wallV: Static
	{
		scope = 2;
		displayname = "sharp_Rock_wallV";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpRock_wallV.p3d";
	};
	class sharp_Stone_01: Static
	{
		scope = 2;
		displayName = "sharp_Stone_01";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpStone_01.p3d";
	};
	class sharp_Stone_01_LC: Static
	{
		scope = 2;
		displayName = "sharp_Stone_01_LC";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpStone_01_LC.p3d";
	};
	class sharp_Stone_02: Static
	{
		scope = 2;
		displayName = "sharp_Stone_02";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpStone_02.p3d";
	};
	class sharpStone_02_LC: Static
	{
		scope = 2;
		displayname = "sharpStone_02_LC";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\sharp\sharpStone_02_LC.p3d";
	};
	class sharp_Stone_03: Static
	{
		scope = 2;
		displayName = "sharp_Stone_03";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpStone_03.p3d";
	};
	class sharpStone_03_LC: Static
	{
		scope = 2;
		displayName = "sharpStone_03_LC";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\Sharp\sharpStone_03_LC.p3d";
	};
	class sharp_Stones_erosion: Static
	{
		scope = 2;
		displayname = "sharp_Stones_erosion";
		vehicleClass = "MB_A3_Rocks_Sharp";
		model = "a3\rocks_f\sharp\sharpStones_erosion.p3d";
	};
	class Stone_medium_Water: Static
	{
		scope = 2;
		displayName = "Stone_medium_Water";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\Stone_medium_W.p3d";
	};
	class Stone_big_Water: Static
	{
		scope = 2;
		displayName = "Stone_big_Water";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\Stone_big_W.p3d";
	};
	class Stone_small_Water: Static
	{
		scope = 2;
		displayName = "Stone_small_Water";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\Stone_small_W.p3d";
	};
	class Stone_Sharp_big_W: Static
	{
		scope = 2;
		displayName = "Stone_Sharp_big_W";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\StoneSharp_big_W.p3d";
	};
	class Stone_Sharp_medium_W: Static
	{
		scope = 2;
		displayname = "Stone_Sharp_medium_W";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\StoneSharp_medium_W.p3d";
	};
	class Stone_Sharp_small_W: Static
	{
		scope = 2;
		displayName = "Stone_Sharp_small_W";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\StoneSharp_small_W.p3d";
	};
	class Stone_Sharp_Wall_W: Static
	{
		scope = 2;
		displayName = "Stone_Sharp_Wall_W";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\StoneSharp_Wall_W.p3d";
	};
	class W_sharpRock_apart: Static
	{
		scope = 2;
		displayName = "W_sharpRock_apart";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpRock_apart.p3d";
	};
	class W_sharpRock_monolith: Static
	{
		scope = 2;
		displayName = "W_sharpRock_monolith";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpRock_monolith.p3d";
	};
	class W_sharpRock_spike: Static
	{
		scope = 2;
		displayName = "W_sharpRock_spike";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpRock_spike.p3d";
	};
	class W_sharpRock_wallH: Static
	{
		scope = 2;
		displayName = "W_sharpRock_wallH";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpRock_wallH.p3d";
	};
	class W_sharpRock_wallV: Static
	{
		scope = 2;
		displayName = "W_sharpRock_wallV";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpRock_wallV.p3d";
	};
	class W_sharpStone_01: Static
	{
		scope = 2;
		displayName = "W_sharpStone_01";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpStone_01.p3d";
	};
	class W_sharpStone_02: Static
	{
		scope = 2;
		displayName = "W_sharpStone_02";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpStone_02.p3d";
	};
	class W_sharpStone_03: Static
	{
		scope = 2;
		displayName = "W_sharpStone_03";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpStone_03.p3d";
	};
	class W_sharpStones_erosion: Static
	{
		scope = 2;
		displayName = "W_sharpStones_erosion";
		vehicleClass = "MB_A3_Rocks_Water";
		model = "a3\rocks_f\water\W_sharpStones_erosion.p3d";
	};
};
