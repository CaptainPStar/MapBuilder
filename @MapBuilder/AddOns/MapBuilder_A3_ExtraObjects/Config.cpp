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
	class MB_Tanoa_Vegetation : MB_A3_Trees
	{
		displayName = "MB Tanoa Vegetation";
		mapbuilder_displayname = "Tanoa Vegetation";
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
	class MB_Tanoa_rocks : MB_A3_Trees
	{
		displayName = "MB Tanoa Rocks";
		mapbuilder_displayname = "Tanoa Rocks";
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
	class MB_Runway : MB_A3_Trees
	{
		displayName = "MB A3 Runway";
		mapbuilder_displayname = "Runway";
	};
	class MB_Runway_Lights : MB_A3_Trees
	{
		displayName = "MB A3 Runway Lights";
		mapbuilder_displayname = "Runway Lights";
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
	
	class Cliff_boulder_F: Static
	{
		scope = 2;
		displayName = "Cliff_Boulder_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_boulder_F.p3d";
	};
	class Cliff_peak_F: Static
	{
		scope = 2;
		displayName = "Cliff_peak_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_peak_F.p3d";
	};
	class Cliff_stone_big_F: Static
	{
		scope = 2;
		displayName = "Cliff_stone_big_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_stone_big_F.p3d";
	};
	class Cliff_stone_big_LC_F: Static
	{
		scope = 2;
		displayName = "Cliff_stone_big_LC_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_stone_big_LC_F.p3d";
	};
	class Cliff_stone_medium_F: Static
	{
		scope = 2;
		displayName = "Cliff_stone_medium_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_stone_medium_F.p3d";
	};
	class Cliff_stone_medium_LC_F: Static
	{
		scope = 2;
		displayName = "Cliff_stone_medium_LC_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_stone_medium_LC_F.p3d";
	
	};
	class Cliff_stone_small_F: Static
	{
		scope = 2;
		displayName = "Cliff_stone_small_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_stone_small_F.p3d";
	};
	class Cliff_stone_small_LC_F: Static
	{
		scope = 2;
		displayName = "Cliff_stone_small_LC_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_stone_small_LC_F.p3d";
	};
	class Cliff_stoneCluster_F: Static
	{
		scope = 2;
		displayName = "Cliff_stoneCluster_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_stoneCluster_F.p3d";
	};
	class Cliff_surfaceMine_F: Static
	{
		scope = 2;
		displayName = "Cliff_surfaceMine_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_surfaceMine_F.p3d";
	};
	class Cliff_wall_long_F: Static
	{
		scope = 2;
		displayName = "Cliff_wall_long_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_wall_long_F.p3d";
	};
	class Cliff_wall_round_F: Static
	{
		scope = 2;
		displayName = "Cliff_wall_round_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_wall_round_F.p3d";
	};
	class Cliff_wall_tall_F: Static
	{
		scope = 2;
		displayName = "Cliff_wall_tall_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\cliff\cliff_wall_tall_F.p3d";
	};
	class LavaBoulder_01_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_01_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_01_F.p3d";
	};
	class LavaBoulder_01_water_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_01_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_01_water_F.p3d";
	};
	class LavaBoulder_02_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_02_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_02_F.p3d";
	};
	class LavaBoulder_02_water_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_02_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_02_water_F.p3d";
	};
	class LavaBoulder_03_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_03_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_03_F.p3d";
	};
	class LavaBoulder_03_water_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_03_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_03_water_F.p3d";
	};
	class LavaBoulder_04_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_04_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_04_F.p3d";
	};
	class LavaBoulder_04_water_F: Static
	{
		scope = 2;
		displayName = "LavaBoulder_04_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaBoulder_04_water_F.p3d";
	};
	class LavaStone_big_F: Static
	{
		scope = 2;
		displayName = "LavaStone_big_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_big_F.p3d";
	};
	class LavaStone_big_LC_F: Static
	{
		scope = 2;
		displayName = "LavaStone_big_LC_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_big_LC_F.p3d";
	};
	class LavaStone_big_water_F: Static
	{
		scope = 2;
		displayName = "LavaStone_big_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_big_water_F.p3d";
	};
	class LavaStone_big_water_LC_F: Static
	{
		scope = 2;
		displayName = "LavaStone_big_water_LC_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_big_water_LC_F.p3d";
	};
	class LavaStone_small_F: Static
	{
		scope = 2;
		displayName = "LavaStone_small_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_small_F.p3d";
	};
	class LavaStone_small_LC_F: Static
	{
		scope = 2;
		displayName = "LavaStone_small_LC_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_small_LC_F.p3d";
	};
	class LavaStone_small_water_F: Static
	{
		scope = 2;
		displayName = "LavaStone_small_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_small_water_F.p3d";
	};
	class LavaStone_small_water_LC_F: Static
	{
		scope = 2;
		displayName = "LavaStone_small_water_LC_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStone_small_water_LC_F.p3d";
	};
	class LavaStoneCluster_large_F: Static
	{
		scope = 2;
		displayName = "LavaStoneCluster_large_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStoneCluster_large_F.p3d";
	};
	class LavaStoneCluster_large_water_F: Static
	{
		scope = 2;
		displayName = "LavaStoneCluster_large_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStoneCluster_large_water_F.p3d";
	};
	class LavaStoneCluster_small_F: Static
	{
		scope = 2;
		displayName = "LavaStoneCluster_small_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStoneCluster_small_F.p3d";
	};
	class LavaStoneCluster_small_water_F: Static
	{
		scope = 2;
		displayName = "LavaStoneCluster_small_water_F";
		vehicleClass = "MB_Tanoa_rocks";
		model = "a3\rocks_f_exp\LavaStones\LavaStoneCluster_small_water_F.p3d";
	};
	class b_Ginger_3_F: Static
	{
		scope = 2;
		displayName = "b_Ginger_3_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\b_Ginger_3_F.p3d";
	};
	class b_Ginger_9_F: Static
	{
		scope = 2;
		displayName = "b_Ginger_9_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\b_Ginger_9_F.p3d";
	};
	class b_Ginger_20_F: Static
	{
		scope = 2;
		displayName = "b_Ginger_20_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\b_Ginger_20_F.p3d";
	};
	class b_Sugarcane_mature_row_F: Static
	{
		scope = 2;
		displayName = "b_Sugarcane_mature_row_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\b_Sugarcane_mature_row_F.p3d";
	};
	class b_Sugarcane_sapling_row_F: Static
	{
		scope = 2;
		displayName = "b_Sugarcane_sapling_row_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\b_Sugarcane_sapling_row_F.p3d";
	};
	class b_Sugarcane_sapling_single_F: Static
	{
		scope = 2;
		displayName = "b_Sugarcane_sapling_single_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\b_Sugarcane_sapling_single_F.p3d";
	};
	class t_Banana_F: Static
	{
		scope = 2;
		displayName = "t_Banana_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\t_Banana_F.p3d";
	};
	class t_Banana_slim_F: Static
	{
		scope = 2;
		displayName = "t_Banana_slim_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\t_Banana_slim_F.p3d";
	};
	class t_Banana_wild_F: Static
	{
		scope = 2;
		displayName = "t_Banana_wild_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\t_Banana_wild_F.p3d";
	};
	class t_Cacao_ripe_F: Static
	{
		scope = 2;
		displayName = "t_Cacao_ripe_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Crop\t_Cacao_ripe_F.p3d";
	};
	class d_LianaTangle_narrow_F: Static
	{
		scope = 2;
		displayName = "d_LianaTangle_narrow_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Lianas\d_LianaTangle_narrow_F.p3d";
	};
	class d_LianaTangle_wide_F: Static
	{
		scope = 2;
		displayName = "d_LianaTangle_wide_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Lianas\d_LianaTangle_wide_F.p3d";
	};
	class b_Calochlaena_F: Static
	{
		scope = 2;
		displayName = "b_Calochlaena_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Calochlaena_F.p3d";
	};
	class b_Cestrum_F: Static
	{
		scope = 2;
		displayName = "b_Cestrum_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Cestrum_F.p3d";
	};
	class b_Colored_red_F: Static
	{
		scope = 2;
		displayName = "b_Colored_red_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Colored_red_F.p3d";
	};
	class b_Colored_yellow_F: Static
	{
		scope = 2;
		displayName = "b_Colored_yellow_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Colored_yellow_F.p3d";
	};
	class b_Cycas_F: Static
	{
		scope = 2;
		displayName = "b_Cycas_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Cycas_F.p3d";
	};
	class b_FicusC2d_tanoa_F: Static
	{
		scope = 2;
		displayName = "b_FicusC2d_tanoa_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_FicusC2d_tanoa_F.p3d";
	};
	class b_Gardenia_dec_01_F: Static
	{
		scope = 2;
		displayName = "b_Gardenia_dec_01_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Gardenia_dec_01_F.p3d";
	};
	class b_Gardenia_dec_02_F: Static
	{
		scope = 2;
		displayName = "b_Gardenia_dec_02_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Gardenia_dec_02_F.p3d";
	};
	class b_Gardenia_F: Static
	{
		scope = 2;
		displayName = "b_Gardenia_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Gardenia_F.p3d";
	};
	class b_Leucaena_F: Static
	{
		scope = 2;
		displayName = "b_Leucaena_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Leucaena_F.p3d";
	};
	class b_NeriumO2d_tanoa_F: Static
	{
		scope = 2;
		displayName = "b_NeriumO2d_tanoa_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_NeriumO2d_tanoa_F.p3d";
	};
	class b_PiperMeth_F: Static
	{
		scope = 2;
		displayName = "b_PiperMeth_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_PiperMeth_F.p3d";
	};
	class b_Rhizophora_F: Static
	{
		scope = 2;
		displayName = "b_Rhizophora_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Shrub\b_Rhizophora_F.p3d";
	};
	class t_Agathis_tall_F: Static
	{
		scope = 2;
		displayName = "t_Agathis_tall_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Agathis_tall_F.p3d";
	};
	class t_Agathis_wide_F: Static
	{
		scope = 2;
		displayName = "t_Agathis_wide_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Agathis_wide_F.p3d";
	};
	class t_Albizia_F: Static
	{
		scope = 2;
		displayName = "t_Albizia_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Albizia_F.p3d";
	};
	class t_Cocos_bend_F: Static
	{
		scope = 2;
		displayName = "t_Cocos_bend_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Cocos_bend_F.p3d";
	};
	class t_Cocos_small_F: Static
	{
		scope = 2;
		displayName = "t_Cocos_small_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Cocos_small_F.p3d";
	};
	class t_Cocos_tall_F: Static
	{
		scope = 2;
		displayName = "t_Cocos_tall_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Cocos_tall_F.p3d";
	};
	class t_CocosNucifera2s_small_F: Static
	{
		scope = 2;
		displayName = "t_CocosNucifera2s_small_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_CocosNucifera2s_small_F.p3d";
	};
	class t_CocosNucifera3s_bend_F: Static
	{
		scope = 2;
		displayName = "t_CocosNucifera3s_bend_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_CocosNucifera3s_bend_F.p3d";
	};
	class t_CocosNucifera3s_tall_F: Static
	{
		scope = 2;
		displayName = "t_CocosNucifera3s_tall_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_CocosNucifera3s_tall_F.p3d";
	};
	class t_Cyathea_F: Static
	{
		scope = 2;
		displayName = "t_Cyathea_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Cyathea_F.p3d";
	};
	class t_Ficus_big_F: Static
	{
		scope = 2;
		displayName = "t_Ficus_big_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Ficus_big_F.p3d";
	};
	class t_Ficus_medium_F: Static
	{
		scope = 2;
		displayName = "t_Ficus_medium_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Ficus_medium_F.p3d";
	};
	class t_Ficus_small_F: Static
	{
		scope = 2;
		displayName = "t_Ficus_small_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Ficus_small_F.p3d";
	};
	class t_Inocarpus_F: Static
	{
		scope = 2;
		displayName = "t_Inocarpus_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Inocarpus_F.p3d";
	};
	class t_Leucaena_F: Static
	{
		scope = 2;
		displayName = "t_Leucaena_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Leucaena_F.p3d";
	};
	class t_Millettia_F: Static
	{
		scope = 2;
		displayName = "t_Millettia_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Millettia_F.p3d";
	};
	class t_Millettia_plantation_F: Static
	{
		scope = 2;
		displayName = "t_Millettia_plantation_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Millettia_plantation_F.p3d";
	};
	class t_Palaquium_F: Static
	{
		scope = 2;
		displayName = "t_Palaquium_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Palaquium_F.p3d";
	};
	class t_Pritchardia_F: Static
	{
		scope = 2;
		displayName = "t_Pritchardia_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Pritchardia_F.p3d";
	};
	class t_Rhizophora_F: Static
	{
		scope = 2;
		displayName = "t_Rhizophora_F";
		vehicleClass = "MB_Tanoa_Vegetation";
		model = "a3\vegetation_f_exp\Tree\t_Rhizophora_F.p3d";
	};
	class VergePost_F: Static
	{
		scope = 2;
		displayName = "VergePost_F";
		vehicleClass = "MB_A3_SignsF_SignT";
		model = "a3\signs_f\signT\vergepost_f.p3d";
	};
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
	class MB_Cype_Runway: Static
	{
		displayName = "";
		accuracy = 1000;
		vehicleClass = "MB_Runway";
		model = "";
		simulation = "house";
		cost = 0;
		armor = 1000;
		ladders[] = {};
		placement = "vertical";
	};
	class MB_Cype_Light: Static
	{
		displayName = "";
		accuracy = 1000;
		vehicleClass = "MB_Runway_Lights";
		model = "";
		simulation = "house";
		cost = 0;
		armor = 1000;
		ladders[] = {};
		placement = "vertical";
	};
	class MB_Land_NavigLight: MB_Cype_Light
	{
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_Land_NavigLight0";
		model = "\A3\Roads_F\Runway\RunwayLights\NavigLight.p3d";
	};
	class MB_Land_Flush_Light_green_F: MB_Cype_Light
	{
		scope = 2;
		displayName = "Flush_Light_green";
		model = "\A3\Roads_F\Runway\RunwayLights\Flush_Light_green_F.p3d";
	};
	class MB_Land_Flush_Light_red_F: MB_Cype_Light
	{
		scope = 2;
		displayName = "Flush_Light_red";
		model = "\A3\Roads_F\Runway\RunwayLights\Flush_Light_red_F.p3d";
	};
	class MB_Land_Flush_Light_yellow_F: MB_Cype_Light
	{
		scope = 2;
		displayName = "Flush_Light_yellow";
		model = "\A3\Roads_F\Runway\RunwayLights\Flush_Light_yellow_F.p3d";
	};
	class MB_Land_NavigLight_3_F: MB_Cype_Light
	{
		scope = 2;
		displayName = "NavigLight_3";
		model = "\A3\Roads_F\Runway\RunwayLights\NavigLight_3_F.p3d";
	};
	class MB_Land_runway_edgelight: MB_Cype_Light
	{
		scope = 2;
		displayName = "runway_edgelight";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_edgelight.p3d";
	};
	class MB_Land_runway_edgelight_blue_F: MB_Cype_Light
	{
		scope = 2;
		displayName = "runway_edgelight_blue_F";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_edgelight_blue_F.p3d";
	};
	class MB_Land_runway_PAPI: MB_Cype_Light
	{
		scope = 2;
		displayName = "runway_PAPI";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_PAPI.p3d";
	};
	class MB_Land_runway_PAPI_2: MB_Cype_Light
	{
		scope = 2;
		displayName = "runway_PAPI_2";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_PAPI_2.p3d";
	};
	class MB_Land_runway_PAPI_3: MB_Cype_Light
	{
		scope = 2;
		displayName = "runway_PAPI_3";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_PAPI_3.p3d";
	};
	class MB_Land_runway_PAPI_4: MB_Cype_Light
	{
		scope = 2;
		displayName = "runway_PAPI_4";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_PAPI_4.p3d";
	};
	class MB_Land_Line_curve_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Line_curve_F";
		model = "\A3\Roads_F\Runway\Line_curve_F.p3d";
	};
	class MB_Land_Line_curve_long_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Line_curve_long_F";
		model = "\A3\Roads_F\Runway\Line_curve_long_F.p3d";
	};
	class MB_Land_Line_long_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Line_long_F";
		model = "\A3\Roads_F\Runway\Line_long_F.p3d";
	};
		class MB_Land_Line_short_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Line_short_F";
		model = "\A3\Roads_F\Runway\Line_short_F.p3d";
	};
	class MB_Land_runway_beton_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Runway_Beton_F";
		model = "\A3\Roads_F\Runway\runway_beton_F.p3d";
	};
	class MB_Land_runway_end02_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_end02_F";
		model = "\A3\Roads_F\Runway\runway_end02_F.p3d";
	};
	class MB_Land_runway_end04_FF: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_end04_F";
		model = "\A3\Roads_F\Runway\runway_end04_F.p3d";
	};
	class MB_Land_runway_end06_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_end06_F";
		model = "\A3\Roads_F\Runway\runway_end06_F.p3d";
	};
	class MB_Land_runway_end22_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_end22_F";
		model = "\A3\Roads_F\Runway\runway_end22_F.p3d";
	};
	class MB_Land_runway_end26_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_end26_F";
		model = "\A3\Roads_F\Runway\runway_end26_F.p3d";
	};
		class MB_Land_runway_Left_end22_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_Left_end22_F";
		model = "\A3\Roads_F\Runway\runway_Left_end22_F.p3d";
	};
	class MB_Land_runway_Left_secondary_end04_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_Left_secondary_end04_F";
		model = "\A3\Roads_F\Runway\runway_Left_secondary_end04_F.p3d";
	};
	class MB_Land_runway_main_40_2Lines_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_main_40_2Lines_F";
		model = "\A3\Roads_F\Runway\runway_main_40_2Lines_F.p3d";
	};
	class MB_Land_runway_main_40_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_main_40_F";
		model = "\A3\Roads_F\Runway\runway_main_40_F.p3d";
	};
	class MB_Land_runway_main_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_main_F";
		model = "\A3\Roads_F\Runway\runway_main_F.p3d";
	};
	class MB_Land_runway_Right_end04_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_Right_end04_F";
		model = "\A3\Roads_F\Runway\runway_Right_end04_F.p3d";
	};
	class MB_Land_runway_Right_secondary_end22_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_Right_secondary_end22_F";
		model = "\A3\Roads_F\Runway\runway_Right_secondary_end22_F.p3d";
	};
	class MB_Land_runway_secondary_40_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_secondary_40_F";
		model = "\A3\Roads_F\Runway\runway_secondary_40_F.p3d";
	};
		class MB_Land_runway_secondary_end04_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_secondary_end04_F";
		model = "\A3\Roads_F\Runway\runway_secondary_end04_F.p3d";
	};
	class MB_Land_runway_secondary_end22_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_secondary_end22_F";
		model = "\A3\Roads_F\Runway\runway_secondary_end22_F.p3d";
	};
	class MB_Land_runway_secondary_SkidMark_1_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_secondary_SkidMark_1_F";
		model = "\A3\Roads_F\Runway\runway_secondary_SkidMark_1_F.p3d";
	};
	class MB_Land_runway_secondary_SkidMark_2_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_secondary_SkidMark_2_F";
		model = "\A3\Roads_F\Runway\runway_secondary_SkidMark_2_F.p3d";
	};
	class MB_Land_runway_secondary_SkidMark_3_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_secondary_SkidMark_3_F";
		model = "\A3\Roads_F\Runway\runway_secondary_SkidMark_3_F.p3d";
	};
	class MB_Land_runway_SkidMark_1_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_SkidMark_1_F";
		model = "\A3\Roads_F\Runway\runway_SkidMark_1_F.p3d";
	};
	class MB_Land_runway_SkidMark_2_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_SkidMark_2_F";
		model = "\A3\Roads_F\Runway\runway_SkidMark_2_F.p3d";
	};
		class MB_Land_runway_SkidMark_3_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_SkidMark_3_F";
		model = "\A3\Roads_F\Runway\runway_SkidMark_3_F.p3d";
	};
	class MB_Land_runway_SkidMark_noLInes_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "runway_SkidMark_noLInes_F";
		model = "\A3\Roads_F\Runway\runway_SkidMark_noLInes_F.p3d";
	};
	class MB_Land_Track_north01_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_north01_F";
		model = "\A3\Roads_F\Runway\Track_north01_F.p3d";
	};
	class MB_Land_Track_north02_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_north02_F";
		model = "\A3\Roads_F\Runway\Track_north02_F.p3d";
	};
	class MB_Land_Track_north03_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_north03_F";
		model = "\A3\Roads_F\Runway\Track_north03_F.p3d";
	};
	class MB_Land_Track_south01_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_south01_F";
		model = "\A3\Roads_F\Runway\Track_south01_F.p3d";
	};
	class MB_Land_Track_south02_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_south02_F";
		model = "\A3\Roads_F\Runway\Track_south02_F.p3d";
	};
	class MB_Land_Track_south03_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_south03_F";
		model = "\A3\Roads_F\Runway\Track_south03_F.p3d";
	};
	class MB_Land_Track_south04_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_south04_F";
		model = "\A3\Roads_F\Runway\Track_south04_F.p3d";
	};
	class MB_Land_Track_south05_F: MB_Cype_Runway
	{
		scope = 2;
		displayName = "Track_south05_F";
		model = "\A3\Roads_F\Runway\Track_south05_F.p3d";
	};
};
