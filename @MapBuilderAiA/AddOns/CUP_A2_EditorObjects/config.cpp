////////////////////////////////////////////////////////////////////																																			    class CUP_A2_EditorObjects_Plants
//DeRap: Produced from mikero's Dos Tools Dll version 4.91
//Tue Feb 10 22:40:49 2015 : Source 'file' date Tue Feb 10 22:40:49 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MapBuilder_A2_EditorObjects : config.bin{
class CfgPatches
{
 class CUP_A2_EditorObjects
 {
  units[] = {};
  weapons[] = {};
  requiredAddons[] = {"CUP_Worlds"};
  projectName = "Map Builder";
  author = "MemphisBelle";
 };
};
class CfgVehicleClasses
{
 class CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Trees";
  mapbuilder_library = "CUP";
  mapbuilder_displayname = "Trees (A2)";
 };
 class CUP_A2_EditorObjects_Deadtrees : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Deadtrees";
  mapbuilder_displayname = "Deadtrees (A2)";
 };
 class CUP_A2_EditorObjects_Bushes : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Bushes";
  mapbuilder_displayname = "Bushes (A2)";
 };
 class CUP_A2_EditorObjects_Plants : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Plants";
  mapbuilder_displayname = "Plants (A2)";
 };
 class CUP_A2_EditorObjects_Rocks : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Rocks";
  mapbuilder_displayname = "Rocks (A2)";
 };
 class CUP_A2_EditorObjects_Water : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Water";
  mapbuilder_displayname = "Water (A2)";
 };
 class CUP_A2_EditorObjects_Various : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Various";
  mapbuilder_displayname = "Various (A2)";
 };
 class CUP_A2_EditorObjects_Civilian : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Civilian Structures";
  mapbuilder_displayname = "Civilian Structures (A2)";
 };
 class CUP_A2_EditorObjects_Industry : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Industrial Structures";
  mapbuilder_displayname = "Industrial Structures (A2)";
 };
 class CUP_A2_EditorObjects_Military : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Military Structures";
  mapbuilder_displayname = "Military Structures (A2)";
 };
 class CUP_A2_EditorObjects_Cargo : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Cargo";
  mapbuilder_displayname = "Cargo (A2)";
 };
 class CUP_A2_EditorObjects_Signs : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Signs";
  mapbuilder_displayname = "Signs (A2)";
 };
 class CUP_A2_EditorObjects_Walls : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Walls";
  mapbuilder_displayname = "Walls (A2)";
 };
 class CUP_A2_EditorObjects_Fences : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Fences";
  mapbuilder_displayname = "Fences (A2)";
 };
 class CUP_A2_EditorObjects_Pipelines : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Pipelines";
  mapbuilder_displayname = "Pipelines (A2)";
 };
 class CUP_A2_EditorObjects_Powerlines : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Powerlines";
  mapbuilder_displayname = "Powerlines (A2)";
 };
 class CUP_A2_EditorObjects_Roads : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Roads";
  mapbuilder_displayname = "Roads (A2)";
 };
 class CUP_A2_EditorObjects_Rails : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Rails";
  mapbuilder_displayname = "Rails (A2)";
 };
 class CUP_A2_EditorObjects_Runway : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Runway";
  mapbuilder_displayname = "Runway (A2)";
 };
 class CUP_A2_EditorObjects_Sidewalks : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Sidewalks";
  mapbuilder_displayname = "Sidewalks (A2)";
 };
 class CUP_A2_EditorObjects_Pier : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Pier";
  mapbuilder_displayname = "Pier (A2)";
 };
 class CUP_A2_EditorObjects_Ruins : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Ruins";
  mapbuilder_displayname = "Ruins (A2)";
 };
 class CUP_A2_EditorObjects_Wrecks : CUP_A2_EditorObjects_Trees
 {
  displayName = "CUP A2 Wrecks";
  mapbuilder_displayname = "Wrecks (A2)";
 };
};
class CfgVehicles
{
 class Static;
 class CUP_A2_Baseclass: Static
 {
  displayName = "";
  accuracy = 1000;
  vehicleClass = "CUP_A2_EditorObjects_Trees";
  model = "";
  nameSound = "";
  animated = 0;
  simulation = "house";
  cost = 0;
  armor = 1000;
  ladders[] = {};
  icon = "iconObject";
  placement = "vertical";
  mapbuilder_filter = "A2";
 };
 class CUP_A2_Various: CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Various";
  icon = "iconObject";
 };
 class CUP_A2_Bushes : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Bushes";
  icon = "iconObject";
 };
 class CUP_A2_Deadtrees : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Deadtrees";
  icon = "iconObject";
 };
 class CUP_A2_Plants : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Plants";
  icon = "iconObject";
 };
 class CUP_A2_Rocks : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Rocks";
  icon = "iconObject";
 };
 class CUP_A2_Water : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Water";
  icon = "iconObject";
 };
 class CUP_A2_Civilian : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Civilian";
  icon = "iconObject";
 };
 class CUP_A2_Industry : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Industry";
  icon = "iconObject";
 };
 class CUP_A2_Military : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Military";
  icon = "iconObject";
 };
 class CUP_A2_Cargo : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Cargo";
  icon = "iconObject";
 };
 class CUP_A2_Signs : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Signs";
  icon = "iconObject";
 };
 class CUP_A2_Walls : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Walls";
  icon = "iconObject";
 };
 class CUP_A2_Fences : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Fences";
  icon = "iconObject";
 };
 class CUP_A2_Pipelines : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Pipelines";
  icon = "iconObject";
 };
 class CUP_A2_Powerlines : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Powerlines";
  icon = "iconObject";
 };
 class CUP_A2_Roads : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Roads";
  icon = "iconObject";
 };
 class CUP_A2_Rails : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Rails";
  icon = "iconObject";
 };
 class CUP_A2_Runway : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Runway";
  icon = "iconObject";
 };
 class CUP_A2_Sidewalks : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Sidewalks";
  icon = "iconObject";
 };
 class CUP_A2_Pier : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Pier";
  icon = "iconObject";
 };
 class CUP_A2_Ruins : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Ruins";
  icon = "iconObject";
 };
 class CUP_A2_Wrecks : CUP_A2_Baseclass
 {
  vehicleClass = "CUP_A2_EditorObjects_Wrecks";
  icon = "iconObject";
 };
 class CUP_A2_t_acer2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_acer2s";
  model = "\ca\plants2\tree\t_acer2s.p3d";
 };
 class CUP_A2_t_alnus2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_alnus2s";
  model = "\ca\plants2\tree\t_alnus2s.p3d";
 };
 class CUP_A2_t_amygdalusc2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_amygdalusc2s_ep1";
  model = "\ca\plants_e\tree\t_amygdalusc2s_ep1.p3d";
 };
 class CUP_A2_t_betula1f: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_betula1f";
  model = "\ca\plants2\tree\t_betula1f.p3d";
 };
 class CUP_A2_t_betula2f: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_betula2f";
  model = "\ca\plants2\tree\t_betula2f.p3d";
 };
 class CUP_A2_t_betula2f_summer: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_betula2f_summer";
  model = "\ca\plants_e2\tree\t_betula2f_summer.p3d";
 };
 class CUP_A2_t_betula2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_betula2s";
  model = "\ca\plants2\tree\t_betula2s.p3d";
 };
 class CUP_A2_t_betula2s_summer: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_betula2s_summer";
  model = "\ca\plants_e2\tree\t_betula2s_summer.p3d";
 };
 class CUP_A2_t_betula2w: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_betula2w";
  model = "\ca\plants2\tree\t_betula2w.p3d";
 };
 class CUP_A2_t_carpinus2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_carpinus2s";
  model = "\ca\plants2\tree\t_carpinus2s.p3d";
 };
 class CUP_A2_t_fagus2f: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_fagus2f";
  model = "\ca\plants2\tree\t_fagus2f.p3d";
 };
 class CUP_A2_t_fagus2f_summer: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_fagus2f_summer";
  model = "\ca\plants_e2\tree\t_fagus2f_summer.p3d";
 };
 class CUP_A2_t_fagus2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_fagus2s";
  model = "\ca\plants2\tree\t_fagus2s.p3d";
 };
 class CUP_A2_t_fagus2s_summer: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_fagus2s_summer";
  model = "\ca\plants_e2\tree\t_fagus2s_summer.p3d";
 };
 class CUP_A2_t_fagus2w: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_fagus2w";
  model = "\ca\plants2\tree\t_fagus2w.p3d";
 };
 class CUP_A2_t_ficusb2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_ficusb2s_ep1";
  model = "\ca\plants_e\tree\t_ficusb2s_ep1.p3d";
 };
 class CUP_A2_t_fraxinus2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_fraxinus2s";
  model = "\ca\plants2\tree\t_fraxinus2s.p3d";
 };
 class CUP_A2_t_fraxinus2w: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_fraxinus2w";
  model = "\ca\plants2\tree\t_fraxinus2w.p3d";
 };
 class CUP_A2_t_juniperusc2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_juniperusc2s_ep1";
  model = "\ca\plants_e\tree\t_juniperusc2s_ep1.p3d";
 };
 class CUP_A2_t_larix3f: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_larix3f";
  model = "\ca\plants2\tree\t_larix3f.p3d";
 };
 class CUP_A2_t_larix3s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_larix3s";
  model = "\ca\plants2\tree\t_larix3s.p3d";
 };
 class CUP_A2_t_malus1s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_malus1s";
  model = "\ca\plants2\tree\t_malus1s.p3d";
 };
 class CUP_A2_t_malus1s_summer: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_malus1s_summer";
  model = "\ca\plants_e2\tree\t_malus1s_summer.p3d";
 };
 class CUP_A2_t_picea1s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_picea1s";
  model = "\ca\plants2\tree\t_picea1s.p3d";
 };
 class CUP_A2_t_picea2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_picea2s";
  model = "\ca\plants2\tree\t_picea2s.p3d";
 };
 class CUP_A2_t_picea3f: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_picea3f";
  model = "\ca\plants2\tree\t_picea3f.p3d";
 };
 class CUP_A2_t_pinuse2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_pinuse2s_ep1";
  model = "\ca\plants_e\tree\t_pinuse2s_ep1.p3d";
 };
 class CUP_A2_t_pinusn1s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_pinusn1s";
  model = "\ca\plants2\tree\t_pinusn1s.p3d";
 };
 class CUP_A2_t_pinuss2f: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_pinuss2f";
  model = "\ca\plants2\tree\t_pinuss2f.p3d";
 };
 class CUP_A2_t_pinuss3s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_pinuss3s_ep1";
  model = "\ca\plants_e\tree\t_pinuss3s_ep1.p3d";
 };
 class CUP_A2_t_pistacial2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_pistacial2s_ep1";
  model = "\ca\plants_e\tree\t_pistacial2s_ep1.p3d";
 };
 class CUP_A2_t_populus3s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_populus3s";
  model = "\ca\plants2\tree\t_populus3s.p3d";
 };
 class CUP_A2_t_populusb2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_populusb2s_ep1";
  model = "\ca\plants_e\tree\t_populusb2s_ep1.p3d";
 };
 class CUP_A2_t_populusf2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_populusf2s_ep1";
  model = "\ca\plants_e\tree\t_populusf2s_ep1.p3d";
 };
 class CUP_A2_t_prunuss2s_ep1: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_prunuss2s_ep1";
  model = "\ca\plants_e\tree\t_prunuss2s_ep1.p3d";
 };
 class CUP_A2_t_pyrus2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_pyrus2s";
  model = "\ca\plants2\tree\t_pyrus2s.p3d";
 };
 class CUP_A2_t_quercus2f: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_quercus2f";
  model = "\ca\plants2\tree\t_quercus2f.p3d";
 };
 class CUP_A2_t_quercus2f_summer: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_quercus2f_summer";
  model = "\ca\plants_e2\tree\t_quercus2f_summer.p3d";
 };
 class CUP_A2_t_quercus3s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_quercus3s";
  model = "\ca\plants2\tree\t_quercus3s.p3d";
 };
 class CUP_A2_t_salix2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_salix2s";
  model = "\ca\plants2\tree\t_salix2s.p3d";
 };
 class CUP_A2_t_sorbus2s: CUP_A2_Baseclass
 {
  scope = 2;
  displayName = "t_sorbus2s";
  model = "\ca\plants2\tree\t_sorbus2s.p3d";
 };
 class CUP_A2_a_statue01: CUP_A2_Various
 {
  scope = 2;
  displayName = "a_statue01";
  model = "\ca\buildings2\a_statue\a_statue01.p3d";
 };
 class CUP_A2_a_statue02: CUP_A2_Various
 {
  scope = 2;
  displayName = "a_statue02";
  model = "\ca\buildings2\a_statue\a_statue02.p3d";
 };
 class CUP_A2_a_tvtower_base: CUP_A2_Various
 {
  scope = 2;
  displayName = "a_tvtower_base";
  model = "\ca\structures\a_tvtower\a_tvtower_base.p3d";
 };
 class CUP_A2_a_tvtower_mid: CUP_A2_Various
 {
  scope = 2;
  displayName = "a_tvtower_mid";
  model = "\ca\structures\a_tvtower\a_tvtower_mid.p3d";
 };
 class CUP_A2_a_tvtower_top: CUP_A2_Various
 {
  scope = 2;
  displayName = "a_tvtower_top";
  model = "\ca\structures\a_tvtower\a_tvtower_top.p3d";
 };
 class CUP_A2_almara: CUP_A2_Various
 {
  scope = 2;
  displayName = "almara";
  model = "\ca\structures\furniture\cases\almara\almara.p3d";
 };
 class CUP_A2_antenna: CUP_A2_Various
 {
  scope = 2;
  displayName = "antenna";
  model = "\ca\misc3\antenna.p3d";
 };
 class CUP_A2_armchair: CUP_A2_Various
 {
  scope = 2;
  displayName = "armchair";
  model = "\ca\buildings\furniture\armchair.p3d";
 };
 class CUP_A2_backpackheap: CUP_A2_Various
 {
  scope = 2;
  displayName = "backpackheap";
  model = "\ca\misc\misc_backpackheap.p3d";
 };
 class CUP_A2_bag_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "bag_ep1";
  model = "\ca\structures_e\misc\misc_interier\bag_ep1.p3d";
 };
 class CUP_A2_bags_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "bags_ep1";
  model = "\ca\structures_e\misc\misc_market\bags_ep1.p3d";
 };
 class CUP_A2_bags_stack_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "bags_stack_ep1";
  model = "\ca\structures_e\misc\misc_market\bags_stack_ep1.p3d";
 };
 class CUP_A2_basin_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "basin_a";
  model = "\ca\structures\furniture\bathroom\basin_a\basin_a.p3d";
 };
 class CUP_A2_basket_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "basket_ep1";
  model = "\ca\structures_e\misc\misc_interier\basket_ep1.p3d";
 };
 class CUP_A2_bath: CUP_A2_Various
 {
  scope = 2;
  displayName = "bath";
  model = "\ca\buildings\furniture\bath.p3d";
 };
 class CUP_A2_bed_husbands: CUP_A2_Various
 {
  scope = 2;
  displayName = "bed_husbands";
  model = "\ca\buildings\furniture\bed_husbands.p3d";
 };
 class CUP_A2_bench_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "bench_ep1";
  model = "\ca\structures_e\misc\misc_interier\bench_ep1.p3d";
 };
 class CUP_A2_blankets_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "blankets_ep1";
  model = "\ca\structures_e\misc\misc_interier\blankets_ep1.p3d";
 };
 class CUP_A2_bleacher: CUP_A2_Various
 {
  scope = 2;
  displayName = "bleacher";
  model = "\ca\misc_e\bleacher.p3d";
 };
 class CUP_A2_boatsmall_1: CUP_A2_Various
 {
  scope = 2;
  displayName = "boatsmall_1";
  model = "\ca\misc3\boatsmall_1.p3d";
 };
 class CUP_A2_boatsmall_2a: CUP_A2_Various
 {
  scope = 2;
  displayName = "boatsmall_2a";
  model = "\ca\misc3\boatsmall_2a.p3d";
 };
 class CUP_A2_boatsmall_2b: CUP_A2_Various
 {
  scope = 2;
  displayName = "boatsmall_2b";
  model = "\ca\misc3\boatsmall_2b.p3d";
 };
 class CUP_A2_boogieman: CUP_A2_Various
 {
  scope = 2;
  displayName = "boogieman";
  model = "\ca\structures\misc\misc_small\misc_boogieman.p3d";
 };
 class CUP_A2_boots_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "boots_ep1";
  model = "\ca\structures_e\misc\misc_interier\boots_ep1.p3d";
 };
 class CUP_A2_bowl_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "bowl_ep1";
  model = "\ca\structures_e\misc\misc_interier\bowl_ep1.p3d";
 };
 class CUP_A2_brana: CUP_A2_Various
 {
  scope = 2;
  displayName = "brana";
  model = "\ca\misc\brana.p3d";
 };
 class CUP_A2_briefcase: CUP_A2_Various
 {
  scope = 2;
  displayName = "briefcase";
  model = "\ca\misc3\briefcase.p3d";
 };
 class CUP_A2_bucket: CUP_A2_Various
 {
  scope = 2;
  displayName = "bucket";
  model = "\ca\structures\furniture\decoration\bucket\bucket.p3d";
 };
 class CUP_A2_bucket_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "bucket_ep1";
  model = "\ca\structures_e\misc\misc_interier\bucket_ep1.p3d";
 };
 class CUP_A2_busstop: CUP_A2_Various
 {
  scope = 2;
  displayName = "busstop";
  model = "\ca\structures\misc\misc_busstop\busstop.p3d";
 };
 class CUP_A2_busstop_village: CUP_A2_Various
 {
  scope = 2;
  displayName = "busstop_village";
  model = "\ca\structures\misc\misc_busstop\busstop_village.p3d";
 };
 class CUP_A2_cabinet_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "cabinet_ep1";
  model = "\ca\structures_e\misc\misc_interier\cabinet_ep1.p3d";
 };
 class CUP_A2_cages_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "cages_ep1";
  model = "\ca\structures_e\misc\misc_market\cages_ep1.p3d";
 };
 class CUP_A2_campfire: CUP_A2_Various
 {
  scope = 2;
  displayName = "campfire";
  model = "\ca\misc3\campfire.p3d";
 };
 class CUP_A2_canister_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "canister_ep1";
  model = "\ca\structures_e\misc\misc_interier\canister_ep1.p3d";
 };
 class CUP_A2_carpet_2_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "carpet_2_ep1";
  model = "\ca\structures_e\misc\misc_interier\carpet_2_ep1.p3d";
 };
 class CUP_A2_carpet_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "carpet_ep1";
  model = "\ca\structures_e\misc\misc_interier\carpet_ep1.p3d";
 };
 class CUP_A2_carpet_rack_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "carpet_rack_ep1";
  model = "\ca\structures_e\misc\misc_market\carpet_rack_ep1.p3d";
 };
 class CUP_A2_carpet_wall_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "carpet_wall_ep1";
  model = "\ca\structures_e\misc\misc_interier\carpet_wall_ep1.p3d";
 };
 class CUP_A2_carpet_wallv2_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "carpet_wallv2_ep1";
  model = "\ca\structures_e\misc\misc_interier\carpet_wallv2_ep1.p3d";
 };
 class CUP_A2_carpetv2_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "carpetv2_ep1";
  model = "\ca\structures_e\misc\misc_interier\carpetv2_ep1.p3d";
 };
 class CUP_A2_case_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_a";
  model = "\ca\structures\furniture\cases\case_a\case_a.p3d";
 };
 class CUP_A2_case_bedroom_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_bedroom_a";
  model = "\ca\structures\furniture\cases\case_bedroom_a\case_bedroom_a.p3d";
 };
 class CUP_A2_case_bedroom_b: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_bedroom_b";
  model = "\ca\buildings\furniture\case_bedroom_b.p3d";
 };
 class CUP_A2_case_cans_b: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_cans_b";
  model = "\ca\structures\furniture\cases\case_cans_b\case_cans_b.p3d";
 };
 class CUP_A2_case_d: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_d";
  model = "\ca\structures\furniture\cases\case_d\case_d.p3d";
 };
 class CUP_A2_case_wall_unit_part_c: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_wall_unit_part_c";
  model = "\ca\buildings\furniture\case_wall_unit_part_c.p3d";
 };
 class CUP_A2_case_wall_unit_part_d: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_wall_unit_part_d";
  model = "\ca\buildings\furniture\case_wall_unit_part_d.p3d";
 };
 class CUP_A2_case_wooden_b: CUP_A2_Various
 {
  scope = 2;
  displayName = "case_wooden_b";
  model = "\ca\buildings\furniture\case_wooden_b.p3d";
 };
 class CUP_A2_ch_mod_c: CUP_A2_Various
 {
  scope = 2;
  displayName = "ch_mod_c";
  model = "\ca\buildings\furniture\ch_mod_c.p3d";
 };
 class CUP_A2_ch_mod_h: CUP_A2_Various
 {
  scope = 2;
  displayName = "ch_mod_h";
  model = "\ca\structures\furniture\chairs\ch_mod_h\ch_mod_h.p3d";
 };
 class CUP_A2_ch_office_b: CUP_A2_Various
 {
  scope = 2;
  displayName = "ch_office_b";
  model = "\ca\structures\furniture\chairs\ch_office_b\ch_office_b.p3d";
 };
 class CUP_A2_chair: CUP_A2_Various
 {
  scope = 2;
  displayName = "chair";
  model = "\ca\misc2\table\chair.p3d";
 };
 class CUP_A2_chair_2: CUP_A2_Various
 {
  scope = 2;
  displayName = "chair_2";
  model = "\ca\misc2\table\chair_2.p3d";
 };
 class CUP_A2_chair_cargo: CUP_A2_Various
 {
  scope = 2;
  displayName = "chair_cargo";
  model = "\ca\misc2\table\chair_cargo.p3d";
 };
 class CUP_A2_chair_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "chair_ep1";
  model = "\ca\structures_e\misc\misc_interier\chair_ep1.p3d";
 };
 class CUP_A2_chest_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "chest_ep1";
  model = "\ca\structures_e\misc\misc_interier\chest_ep1.p3d";
 };
 class CUP_A2_church_chair: CUP_A2_Various
 {
  scope = 2;
  displayName = "church_chair";
  model = "\ca\structures\furniture\chairs\church_chair\church_chair.p3d";
 };
 class CUP_A2_church_cross_1: CUP_A2_Various
 {
  scope = 2;
  displayName = "church_cross_1";
  model = "\ca\structures\house\church_cross\church_cross_1.p3d";
 };
 class CUP_A2_church_cross_1a: CUP_A2_Various
 {
  scope = 2;
  displayName = "church_cross_1a";
  model = "\ca\structures\house\church_cross\church_cross_1a.p3d";
 };
 class CUP_A2_church_tomb_1: CUP_A2_Various
 {
  scope = 2;
  displayName = "church_tomb_1";
  model = "\ca\structures\misc\church\church_tomb_1.p3d";
 };
 class CUP_A2_church_tomb_2: CUP_A2_Various
 {
  scope = 2;
  displayName = "church_tomb_2";
  model = "\ca\structures\misc\church\church_tomb_2.p3d";
 };
 class CUP_A2_church_tomb_3: CUP_A2_Various
 {
  scope = 2;
  displayName = "church_tomb_3";
  model = "\ca\structures\misc\church\church_tomb_3.p3d";
 };
 class CUP_A2_cloth_2_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "cloth_2_ep1";
  model = "\ca\structures_e\misc\misc_interier\cloth_2_ep1.p3d";
 };
 class CUP_A2_cloth_3_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "cloth_3_ep1";
  model = "\ca\structures_e\misc\misc_interier\cloth_3_ep1.p3d";
 };
 class CUP_A2_cloth_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "cloth_ep1";
  model = "\ca\structures_e\misc\misc_interier\cloth_ep1.p3d";
 };
 class CUP_A2_com_tower_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "com_tower_ep1";
  model = "\ca\structures_e\misc\com_tower_ep1.p3d";
 };
 class CUP_A2_concbox_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "concbox_ep1";
  model = "\ca\structures_e\misc\misc_construction\misc_concbox_ep1.p3d";
 };
 class CUP_A2_conelight: CUP_A2_Various
 {
  scope = 2;
  displayName = "conelight";
  model = "\ca\structures\misc\armory\conelight\conelight.p3d";
 };
 class CUP_A2_conference_table_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "conference_table_a";
  model = "\ca\buildings\furniture\conference_table_a.p3d";
 };
 class CUP_A2_counter_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "counter_ep1";
  model = "\ca\structures_e\misc\misc_market\counter_ep1.p3d";
 };
 class CUP_A2_covering_hut_big_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "covering_hut_big_ep1";
  model = "\ca\structures_e\misc\misc_market\covering_hut_big_ep1.p3d";
 };
 class CUP_A2_covering_hut_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "covering_hut_ep1";
  model = "\ca\structures_e\misc\misc_market\covering_hut_ep1.p3d";
 };
 class CUP_A2_curtain_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "curtain_ep1";
  model = "\ca\structures_e\misc\misc_interier\curtain_ep1.p3d";
 };
 class CUP_A2_curtain_mirrored_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "curtain_mirrored_ep1";
  model = "\ca\structures_e\misc\misc_interier\curtain_mirrored_ep1.p3d";
 };
 class CUP_A2_deerstand: CUP_A2_Various
 {
  scope = 2;
  displayName = "deerstand";
  model = "\ca\structures\misc\misc_deerstand\misc_deerstand.p3d";
 };
 class CUP_A2_desk: CUP_A2_Various
 {
  scope = 2;
  displayName = "desk";
  model = "\ca\misc2\desk\desk.p3d";
 };
 class CUP_A2_dhangar_brownskrin: CUP_A2_Various
 {
  scope = 2;
  displayName = "dhangar_brownskrin";
  model = "\ca\buildings\furniture\dhangar_brownskrin.p3d";
 };
 class CUP_A2_dhangar_knihovna: CUP_A2_Various
 {
  scope = 2;
  displayName = "dhangar_knihovna";
  model = "\ca\buildings\furniture\dhangar_knihovna.p3d";
 };
 class CUP_A2_dhangar_psacistul: CUP_A2_Various
 {
  scope = 2;
  displayName = "dhangar_psacistul";
  model = "\ca\buildings\furniture\dhangar_psacistul.p3d";
 };
 class CUP_A2_dhangar_whiteskrin: CUP_A2_Various
 {
  scope = 2;
  displayName = "dhangar_whiteskrin";
  model = "\ca\buildings\furniture\dhangar_whiteskrin.p3d";
 };
 class CUP_A2_dkamna_bila: CUP_A2_Various
 {
  scope = 2;
  displayName = "dkamna_bila";
  model = "\ca\buildings\furniture\dkamna_bila.p3d";
 };
 class CUP_A2_dkamna_uhli: CUP_A2_Various
 {
  scope = 2;
  displayName = "dkamna_uhli";
  model = "\ca\buildings\furniture\dkamna_uhli.p3d";
 };
 class CUP_A2_dog_tags: CUP_A2_Various
 {
  scope = 2;
  displayName = "dog_tags";
  model = "\ca\misc\smallobj_dog_tags.p3d";
 };
 class CUP_A2_drainage: CUP_A2_Various
 {
  scope = 2;
  displayName = "drainage";
  model = "\ca\structures\misc\misc_drainage1\misc_drainage.p3d";
 };
 class CUP_A2_drevena_bedna: CUP_A2_Various
 {
  scope = 2;
  displayName = "drevena_bedna";
  model = "\ca\misc\drevena_bedna.p3d";
 };
 class CUP_A2_drevo_hromada: CUP_A2_Various
 {
  scope = 2;
  displayName = "drevo_hromada";
  model = "\ca\buildings\misc\drevo_hromada.p3d";
 };
 class CUP_A2_explosive: CUP_A2_Various
 {
  scope = 2;
  displayName = "explosive";
  model = "\ca\misc2\explosive\explosive.p3d";
 };
 class CUP_A2_fire: CUP_A2_Various
 {
  scope = 2;
  displayName = "fire";
  model = "\ca\misc3\fire.p3d";
 };
 class CUP_A2_fishing_boat: CUP_A2_Various
 {
  scope = 2;
  displayName = "fishing_boat";
  model = "\ca\water2\fishing_boat\fishing_boat.p3d";
 };
 class CUP_A2_flag_stozar: CUP_A2_Various
 {
  scope = 2;
  displayName = "flag_stozar";
  model = "\ca\misc\flag_stozar.p3d";
 };
 class CUP_A2_flagstock: CUP_A2_Various
 {
  scope = 2;
  displayName = "flagstock";
  model = "\ca\misc\vlajkstozar.p3d";
 };
 class CUP_A2_floormop: CUP_A2_Various
 {
  scope = 2;
  displayName = "floormop";
  model = "\ca\misc2\floormop\floormop.p3d";
 };
 class CUP_A2_flower_01: CUP_A2_Various
 {
  scope = 2;
  displayName = "flower_01";
  model = "\ca\structures\furniture\decoration\flowers\flower_01.p3d";
 };
 class CUP_A2_flower_02: CUP_A2_Various
 {
  scope = 2;
  displayName = "flower_02";
  model = "\ca\structures\furniture\decoration\flowers\flower_02.p3d";
 };
 class CUP_A2_fluor_lamp: CUP_A2_Various
 {
  scope = 2;
  displayName = "fluor_lamp";
  model = "\ca\structures\furniture\lighting\fluor_lamp\fluor_lamp.p3d";
 };
 class CUP_A2_fregata: CUP_A2_Various
 {
  scope = 2;
  displayName = "fregata";
  model = "\ca\water2\fregata\fregata.p3d";
 };
 class CUP_A2_fridge: CUP_A2_Various
 {
  scope = 2;
  displayName = "fridge";
  model = "\ca\structures\furniture\kitchen\fridge\fridge.p3d";
 };
 class CUP_A2_fuelcan: CUP_A2_Various
 {
  scope = 2;
  displayName = "fuelcan";
  model = "\ca\misc\fuelcan.p3d";
 };
 class CUP_A2_g_pipes: CUP_A2_Various
 {
  scope = 2;
  displayName = "g_pipes";
  model = "\ca\structures\misc\misc_g_pipes\misc_g_pipes.p3d";
 };
 class CUP_A2_greenhouse: CUP_A2_Various
 {
  scope = 2;
  displayName = "greenhouse";
  model = "\ca\structures\misc\misc_greenhouse\misc_greenhouse.p3d";
 };
 class CUP_A2_haystack: CUP_A2_Various
 {
  scope = 2;
  displayName = "haystack";
  model = "\ca\structures\misc\misc_haystack\misc_haystack.p3d";
 };
 class CUP_A2_hospital_bench: CUP_A2_Various
 {
  scope = 2;
  displayName = "hospital_bench";
  model = "\ca\structures\furniture\chairs\hospital_bench\hospital_bench.p3d";
 };
 class CUP_A2_houpacka: CUP_A2_Various
 {
  scope = 2;
  displayName = "houpacka";
  model = "\ca\misc\houpacka.p3d";
 };
 class CUP_A2_hrobecek: CUP_A2_Various
 {
  scope = 2;
  displayName = "hrobecek";
  model = "\ca\buildings\misc\hrobecek.p3d";
 };
 class CUP_A2_hrobecek_krizek1: CUP_A2_Various
 {
  scope = 2;
  displayName = "hrobecek_krizek1";
  model = "\ca\buildings\misc\hrobecek_krizek1.p3d";
 };
 class CUP_A2_hrobecek_krizek2: CUP_A2_Various
 {
  scope = 2;
  displayName = "hrobecek_krizek2";
  model = "\ca\buildings\misc\hrobecek_krizek2.p3d";
 };
 class CUP_A2_hrobecek_krizekhelma: CUP_A2_Various
 {
  scope = 2;
  displayName = "hrobecek_krizekhelma";
  model = "\ca\buildings\misc\hrobecek_krizekhelma.p3d";
 };
 class CUP_A2_icebox: CUP_A2_Various
 {
  scope = 2;
  displayName = "icebox";
  model = "\ca\structures\furniture\generalstore\icebox.p3d";
 };
 class CUP_A2_illuminanttower: CUP_A2_Various
 {
  scope = 2;
  displayName = "illuminanttower";
  model = "\ca\structures\ind_sawmill\ind_illuminanttower.p3d";
 };
 class CUP_A2_infostand_1: CUP_A2_Various
 {
  scope = 2;
  displayName = "infostand_1";
  model = "\ca\misc_e\infostand_1.p3d";
 };
 class CUP_A2_infostand_2: CUP_A2_Various
 {
  scope = 2;
  displayName = "infostand_2";
  model = "\ca\misc_e\infostand_2.p3d";
 };
 class CUP_A2_kasna_new: CUP_A2_Various
 {
  scope = 2;
  displayName = "kasna_new";
  model = "\ca\buildings\kasna_new.p3d";
 };
 class CUP_A2_kbud: CUP_A2_Various
 {
  scope = 2;
  displayName = "kbud";
  model = "\ca\buildings\misc\kbud.p3d";
 };
 class CUP_A2_kiosk_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "kiosk_ep1";
  model = "\ca\structures_e\misc\misc_market\kiosk_ep1.p3d";
 };
 class CUP_A2_kitchen_chair_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "kitchen_chair_a";
  model = "\ca\structures\furniture\chairs\kitchen_chair_a\kitchen_chair_a.p3d";
 };
 class CUP_A2_kitchen_table_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "kitchen_table_a";
  model = "\ca\buildings\furniture\kitchen_table_a.p3d";
 };
 class CUP_A2_kitchenstove_elec: CUP_A2_Various
 {
  scope = 2;
  displayName = "kitchenstove_elec";
  model = "\ca\structures\furniture\kitchen\kitchenstove_elec\kitchenstove_elec.p3d";
 };
 class CUP_A2_kolotoc: CUP_A2_Various
 {
  scope = 2;
  displayName = "kolotoc";
  model = "\ca\misc\kolotoc.p3d";
 };
 class CUP_A2_ladder: CUP_A2_Various
 {
  scope = 2;
  displayName = "ladder";
  model = "\ca\misc3\ladder.p3d";
 };
 class CUP_A2_ladder_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "ladder_ep1";
  model = "\ca\misc_e\ladder_ep1.p3d";
 };
 class CUP_A2_ladder_half: CUP_A2_Various
 {
  scope = 2;
  displayName = "ladder_half";
  model = "\ca\misc\ladder_half.p3d";
 };
 class CUP_A2_ladder_half_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "ladder_half_ep1";
  model = "\ca\misc_e\ladder_half_ep1.p3d";
 };
 class CUP_A2_ladderhalf: CUP_A2_Various
 {
  scope = 2;
  displayName = "ladderhalf";
  model = "\ca\misc3\ladderhalf.p3d";
 };
 class CUP_A2_lantern: CUP_A2_Various
 {
  scope = 2;
  displayName = "lantern";
  model = "\ca\structures\furniture\lighting\lantern\lantern.p3d";
 };
 class CUP_A2_laptop: CUP_A2_Various
 {
  scope = 2;
  displayName = "laptop";
  model = "\ca\mp_armory\misc\laptop\laptop.p3d";
 };
 class CUP_A2_lavicka_1: CUP_A2_Various
 {
  scope = 2;
  displayName = "lavicka_1";
  model = "\ca\buildings\misc\lavicka_1.p3d";
 };
 class CUP_A2_lavicka_2: CUP_A2_Various
 {
  scope = 2;
  displayName = "lavicka_2";
  model = "\ca\buildings\misc\lavicka_2.p3d";
 };
 class CUP_A2_lavicka_3: CUP_A2_Various
 {
  scope = 2;
  displayName = "lavicka_3";
  model = "\ca\buildings\misc\lavicka_3.p3d";
 };
 class CUP_A2_lavicka_4: CUP_A2_Various
 {
  scope = 2;
  displayName = "lavicka_4";
  model = "\ca\buildings\misc\lavicka_4.p3d";
 };
 class CUP_A2_lavicka_4bezroadwaye: CUP_A2_Various
 {
  scope = 2;
  displayName = "lavicka_4bezroadwaye";
  model = "\ca\buildings\misc\lavicka_4bezroadwaye.p3d";
 };
 class CUP_A2_lekarnicka: CUP_A2_Various
 {
  scope = 2;
  displayName = "lekarnicka";
  model = "\ca\structures\furniture\decoration\lekarnicka\lekarnicka.p3d";
 };
 class CUP_A2_library_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "library_a";
  model = "\ca\structures\furniture\cases\library_a\library_a.p3d";
 };
 class CUP_A2_lobby_case: CUP_A2_Various
 {
  scope = 2;
  displayName = "lobby_case";
  model = "\ca\structures\furniture\cases\lobby_case\lobby_case.p3d";
 };
 class CUP_A2_lobby_chair: CUP_A2_Various
 {
  scope = 2;
  displayName = "lobby_chair";
  model = "\ca\structures\furniture\chairs\lobby_chair\lobby_chair.p3d";
 };
 class CUP_A2_lobby_counter: CUP_A2_Various
 {
  scope = 2;
  displayName = "lobby_counter";
  model = "\ca\structures\furniture\tables\lobby_counter\lobby_counter.p3d";
 };
 class CUP_A2_lobby_table: CUP_A2_Various
 {
  scope = 2;
  displayName = "lobby_table";
  model = "\ca\structures\furniture\tables\lobby_table\lobby_table.p3d";
 };
 class CUP_A2_loudspeakers_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "loudspeakers_ep1";
  model = "\ca\mp_armory\misc\loudspeakers\loudspeakers_ep1.p3d";
 };
 class CUP_A2_market_shelter_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "market_shelter_ep1";
  model = "\ca\structures_e\misc\misc_market\market_shelter_ep1.p3d";
 };
 class CUP_A2_metalbucket: CUP_A2_Various
 {
  scope = 2;
  displayName = "metalbucket";
  model = "\ca\misc2\metalbucket\metalbucket.p3d";
 };
 class CUP_A2_metalcase_01: CUP_A2_Various
 {
  scope = 2;
  displayName = "metalcase_01";
  model = "\ca\structures\furniture\cases\metalcase\metalcase_01.p3d";
 };
 class CUP_A2_metalcase_02: CUP_A2_Various
 {
  scope = 2;
  displayName = "metalcase_02";
  model = "\ca\structures\furniture\cases\metalcase\metalcase_02.p3d";
 };
 class CUP_A2_money: CUP_A2_Various
 {
  scope = 2;
  displayName = "money";
  model = "\ca\misc\smallobj_money.p3d";
 };
 class CUP_A2_mrtvola_army1: CUP_A2_Various
 {
  scope = 2;
  displayName = "mrtvola_army1";
  model = "\ca\misc\mrtvola_army1.p3d";
 };
 class CUP_A2_mutt_vysilacka: CUP_A2_Various
 {
  scope = 2;
  displayName = "mutt_vysilacka";
  model = "\ca\misc\mutt_vysilacka.p3d";
 };
 class CUP_A2_notebook: CUP_A2_Various
 {
  scope = 2;
  displayName = "notebook";
  model = "\ca\misc2\notebook\notebook.p3d";
 };
 class CUP_A2_office_chair: CUP_A2_Various
 {
  scope = 2;
  displayName = "office_chair";
  model = "\ca\structures\furniture\chairs\office_chair\office_chair.p3d";
 };
 class CUP_A2_office_table_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "office_table_a";
  model = "\ca\structures\furniture\tables\office_table_a\office_table_a.p3d";
 };
 class CUP_A2_parabola_big: CUP_A2_Various
 {
  scope = 2;
  displayName = "parabola_big";
  model = "\ca\misc3\parabola_big\parabola_big.p3d";
 };
 class CUP_A2_pc: CUP_A2_Various
 {
  scope = 2;
  displayName = "pc";
  model = "\ca\structures\furniture\eletrical_appliances\pc\pc.p3d";
 };
 class CUP_A2_phone_box: CUP_A2_Various
 {
  scope = 2;
  displayName = "phone_box";
  model = "\ca\misc3\phone_box.p3d";
 };
 class CUP_A2_phonebox: CUP_A2_Various
 {
  scope = 2;
  displayName = "phonebox";
  model = "\ca\structures\furniture\eletrical_appliances\phonebox\phonebox.p3d";
 };
 class CUP_A2_picture_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "picture_a";
  model = "\ca\structures\furniture\decoration\wallboards\picture_a\picture_a.p3d";
 };
 class CUP_A2_pillow_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "pillow_ep1";
  model = "\ca\structures_e\misc\misc_interier\pillow_ep1.p3d";
 };
 class CUP_A2_pillowv2_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "pillowv2_ep1";
  model = "\ca\structures_e\misc\misc_interier\pillowv2_ep1.p3d";
 };
 class CUP_A2_piskoviste: CUP_A2_Various
 {
  scope = 2;
  displayName = "piskoviste";
  model = "\ca\misc\piskoviste.p3d";
 };
 class CUP_A2_pneu: CUP_A2_Various
 {
  scope = 2;
  displayName = "pneu";
  model = "\ca\structures\misc\armory\pneu\pneu.p3d";
 };
 class CUP_A2_popelnice: CUP_A2_Various
 {
  scope = 2;
  displayName = "popelnice";
  model = "\ca\misc\popelnice.p3d";
 };
 class CUP_A2_postbox: CUP_A2_Various
 {
  scope = 2;
  displayName = "postbox";
  model = "\ca\structures\misc\misc_postbox\misc_postbox.p3d";
 };
 class CUP_A2_postel_manz_kov: CUP_A2_Various
 {
  scope = 2;
  displayName = "postel_manz_kov";
  model = "\ca\buildings\furniture\postel_manz_kov.p3d";
 };
 class CUP_A2_postel_panelak1: CUP_A2_Various
 {
  scope = 2;
  displayName = "postel_panelak1";
  model = "\ca\buildings\furniture\postel_panelak1.p3d";
 };
 class CUP_A2_postel_panelak2: CUP_A2_Various
 {
  scope = 2;
  displayName = "postel_panelak2";
  model = "\ca\buildings\furniture\postel_panelak2.p3d";
 };
 class CUP_A2_powergenerator: CUP_A2_Various
 {
  scope = 2;
  displayName = "powergenerator";
  model = "\ca\misc3\powergenerator\powergenerator.p3d";
 };
 class CUP_A2_pultskasou: CUP_A2_Various
 {
  scope = 2;
  displayName = "pultskasou";
  model = "\ca\structures\furniture\generalstore\pultskasou.p3d";
 };
 class CUP_A2_pumpa: CUP_A2_Various
 {
  scope = 2;
  displayName = "pumpa";
  model = "\ca\buildings\misc\pumpa.p3d";
 };
 class CUP_A2_rack_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "rack_ep1";
  model = "\ca\structures_e\misc\misc_interier\rack_ep1.p3d";
 };
 class CUP_A2_radio_b: CUP_A2_Various
 {
  scope = 2;
  displayName = "radio_b";
  model = "\ca\structures\furniture\eletrical_appliances\radio_b\radio_b.p3d";
 };
 class CUP_A2_reservoir_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "reservoir_ep1";
  model = "\ca\structures_e\misc\misc_interier\reservoir_ep1.p3d";
 };
 class CUP_A2_sack_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "sack_ep1";
  model = "\ca\structures_e\misc\misc_interier\sack_ep1.p3d";
 };
 class CUP_A2_sarcophagus: CUP_A2_Various
 {
  scope = 2;
  displayName = "sarcophagus";
  model = "\ca\structures\furniture\cases\sarcophagus\sarcophagus.p3d";
 };
 class CUP_A2_satellitephone: CUP_A2_Various
 {
  scope = 2;
  displayName = "satellitephone";
  model = "\ca\misc3\satelitephone\satellitephone.p3d";
 };
 class CUP_A2_sekyraspalek: CUP_A2_Various
 {
  scope = 2;
  displayName = "sekyraspalek";
  model = "\ca\misc\sekyraspalek.p3d";
 };
 class CUP_A2_shelf: CUP_A2_Various
 {
  scope = 2;
  displayName = "shelf";
  model = "\ca\structures\furniture\generalstore\shelf.p3d";
 };
 class CUP_A2_shelf_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "shelf_ep1";
  model = "\ca\structures_e\misc\misc_interier\shelf_ep1.p3d";
 };
 class CUP_A2_sink: CUP_A2_Various
 {
  scope = 2;
  displayName = "sink";
  model = "\ca\structures\furniture\bathroom\sink\sink.p3d";
 };
 class CUP_A2_skeetdisk: CUP_A2_Various
 {
  scope = 2;
  displayName = "skeetdisk";
  model = "\ca\misc2\skeetmachine\skeetdisk.p3d";
 };
 class CUP_A2_skeetmachine: CUP_A2_Various
 {
  scope = 2;
  displayName = "skeetmachine";
  model = "\ca\misc2\skeetmachine\skeetmachine.p3d";
 };
 class CUP_A2_skrin_bar: CUP_A2_Various
 {
  scope = 2;
  displayName = "skrin_bar";
  model = "\ca\buildings\furniture\skrin_bar.p3d";
 };
 class CUP_A2_skrin_opalena: CUP_A2_Various
 {
  scope = 2;
  displayName = "skrin_opalena";
  model = "\ca\buildings\furniture\skrin_opalena.p3d";
 };
 class CUP_A2_smallboat_1: CUP_A2_Various
 {
  scope = 2;
  displayName = "smallboat_1";
  model = "\ca\water2\small_boat\smallboat_1.p3d";
 };
 class CUP_A2_smallboat_2: CUP_A2_Various
 {
  scope = 2;
  displayName = "smallboat_2";
  model = "\ca\water2\small_boat\smallboat_2.p3d";
 };
 class CUP_A2_smalltable: CUP_A2_Various
 {
  scope = 2;
  displayName = "smalltable";
  model = "\ca\misc2\smalltable\smalltable.p3d";
 };
 class CUP_A2_smalltv: CUP_A2_Various
 {
  scope = 2;
  displayName = "smalltv";
  model = "\ca\misc2\smalltv\smalltv.p3d";
 };
 class CUP_A2_snow: CUP_A2_Various
 {
  scope = 2;
  displayName = "snow";
  model = "\ca\misc\snow.p3d";
 };
 class CUP_A2_snowman: CUP_A2_Various
 {
  scope = 2;
  displayName = "snowman";
  model = "\ca\misc\snowman.p3d";
 };
 class CUP_A2_stand_meat_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "stand_meat_ep1";
  model = "\ca\structures_e\misc\misc_market\stand_meat_ep1.p3d";
 };
 class CUP_A2_stand_small_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "stand_small_ep1";
  model = "\ca\structures_e\misc\misc_market\stand_small_ep1.p3d";
 };
 class CUP_A2_stand_water_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "stand_water_ep1";
  model = "\ca\structures_e\misc\misc_market\stand_water_ep1.p3d";
 };
 class CUP_A2_stanek_3: CUP_A2_Various
 {
  scope = 2;
  displayName = "stanek_3";
  model = "\ca\buildings\misc\stanek_3.p3d";
 };
 class CUP_A2_stanek_3_d: CUP_A2_Various
 {
  scope = 2;
  displayName = "stanek_3_d";
  model = "\ca\buildings\misc\stanek_3_d.p3d";
 };
 class CUP_A2_stanek_3b: CUP_A2_Various
 {
  scope = 2;
  displayName = "stanek_3b";
  model = "\ca\buildings\misc\stanek_3b.p3d";
 };
 class CUP_A2_stul_hospoda: CUP_A2_Various
 {
  scope = 2;
  displayName = "stul_hospoda";
  model = "\ca\buildings\furniture\stul_hospoda.p3d";
 };
 class CUP_A2_stul_kuch1: CUP_A2_Various
 {
  scope = 2;
  displayName = "stul_kuch1";
  model = "\ca\buildings\furniture\stul_kuch1.p3d";
 };
 class CUP_A2_sunshade_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "sunshade_ep1";
  model = "\ca\structures_e\misc\misc_market\sunshade_ep1.p3d";
 };
 class CUP_A2_table: CUP_A2_Various
 {
  scope = 2;
  displayName = "table";
  model = "\ca\misc2\table\table.p3d";
 };
 class CUP_A2_table_drawer: CUP_A2_Various
 {
  scope = 2;
  displayName = "table_drawer";
  model = "\ca\structures\furniture\tables\table_drawer\table_drawer.p3d";
 };
 class CUP_A2_table_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "table_ep1";
  model = "\ca\structures_e\misc\misc_interier\table_ep1.p3d";
 };
 class CUP_A2_table_small_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "table_small_ep1";
  model = "\ca\structures_e\misc\misc_interier\table_small_ep1.p3d";
 };
 class CUP_A2_teapot_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "teapot_ep1";
  model = "\ca\structures_e\misc\misc_interier\teapot_ep1.p3d";
 };
 class CUP_A2_telek1: CUP_A2_Various
 {
  scope = 2;
  displayName = "telek1";
  model = "\ca\buildings\telek1.p3d";
 };
 class CUP_A2_tires_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "tires_ep1";
  model = "\ca\structures_e\misc\misc_market\tires_ep1.p3d";
 };
 class CUP_A2_toilet: CUP_A2_Various
 {
  scope = 2;
  displayName = "toilet";
  model = "\ca\misc3\toilet.p3d";
 };
 class CUP_A2_toilet_b: CUP_A2_Various
 {
  scope = 2;
  displayName = "toilet_b";
  model = "\ca\buildings\furniture\toilet_b.p3d";
 };
 class CUP_A2_toilet_b_02: CUP_A2_Various
 {
  scope = 2;
  displayName = "toilet_b_02";
  model = "\ca\structures\furniture\bathroom\toilet_b_02\toilet_b_02.p3d";
 };
 class CUP_A2_transport_cart_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "transport_cart_ep1";
  model = "\ca\structures_e\misc\misc_market\transport_cart_ep1.p3d";
 };
 class CUP_A2_truhla_stara: CUP_A2_Various
 {
  scope = 2;
  displayName = "truhla_stara";
  model = "\ca\buildings\furniture\truhla_stara.p3d";
 };
 class CUP_A2_tv_a: CUP_A2_Various
 {
  scope = 2;
  displayName = "tv_a";
  model = "\ca\structures\furniture\eletrical_appliances\tv_a\tv_a.p3d";
 };
 class CUP_A2_urn_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "urn_ep1";
  model = "\ca\structures_e\misc\misc_interier\urn_ep1.p3d";
 };
 class CUP_A2_vase_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "vase_ep1";
  model = "\ca\structures_e\misc\misc_interier\vase_ep1.p3d";
 };
 class CUP_A2_vase_loam_2_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "vase_loam_2_ep1";
  model = "\ca\structures_e\misc\misc_interier\vase_loam_2_ep1.p3d";
 };
 class CUP_A2_vase_loam_3_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "vase_loam_3_ep1";
  model = "\ca\structures_e\misc\misc_interier\vase_loam_3_ep1.p3d";
 };
 class CUP_A2_vase_loam_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "vase_loam_ep1";
  model = "\ca\structures_e\misc\misc_interier\vase_loam_ep1.p3d";
 };
 class CUP_A2_vending_machine: CUP_A2_Various
 {
  scope = 2;
  displayName = "vending_machine";
  model = "\ca\structures\furniture\eletrical_appliances\vending_machine\vending_machine.p3d";
 };
 class CUP_A2_videoprojector: CUP_A2_Various
 {
  scope = 2;
  displayName = "videoprojector";
  model = "\ca\misc\misc_videoprojector.p3d";
 };
 class CUP_A2_videoprojector_platno: CUP_A2_Various
 {
  scope = 2;
  displayName = "videoprojector_platno";
  model = "\ca\misc\misc_videoprojector_platno.p3d";
 };
 class CUP_A2_vojenska_palanda: CUP_A2_Various
 {
  scope = 2;
  displayName = "vojenska_palanda";
  model = "\ca\structures\furniture\chairs\vojenska_palanda\vojenska_palanda.p3d";
 };
 class CUP_A2_vysilac_fm: CUP_A2_Various
 {
  scope = 2;
  displayName = "vysilac_fm";
  model = "\ca\buildings\vysilac_fm.p3d";
 };
 class CUP_A2_vysilac_fm2: CUP_A2_Various
 {
  scope = 2;
  displayName = "vysilac_fm2";
  model = "\ca\buildings\vysilac_fm2.p3d";
 };
 class CUP_A2_washing_machine: CUP_A2_Various
 {
  scope = 2;
  displayName = "washing_machine";
  model = "\ca\structures\furniture\eletrical_appliances\washing_machine\washing_machine.p3d";
 };
 class CUP_A2_water_pipe_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "water_pipe_ep1";
  model = "\ca\structures_e\misc\misc_interier\water_pipe_ep1.p3d";
 };
 class CUP_A2_water_tank: CUP_A2_Various
 {
  scope = 2;
  displayName = "water_tank";
  model = "\ca\misc\water_tank.p3d";
 };
 class CUP_A2_waterbasin_conc: CUP_A2_Various
 {
  scope = 2;
  displayName = "waterbasin_conc";
  model = "\ca\misc_e\waterbasin_conc.p3d";
 };
 class CUP_A2_well: CUP_A2_Various
 {
  scope = 2;
  displayName = "well";
  model = "\ca\structures\misc\misc_well\misc_well.p3d";
 };
 class CUP_A2_well_c_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "well_c_ep1";
  model = "\ca\structures_e\misc\misc_well\misc_well_c_ep1.p3d";
 };
 class CUP_A2_well_l_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "well_l_ep1";
  model = "\ca\structures_e\misc\misc_well\misc_well_l_ep1.p3d";
 };
 class CUP_A2_wellpump: CUP_A2_Various
 {
  scope = 2;
  displayName = "wellpump";
  model = "\ca\structures\misc\misc_wellpump\misc_wellpump.p3d";
 };
 class CUP_A2_wheel_cart_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "wheel_cart_ep1";
  model = "\ca\structures_e\misc\misc_interier\wheel_cart_ep1.p3d";
 };
 class CUP_A2_wicker_basket_ep1: CUP_A2_Various
 {
  scope = 2;
  displayName = "wicker_basket_ep1";
  model = "\ca\structures_e\misc\misc_interier\wicker_basket_ep1.p3d";
 };
 class CUP_A2_windbreak: CUP_A2_Various
 {
  scope = 2;
  displayName = "windbreak";
  model = "\ca\structures\misc\misc_windbreak\misc_windbreak.p3d";
 };
 class CUP_A2_woodpile: CUP_A2_Various
 {
  scope = 2;
  displayName = "woodpile";
  model = "\ca\structures\misc\misc_woodpile\misc_woodpile.p3d";
 };
 class 01_bushes_01_b_amygdalusn1s_ep1: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_amygdalusn1s_ep1";
  model = "\ca\plants_e\bush\b_amygdalusn1s_ep1.p3d";
 };
 class 01_bushes_01_b_betula2w_summer: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_betula2w_summer";
  model = "\ca\plants_e2\bush\b_betula2w_summer.p3d";
 };
 class 01_bushes_01_b_betulahumilis: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_betulahumilis";
  model = "\ca\plants2\bush\b_betulahumilis.p3d";
 };
 class 01_bushes_01_b_canina2s: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_canina2s";
  model = "\ca\plants2\bush\b_canina2s.p3d";
 };
 class 01_bushes_01_b_canina2s_summer: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_canina2s_summer";
  model = "\ca\plants_e2\bush\b_canina2s_summer.p3d";
 };
 class 01_bushes_01_b_corylus: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_corylus";
  model = "\ca\plants2\bush\b_corylus.p3d";
 };
 class 01_bushes_01_b_corylus2s: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_corylus2s";
  model = "\ca\plants2\bush\b_corylus2s.p3d";
 };
 class 01_bushes_01_b_corylus2s_summer: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_corylus2s_summer";
  model = "\ca\plants_e2\bush\b_corylus2s_summer.p3d";
 };
 class 01_bushes_01_b_craet1: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_craet1";
  model = "\ca\plants2\bush\b_craet1.p3d";
 };
 class 01_bushes_01_b_craet1_summer: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_craet1_summer";
  model = "\ca\plants_e2\bush\b_craet1_summer.p3d";
 };
 class 01_bushes_01_b_craet2: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_craet2";
  model = "\ca\plants2\bush\b_craet2.p3d";
 };
 class 01_bushes_01_b_elderberry2s_pmc: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_elderberry2s_pmc";
  model = "\ca\plants_pmc\bush\b_elderberry2s_pmc.p3d";
 };
 class 01_bushes_01_b_hip2s_pmc: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_hip2s_pmc";
  model = "\ca\plants_pmc\bush\b_hip2s_pmc.p3d";
 };
 class 01_bushes_01_b_pinusm1s_ep1: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_pinusm1s_ep1";
  model = "\ca\plants_e\bush\b_pinusm1s_ep1.p3d";
 };
 class 01_bushes_01_b_pistacial1s_ep1: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_pistacial1s_ep1";
  model = "\ca\plants_e\bush\b_pistacial1s_ep1.p3d";
 };
 class 01_bushes_01_b_pmugo: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_pmugo";
  model = "\ca\plants2\bush\b_pmugo.p3d";
 };
 class 01_bushes_01_b_prunus: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_prunus";
  model = "\ca\plants2\bush\b_prunus.p3d";
 };
 class 01_bushes_01_b_salix2s: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_salix2s";
  model = "\ca\plants2\bush\b_salix2s.p3d";
 };
 class 01_bushes_01_b_sambucus: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_sambucus";
  model = "\ca\plants2\bush\b_sambucus.p3d";
 };
 class 01_bushes_01_b_sambucus_summer: CUP_A2_Bushes
 {
  scope = 2;
  displayName = "b_sambucus_summer";
  model = "\ca\plants_e2\bush\b_sambucus_summer.p3d";
 };
 class CUP_A2_barn_metal: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "barn_metal";
  model = "\ca\buildings2\barn_metal\barn_metal.p3d";
 };
 class CUP_A2_barn_metal_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "barn_metal_dam";
  model = "\ca\buildings2\barn_metal\barn_metal_dam.p3d";
 };
 class CUP_A2_barn_w_01: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "barn_w_01";
  model = "\ca\structures\barn_w\barn_w_01.p3d";
 };
 class CUP_A2_barn_w_01_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "barn_w_01_dam";
  model = "\ca\structures\barn_w\barn_w_01_dam.p3d";
 };
 class CUP_A2_barn_w_02: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "barn_w_02";
  model = "\ca\structures\barn_w\barn_w_02.p3d";
 };
 class CUP_A2_bouda_plech: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "bouda_plech";
  model = "\ca\buildings\bouda_plech.p3d";
 };
 class CUP_A2_bouda1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "bouda1";
  model = "\ca\buildings\bouda1.p3d";
 };
 class CUP_A2_bouda2_vnitrek: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "bouda2_vnitrek";
  model = "\ca\buildings\bouda2_vnitrek.p3d";
 };
 class CUP_A2_bouda3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "bouda3";
  model = "\ca\buildings\bouda3.p3d";
 };
 class CUP_A2_chickencoop: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "chickencoop";
  model = "\ca\structures\misc\chickencoop\misc_chickencoop.p3d";
 };
 class CUP_A2_church_01: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "church_01";
  model = "\ca\buildings2\church_01\church_01.p3d";
 };
 class CUP_A2_church_02: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "church_02";
  model = "\ca\structures\house\church_02\church_02.p3d";
 };
 class CUP_A2_church_02a: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "church_02a";
  model = "\ca\structures\house\church_02\church_02a.p3d";
 };
 class CUP_A2_church_03: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "church_03";
  model = "\ca\structures\house\church_03\church_03.p3d";
 };
 class CUP_A2_church_03_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "church_03_dam";
  model = "\ca\structures\house\church_03\church_03_dam.p3d";
 };
 class CUP_A2_cihlovej_dum: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "cihlovej_dum";
  model = "\ca\buildings\cihlovej_dum.p3d";
 };
 class CUP_A2_cihlovej_dum_in: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "cihlovej_dum_in";
  model = "\ca\buildings\cihlovej_dum_in.p3d";
 };
 class CUP_A2_deutshe: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "deutshe";
  model = "\ca\buildings\deutshe.p3d";
 };
 class CUP_A2_deutshe_mini: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "deutshe_mini";
  model = "\ca\buildings\deutshe_mini.p3d";
 };
 class CUP_A2_domek_rosa: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "domek_rosa";
  model = "\ca\buildings\domek_rosa.p3d";
 };
 class CUP_A2_dum_istan3_hromada2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_istan3_hromada2";
  model = "\ca\buildings\dum_istan3_hromada2.p3d";
 };
 class CUP_A2_dum_istan3_pumpa: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_istan3_pumpa";
  model = "\ca\buildings\dum_istan3_pumpa.p3d";
 };
 class CUP_A2_dum_m2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_m2";
  model = "\ca\buildings\dum_m2.p3d";
 };
 class CUP_A2_dum_mesto: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_mesto";
  model = "\ca\buildings\dum_mesto.p3d";
 };
 class CUP_A2_dum_mesto_in: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_mesto_in";
  model = "\ca\buildings\dum_mesto_in.p3d";
 };
 class CUP_A2_dum_mesto2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_mesto2";
  model = "\ca\buildings\dum_mesto2.p3d";
 };
 class CUP_A2_dum_mesto2l: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_mesto2l";
  model = "\ca\buildings\dum_mesto2l.p3d";
 };
 class CUP_A2_dum_mesto3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_mesto3";
  model = "\ca\buildings\dum_mesto3.p3d";
 };
 class CUP_A2_dum_olez_istan1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_olez_istan1";
  model = "\ca\buildings\dum_olez_istan1.p3d";
 };
 class CUP_A2_dum_olez_istan2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_olez_istan2";
  model = "\ca\buildings\dum_olez_istan2.p3d";
 };
 class CUP_A2_dum_olez_istan2_maly: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_olez_istan2_maly";
  model = "\ca\buildings\dum_olez_istan2_maly.p3d";
 };
 class CUP_A2_dum_olez_istan2_maly2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_olez_istan2_maly2";
  model = "\ca\buildings\dum_olez_istan2_maly2.p3d";
 };
 class CUP_A2_dum_olezlina: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_olezlina";
  model = "\ca\buildings\dum_olezlina.p3d";
 };
 class CUP_A2_dum_rasovna: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum_rasovna";
  model = "\ca\buildings\dum_rasovna.p3d";
 };
 class CUP_A2_dum01: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dum01";
  model = "\ca\buildings\dum01.p3d";
 };
 class CUP_A2_dumruina_mini: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "dumruina_mini";
  model = "\ca\buildings\dumruina_mini.p3d";
 };
 class CUP_A2_farm_cowshed_a: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "farm_cowshed_a";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_a.p3d";
 };
 class CUP_A2_farm_cowshed_a_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "farm_cowshed_a_dam";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_a_dam.p3d";
 };
 class CUP_A2_farm_cowshed_b: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "farm_cowshed_b";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_b.p3d";
 };
 class CUP_A2_farm_cowshed_b_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "farm_cowshed_b_dam";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_b_dam.p3d";
 };
 class CUP_A2_farm_cowshed_c: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "farm_cowshed_c";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_c.p3d";
 };
 class CUP_A2_farm_cowshed_c_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "farm_cowshed_c_dam";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_c_dam.p3d";
 };
 class CUP_A2_hlidac_budka: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hlidac_budka";
  model = "\ca\buildings\hlidac_budka.p3d";
 };
 class CUP_A2_hlidac_budka_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hlidac_budka_ep1";
  model = "\ca\misc_e\hlidac_budka_ep1.p3d";
 };
 class CUP_A2_hospital: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hospital";
  model = "\ca\buildings\hospital.p3d";
 };
 class CUP_A2_hospital2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hospital2";
  model = "\ca\structures\house\a_hospital\a_hospital.p3d";
 };
 class CUP_A2_hospital2_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hospital2_dam";
  model = "\ca\structures\house\a_hospital\a_hospital_dam.p3d";
 };
 class CUP_A2_house_c_1_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_1_dam_ep1";
  model = "\ca\structures_e\housec\house_c_1_dam_ep1.p3d";
 };
 class CUP_A2_house_c_1_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_1_ep1";
  model = "\ca\structures_e\housec\house_c_1_ep1.p3d";
 };
 class CUP_A2_house_c_1_v2_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_1_v2_dam_ep1";
  model = "\ca\structures_e\housec\house_c_1_v2_dam_ep1.p3d";
 };
 class CUP_A2_house_c_1_v2_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_1_v2_ep1";
  model = "\ca\structures_e\housec\house_c_1_v2_ep1.p3d";
 };
 class CUP_A2_house_c_10_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_10_dam_ep1";
  model = "\ca\structures_e\housec\house_c_10_dam_ep1.p3d";
 };
 class CUP_A2_house_c_10_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_10_ep1";
  model = "\ca\structures_e\housec\house_c_10_ep1.p3d";
 };
 class CUP_A2_house_c_11_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_11_dam_ep1";
  model = "\ca\structures_e\housec\house_c_11_dam_ep1.p3d";
 };
 class CUP_A2_house_c_11_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_11_ep1";
  model = "\ca\structures_e\housec\house_c_11_ep1.p3d";
 };
 class CUP_A2_house_c_12_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_12_dam_ep1";
  model = "\ca\structures_e\housec\house_c_12_dam_ep1.p3d";
 };
 class CUP_A2_house_c_12_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_12_ep1";
  model = "\ca\structures_e\housec\house_c_12_ep1.p3d";
 };
 class CUP_A2_house_c_2_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_2_dam_ep1";
  model = "\ca\structures_e\housec\house_c_2_dam_ep1.p3d";
 };
 class CUP_A2_house_c_2_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_2_ep1";
  model = "\ca\structures_e\housec\house_c_2_ep1.p3d";
 };
 class CUP_A2_house_c_3_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_3_dam_ep1";
  model = "\ca\structures_e\housec\house_c_3_dam_ep1.p3d";
 };
 class CUP_A2_house_c_3_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_3_ep1";
  model = "\ca\structures_e\housec\house_c_3_ep1.p3d";
 };
 class CUP_A2_house_c_4_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_4_dam_ep1";
  model = "\ca\structures_e\housec\house_c_4_dam_ep1.p3d";
 };
 class CUP_A2_house_c_4_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_4_ep1";
  model = "\ca\structures_e\housec\house_c_4_ep1.p3d";
 };
 class CUP_A2_house_c_5_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_dam_ep1";
  model = "\ca\structures_e\housec\house_c_5_dam_ep1.p3d";
 };
 class CUP_A2_house_c_5_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_ep1";
  model = "\ca\structures_e\housec\house_c_5_ep1.p3d";
 };
 class CUP_A2_house_c_5_v1_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_v1_dam_ep1";
  model = "\ca\structures_e\housec\house_c_5_v1_dam_ep1.p3d";
 };
 class CUP_A2_house_c_5_v1_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_v1_ep1";
  model = "\ca\structures_e\housec\house_c_5_v1_ep1.p3d";
 };
 class CUP_A2_house_c_5_v2_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_v2_dam_ep1";
  model = "\ca\structures_e\housec\house_c_5_v2_dam_ep1.p3d";
 };
 class CUP_A2_house_c_5_v2_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_v2_ep1";
  model = "\ca\structures_e\housec\house_c_5_v2_ep1.p3d";
 };
 class CUP_A2_house_c_5_v3_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_v3_dam_ep1";
  model = "\ca\structures_e\housec\house_c_5_v3_dam_ep1.p3d";
 };
 class CUP_A2_house_c_5_v3_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_5_v3_ep1";
  model = "\ca\structures_e\housec\house_c_5_v3_ep1.p3d";
 };
 class CUP_A2_house_c_9_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_9_dam_ep1";
  model = "\ca\structures_e\housec\house_c_9_dam_ep1.p3d";
 };
 class CUP_A2_house_c_9_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_c_9_ep1";
  model = "\ca\structures_e\housec\house_c_9_ep1.p3d";
 };
 class CUP_A2_house_k_1_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_1_ep1";
  model = "\ca\structures_e\housek\house_k_1_ep1.p3d";
 };
 class CUP_A2_house_k_3_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_3_dam_ep1";
  model = "\ca\structures_e\housek\house_k_3_dam_ep1.p3d";
 };
 class CUP_A2_house_k_3_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_3_ep1";
  model = "\ca\structures_e\housek\house_k_3_ep1.p3d";
 };
 class CUP_A2_house_k_5_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_5_dam_ep1";
  model = "\ca\structures_e\housek\house_k_5_dam_ep1.p3d";
 };
 class CUP_A2_house_k_5_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_5_ep1";
  model = "\ca\structures_e\housek\house_k_5_ep1.p3d";
 };
 class CUP_A2_house_k_6_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_6_dam_ep1";
  model = "\ca\structures_e\housek\house_k_6_dam_ep1.p3d";
 };
 class CUP_A2_house_k_6_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_6_ep1";
  model = "\ca\structures_e\housek\house_k_6_ep1.p3d";
 };
 class CUP_A2_house_k_7_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_7_dam_ep1";
  model = "\ca\structures_e\housek\house_k_7_dam_ep1.p3d";
 };
 class CUP_A2_house_k_7_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_7_ep1";
  model = "\ca\structures_e\housek\house_k_7_ep1.p3d";
 };
 class CUP_A2_house_k_8_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_8_dam_ep1";
  model = "\ca\structures_e\housek\house_k_8_dam_ep1.p3d";
 };
 class CUP_A2_house_k_8_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_k_8_ep1";
  model = "\ca\structures_e\housek\house_k_8_ep1.p3d";
 };
 class CUP_A2_house_l_1_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_1_ep1";
  model = "\ca\structures_e\housel\house_l_1_ep1.p3d";
 };
 class CUP_A2_house_l_3_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_3_dam_ep1";
  model = "\ca\structures_e\housel\house_l_3_dam_ep1.p3d";
 };
 class CUP_A2_house_l_3_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_3_ep1";
  model = "\ca\structures_e\housel\house_l_3_ep1.p3d";
 };
 class CUP_A2_house_l_4_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_4_dam_ep1";
  model = "\ca\structures_e\housel\house_l_4_dam_ep1.p3d";
 };
 class CUP_A2_house_l_4_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_4_ep1";
  model = "\ca\structures_e\housel\house_l_4_ep1.p3d";
 };
 class CUP_A2_house_l_6_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_6_dam_ep1";
  model = "\ca\structures_e\housel\house_l_6_dam_ep1.p3d";
 };
 class CUP_A2_house_l_6_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_6_ep1";
  model = "\ca\structures_e\housel\house_l_6_ep1.p3d";
 };
 class CUP_A2_house_l_7_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_7_dam_ep1";
  model = "\ca\structures_e\housel\house_l_7_dam_ep1.p3d";
 };
 class CUP_A2_house_l_7_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_7_ep1";
  model = "\ca\structures_e\housel\house_l_7_ep1.p3d";
 };
 class CUP_A2_house_l_8_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_8_dam_ep1";
  model = "\ca\structures_e\housel\house_l_8_dam_ep1.p3d";
 };
 class CUP_A2_house_l_8_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_8_ep1";
  model = "\ca\structures_e\housel\house_l_8_ep1.p3d";
 };
 class CUP_A2_house_l_9_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "house_l_9_ep1";
  model = "\ca\structures_e\housel\house_l_9_ep1.p3d";
 };
 class CUP_A2_houseblock_a1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_a1";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a1.p3d";
 };
 class CUP_A2_houseblock_a1_1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_a1_1";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a1_1.p3d";
 };
 class CUP_A2_houseblock_a1_2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_a1_2";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a1_2.p3d";
 };
 class CUP_A2_houseblock_a2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_a2";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a2.p3d";
 };
 class CUP_A2_houseblock_a2_1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_a2_1";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a2_1.p3d";
 };
 class CUP_A2_houseblock_a3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_a3";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a3.p3d";
 };
 class CUP_A2_houseblock_b1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_b1";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b1.p3d";
 };
 class CUP_A2_houseblock_b2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_b2";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b2.p3d";
 };
 class CUP_A2_houseblock_b3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_b3";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b3.p3d";
 };
 class CUP_A2_houseblock_b4: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_b4";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b4.p3d";
 };
 class CUP_A2_houseblock_b5: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_b5";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b5.p3d";
 };
 class CUP_A2_houseblock_b6: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_b6";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b6.p3d";
 };
 class CUP_A2_houseblock_c1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_c1";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c1.p3d";
 };
 class CUP_A2_houseblock_c2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_c2";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c2.p3d";
 };
 class CUP_A2_houseblock_c3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_c3";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c3.p3d";
 };
 class CUP_A2_houseblock_c4: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_c4";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c4.p3d";
 };
 class CUP_A2_houseblock_c5: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_c5";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c5.p3d";
 };
 class CUP_A2_houseblock_d1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_d1";
  model = "\ca\buildings2\houseblocks\houseblock_d\houseblock_d1.p3d";
 };
 class CUP_A2_houseblock_d2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "houseblock_d2";
  model = "\ca\buildings2\houseblocks\houseblock_d\houseblock_d2.p3d";
 };
 class CUP_A2_housev_1i1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1i1";
  model = "\ca\structures\house\housev\housev_1i1.p3d";
 };
 class CUP_A2_housev_1i1_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1i1_dam";
  model = "\ca\structures\house\housev\housev_1i1_dam.p3d";
 };
 class CUP_A2_housev_1i2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1i2";
  model = "\ca\structures\house\housev\housev_1i2.p3d";
 };
 class CUP_A2_housev_1i3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1i3";
  model = "\ca\structures\house\housev\housev_1i3.p3d";
 };
 class CUP_A2_housev_1i4: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1i4";
  model = "\ca\structures\house\housev\housev_1i4.p3d";
 };
 class CUP_A2_housev_1l1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1l1";
  model = "\ca\structures\house\housev\housev_1l1.p3d";
 };
 class CUP_A2_housev_1l2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1l2";
  model = "\ca\structures\house\housev\housev_1l2.p3d";
 };
 class CUP_A2_housev_1t: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_1t";
  model = "\ca\structures\house\housev\housev_1t.p3d";
 };
 class CUP_A2_housev_2i: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_2i";
  model = "\ca\structures\house\housev\housev_2i.p3d";
 };
 class CUP_A2_housev_2l: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_2l";
  model = "\ca\structures\house\housev\housev_2l.p3d";
 };
 class CUP_A2_housev_2l_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_2l_dam";
  model = "\ca\structures\house\housev\housev_2l_dam.p3d";
 };
 class CUP_A2_housev_2t1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_2t1";
  model = "\ca\structures\house\housev\housev_2t1.p3d";
 };
 class CUP_A2_housev_2t2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_2t2";
  model = "\ca\structures\house\housev\housev_2t2.p3d";
 };
 class CUP_A2_housev_3i1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_3i1";
  model = "\ca\structures\house\housev\housev_3i1.p3d";
 };
 class CUP_A2_housev_3i2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_3i2";
  model = "\ca\structures\house\housev\housev_3i2.p3d";
 };
 class CUP_A2_housev_3i3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_3i3";
  model = "\ca\structures\house\housev\housev_3i3.p3d";
 };
 class CUP_A2_housev_3i4: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev_3i4";
  model = "\ca\structures\house\housev\housev_3i4.p3d";
 };
 class CUP_A2_housev2_01a: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_01a";
  model = "\ca\structures\house\housev2\housev2_01a.p3d";
 };
 class CUP_A2_housev2_01a_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_01a_dam";
  model = "\ca\structures\house\housev2\housev2_01a_dam.p3d";
 };
 class CUP_A2_housev2_01b: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_01b";
  model = "\ca\structures\house\housev2\housev2_01b.p3d";
 };
 class CUP_A2_housev2_01b_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_01b_dam";
  model = "\ca\structures\house\housev2\housev2_01b_dam.p3d";
 };
 class CUP_A2_housev2_02: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_02";
  model = "\ca\structures\house\housev2\housev2_02.p3d";
 };
 class CUP_A2_housev2_02_interier: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_02_interier";
  model = "\ca\structures\house\housev2\housev2_02_interier.p3d";
 };
 class CUP_A2_housev2_02_interier_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_02_interier_dam";
  model = "\ca\structures\house\housev2\housev2_02_interier_dam.p3d";
 };
 class CUP_A2_housev2_03: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_03";
  model = "\ca\structures\house\housev2\housev2_03.p3d";
 };
 class CUP_A2_housev2_03_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_03_dam";
  model = "\ca\structures\house\housev2\housev2_03_dam.p3d";
 };
 class CUP_A2_housev2_03b: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_03b";
  model = "\ca\structures\house\housev2\housev2_03b.p3d";
 };
 class CUP_A2_housev2_03b_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_03b_dam";
  model = "\ca\structures\house\housev2\housev2_03b_dam.p3d";
 };
 class CUP_A2_housev2_04: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_04";
  model = "\ca\structures\house\housev2\housev2_04.p3d";
 };
 class CUP_A2_housev2_04_interier: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_04_interier";
  model = "\ca\structures\house\housev2\housev2_04_interier.p3d";
 };
 class CUP_A2_housev2_04_interier_dam: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_04_interier_dam";
  model = "\ca\structures\house\housev2\housev2_04_interier_dam.p3d";
 };
 class CUP_A2_housev2_05: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "housev2_05";
  model = "\ca\structures\house\housev2\housev2_05.p3d";
 };
 class CUP_A2_hruzdum: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hruzdum";
  model = "\ca\buildings\hruzdum.p3d";
 };
 class CUP_A2_hut_old02: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hut_old02";
  model = "\ca\buildings\hut_old02.p3d";
 };
 class CUP_A2_hut06: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hut06";
  model = "\ca\buildings\hut06.p3d";
 };
 class CUP_A2_hutch: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "hutch";
  model = "\ca\structures\misc\hutch\misc_hutch.p3d";
 };
 class CUP_A2_kostel: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "kostel";
  model = "\ca\buildings\kostel.p3d";
 };
 class CUP_A2_kostel3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "kostel3";
  model = "\ca\buildings\kostel3.p3d";
 };
 class CUP_A2_kulna: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "kulna";
  model = "\ca\buildings\kulna.p3d";
 };
 class CUP_A2_minaret_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "minaret_dam_ep1";
  model = "\ca\structures_e\housea\a_minaret\a_minaret_dam_ep1.p3d";
 };
 class CUP_A2_minaret_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "minaret_ep1";
  model = "\ca\structures_e\housea\a_minaret\a_minaret_ep1.p3d";
 };
 class CUP_A2_minaret_porto_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "minaret_porto_dam_ep1";
  model = "\ca\structures_e\housea\a_minaret_porto\a_minaret_porto_dam_ep1.p3d";
 };
 class CUP_A2_minaret_porto_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "minaret_porto_ep1";
  model = "\ca\structures_e\housea\a_minaret_porto\a_minaret_porto_ep1.p3d";
 };
 class CUP_A2_mosque_small_1_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "mosque_small_1_dam_ep1";
  model = "\ca\structures_e\housea\a_mosque_small\a_mosque_small_1_dam_ep1.p3d";
 };
 class CUP_A2_mosque_small_1_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "mosque_small_1_ep1";
  model = "\ca\structures_e\housea\a_mosque_small\a_mosque_small_1_ep1.p3d";
 };
 class CUP_A2_mosque_small_2_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "mosque_small_2_dam_ep1";
  model = "\ca\structures_e\housea\a_mosque_small\a_mosque_small_2_dam_ep1.p3d";
 };
 class CUP_A2_mosque_small_2_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "mosque_small_2_ep1";
  model = "\ca\structures_e\housea\a_mosque_small\a_mosque_small_2_ep1.p3d";
 };
 class CUP_A2_panelak: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "panelak";
  model = "\ca\buildings\panelak.p3d";
 };
 class CUP_A2_panelak2: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "panelak2";
  model = "\ca\buildings\panelak2.p3d";
 };
 class CUP_A2_panelak3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "panelak3";
  model = "\ca\buildings\panelak3.p3d";
 };
 class CUP_A2_posed: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "posed";
  model = "\ca\buildings\posed.p3d";
 };
 class CUP_A2_psi_bouda: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "psi_bouda";
  model = "\ca\buildings\psi_bouda.p3d";
 };
 class CUP_A2_sara_domek_hospoda: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_domek_hospoda";
  model = "\ca\buildings\sara_domek_hospoda.p3d";
 };
 class CUP_A2_sara_domek_kovarna: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_domek_kovarna";
  model = "\ca\buildings\sara_domek_kovarna.p3d";
 };
 class CUP_A2_sara_domek_podhradi_1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_domek_podhradi_1";
  model = "\ca\buildings\sara_domek_podhradi_1.p3d";
 };
 class CUP_A2_sara_domek_ruina: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_domek_ruina";
  model = "\ca\buildings\sara_domek_ruina.p3d";
 };
 class CUP_A2_sara_domek_sedy: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_domek_sedy";
  model = "\ca\buildings\sara_domek_sedy.p3d";
 };
 class CUP_A2_sara_domek_vilka: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_domek_vilka";
  model = "\ca\buildings\sara_domek_vilka.p3d";
 };
 class CUP_A2_sara_domek_zluty: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_domek_zluty";
  model = "\ca\buildings\sara_domek_zluty.p3d";
 };
 class CUP_A2_sara_hasic_zbroj: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_hasic_zbroj";
  model = "\ca\buildings\sara_hasic_zbroj.p3d";
 };
 class CUP_A2_sara_stodola: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_stodola";
  model = "\ca\buildings\sara_stodola.p3d";
 };
 class CUP_A2_sara_stodola3: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "sara_stodola3";
  model = "\ca\buildings\sara_stodola3.p3d";
 };
 class CUP_A2_shed_m01: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_m01";
  model = "\ca\buildings2\shed_small\shed_m01.p3d";
 };
 class CUP_A2_shed_m01_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_m01_ep1";
  model = "\ca\structures_e\misc\shed_m01_ep1.p3d";
 };
 class CUP_A2_shed_m02: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_m02";
  model = "\ca\buildings2\shed_small\shed_m02.p3d";
 };
 class CUP_A2_shed_m03: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_m03";
  model = "\ca\buildings2\shed_small\shed_m03.p3d";
 };
 class CUP_A2_shed_w01: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w01";
  model = "\ca\buildings2\shed_small\shed_w01.p3d";
 };
 class CUP_A2_shed_w02: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w02";
  model = "\ca\buildings2\shed_small\shed_w02.p3d";
 };
 class CUP_A2_shed_w02_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w02_ep1";
  model = "\ca\structures_e\misc\shed_w02_ep1.p3d";
 };
 class CUP_A2_shed_w02_pmc: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w02_pmc";
  model = "\ca\structures_pmc\misc\shed\shed_w02_pmc.p3d";
 };
 class CUP_A2_shed_w03: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w03";
  model = "\ca\buildings2\shed_small\shed_w03.p3d";
 };
 class CUP_A2_shed_w03_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w03_ep1";
  model = "\ca\structures_e\misc\shed_w03_ep1.p3d";
 };
 class CUP_A2_shed_w03_pmc: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w03_pmc";
  model = "\ca\structures_pmc\misc\shed\shed_w03_pmc.p3d";
 };
 class CUP_A2_shed_w4: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_w4";
  model = "\ca\structures\shed\shed_small\shed_w4.p3d";
 };
 class CUP_A2_shed_wooden: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "shed_wooden";
  model = "\ca\buildings2\shed_wooden\shed_wooden.p3d";
 };
 class CUP_A2_stanice: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "stanice";
  model = "\ca\buildings\stanice.p3d";
 };
 class CUP_A2_statek_hl_bud: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "statek_hl_bud";
  model = "\ca\buildings\statek_hl_bud.p3d";
 };
 class CUP_A2_statek_kulna: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "statek_kulna";
  model = "\ca\buildings\statek_kulna.p3d";
 };
 class CUP_A2_stodola_old_open: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "stodola_old_open";
  model = "\ca\buildings\stodola_old_open.p3d";
 };
 class CUP_A2_stodola_open: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "stodola_open";
  model = "\ca\buildings\stodola_open.p3d";
 };
 class CUP_A2_terrace_k_1_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "terrace_k_1_ep1";
  model = "\ca\structures_e\housek\terrace_k_1_ep1.p3d";
 };
 class CUP_A2_villa_dam_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "villa_dam_ep1";
  model = "\ca\structures_e\housea\a_villa\a_villa_dam_ep1.p3d";
 };
 class CUP_A2_villa_ep1: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "villa_ep1";
  model = "\ca\structures_e\housea\a_villa\a_villa_ep1.p3d";
 };
 class CUP_A2_zalchata: CUP_A2_Civilian
 {
  scope = 2;
  displayName = "zalchata";
  model = "\ca\buildings\zalchata.p3d";
 };
 class CUP_A2_scaffolding: CUP_A2_Various
 {
  scope = 2;
  displayName = "scaffolding";
  model = "\ca\structures\misc\misc_scaffolding\misc_scaffolding.p3d";
 };
 class CUP_A2_budova1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "budova1";
  model = "\ca\buildings\budova1.p3d";
 };
 class CUP_A2_budova2: CUP_A2_Industry
 {
  scope = 2;
  displayName = "budova2";
  model = "\ca\buildings\budova2.p3d";
 };
 class CUP_A2_budova4: CUP_A2_Industry
 {
  scope = 2;
  displayName = "budova4";
  model = "\ca\buildings\budova4.p3d";
 };
 class CUP_A2_budova4_in: CUP_A2_Industry
 {
  scope = 2;
  displayName = "budova4_in";
  model = "\ca\buildings\budova4_in.p3d";
 };
 class CUP_A2_budova5: CUP_A2_Industry
 {
  scope = 2;
  displayName = "budova5";
  model = "\ca\buildings\budova5.p3d";
 };
 class CUP_A2_buildingwip: CUP_A2_Industry
 {
  scope = 2;
  displayName = "buildingwip";
  model = "\ca\structures\a_buildingwip\a_buildingwip.p3d";
 };
 class CUP_A2_coltan_hopper_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "coltan_hopper_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_hopper_ep1.p3d";
 };
 class CUP_A2_coltan_main_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "coltan_main_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_main_ep1.p3d";
 };
 class CUP_A2_coltan_main_part2_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "coltan_main_part2_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_main_part2_ep1.p3d";
 };
 class CUP_A2_coltan_rail_end_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "coltan_rail_end_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_rail_end_ep1.p3d";
 };
 class CUP_A2_coltan_rail_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "coltan_rail_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_rail_ep1.p3d";
 };
 class CUP_A2_coltan_rail_switch_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "coltan_rail_switch_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_rail_switch_ep1.p3d";
 };
 class CUP_A2_coltan_tunnel_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "coltan_tunnel_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_tunnel_ep1.p3d";
 };
 class CUP_A2_concrete_high: CUP_A2_Industry
 {
  scope = 2;
  displayName = "concrete_high";
  model = "\ca\buildings2\misc_concrete\misc_concrete_high.p3d";
 };
 class CUP_A2_conveyer: CUP_A2_Industry
 {
  scope = 2;
  displayName = "conveyer";
  model = "\ca\structures\ind_quarry\ind_conveyer.p3d";
 };
 class CUP_A2_conveyerlong: CUP_A2_Industry
 {
  scope = 2;
  displayName = "conveyerlong";
  model = "\ca\structures\ind_quarry\ind_conveyerlong.p3d";
 };
 class CUP_A2_crane_02a: CUP_A2_Industry
 {
  scope = 2;
  displayName = "crane_02a";
  model = "\ca\buildings2\a_crane_02\a_crane_02a.p3d";
 };
 class CUP_A2_crane_02b: CUP_A2_Industry
 {
  scope = 2;
  displayName = "crane_02b";
  model = "\ca\buildings2\a_crane_02\a_crane_02b.p3d";
 };
 class CUP_A2_crane_rails: CUP_A2_Industry
 {
  scope = 2;
  displayName = "crane_rails";
  model = "\ca\buildings2\a_crane_02\crane_rails.p3d";
 };
 class CUP_A2_crane_rails_end: CUP_A2_Industry
 {
  scope = 2;
  displayName = "crane_rails_end";
  model = "\ca\buildings2\a_crane_02\crane_rails_end.p3d";
 };
 class CUP_A2_cranecon: CUP_A2_Industry
 {
  scope = 2;
  displayName = "cranecon";
  model = "\ca\structures\a_cranecon\a_cranecon.p3d";
 };
 class CUP_A2_d_mlyn_vys: CUP_A2_Industry
 {
  scope = 2;
  displayName = "d_mlyn_vys";
  model = "\ca\buildings2\ind_cementworks\ind_dopravnik\d_mlyn_vys.p3d";
 };
 class CUP_A2_dam_barrier_40: CUP_A2_Industry
 {
  scope = 2;
  displayName = "dam_barrier_40";
  model = "\ca\roads2\dam\dam_barrier_40\dam_barrier_40.p3d";
 };
 class CUP_A2_dam_conc_20: CUP_A2_Industry
 {
  scope = 2;
  displayName = "dam_conc_20";
  model = "\ca\roads2\dam\dam_conc\dam_conc_20.p3d";
 };
 class CUP_A2_dam_concp_20: CUP_A2_Industry
 {
  scope = 2;
  displayName = "dam_concp_20";
  model = "\ca\roads2\dam\dam_conc\dam_concp_20.p3d";
 };
 class CUP_A2_expedice_1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "expedice_1";
  model = "\ca\buildings2\ind_cementworks\ind_expedice\ind_expedice_1.p3d";
 };
 class CUP_A2_expedice_2: CUP_A2_Industry
 {
  scope = 2;
  displayName = "expedice_2";
  model = "\ca\buildings2\ind_cementworks\ind_expedice\ind_expedice_2.p3d";
 };
 class CUP_A2_expedice_3: CUP_A2_Industry
 {
  scope = 2;
  displayName = "expedice_3";
  model = "\ca\buildings2\ind_cementworks\ind_expedice\ind_expedice_3.p3d";
 };
 class CUP_A2_farm_wtower: CUP_A2_Industry
 {
  scope = 2;
  displayName = "farm_wtower";
  model = "\ca\buildings2\farm_wtower\farm_wtower.p3d";
 };
 class CUP_A2_fuelstation_build: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_build";
  model = "\ca\structures\house\a_fuelstation\a_fuelstation_build.p3d";
 };
 class CUP_A2_fuelstation_build_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_build_ep1";
  model = "\ca\structures_e\ind\ind_fuelstation\ind_fuelstation_build_ep1.p3d";
 };
 class CUP_A2_fuelstation_build_pmc: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_build_pmc";
  model = "\ca\structures_pmc\ind\fuelstation\fuelstation_build_pmc.p3d";
 };
 class CUP_A2_fuelstation_feed: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_feed";
  model = "\ca\structures\house\a_fuelstation\a_fuelstation_feed.p3d";
 };
 class CUP_A2_fuelstation_feed_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_feed_ep1";
  model = "\ca\structures_e\ind\ind_fuelstation\ind_fuelstation_feed_ep1.p3d";
 };
 class CUP_A2_fuelstation_feed_pmc: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_feed_pmc";
  model = "\ca\structures_pmc\ind\fuelstation\fuelstation_feed_pmc.p3d";
 };
 class CUP_A2_fuelstation_shed: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_shed";
  model = "\ca\structures\house\a_fuelstation\a_fuelstation_shed.p3d";
 };
 class CUP_A2_fuelstation_shed_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_shed_ep1";
  model = "\ca\structures_e\ind\ind_fuelstation\ind_fuelstation_shed_ep1.p3d";
 };
 class CUP_A2_fuelstation_shed_pmc: CUP_A2_Industry
 {
  scope = 2;
  displayName = "fuelstation_shed_pmc";
  model = "\ca\structures_pmc\ind\fuelstation\fuelstation_shed_pmc.p3d";
 };
 class CUP_A2_garage01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "garage01";
  model = "\ca\buildings2\ind_garage01\ind_garage01.p3d";
 };
 class CUP_A2_garage01_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "garage01_ep1";
  model = "\ca\structures_e\ind\ind_garage01\ind_garage01_ep1.p3d";
 };
 class CUP_A2_garaz: CUP_A2_Industry
 {
  scope = 2;
  displayName = "garaz";
  model = "\ca\buildings\garaz.p3d";
 };
 class CUP_A2_garaz_mala: CUP_A2_Industry
 {
  scope = 2;
  displayName = "garaz_mala";
  model = "\ca\buildings\garaz_mala.p3d";
 };
 class CUP_A2_generalstore_01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "generalstore_01";
  model = "\ca\buildings2\a_generalstore_01\a_generalstore_01.p3d";
 };
 class CUP_A2_generalstore_01_dam: CUP_A2_Industry
 {
  scope = 2;
  displayName = "generalstore_01_dam";
  model = "\ca\buildings2\a_generalstore_01\a_generalstore_01_dam.p3d";
 };
 class CUP_A2_generalstore_01a: CUP_A2_Industry
 {
  scope = 2;
  displayName = "generalstore_01a";
  model = "\ca\buildings2\a_generalstore_01\a_generalstore_01a.p3d";
 };
 class CUP_A2_generalstore_01a_dam: CUP_A2_Industry
 {
  scope = 2;
  displayName = "generalstore_01a_dam";
  model = "\ca\buildings2\a_generalstore_01\a_generalstore_01a_dam.p3d";
 };
 class CUP_A2_hammermill: CUP_A2_Industry
 {
  scope = 2;
  displayName = "hammermill";
  model = "\ca\structures\ind_quarry\ind_hammermill.p3d";
 };
 class CUP_A2_hopper_old_pmc: CUP_A2_Industry
 {
  scope = 2;
  displayName = "hopper_old_pmc";
  model = "\ca\structures_pmc\ind\hopper_old_pmc.p3d";
 };
 class CUP_A2_houseb_tenement: CUP_A2_Industry
 {
  scope = 2;
  displayName = "houseb_tenement";
  model = "\ca\structures\house\housebt\houseb_tenement.p3d";
 };
 class CUP_A2_ironpipes_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "ironpipes_ep1";
  model = "\ca\structures_e\misc\misc_construction\misc_ironpipes_ep1.p3d";
 };
 class CUP_A2_komin: CUP_A2_Industry
 {
  scope = 2;
  displayName = "komin";
  model = "\ca\buildings\komin.p3d";
 };
 class CUP_A2_leseni2x: CUP_A2_Industry
 {
  scope = 2;
  displayName = "leseni2x";
  model = "\ca\buildings\misc\leseni2x.p3d";
 };
 class CUP_A2_leseni4x: CUP_A2_Industry
 {
  scope = 2;
  displayName = "leseni4x";
  model = "\ca\buildings\misc\leseni4x.p3d";
 };
 class CUP_A2_malykomin: CUP_A2_Industry
 {
  scope = 2;
  displayName = "malykomin";
  model = "\ca\buildings2\ind_cementworks\ind_malykomin\ind_malykomin.p3d";
 };
 class CUP_A2_market_stalls_01_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "market_stalls_01_ep1";
  model = "\ca\structures_e\misc\misc_market\market_stalls_01_ep1.p3d";
 };
 class CUP_A2_market_stalls_02_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "market_stalls_02_ep1";
  model = "\ca\structures_e\misc\misc_market\market_stalls_02_ep1.p3d";
 };
 class CUP_A2_metalcrate_02: CUP_A2_Industry
 {
  scope = 2;
  displayName = "metalcrate_02";
  model = "\ca\structures\furniture\cases\metalcrate_02\metalcrate_02.p3d";
 };
 class CUP_A2_mlyn_01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "mlyn_01";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_01.p3d";
 };
 class CUP_A2_mlyn_02: CUP_A2_Industry
 {
  scope = 2;
  displayName = "mlyn_02";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_02.p3d";
 };
 class CUP_A2_mlyn_03: CUP_A2_Industry
 {
  scope = 2;
  displayName = "mlyn_03";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_03.p3d";
 };
 class CUP_A2_mlyn_04: CUP_A2_Industry
 {
  scope = 2;
  displayName = "mlyn_04";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_04.p3d";
 };
 class CUP_A2_mlyn_d1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "mlyn_d1";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_d1.p3d";
 };
 class CUP_A2_mlyn_d2: CUP_A2_Industry
 {
  scope = 2;
  displayName = "mlyn_d2";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_d2.p3d";
 };
 class CUP_A2_municipaloffice: CUP_A2_Industry
 {
  scope = 2;
  displayName = "municipaloffice";
  model = "\ca\structures\a_municipaloffice\a_municipaloffice.p3d";
 };
 class CUP_A2_nasypka: CUP_A2_Industry
 {
  scope = 2;
  displayName = "nasypka";
  model = "\ca\buildings\misc\nasypka.p3d";
 };
 class CUP_A2_office01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "office01";
  model = "\ca\structures\house\a_office01\a_office01.p3d";
 };
 class CUP_A2_office02: CUP_A2_Industry
 {
  scope = 2;
  displayName = "office02";
  model = "\ca\structures\house\a_office02\a_office02.p3d";
 };
 class CUP_A2_office02_dam: CUP_A2_Industry
 {
  scope = 2;
  displayName = "office02_dam";
  model = "\ca\structures\house\a_office02\a_office02_dam.p3d";
 };
 class CUP_A2_oil_pump_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "oil_pump_ep1";
  model = "\ca\structures_e\ind\ind_oil_mine\ind_oil_pump_ep1.p3d";
 };
 class CUP_A2_oil_tower_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "oil_tower_ep1";
  model = "\ca\structures_e\ind\ind_oil_mine\ind_oil_tower_ep1.p3d";
 };
 class CUP_A2_pec_01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "pec_01";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_01.p3d";
 };
 class CUP_A2_pec_02: CUP_A2_Industry
 {
  scope = 2;
  displayName = "pec_02";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_02.p3d";
 };
 class CUP_A2_pec_03: CUP_A2_Industry
 {
  scope = 2;
  displayName = "pec_03";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_03.p3d";
 };
 class CUP_A2_pec_03a: CUP_A2_Industry
 {
  scope = 2;
  displayName = "pec_03a";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_03a.p3d";
 };
 class CUP_A2_pec_03b: CUP_A2_Industry
 {
  scope = 2;
  displayName = "pec_03b";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_03b.p3d";
 };
 class CUP_A2_pub_01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "pub_01";
  model = "\ca\buildings2\a_pub\a_pub_01.p3d";
 };
 class CUP_A2_quarry: CUP_A2_Industry
 {
  scope = 2;
  displayName = "quarry";
  model = "\ca\structures\ind_quarry\ind_quarry.p3d";
 };
 class CUP_A2_repair_center: CUP_A2_Industry
 {
  scope = 2;
  displayName = "repair_center";
  model = "\ca\buildings\repair_center.p3d";
 };
 class CUP_A2_sawmill: CUP_A2_Industry
 {
  scope = 2;
  displayName = "sawmill";
  model = "\ca\structures\ind_sawmill\ind_sawmill.p3d";
 };
 class CUP_A2_sawmillpen: CUP_A2_Industry
 {
  scope = 2;
  displayName = "sawmillpen";
  model = "\ca\structures\ind_sawmill\ind_sawmillpen.p3d";
 };
 class CUP_A2_shed_01_end: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_01_end";
  model = "\ca\buildings2\ind_shed_01\ind_shed_01_end.p3d";
 };
 class CUP_A2_shed_01_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_01_ep1";
  model = "\ca\structures_e\ind\ind_shed\ind_shed_01_ep1.p3d";
 };
 class CUP_A2_shed_01_main: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_01_main";
  model = "\ca\buildings2\ind_shed_01\ind_shed_01_main.p3d";
 };
 class CUP_A2_shed_02_end: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_02_end";
  model = "\ca\buildings2\ind_shed_02\ind_shed_02_end.p3d";
 };
 class CUP_A2_shed_02_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_02_ep1";
  model = "\ca\structures_e\ind\ind_shed\ind_shed_02_ep1.p3d";
 };
 class CUP_A2_shed_02_main: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_02_main";
  model = "\ca\buildings2\ind_shed_02\ind_shed_02_main.p3d";
 };
 class CUP_A2_shed_ind02: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_ind02";
  model = "\ca\structures\shed_ind\shed_ind02.p3d";
 };
 class CUP_A2_shed_ind02_dam: CUP_A2_Industry
 {
  scope = 2;
  displayName = "shed_ind02_dam";
  model = "\ca\structures\shed_ind\shed_ind02_dam.p3d";
 };
 class CUP_A2_sideroof: CUP_A2_Industry
 {
  scope = 2;
  displayName = "sideroof";
  model = "\ca\structures\shed_ind\ind_sideroof.p3d";
 };
 class CUP_A2_silomale: CUP_A2_Industry
 {
  scope = 2;
  displayName = "silomale";
  model = "\ca\buildings2\ind_cementworks\ind_silomale\ind_silomale.p3d";
 };
 class CUP_A2_silovelke_01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "silovelke_01";
  model = "\ca\buildings2\ind_cementworks\ind_silovelke\ind_silovelke_01.p3d";
 };
 class CUP_A2_silovelke_02: CUP_A2_Industry
 {
  scope = 2;
  displayName = "silovelke_02";
  model = "\ca\buildings2\ind_cementworks\ind_silovelke\ind_silovelke_02.p3d";
 };
 class CUP_A2_silovelke_most: CUP_A2_Industry
 {
  scope = 2;
  displayName = "silovelke_most";
  model = "\ca\buildings2\ind_cementworks\ind_silovelke\ind_silovelke_most.p3d";
 };
 class CUP_A2_stack_big: CUP_A2_Industry
 {
  scope = 2;
  displayName = "stack_big";
  model = "\ca\structures\ind\ind_stack_big.p3d";
 };
 class CUP_A2_stationhouse: CUP_A2_Industry
 {
  scope = 2;
  displayName = "stationhouse";
  model = "\ca\structures\house\a_stationhouse\a_stationhouse.p3d";
 };
 class CUP_A2_tovarna2: CUP_A2_Industry
 {
  scope = 2;
  displayName = "tovarna2";
  model = "\ca\buildings\tovarna2.p3d";
 };
 class CUP_A2_tram_ep1: CUP_A2_Industry
 {
  scope = 2;
  displayName = "tram_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\misc_tram_ep1.p3d";
 };
 class CUP_A2_vysypka: CUP_A2_Industry
 {
  scope = 2;
  displayName = "vysypka";
  model = "\ca\buildings2\ind_cementworks\ind_vysypka\ind_vysypka.p3d";
 };
 class CUP_A2_waterstation: CUP_A2_Industry
 {
  scope = 2;
  displayName = "waterstation";
  model = "\ca\buildings2\misc_waterstation\misc_waterstation.p3d";
 };
 class CUP_A2_workshop01_01: CUP_A2_Industry
 {
  scope = 2;
  displayName = "workshop01_01";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_01.p3d";
 };
 class CUP_A2_workshop01_02: CUP_A2_Industry
 {
  scope = 2;
  displayName = "workshop01_02";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_02.p3d";
 };
 class CUP_A2_workshop01_03: CUP_A2_Industry
 {
  scope = 2;
  displayName = "workshop01_03";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_03.p3d";
 };
 class CUP_A2_workshop01_04: CUP_A2_Industry
 {
  scope = 2;
  displayName = "workshop01_04";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_04.p3d";
 };
 class CUP_A2_workshop01_l: CUP_A2_Industry
 {
  scope = 2;
  displayName = "workshop01_l";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_l.p3d";
 };
 class CUP_A2_bedna_ammo2x: CUP_A2_Military
 {
  scope = 2;
  displayName = "bedna_ammo2x";
  model = "\ca\buildings\furniture\bedna_ammo2x.p3d";
 };
 class CUP_A2_76n6_clamshell_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "76n6_clamshell_ep1";
  model = "\ca\misc_e\76n6_clamshell_ep1.p3d";
 };
 class CUP_A2_76n6_clamshell_lower: CUP_A2_Military
 {
  scope = 2;
  displayName = "76n6_clamshell_lower";
  model = "\ca\misc2\samsite\76n6_clamshell_lower.p3d";
 };
 class CUP_A2_a_tent: CUP_A2_Military
 {
  scope = 2;
  displayName = "a_tent";
  model = "\ca\misc3\a_tent.p3d";
 };
 class CUP_A2_ammobednax: CUP_A2_Military
 {
  scope = 2;
  displayName = "ammobednax";
  model = "\ca\buildings\furniture\ammobednax.p3d";
 };
 class CUP_A2_astan: CUP_A2_Military
 {
  scope = 2;
  displayName = "astan";
  model = "\ca\buildings\tents\astan.p3d";
 };
 class CUP_A2_barrack2: CUP_A2_Military
 {
  scope = 2;
  displayName = "barrack2";
  model = "\ca\misc2\barrack2\barrack2.p3d";
 };
 class CUP_A2_barrack2_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "barrack2_ep1";
  model = "\ca\misc_e\barrack2_ep1.p3d";
 };
 class CUP_A2_barracks: CUP_A2_Military
 {
  scope = 2;
  displayName = "barracks";
  model = "\ca\structures\mil\mil_barracks.p3d";
 };
 class CUP_A2_barracks_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "barracks_ep1";
  model = "\ca\structures_e\mil\mil_barracks_ep1.p3d";
 };
 class CUP_A2_barracks_i: CUP_A2_Military
 {
  scope = 2;
  displayName = "barracks_i";
  model = "\ca\structures\mil\mil_barracks_i.p3d";
 };
 class CUP_A2_barracks_i_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "barracks_i_ep1";
  model = "\ca\structures_e\mil\mil_barracks_i_ep1.p3d";
 };
 class CUP_A2_barracks_l: CUP_A2_Military
 {
  scope = 2;
  displayName = "barracks_l";
  model = "\ca\structures\mil\mil_barracks_l.p3d";
 };
 class CUP_A2_barracks_l_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "barracks_l_ep1";
  model = "\ca\structures_e\mil\mil_barracks_l_ep1.p3d";
 };
 class CUP_A2_bunker_pmc: CUP_A2_Military
 {
  scope = 2;
  displayName = "bunker_pmc";
  model = "\ca\structures_pmc\buildings\bunker\bunker_pmc.p3d";
 };
 class CUP_A2_camo_box: CUP_A2_Military
 {
  scope = 2;
  displayName = "camo_box";
  model = "\ca\buildings\tents\camo_box.p3d";
 };
 class CUP_A2_camonet_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_east";
  model = "\ca\misc3\camonet_east.p3d";
 };
 class CUP_A2_camonet_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_east_ep1";
  model = "\ca\misc_e\camonet_east_ep1.p3d";
 };
 class CUP_A2_camonet_east_var1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_east_var1";
  model = "\ca\misc3\camonet_east_var1.p3d";
 };
 class CUP_A2_camonet_east_var1_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_east_var1_ep1";
  model = "\ca\misc_e\camonet_east_var1_ep1.p3d";
 };
 class CUP_A2_camonet_nato: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_nato";
  model = "\ca\misc3\camonet_nato.p3d";
 };
 class CUP_A2_camonet_nato_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_nato_ep1";
  model = "\ca\misc_e\camonet_nato_ep1.p3d";
 };
 class CUP_A2_camonet_nato_var1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_nato_var1";
  model = "\ca\misc3\camonet_nato_var1.p3d";
 };
 class CUP_A2_camonet_nato_var1_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonet_nato_var1_ep1";
  model = "\ca\misc_e\camonet_nato_var1_ep1.p3d";
 };
 class CUP_A2_camonetb_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonetb_east";
  model = "\ca\misc3\camonetb_east.p3d";
 };
 class CUP_A2_camonetb_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonetb_east_ep1";
  model = "\ca\misc_e\camonetb_east_ep1.p3d";
 };
 class CUP_A2_camonetb_nato: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonetb_nato";
  model = "\ca\misc3\camonetb_nato.p3d";
 };
 class CUP_A2_camonetb_nato_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "camonetb_nato_ep1";
  model = "\ca\misc_e\camonetb_nato_ep1.p3d";
 };
 class CUP_A2_climbing_obstacle: CUP_A2_Military
 {
  scope = 2;
  displayName = "climbing_obstacle";
  model = "\ca\structures\misc\armory\climbing_obstacle\climbing_obstacle.p3d";
 };
 class CUP_A2_controltower: CUP_A2_Military
 {
  scope = 2;
  displayName = "controltower";
  model = "\ca\structures\mil\mil_controltower.p3d";
 };
 class CUP_A2_controltower_dam: CUP_A2_Military
 {
  scope = 2;
  displayName = "controltower_dam";
  model = "\ca\structures\mil\mil_controltower_dam.p3d";
 };
 class CUP_A2_controltower_dam_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "controltower_dam_ep1";
  model = "\ca\structures_e\mil\mil_controltower_dam_ep1.p3d";
 };
 class CUP_A2_controltower_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "controltower_ep1";
  model = "\ca\structures_e\mil\mil_controltower_ep1.p3d";
 };
 class CUP_A2_dirtmount: CUP_A2_Military
 {
  scope = 2;
  displayName = "dirtmount";
  model = "\ca\misc_e\dirtmount.p3d";
 };
 class CUP_A2_drevtank: CUP_A2_Military
 {
  scope = 2;
  displayName = "drevtank";
  model = "\ca\misc\drevtank.p3d";
 };
 class CUP_A2_fort_artillery_nest_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "fort_artillery_nest_ep1";
  model = "\ca\misc_e\fort_artillery_nest_ep1.p3d";
 };
 class CUP_A2_fort_watchtower: CUP_A2_Military
 {
  scope = 2;
  displayName = "fort_watchtower";
  model = "\ca\misc3\fort_watchtower.p3d";
 };
 class CUP_A2_fort_watchtower_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "fort_watchtower_ep1";
  model = "\ca\misc_e\fort_watchtower_ep1.p3d";
 };
 class CUP_A2_fortified_nest_big: CUP_A2_Military
 {
  scope = 2;
  displayName = "fortified_nest_big";
  model = "\ca\misc3\fortified_nest_big.p3d";
 };
 class CUP_A2_fortified_nest_big_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "fortified_nest_big_ep1";
  model = "\ca\misc_e\fortified_nest_big_ep1.p3d";
 };
 class CUP_A2_fortified_nest_small_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "fortified_nest_small_ep1";
  model = "\ca\misc_e\fortified_nest_small_ep1.p3d";
 };
 class CUP_A2_fortress_01: CUP_A2_Military
 {
  scope = 2;
  displayName = "fortress_01";
  model = "\ca\buildings\tents\fortress_01.p3d";
 };
 class CUP_A2_fortress_02: CUP_A2_Military
 {
  scope = 2;
  displayName = "fortress_02";
  model = "\ca\buildings\tents\fortress_02.p3d";
 };
 class CUP_A2_guardhouse: CUP_A2_Military
 {
  scope = 2;
  displayName = "guardhouse";
  model = "\ca\structures\mil\mil_guardhouse.p3d";
 };
 class CUP_A2_guardhouse_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "guardhouse_ep1";
  model = "\ca\structures_e\mil\mil_guardhouse_ep1.p3d";
 };
 class CUP_A2_guardshed: CUP_A2_Military
 {
  scope = 2;
  displayName = "guardshed";
  model = "\ca\misc2\guardshed.p3d";
 };
 class CUP_A2_gunrack_empty: CUP_A2_Military
 {
  scope = 2;
  displayName = "gunrack_empty";
  model = "\ca\misc2\gunrack_empty.p3d";
 };
 class CUP_A2_hangar_2: CUP_A2_Military
 {
  scope = 2;
  displayName = "hangar_2";
  model = "\ca\buildings\hangar_2.p3d";
 };
 class CUP_A2_hangar_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "hangar_ep1";
  model = "\ca\structures_e\mil\mil_hangar_ep1.p3d";
 };
 class CUP_A2_house: CUP_A2_Military
 {
  scope = 2;
  displayName = "house";
  model = "\ca\structures\mil\mil_house.p3d";
 };
 class CUP_A2_house_dam: CUP_A2_Military
 {
  scope = 2;
  displayName = "house_dam";
  model = "\ca\structures\mil\mil_house_dam.p3d";
 };
 class CUP_A2_house_dam_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "house_dam_ep1";
  model = "\ca\structures_e\mil\mil_house_dam_ep1.p3d";
 };
 class CUP_A2_house_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "house_ep1";
  model = "\ca\structures_e\mil\mil_house_ep1.p3d";
 };
 class CUP_A2_hromada_beden_dekorativnix: CUP_A2_Military
 {
  scope = 2;
  displayName = "hromada_beden_dekorativnix";
  model = "\ca\buildings\furniture\hromada_beden_dekorativnix.p3d";
 };
 class CUP_A2_map_for_briefing: CUP_A2_Military
 {
  scope = 2;
  displayName = "map_for_briefing";
  model = "\ca\misc_e\map_for_briefing.p3d";
 };
 class CUP_A2_mash: CUP_A2_Military
 {
  scope = 2;
  displayName = "mash";
  model = "\ca\buildings\tents\mash.p3d";
 };
 class CUP_A2_mash_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "mash_ep1";
  model = "\ca\misc_e\mash_ep1.p3d";
 };
 class CUP_A2_metalcrate: CUP_A2_Military
 {
  scope = 2;
  displayName = "metalcrate";
  model = "\ca\structures\furniture\cases\metalcrate\metalcrate.p3d";
 };
 class CUP_A2_obihacka: CUP_A2_Military
 {
  scope = 2;
  displayName = "obihacka";
  model = "\ca\misc\obihacka.p3d";
 };
 class CUP_A2_obstacle_get_over: CUP_A2_Military
 {
  scope = 2;
  displayName = "obstacle_get_over";
  model = "\ca\misc\obstacle_get_over.p3d";
 };
 class CUP_A2_obstacle_prone: CUP_A2_Military
 {
  scope = 2;
  displayName = "obstacle_prone";
  model = "\ca\misc\obstacle_prone.p3d";
 };
 class CUP_A2_obstacle_run_duck: CUP_A2_Military
 {
  scope = 2;
  displayName = "obstacle_run_duck";
  model = "\ca\misc\obstacle_run_duck.p3d";
 };
 class CUP_A2_popuptarget: CUP_A2_Military
 {
  scope = 2;
  displayName = "popuptarget";
  model = "\ca\structures\misc\armory\armor_popuptarget\popuptarget.p3d";
 };
 class CUP_A2_powgen_big: CUP_A2_Military
 {
  scope = 2;
  displayName = "powgen_big";
  model = "\ca\misc_e\powgen_big.p3d";
 };
 class CUP_A2_powgen_big_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "powgen_big_ep1";
  model = "\ca\misc_e\powgen_big_ep1.p3d";
 };
 class CUP_A2_prebehlavka: CUP_A2_Military
 {
  scope = 2;
  displayName = "prebehlavka";
  model = "\ca\misc\prebehlavka.p3d";
 };
 class CUP_A2_pristresek: CUP_A2_Military
 {
  scope = 2;
  displayName = "pristresek";
  model = "\ca\buildings\tents\pristresek.p3d";
 };
 class CUP_A2_pristresek_mensi: CUP_A2_Military
 {
  scope = 2;
  displayName = "pristresek_mensi";
  model = "\ca\buildings\tents\pristresek_mensi.p3d";
 };
 class CUP_A2_prolejzacka: CUP_A2_Military
 {
  scope = 2;
  displayName = "prolejzacka";
  model = "\ca\misc\prolejzacka.p3d";
 };
 class CUP_A2_repair_center_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "repair_center_ep1";
  model = "\ca\structures_e\mil\mil_repair_center_ep1.p3d";
 };
 class CUP_A2_sign: CUP_A2_Military
 {
  scope = 2;
  displayName = "sign";
  model = "\ca\misc3\wf\sign.p3d";
 };
 class CUP_A2_sign_flag: CUP_A2_Military
 {
  scope = 2;
  displayName = "sign_flag";
  model = "\ca\misc3\wf\sign_flag.p3d";
 };
 class CUP_A2_small_flag: CUP_A2_Military
 {
  scope = 2;
  displayName = "small_flag";
  model = "\ca\structures\misc\armory\small_flag\small_flag.p3d";
 };
 class CUP_A2_ss_hangar: CUP_A2_Military
 {
  scope = 2;
  displayName = "ss_hangar";
  model = "\ca\buildings\ss_hangar.p3d";
 };
 class CUP_A2_ss_hangar_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "ss_hangar_ep1";
  model = "\ca\misc_e\ss_hangar_ep1.p3d";
 };
 class CUP_A2_stan: CUP_A2_Military
 {
  scope = 2;
  displayName = "stan";
  model = "\ca\buildings\tents\stan.p3d";
 };
 class CUP_A2_stan_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "stan_east";
  model = "\ca\buildings\tents\stan_east.p3d";
 };
 class CUP_A2_tent_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "tent_east";
  model = "\ca\misc3\tent_east.p3d";
 };
 class CUP_A2_tent_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "tent_east_ep1";
  model = "\ca\misc_e\tent_east_ep1.p3d";
 };
 class CUP_A2_tent_small_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "tent_small_west";
  model = "\ca\misc3\tent_small_west.p3d";
 };
 class CUP_A2_tent_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "tent_west";
  model = "\ca\misc3\tent_west.p3d";
 };
 class CUP_A2_tent2_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "tent2_west";
  model = "\ca\misc3\tent2_west.p3d";
 };
 class CUP_A2_tent2_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "tent2_west_ep1";
  model = "\ca\misc_e\tent2_west_ep1.p3d";
 };
 class CUP_A2_vez: CUP_A2_Military
 {
  scope = 2;
  displayName = "vez";
  model = "\ca\buildings\vez.p3d";
 };
 class CUP_A2_wf_anti_radar_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_anti_radar_east";
  model = "\ca\misc3\wf\wf_anti_radar_east.p3d";
 };
 class CUP_A2_wf_anti_radar_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_anti_radar_east_ep1";
  model = "\ca\misc_e\wf\wf_anti_radar_east_ep1.p3d";
 };
 class CUP_A2_wf_anti_radar_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_anti_radar_west";
  model = "\ca\misc3\wf\wf_anti_radar_west.p3d";
 };
 class CUP_A2_wf_anti_radar_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_anti_radar_west_ep1";
  model = "\ca\misc_e\wf\wf_anti_radar_west_ep1.p3d";
 };
 class CUP_A2_wf_artilery_radar_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_artilery_radar_east";
  model = "\ca\misc3\wf\wf_artilery_radar_east.p3d";
 };
 class CUP_A2_wf_artilery_radar_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_artilery_radar_east_ep1";
  model = "\ca\misc_e\wf\wf_artilery_radar_east_ep1.p3d";
 };
 class CUP_A2_wf_artilery_radar_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_artilery_radar_west";
  model = "\ca\misc3\wf\wf_artilery_radar_west.p3d";
 };
 class CUP_A2_wf_artilery_radar_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_artilery_radar_west_ep1";
  model = "\ca\misc_e\wf\wf_artilery_radar_west_ep1.p3d";
 };
 class CUP_A2_wf_barracks_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_barracks_east";
  model = "\ca\misc3\wf\wf_barracks_east.p3d";
 };
 class CUP_A2_wf_barracks_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_barracks_east_ep1";
  model = "\ca\misc_e\wf\wf_barracks_east_ep1.p3d";
 };
 class CUP_A2_wf_barracks_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_barracks_west";
  model = "\ca\misc3\wf\wf_barracks_west.p3d";
 };
 class CUP_A2_wf_barracks_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_barracks_west_ep1";
  model = "\ca\misc_e\wf\wf_barracks_west_ep1.p3d";
 };
 class CUP_A2_wf_bunker: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_bunker";
  model = "\ca\misc3\wf\wf_bunker.p3d";
 };
 class CUP_A2_wf_depot: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_depot";
  model = "\ca\misc3\wf\wf_depot.p3d";
 };
 class CUP_A2_wf_field_hospital: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_field_hospital";
  model = "\ca\misc3\wf\wf_field_hospital.p3d";
 };
 class CUP_A2_wf_field_hospital_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_field_hospital_east";
  model = "\ca\misc3\wf\wf_field_hospital_east.p3d";
 };
 class CUP_A2_wf_field_hospital_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_field_hospital_east_ep1";
  model = "\ca\misc_e\wf\wf_field_hospital_east_ep1.p3d";
 };
 class CUP_A2_wf_field_hospital_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_field_hospital_west";
  model = "\ca\misc3\wf\wf_field_hospital_west.p3d";
 };
 class CUP_A2_wf_field_hospital_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_field_hospital_west_ep1";
  model = "\ca\misc_e\wf\wf_field_hospital_west_ep1.p3d";
 };
 class CUP_A2_wf_heliport_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_heliport_east";
  model = "\ca\misc3\wf\wf_heliport_east.p3d";
 };
 class CUP_A2_wf_heliport_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_heliport_east_ep1";
  model = "\ca\misc_e\wf\wf_heliport_east_ep1.p3d";
 };
 class CUP_A2_wf_heliport_tkg_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_heliport_tkg_ep1";
  model = "\ca\misc_e\wf\wf_heliport_tkg_ep1.p3d";
 };
 class CUP_A2_wf_heliport_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_heliport_west";
  model = "\ca\misc3\wf\wf_heliport_west.p3d";
 };
 class CUP_A2_wf_heliport_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_heliport_west_ep1";
  model = "\ca\misc_e\wf\wf_heliport_west_ep1.p3d";
 };
 class CUP_A2_wf_hq_bmp2: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_hq_bmp2";
  model = "\ca\misc3\wf\wf_hq_bmp2.p3d";
 };
 class CUP_A2_wf_hq_bmp2_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_hq_bmp2_ep1";
  model = "\ca\misc_e\wf\wf_hq_bmp2_ep1.p3d";
 };
 class CUP_A2_wf_hq_brdm2: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_hq_brdm2";
  model = "\ca\misc3\wf\wf_hq_brdm2.p3d";
 };
 class CUP_A2_wf_hq_brdm2_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_hq_brdm2_ep1";
  model = "\ca\misc_e\wf\wf_hq_brdm2_ep1.p3d";
 };
 class CUP_A2_wf_hq_btr90: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_hq_btr90";
  model = "\ca\misc3\wf\wf_hq_btr90.p3d";
 };
 class CUP_A2_wf_hq_lav25: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_hq_lav25";
  model = "\ca\misc3\wf\wf_hq_lav25.p3d";
 };
 class CUP_A2_wf_hq_m1130_cv_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_hq_m1130_cv_ep1";
  model = "\ca\misc_e\wf\wf_hq_m1130_cv_ep1.p3d";
 };
 class CUP_A2_wf_uav_terminal_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_uav_terminal_east";
  model = "\ca\misc3\wf\wf_uav_terminal_east.p3d";
 };
 class CUP_A2_wf_uav_terminal_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_uav_terminal_east_ep1";
  model = "\ca\misc_e\wf\wf_uav_terminal_east_ep1.p3d";
 };
 class CUP_A2_wf_uav_terminal_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_uav_terminal_west";
  model = "\ca\misc3\wf\wf_uav_terminal_west.p3d";
 };
 class CUP_A2_wf_uav_terminal_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_uav_terminal_west_ep1";
  model = "\ca\misc_e\wf\wf_uav_terminal_west_ep1.p3d";
 };
 class CUP_A2_wf_vehicle_service_point_east: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_vehicle_service_point_east";
  model = "\ca\misc3\wf\wf_vehicle_service_point_east.p3d";
 };
 class CUP_A2_wf_vehicle_service_point_east_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_vehicle_service_point_east_ep1";
  model = "\ca\misc_e\wf\wf_vehicle_service_point_east_ep1.p3d";
 };
 class CUP_A2_wf_vehicle_service_point_west: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_vehicle_service_point_west";
  model = "\ca\misc3\wf\wf_vehicle_service_point_west.p3d";
 };
 class CUP_A2_wf_vehicle_service_point_west_ep1: CUP_A2_Military
 {
  scope = 2;
  displayName = "wf_vehicle_service_point_west_ep1";
  model = "\ca\misc_e\wf\wf_vehicle_service_point_west_ep1.p3d";
 };
 class 03_military03_terc: CUP_A2_Military
 {
  scope = 2;
  displayName = "";
  model = "\ca\misc\terc.p3d";
 };
 class 03_military03_terc_postava: CUP_A2_Military
 {
  scope = 2;
  displayName = "postava";
  model = "\ca\misc\terc_postava.p3d";
 };
 class CUP_A2_p_articum: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_articum";
  model = "\ca\plants2\plant\p_articum.p3d";
 };
 class CUP_A2_p_articum_summer: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_articum_summer";
  model = "\ca\plants_e2\plants\p_articum_summer.p3d";
 };
 class CUP_A2_p_carduus: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_carduus";
  model = "\ca\plants2\plant\p_carduus.p3d";
 };
 class CUP_A2_p_carduus_summer: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_carduus_summer";
  model = "\ca\plants_e2\plants\p_carduus_summer.p3d";
 };
 class CUP_A2_p_fiberplant_ep1: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_fiberplant_ep1";
  model = "\ca\plants_e\plant\p_fiberplant_ep1.p3d";
 };
 class CUP_A2_p_helianthus: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_helianthus";
  model = "\ca\plants2\plant\p_helianthus.p3d";
 };
 class CUP_A2_p_helianthus_summer: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_helianthus_summer";
  model = "\ca\plants_e2\plants\p_helianthus_summer.p3d";
 };
 class CUP_A2_p_heracleum: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_heracleum";
  model = "\ca\plants2\plant\p_heracleum.p3d";
 };
 class CUP_A2_p_heracleum_summer: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_heracleum_summer";
  model = "\ca\plants_e2\plants\p_heracleum_summer.p3d";
 };
 class CUP_A2_p_lopuch_podzimni: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_lopuch_podzimni";
  model = "\ca\plants2\plant\lopuch_podzimni.p3d";
 };
 class CUP_A2_p_papaver_ep1: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_papaver_ep1";
  model = "\ca\plants_e\plant\p_papaver_ep1.p3d";
 };
 class CUP_A2_p_phragmites: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_phragmites";
  model = "\ca\plants2\plant\p_phragmites.p3d";
 };
 class CUP_A2_p_phragmites_summer: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_phragmites_summer";
  model = "\ca\plants_e2\plants\p_phragmites_summer.p3d";
 };
 class CUP_A2_p_pumpkin_summer: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_pumpkin_summer";
  model = "\ca\plants_e2\plants\p_pumpkin_summer.p3d";
 };
 class CUP_A2_p_pumpkin2_summer: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_pumpkin2_summer";
  model = "\ca\plants_e2\plants\p_pumpkin2_summer.p3d";
 };
 class CUP_A2_p_reeds_pmc: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_reeds_pmc";
  model = "\ca\plants_pmc\plant\p_reeds_pmc.p3d";
 };
 class CUP_A2_p_urtica: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_urtica";
  model = "\ca\plants2\plant\p_urtica.p3d";
 };
 class CUP_A2_p_wheat_ep1: CUP_A2_Plants
 {
  scope = 2;
  displayName = "p_wheat_ep1";
  model = "\ca\plants_e\plant\p_wheat_ep1.p3d";
 };
 class CUP_A2_pumpkin: CUP_A2_Plants
 {
  scope = 2;
  displayName = "pumpkin";
  model = "\ca\plants2\plant\pumpkin.p3d";
 };
 class CUP_A2_pumpkin2: CUP_A2_Plants
 {
  scope = 2;
  displayName = "pumpkin2";
  model = "\ca\plants2\plant\pumpkin2.p3d";
 };
 class CUP_A2_sunflower: CUP_A2_Plants
 {
  scope = 2;
  displayName = "sunflower";
  model = "\ca\plants2\plant\sunflower.p3d";
 };
 class CUP_A2_x_baleofstraw: CUP_A2_Plants
 {
  scope = 2;
  displayName = "x_baleofstraw";
  model = "\ca\misc\seno_balik.p3d";
 };
 class CUP_A2_x_strawheap: CUP_A2_Plants
 {
  scope = 2;
  displayName = "x_strawheap";
  model = "\ca\buildings\misc\stoh.p3d";
 };
 class CUP_A2_x_timbers: CUP_A2_Plants
 {
  scope = 2;
  displayName = "x_timbers";
  model = "\ca\structures\ind_sawmill\ind_timbers.p3d";
 };
 class CUP_A2_barel1: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barel1";
  model = "\ca\misc\barel1.p3d";
 };
 class CUP_A2_barel3: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barel3";
  model = "\ca\misc\barel3.p3d";
 };
 class CUP_A2_barel4: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barel4";
  model = "\ca\misc\barel4.p3d";
 };
 class CUP_A2_barel5: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barel5";
  model = "\ca\misc\barel5.p3d";
 };
 class CUP_A2_barel6: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barel6";
  model = "\ca\misc\barel6.p3d";
 };
 class CUP_A2_barel7: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barel7";
  model = "\ca\misc\barel7.p3d";
 };
 class CUP_A2_barel8: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barel8";
  model = "\ca\misc\barel8.p3d";
 };
 class CUP_A2_barels: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barels";
  model = "\ca\misc\barels.p3d";
 };
 class CUP_A2_barels2: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barels2";
  model = "\ca\misc\barels2.p3d";
 };
 class CUP_A2_barels3: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barels3";
  model = "\ca\misc\barels3.p3d";
 };
 class CUP_A2_barrel_sand: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barrel_sand";
  model = "\ca\structures\misc\armory\barels\barrel_sand.p3d";
 };
 class CUP_A2_barrel_water: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "barrel_water";
  model = "\ca\structures\misc\armory\barels\barrel_water.p3d";
 };
 class CUP_A2_boardspack1: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "boardspack1";
  model = "\ca\structures\ind_sawmill\ind_boardspack1.p3d";
 };
 class CUP_A2_boardspack2: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "boardspack2";
  model = "\ca\structures\ind_sawmill\ind_boardspack2.p3d";
 };
 class CUP_A2_box_c: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "box_c";
  model = "\ca\structures\furniture\decoration\box_c\box_c.p3d";
 };
 class CUP_A2_cargo1a: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1a";
  model = "\ca\buildings2\misc_cargo\misc_cargo1a.p3d";
 };
 class CUP_A2_cargo1ao: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1ao";
  model = "\ca\buildings2\misc_cargo\misc_cargo1ao.p3d";
 };
 class CUP_A2_cargo1b: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1b";
  model = "\ca\buildings2\misc_cargo\misc_cargo1b.p3d";
 };
 class CUP_A2_cargo1bo: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1bo";
  model = "\ca\buildings2\misc_cargo\misc_cargo1bo.p3d";
 };
 class CUP_A2_cargo1c: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1c";
  model = "\ca\buildings2\misc_cargo\misc_cargo1c.p3d";
 };
 class CUP_A2_cargo1d: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1d";
  model = "\ca\buildings2\misc_cargo\misc_cargo1d.p3d";
 };
 class CUP_A2_cargo1e: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1e";
  model = "\ca\buildings2\misc_cargo\misc_cargo1e.p3d";
 };
 class CUP_A2_cargo1f: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1f";
  model = "\ca\buildings2\misc_cargo\misc_cargo1f.p3d";
 };
 class CUP_A2_cargo1g: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo1g";
  model = "\ca\buildings2\misc_cargo\misc_cargo1g.p3d";
 };
 class CUP_A2_cargo2a: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo2a";
  model = "\ca\buildings2\misc_cargo\misc_cargo2a.p3d";
 };
 class CUP_A2_cargo2b: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo2b";
  model = "\ca\buildings2\misc_cargo\misc_cargo2b.p3d";
 };
 class CUP_A2_cargo2c: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo2c";
  model = "\ca\buildings2\misc_cargo\misc_cargo2c.p3d";
 };
 class CUP_A2_cargo2d: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo2d";
  model = "\ca\buildings2\misc_cargo\misc_cargo2d.p3d";
 };
 class CUP_A2_cargo2e: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cargo2e";
  model = "\ca\buildings2\misc_cargo\misc_cargo2e.p3d";
 };
 class CUP_A2_coil_ep1: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "coil_ep1";
  model = "\ca\structures_e\misc\misc_construction\misc_coil_ep1.p3d";
 };
 class CUP_A2_cont_net1: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cont_net1";
  model = "\ca\misc\misc_cargo_cont_net1.p3d";
 };
 class CUP_A2_cont_net2: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cont_net2";
  model = "\ca\misc\misc_cargo_cont_net2.p3d";
 };
 class CUP_A2_cont_net3: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cont_net3";
  model = "\ca\misc\misc_cargo_cont_net3.p3d";
 };
 class CUP_A2_cont_small: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cont_small";
  model = "\ca\misc\misc_cargo_cont_small.p3d";
 };
 class CUP_A2_cont_small2: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cont_small2";
  model = "\ca\misc\misc_cargo_cont_small2.p3d";
 };
 class CUP_A2_cont_tiny: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "cont_tiny";
  model = "\ca\misc\misc_cargo_cont_tiny.p3d";
 };
 class CUP_A2_crates_ep1: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "crates_ep1";
  model = "\ca\structures_e\misc\misc_market\crates_ep1.p3d";
 };
 class CUP_A2_crates_stack_ep1: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "crates_stack_ep1";
  model = "\ca\structures_e\misc\misc_market\crates_stack_ep1.p3d";
 };
 class CUP_A2_fuel_tank_big: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "fuel_tank_big";
  model = "\ca\misc\fuel_tank_big.p3d";
 };
 class CUP_A2_fuel_tank_small: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "fuel_tank_small";
  model = "\ca\misc\fuel_tank_small.p3d";
 };
 class CUP_A2_fuel_tank_stairs: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "fuel_tank_stairs";
  model = "\ca\misc\fuel_tank_stairs.p3d";
 };
 class CUP_A2_gcontainer_big: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "gcontainer_big";
  model = "\ca\structures\misc\misc_gcontainer_big\misc_gcontainer_big.p3d";
 };
 class CUP_A2_kontejner: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "kontejner";
  model = "\ca\misc\kontejner.p3d";
 };
 class CUP_A2_paletaa: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "paletaa";
  model = "\ca\misc\paletaa.p3d";
 };
 class CUP_A2_paletyc: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "paletyc";
  model = "\ca\misc\paletyc.p3d";
 };
 class CUP_A2_paletyd: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "paletyd";
  model = "\ca\misc\paletyd.p3d";
 };
 class CUP_A2_pallets_column: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "pallets_column";
  model = "\ca\misc\pallets_column.p3d";
 };
 class CUP_A2_palletsfoiled: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "palletsfoiled";
  model = "\ca\misc\misc_palletsfoiled.p3d";
 };
 class CUP_A2_palletsfoiled_heap: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "palletsfoiled_heap";
  model = "\ca\misc\misc_palletsfoiled_heap.p3d";
 };
 class CUP_A2_seacrate: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "seacrate";
  model = "\ca\buildings2\misc_cargo\seacrate.p3d";
 };
 class CUP_A2_tankbig: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "tankbig";
  model = "\ca\buildings2\ind_tank\ind_tankbig.p3d";
 };
 class CUP_A2_tanksmall: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "tanksmall";
  model = "\ca\buildings2\ind_tank\ind_tanksmall.p3d";
 };
 class CUP_A2_tanksmall2: CUP_A2_Cargo
 {
  scope = 2;
  displayName = "tanksmall2";
  model = "\ca\buildings2\ind_tank\ind_tanksmall2.p3d";
 };
 class CUP_A2_misc_brokenspruce_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_brokenspruce_pmc";
  model = "\ca\plants_pmc\misc\misc_brokenspruce_pmc.p3d";
 };
 class CUP_A2_misc_burnspruce_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_burnspruce_pmc";
  model = "\ca\plants_pmc\misc\misc_burnspruce_pmc.p3d";
 };
 class CUP_A2_misc_fallenspruce: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_fallenspruce";
  model = "\ca\plants2\misc\misc_fallenspruce.p3d";
 };
 class CUP_A2_misc_fallenspruce_1xtrunk_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_fallenspruce_1xtrunk_pmc";
  model = "\ca\plants_pmc\misc\misc_fallenspruce_1xtrunk_pmc.p3d";
 };
 class CUP_A2_misc_fallenspruce_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_fallenspruce_pmc";
  model = "\ca\plants_pmc\misc\misc_fallenspruce_pmc.p3d";
 };
 class CUP_A2_misc_fallentree1: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_fallentree1";
  model = "\ca\plants2\misc\misc_fallentree1.p3d";
 };
 class CUP_A2_misc_fallentree2: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_fallentree2";
  model = "\ca\plants2\misc\misc_fallentree2.p3d";
 };
 class CUP_A2_misc_fallentrunk_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_fallentrunk_pmc";
  model = "\ca\plants_pmc\misc\misc_fallentrunk_pmc.p3d";
 };
 class CUP_A2_misc_stub1: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_stub1";
  model = "\ca\plants2\misc\misc_stub1.p3d";
 };
 class CUP_A2_misc_stub2: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_stub2";
  model = "\ca\plants2\misc\misc_stub2.p3d";
 };
 class CUP_A2_misc_stubleafs_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_stubleafs_pmc";
  model = "\ca\plants_pmc\misc\misc_stubleafs_pmc.p3d";
 };
 class CUP_A2_misc_torzotree_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_torzotree_pmc";
  model = "\ca\plants_pmc\misc\misc_torzotree_pmc.p3d";
 };
 class CUP_A2_misc_trunk_torzo: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_trunk_torzo";
  model = "\ca\plants2\misc\misc_trunk_torzo.p3d";
 };
 class CUP_A2_misc_trunk_torzo_ep1: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_trunk_torzo_ep1";
  model = "\ca\plants_e\misc\misc_trunk_torzo_ep1.p3d";
 };
 class CUP_A2_misc_trunk_water: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_trunk_water";
  model = "\ca\plants2\misc\misc_trunk_water.p3d";
 };
 class CUP_A2_misc_trunk_water_ep1: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "misc_trunk_water_ep1";
  model = "\ca\plants_e\misc\misc_trunk_water_ep1.p3d";
 };
 class CUP_A2_pinuss2f_destruct: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "pinuss2f_destruct";
  model = "\ca\misc\t_pinuss2f_destruct.p3d";
 };
 class CUP_A2_t_poplar2f_dead_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "t_poplar2f_dead_pmc";
  model = "\ca\plants_pmc\tree\t_poplar2f_dead_pmc.p3d";
 };
 class CUP_A2_t_stub_picea: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "t_stub_picea";
  model = "\ca\plants2\tree\t_stub_picea.p3d";
 };
 class CUP_A2_t_willow2s_dead_pmc: CUP_A2_Deadtrees
 {
  scope = 2;
  displayName = "t_willow2s_dead_pmc";
  model = "\ca\plants_pmc\tree\t_willow2s_dead_pmc.p3d";
 };
 class CUP_A2_accomodation: CUP_A2_Signs
 {
  scope = 2;
  displayName = "accomodation";
  model = "\ca\signs2\signt\sign_accomodation.p3d";
 };
 class CUP_A2_advertcolumn: CUP_A2_Signs
 {
  scope = 2;
  displayName = "advertcolumn";
  model = "\ca\buildings2\a_advertisingcolumn\a_advertcolumn.p3d";
 };
 class CUP_A2_bilboard_alkohol: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_alkohol";
  model = "\ca\misc\bilboard_alkohol.p3d";
 };
 class CUP_A2_bilboard_beach: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_beach";
  model = "\ca\misc\bilboard_beach.p3d";
 };
 class CUP_A2_bilboard_bienvenudo: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_bienvenudo";
  model = "\ca\misc\bilboard_bienvenudo.p3d";
 };
 class CUP_A2_bilboard_cibulka: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_cibulka";
  model = "\ca\misc\bilboard_cibulka.p3d";
 };
 class CUP_A2_bilboard_cigara_chernomorky: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_cigara_chernomorky";
  model = "\ca\misc\bilboard_cigara_chernomorky.p3d";
 };
 class CUP_A2_bilboard_escape: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_escape";
  model = "\ca\misc\bilboard_escape.p3d";
 };
 class CUP_A2_bilboard_everon: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_everon";
  model = "\ca\misc\bilboard_everon.p3d";
 };
 class CUP_A2_bilboard_hlinik: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_hlinik";
  model = "\ca\misc\bilboard_hlinik.p3d";
 };
 class CUP_A2_bilboard_likery_bardak: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_likery_bardak";
  model = "\ca\misc\bilboard_likery_bardak.p3d";
 };
 class CUP_A2_bilboard_nogova: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_nogova";
  model = "\ca\misc\bilboard_nogova.p3d";
 };
 class CUP_A2_bilboard_pizza_presto: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_pizza_presto";
  model = "\ca\misc\bilboard_pizza_presto.p3d";
 };
 class CUP_A2_bilboard_riviera: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_riviera";
  model = "\ca\misc\bilboard_riviera.p3d";
 };
 class CUP_A2_bilboard_seci_stroje: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_seci_stroje";
  model = "\ca\misc\bilboard_seci_stroje.p3d";
 };
 class CUP_A2_bilboard_smadny_maskrnik: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_smadny_maskrnik";
  model = "\ca\misc\bilboard_smadny_maskrnik.p3d";
 };
 class CUP_A2_bilboard_strana_noveho_radu: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_strana_noveho_radu";
  model = "\ca\misc\bilboard_strana_noveho_radu.p3d";
 };
 class CUP_A2_bilboard_toaletak_armasan: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_toaletak_armasan";
  model = "\ca\misc\bilboard_toaletak_armasan.p3d";
 };
 class CUP_A2_bilboard_veterans_choice: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_veterans_choice";
  model = "\ca\misc\bilboard_veterans_choice.p3d";
 };
 class CUP_A2_bilboard_vodka: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_vodka";
  model = "\ca\misc\bilboard_vodka.p3d";
 };
 class CUP_A2_bilboard_volte_cernaruske_hnuti: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_volte_cernaruske_hnuti";
  model = "\ca\misc\bilboard_volte_cernaruske_hnuti.p3d";
 };
 class CUP_A2_bilboard_vstup_do_cdf: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_vstup_do_cdf";
  model = "\ca\misc\bilboard_vstup_do_cdf.p3d";
 };
 class CUP_A2_bilboard_zlute_zgrynda: CUP_A2_Signs
 {
  scope = 2;
  displayName = "bilboard_zlute_zgrynda";
  model = "\ca\misc\bilboard_zlute_zgrynda.p3d";
 };
 class CUP_A2_billboard_1_ep1: CUP_A2_Signs
 {
  scope = 2;
  displayName = "billboard_1_ep1";
  model = "\ca\structures_e\misc\misc_billboards\billboard_1_ep1.p3d";
 };
 class CUP_A2_billboard_2_ep1: CUP_A2_Signs
 {
  scope = 2;
  displayName = "billboard_2_ep1";
  model = "\ca\structures_e\misc\misc_billboards\billboard_2_ep1.p3d";
 };
 class CUP_A2_billboard_3_ep1: CUP_A2_Signs
 {
  scope = 2;
  displayName = "billboard_3_ep1";
  model = "\ca\structures_e\misc\misc_billboards\billboard_3_ep1.p3d";
 };
 class CUP_A2_billboard_4_ep1: CUP_A2_Signs
 {
  scope = 2;
  displayName = "billboard_4_ep1";
  model = "\ca\structures_e\misc\misc_billboards\billboard_4_ep1.p3d";
 };
 class CUP_A2_billboard_a_ep1: CUP_A2_Signs
 {
  scope = 2;
  displayName = "billboard_a_ep1";
  model = "\ca\structures_e\misc\misc_billboards\billboard_a_ep1.p3d";
 };
 class CUP_A2_danger_mines: CUP_A2_Signs
 {
  scope = 2;
  displayName = "danger_mines";
  model = "\ca\misc\sign_danger_mines.p3d";
 };
 class CUP_A2_fuelstation_sign: CUP_A2_Signs
 {
  scope = 2;
  displayName = "fuelstation_sign";
  model = "\ca\structures\house\a_fuelstation\a_fuelstation_sign.p3d";
 };
 class CUP_A2_fuelstation_sign_ep1: CUP_A2_Signs
 {
  scope = 2;
  displayName = "fuelstation_sign_ep1";
  model = "\ca\structures_e\ind\ind_fuelstation\ind_fuelstation_sign_ep1.p3d";
 };
 class CUP_A2_interhotel: CUP_A2_Signs
 {
  scope = 2;
  displayName = "interhotel";
  model = "\ca\signs2\sign_interhotel.p3d";
 };
 class CUP_A2_milarea: CUP_A2_Signs
 {
  scope = 2;
  displayName = "milarea";
  model = "\ca\signs_e\signm\signm_milarea.p3d";
 };
 class CUP_A2_mines: CUP_A2_Signs
 {
  scope = 2;
  displayName = "mines";
  model = "\ca\signs_e\signm\signm_mines.p3d";
 };
 class CUP_A2_nastenka2: CUP_A2_Signs
 {
  scope = 2;
  displayName = "nastenka2";
  model = "\ca\buildings\misc\nastenka2.p3d";
 };
 class CUP_A2_nastenka3: CUP_A2_Signs
 {
  scope = 2;
  displayName = "nastenka3";
  model = "\ca\buildings\misc\nastenka3.p3d";
 };
 class CUP_A2_nastenkax: CUP_A2_Signs
 {
  scope = 2;
  displayName = "nastenkax";
  model = "\ca\misc\nastenkax.p3d";
 };
 class CUP_A2_radiation: CUP_A2_Signs
 {
  scope = 2;
  displayName = "radiation";
  model = "\ca\misc\danger!.p3d";
 };
 class CUP_A2_wall_board: CUP_A2_Signs
 {
  scope = 2;
  displayName = "wall_board";
  model = "\ca\structures\furniture\decoration\wallboards\wall_board\wall_board.p3d";
 };
 class CUP_A2_wall_board_02: CUP_A2_Signs
 {
  scope = 2;
  displayName = "wall_board_02";
  model = "\ca\structures\furniture\decoration\wallboards\wall_board_02\wall_board_02.p3d";
 };
 class CUP_A2_wall_board_03: CUP_A2_Signs
 {
  scope = 2;
  displayName = "wall_board_03";
  model = "\ca\structures\furniture\decoration\wallboards\wall_board_03\wall_board_03.p3d";
 };
 class CUP_A2_wooden_relic_building: CUP_A2_Signs
 {
  scope = 2;
  displayName = "wooden_relic_building";
  model = "\ca\misc\sign_wooden_relic_building.p3d";
 };
 class CUP_A2_wooden_relic_tree: CUP_A2_Signs
 {
  scope = 2;
  displayName = "wooden_relic_tree";
  model = "\ca\misc\sign_wooden_relic_tree.p3d";
 };
 class CUP_A2_wooden_relic_zagorie: CUP_A2_Signs
 {
  scope = 2;
  displayName = "wooden_relic_zagorie";
  model = "\ca\misc\sign_wooden_relic_zagorie.p3d";
 };
 class CUP_A2_zastavka_cedule: CUP_A2_Signs
 {
  scope = 2;
  displayName = "zastavka_cedule";
  model = "\ca\structures\misc\misc_busstop\zastavka_cedule.p3d";
 };
 class CUP_A2_zastavka_stojan: CUP_A2_Signs
 {
  scope = 2;
  displayName = "zastavka_stojan";
  model = "\ca\structures\misc\misc_busstop\zastavka_stojan.p3d";
 };
 class CUP_A2__pond_big_37_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pond_big_37_02";
  model = "\ca\structures\pond\pond_big_37_02.p3d";
 };
 class CUP_A2__pond_big_37_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pond_big_37_03";
  model = "\ca\structures\pond\pond_big_37_03.p3d";
 };
 class CUP_A2__pond_big_37_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pond_big_37_04";
  model = "\ca\structures\pond\pond_big_37_04.p3d";
 };
 class CUP_A2__pond_big_38_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pond_big_38_01";
  model = "\ca\structures\pond\pond_big_38_01.p3d";
 };
 class CUP_A2__pond_big_38_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pond_big_38_02";
  model = "\ca\structures\pond\pond_big_38_02.p3d";
 };
 class CUP_A2__pond_big_38_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pond_big_38_03";
  model = "\ca\structures\pond\pond_big_38_03.p3d";
 };
 class CUP_A2__pond_big_38_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pond_big_38_04";
  model = "\ca\structures\pond\pond_big_38_04.p3d";
 };
 class CUP_A2__pondtest: CUP_A2_Water
 {
  scope = 2;
  displayName = "_pondtest";
  model = "\ca\structures\pond\pondtest.p3d";
 };
 class CUP_A2_airport_pond: CUP_A2_Water
 {
  scope = 2;
  displayName = "airport_pond";
  model = "\ca\structures_e\misc\misc_water\airport_pond.p3d";
 };
 class CUP_A2_feeruzabad_pond_1: CUP_A2_Water
 {
  scope = 2;
  displayName = "feeruzabad_pond_1";
  model = "\ca\structures_e\misc\misc_water\feeruzabad_pond_1.p3d";
 };
 class CUP_A2_feeruzabad_pond_2: CUP_A2_Water
 {
  scope = 2;
  displayName = "feeruzabad_pond_2";
  model = "\ca\structures_e\misc\misc_water\feeruzabad_pond_2.p3d";
 };
 class CUP_A2_gz_pond01_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond01_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond01_pmc.p3d";
 };
 class CUP_A2_gz_pond02_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond02_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond02_pmc.p3d";
 };
 class CUP_A2_gz_pond03_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond03_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond03_pmc.p3d";
 };
 class CUP_A2_gz_pond2_01_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_01_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_01_pmc.p3d";
 };
 class CUP_A2_gz_pond2_02_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_02_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_02_pmc.p3d";
 };
 class CUP_A2_gz_pond2_03_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_03_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_03_pmc.p3d";
 };
 class CUP_A2_gz_pond2_04_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_04_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_04_pmc.p3d";
 };
 class CUP_A2_gz_pond2_05_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_05_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_05_pmc.p3d";
 };
 class CUP_A2_gz_pond2_06_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_06_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_06_pmc.p3d";
 };
 class CUP_A2_gz_pond2_07_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_07_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_07_pmc.p3d";
 };
 class CUP_A2_gz_pond2_08_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_08_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_08_pmc.p3d";
 };
 class CUP_A2_gz_pond2_09_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_09_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_09_pmc.p3d";
 };
 class CUP_A2_gz_pond2_10_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_10_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_10_pmc.p3d";
 };
 class CUP_A2_gz_pond2_11_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_11_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_11_pmc.p3d";
 };
 class CUP_A2_gz_pond2_12_pmc: CUP_A2_Water
 {
  scope = 2;
  displayName = "gz_pond2_12_pmc";
  model = "\ca\structures_pmc\misc\water\gz_pond2_12_pmc.p3d";
 };
 class CUP_A2_kakaru_pond: CUP_A2_Water
 {
  scope = 2;
  displayName = "kakaru_pond";
  model = "\ca\structures_e\misc\misc_water\kakaru_pond.p3d";
 };
 class CUP_A2_nagara_pond_1: CUP_A2_Water
 {
  scope = 2;
  displayName = "nagara_pond_1";
  model = "\ca\structures_e\misc\misc_water\nagara_pond_1.p3d";
 };
 class CUP_A2_nagara_pond_2: CUP_A2_Water
 {
  scope = 2;
  displayName = "nagara_pond_2";
  model = "\ca\structures_e\misc\misc_water\nagara_pond_2.p3d";
 };
 class CUP_A2_nagara_pond_3: CUP_A2_Water
 {
  scope = 2;
  displayName = "nagara_pond_3";
  model = "\ca\structures_e\misc\misc_water\nagara_pond_3.p3d";
 };
 class CUP_A2_pond_big_30_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_30_02";
  model = "\ca\structures\pond\pond_big_30_02.p3d";
 };
 class CUP_A2_pond_big_30_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_30_03";
  model = "\ca\structures\pond\pond_big_30_03.p3d";
 };
 class CUP_A2_pond_big_30_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_30_04";
  model = "\ca\structures\pond\pond_big_30_04.p3d";
 };
 class CUP_A2_pond_big_31_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_31_01";
  model = "\ca\structures\pond\pond_big_31_01.p3d";
 };
 class CUP_A2_pond_big_31_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_31_02";
  model = "\ca\structures\pond\pond_big_31_02.p3d";
 };
 class CUP_A2_pond_big_31_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_31_03";
  model = "\ca\structures\pond\pond_big_31_03.p3d";
 };
 class CUP_A2_pond_big_31_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_31_04";
  model = "\ca\structures\pond\pond_big_31_04.p3d";
 };
 class CUP_A2_pond_big_32_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_32_01";
  model = "\ca\structures\pond\pond_big_32_01.p3d";
 };
 class CUP_A2_pond_big_32_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_32_02";
  model = "\ca\structures\pond\pond_big_32_02.p3d";
 };
 class CUP_A2_pond_big_32_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_32_03";
  model = "\ca\structures\pond\pond_big_32_03.p3d";
 };
 class CUP_A2_pond_big_33_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_33_01";
  model = "\ca\structures\pond\pond_big_33_01.p3d";
 };
 class CUP_A2_pond_big_33_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_33_02";
  model = "\ca\structures\pond\pond_big_33_02.p3d";
 };
 class CUP_A2_pond_big_33_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_33_03";
  model = "\ca\structures\pond\pond_big_33_03.p3d";
 };
 class CUP_A2_pond_big_34_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_34_01";
  model = "\ca\structures\pond\pond_big_34_01.p3d";
 };
 class CUP_A2_pond_big_34_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_34_02";
  model = "\ca\structures\pond\pond_big_34_02.p3d";
 };
 class CUP_A2_pond_big_34_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_34_03";
  model = "\ca\structures\pond\pond_big_34_03.p3d";
 };
 class CUP_A2_pond_big_34_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_34_04";
  model = "\ca\structures\pond\pond_big_34_04.p3d";
 };
 class CUP_A2_pond_big_35_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_35_01";
  model = "\ca\structures\pond\pond_big_35_01.p3d";
 };
 class CUP_A2_pond_big_35_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_35_02";
  model = "\ca\structures\pond\pond_big_35_02.p3d";
 };
 class CUP_A2_pond_big_36_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_36_01";
  model = "\ca\structures\pond\pond_big_36_01.p3d";
 };
 class CUP_A2_pond_big_36_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_36_02";
  model = "\ca\structures\pond\pond_big_36_02.p3d";
 };
 class CUP_A2_pond_big_36_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_36_03";
  model = "\ca\structures\pond\pond_big_36_03.p3d";
 };
 class CUP_A2_pond_big_36_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_36_04";
  model = "\ca\structures\pond\pond_big_36_04.p3d";
 };
 class CUP_A2_pond_big_37_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_37_01";
  model = "\ca\structures\pond\pond_big_37_01.p3d";
 };
 class CUP_A2_pond_big_39_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_39_01";
  model = "\ca\structures\pond\pond_big_39_01.p3d";
 };
 class CUP_A2_pond_big_39_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_39_02";
  model = "\ca\structures\pond\pond_big_39_02.p3d";
 };
 class CUP_A2_pond_big_39_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_39_03";
  model = "\ca\structures\pond\pond_big_39_03.p3d";
 };
 class CUP_A2_pond_big_39_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_39_04";
  model = "\ca\structures\pond\pond_big_39_04.p3d";
 };
 class CUP_A2_pond_big_40_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_40_01";
  model = "\ca\structures\pond\pond_big_40_01.p3d";
 };
 class CUP_A2_pond_big_40_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_40_02";
  model = "\ca\structures\pond\pond_big_40_02.p3d";
 };
 class CUP_A2_pond_big_40_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_40_03";
  model = "\ca\structures\pond\pond_big_40_03.p3d";
 };
 class CUP_A2_pond_big_40_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_40_04";
  model = "\ca\structures\pond\pond_big_40_04.p3d";
 };
 class CUP_A2_pond_big_41_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_41_01";
  model = "\ca\structures\pond\pond_big_41_01.p3d";
 };
 class CUP_A2_pond_big_41_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_41_02";
  model = "\ca\structures\pond\pond_big_41_02.p3d";
 };
 class CUP_A2_pond_big_41_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_41_03";
  model = "\ca\structures\pond\pond_big_41_03.p3d";
 };
 class CUP_A2_pond_big_41_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_41_04";
  model = "\ca\structures\pond\pond_big_41_04.p3d";
 };
 class CUP_A2_pond_big_41_05: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_41_05";
  model = "\ca\structures\pond\pond_big_41_05.p3d";
 };
 class CUP_A2_pond_big_42_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_01";
  model = "\ca\structures\pond\pond_big_42_01.p3d";
 };
 class CUP_A2_pond_big_42_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_02";
  model = "\ca\structures\pond\pond_big_42_02.p3d";
 };
 class CUP_A2_pond_big_42_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_03";
  model = "\ca\structures\pond\pond_big_42_03.p3d";
 };
 class CUP_A2_pond_big_42_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_04";
  model = "\ca\structures\pond\pond_big_42_04.p3d";
 };
 class CUP_A2_pond_big_42_05: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_05";
  model = "\ca\structures\pond\pond_big_42_05.p3d";
 };
 class CUP_A2_pond_big_42_06: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_06";
  model = "\ca\structures\pond\pond_big_42_06.p3d";
 };
 class CUP_A2_pond_big_42_07: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_07";
  model = "\ca\structures\pond\pond_big_42_07.p3d";
 };
 class CUP_A2_pond_big_42_08: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_08";
  model = "\ca\structures\pond\pond_big_42_08.p3d";
 };
 class CUP_A2_pond_big_42_09: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_09";
  model = "\ca\structures\pond\pond_big_42_09.p3d";
 };
 class CUP_A2_pond_big_42_10: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_10";
  model = "\ca\structures\pond\pond_big_42_10.p3d";
 };
 class CUP_A2_pond_big_42_11: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_11";
  model = "\ca\structures\pond\pond_big_42_11.p3d";
 };
 class CUP_A2_pond_big_42_12: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_12";
  model = "\ca\structures\pond\pond_big_42_12.p3d";
 };
 class CUP_A2_pond_big_42_13: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_13";
  model = "\ca\structures\pond\pond_big_42_13.p3d";
 };
 class CUP_A2_pond_big_42_14: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_14";
  model = "\ca\structures\pond\pond_big_42_14.p3d";
 };
 class CUP_A2_pond_big_42_15: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_15";
  model = "\ca\structures\pond\pond_big_42_15.p3d";
 };
 class CUP_A2_pond_big_42_16: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_16";
  model = "\ca\structures\pond\pond_big_42_16.p3d";
 };
 class CUP_A2_pond_big_42_17: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_17";
  model = "\ca\structures\pond\pond_big_42_17.p3d";
 };
 class CUP_A2_pond_big_42_18: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_18";
  model = "\ca\structures\pond\pond_big_42_18.p3d";
 };
 class CUP_A2_pond_big_42_19: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_19";
  model = "\ca\structures\pond\pond_big_42_19.p3d";
 };
 class CUP_A2_pond_big_42_20: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_42_20";
  model = "\ca\structures\pond\pond_big_42_20.p3d";
 };
 class CUP_A2_pond_big_43_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_01";
  model = "\ca\structures\pond\pond_big_43_01.p3d";
 };
 class CUP_A2_pond_big_43_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_02";
  model = "\ca\structures\pond\pond_big_43_02.p3d";
 };
 class CUP_A2_pond_big_43_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_03";
  model = "\ca\structures\pond\pond_big_43_03.p3d";
 };
 class CUP_A2_pond_big_43_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_04";
  model = "\ca\structures\pond\pond_big_43_04.p3d";
 };
 class CUP_A2_pond_big_43_05: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_05";
  model = "\ca\structures\pond\pond_big_43_05.p3d";
 };
 class CUP_A2_pond_big_43_06: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_06";
  model = "\ca\structures\pond\pond_big_43_06.p3d";
 };
 class CUP_A2_pond_big_43_07: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_07";
  model = "\ca\structures\pond\pond_big_43_07.p3d";
 };
 class CUP_A2_pond_big_43_08: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_08";
  model = "\ca\structures\pond\pond_big_43_08.p3d";
 };
 class CUP_A2_pond_big_43_09: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_09";
  model = "\ca\structures\pond\pond_big_43_09.p3d";
 };
 class CUP_A2_pond_big_43_10: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_10";
  model = "\ca\structures\pond\pond_big_43_10.p3d";
 };
 class CUP_A2_pond_big_43_11: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_11";
  model = "\ca\structures\pond\pond_big_43_11.p3d";
 };
 class CUP_A2_pond_big_43_12: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_12";
  model = "\ca\structures\pond\pond_big_43_12.p3d";
 };
 class CUP_A2_pond_big_43_13: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_13";
  model = "\ca\structures\pond\pond_big_43_13.p3d";
 };
 class CUP_A2_pond_big_43_14: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_14";
  model = "\ca\structures\pond\pond_big_43_14.p3d";
 };
 class CUP_A2_pond_big_43_15: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_15";
  model = "\ca\structures\pond\pond_big_43_15.p3d";
 };
 class CUP_A2_pond_big_43_16: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_16";
  model = "\ca\structures\pond\pond_big_43_16.p3d";
 };
 class CUP_A2_pond_big_43_17: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_17";
  model = "\ca\structures\pond\pond_big_43_17.p3d";
 };
 class CUP_A2_pond_big_43_18: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_18";
  model = "\ca\structures\pond\pond_big_43_18.p3d";
 };
 class CUP_A2_pond_big_43_19: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_19";
  model = "\ca\structures\pond\pond_big_43_19.p3d";
 };
 class CUP_A2_pond_big_43_20: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_20";
  model = "\ca\structures\pond\pond_big_43_20.p3d";
 };
 class CUP_A2_pond_big_43_21: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_21";
  model = "\ca\structures\pond\pond_big_43_21.p3d";
 };
 class CUP_A2_pond_big_43_22: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_22";
  model = "\ca\structures\pond\pond_big_43_22.p3d";
 };
 class CUP_A2_pond_big_43_23: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_23";
  model = "\ca\structures\pond\pond_big_43_23.p3d";
 };
 class CUP_A2_pond_big_43_24: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_24";
  model = "\ca\structures\pond\pond_big_43_24.p3d";
 };
 class CUP_A2_pond_big_43_25: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_25";
  model = "\ca\structures\pond\pond_big_43_25.p3d";
 };
 class CUP_A2_pond_big_43_26: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_26";
  model = "\ca\structures\pond\pond_big_43_26.p3d";
 };
 class CUP_A2_pond_big_43_27: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_27";
  model = "\ca\structures\pond\pond_big_43_27.p3d";
 };
 class CUP_A2_pond_big_43_28: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_28";
  model = "\ca\structures\pond\pond_big_43_28.p3d";
 };
 class CUP_A2_pond_big_43_29: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_29";
  model = "\ca\structures\pond\pond_big_43_29.p3d";
 };
 class CUP_A2_pond_big_43_30: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_30";
  model = "\ca\structures\pond\pond_big_43_30.p3d";
 };
 class CUP_A2_pond_big_43_31: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_31";
  model = "\ca\structures\pond\pond_big_43_31.p3d";
 };
 class CUP_A2_pond_big_43_32: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_32";
  model = "\ca\structures\pond\pond_big_43_32.p3d";
 };
 class CUP_A2_pond_big_43_33: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_33";
  model = "\ca\structures\pond\pond_big_43_33.p3d";
 };
 class CUP_A2_pond_big_43_34: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_34";
  model = "\ca\structures\pond\pond_big_43_34.p3d";
 };
 class CUP_A2_pond_big_43_35: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_35";
  model = "\ca\structures\pond\pond_big_43_35.p3d";
 };
 class CUP_A2_pond_big_43_36: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_43_36";
  model = "\ca\structures\pond\pond_big_43_36.p3d";
 };
 class CUP_A2_pond_big_44: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_big_44";
  model = "\ca\structures\pond\pond_big_44.p3d";
 };
 class CUP_A2_pond_small_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_01";
  model = "\ca\structures\pond\pond_small_01.p3d";
 };
 class CUP_A2_pond_small_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_02";
  model = "\ca\structures\pond\pond_small_02.p3d";
 };
 class CUP_A2_pond_small_03: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_03";
  model = "\ca\structures\pond\pond_small_03.p3d";
 };
 class CUP_A2_pond_small_04: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_04";
  model = "\ca\structures\pond\pond_small_04.p3d";
 };
 class CUP_A2_pond_small_05: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_05";
  model = "\ca\structures\pond\pond_small_05.p3d";
 };
 class CUP_A2_pond_small_06: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_06";
  model = "\ca\structures\pond\pond_small_06.p3d";
 };
 class CUP_A2_pond_small_07: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_07";
  model = "\ca\structures\pond\pond_small_07.p3d";
 };
 class CUP_A2_pond_small_08: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_08";
  model = "\ca\structures\pond\pond_small_08.p3d";
 };
 class CUP_A2_pond_small_09: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_09";
  model = "\ca\structures\pond\pond_small_09.p3d";
 };
 class CUP_A2_pond_small_10: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_10";
  model = "\ca\structures\pond\pond_small_10.p3d";
 };
 class CUP_A2_pond_small_11: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_11";
  model = "\ca\structures\pond\pond_small_11.p3d";
 };
 class CUP_A2_pond_small_12: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_12";
  model = "\ca\structures\pond\pond_small_12.p3d";
 };
 class CUP_A2_pond_small_13: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_13";
  model = "\ca\structures\pond\pond_small_13.p3d";
 };
 class CUP_A2_pond_small_14: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_14";
  model = "\ca\structures\pond\pond_small_14.p3d";
 };
 class CUP_A2_pond_small_15: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_15";
  model = "\ca\structures\pond\pond_small_15.p3d";
 };
 class CUP_A2_pond_small_16: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_16";
  model = "\ca\structures\pond\pond_small_16.p3d";
 };
 class CUP_A2_pond_small_17: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_17";
  model = "\ca\structures\pond\pond_small_17.p3d";
 };
 class CUP_A2_pond_small_18: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_18";
  model = "\ca\structures\pond\pond_small_18.p3d";
 };
 class CUP_A2_pond_small_19: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_19";
  model = "\ca\structures\pond\pond_small_19.p3d";
 };
 class CUP_A2_pond_small_20: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_20";
  model = "\ca\structures\pond\pond_small_20.p3d";
 };
 class CUP_A2_pond_small_21: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_21";
  model = "\ca\structures\pond\pond_small_21.p3d";
 };
 class CUP_A2_pond_small_22: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_22";
  model = "\ca\structures\pond\pond_small_22.p3d";
 };
 class CUP_A2_pond_small_23: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_23";
  model = "\ca\structures\pond\pond_small_23.p3d";
 };
 class CUP_A2_pond_small_24: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_24";
  model = "\ca\structures\pond\pond_small_24.p3d";
 };
 class CUP_A2_pond_small_25: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_25";
  model = "\ca\structures\pond\pond_small_25.p3d";
 };
 class CUP_A2_pond_small_26: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_26";
  model = "\ca\structures\pond\pond_small_26.p3d";
 };
 class CUP_A2_pond_small_27: CUP_A2_Water
 {
  scope = 2;
  displayName = "pond_small_27";
  model = "\ca\structures\pond\pond_small_27.p3d";
 };
 class CUP_A2_pont_big_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pont_big_01";
  model = "\ca\structures\pond\pont_big_01.p3d";
 };
 class CUP_A2_pont_big_02: CUP_A2_Water
 {
  scope = 2;
  displayName = "pont_big_02";
  model = "\ca\structures\pond\pont_big_02.p3d";
 };
 class CUP_A2_pont_small_01: CUP_A2_Water
 {
  scope = 2;
  displayName = "pont_small_01";
  model = "\ca\structures\pond\pont_small_01.p3d";
 };
 class CUP_A2_rasman_pond: CUP_A2_Water
 {
  scope = 2;
  displayName = "rasman_pond";
  model = "\ca\structures_e\misc\misc_water\rasman_pond.p3d";
 };
 class CUP_A2_ravanay_pond: CUP_A2_Water
 {
  scope = 2;
  displayName = "ravanay_pond";
  model = "\ca\structures_e\misc\misc_water\ravanay_pond.p3d";
 };
 class CUP_A2_zr_dam_01_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_01_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_01_ep1.p3d";
 };
 class CUP_A2_zr_dam_02_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_02_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_02_ep1.p3d";
 };
 class CUP_A2_zr_dam_03_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_03_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_03_ep1.p3d";
 };
 class CUP_A2_zr_dam_04_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_04_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_04_ep1.p3d";
 };
 class CUP_A2_zr_dam_05_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_05_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_05_ep1.p3d";
 };
 class CUP_A2_zr_dam_06_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_06_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_06_ep1.p3d";
 };
 class CUP_A2_zr_dam_07_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_07_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_07_ep1.p3d";
 };
 class CUP_A2_zr_dam_08_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_08_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_08_ep1.p3d";
 };
 class CUP_A2_zr_dam_09_ep1: CUP_A2_Water
 {
  scope = 2;
  displayName = "zr_dam_09_ep1";
  model = "\ca\structures_e\misc\misc_water\zr_dam_09_ep1.p3d";
 };
 class CUP_A2_r_boulder_01_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_boulder_01_ep1";
  model = "\ca\rocks_e\r_boulder_01_ep1.p3d";
 };
 class CUP_A2_r_boulder_02_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_boulder_02_ep1";
  model = "\ca\rocks_e\r_boulder_02_ep1.p3d";
 };
 class CUP_A2_r_boulder_03_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_boulder_03_ep1";
  model = "\ca\rocks_e\r_boulder_03_ep1.p3d";
 };
 class CUP_A2_r_rock_01_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_rock_01_ep1";
  model = "\ca\rocks_e\r_rock_01_ep1.p3d";
 };
 class CUP_A2_r_rock_02_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_rock_02_ep1";
  model = "\ca\rocks_e\r_rock_02_ep1.p3d";
 };
 class CUP_A2_r_rock_03_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_rock_03_ep1";
  model = "\ca\rocks_e\r_rock_03_ep1.p3d";
 };
 class CUP_A2_r_stone_01_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_stone_01_ep1";
  model = "\ca\rocks_e\r_stone_01_ep1.p3d";
 };
 class CUP_A2_r_stone_02_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_stone_02_ep1";
  model = "\ca\rocks_e\r_stone_02_ep1.p3d";
 };
 class CUP_A2_r_tk_boulder_01_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_boulder_01_ep1";
  model = "\ca\rocks_e\r_tk_boulder_01_ep1.p3d";
 };
 class CUP_A2_r_tk_boulder_02_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_boulder_02_ep1";
  model = "\ca\rocks_e\r_tk_boulder_02_ep1.p3d";
 };
 class CUP_A2_r_tk_boulder_03_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_boulder_03_ep1";
  model = "\ca\rocks_e\r_tk_boulder_03_ep1.p3d";
 };
 class CUP_A2_r_tk_rock_01_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_rock_01_ep1";
  model = "\ca\rocks_e\r_tk_rock_01_ep1.p3d";
 };
 class CUP_A2_r_tk_rock_02_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_rock_02_ep1";
  model = "\ca\rocks_e\r_tk_rock_02_ep1.p3d";
 };
 class CUP_A2_r_tk_rock_03_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_rock_03_ep1";
  model = "\ca\rocks_e\r_tk_rock_03_ep1.p3d";
 };
 class CUP_A2_r_tk_stone_01_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_stone_01_ep1";
  model = "\ca\rocks_e\r_tk_stone_01_ep1.p3d";
 };
 class CUP_A2_r_tk_stone_02_ep1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r_tk_stone_02_ep1";
  model = "\ca\rocks_e\r_tk_stone_02_ep1.p3d";
 };
 class CUP_A2_r2_boulder1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r2_boulder1";
  model = "\ca\rocks2\r2_boulder1.p3d";
 };
 class CUP_A2_r2_boulder2: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r2_boulder2";
  model = "\ca\rocks2\r2_boulder2.p3d";
 };
 class CUP_A2_r2_rock1: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r2_rock1";
  model = "\ca\rocks2\r2_rock1.p3d";
 };
 class CUP_A2_r2_rock2: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r2_rock2";
  model = "\ca\rocks2\r2_rock2.p3d";
 };
 class CUP_A2_r2_rocktower: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r2_rocktower";
  model = "\ca\rocks2\r2_rocktower.p3d";
 };
 class CUP_A2_r2_rockwall: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r2_rockwall";
  model = "\ca\rocks2\r2_rockwall.p3d";
 };
 class CUP_A2_r2_stone: CUP_A2_Rocks
 {
  scope = 2;
  displayName = "r2_stone";
  model = "\ca\rocks2\r2_stone.p3d";
 };
 class CUP_A2_2m5_corner_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "2m5_corner_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_2m5_corner_ep1.p3d";
 };
 class CUP_A2_bagfencecorner: CUP_A2_Walls
 {
  scope = 2;
  displayName = "bagfencecorner";
  model = "\ca\misc2\bagfencecorner.p3d";
 };
 class CUP_A2_bagfenceend: CUP_A2_Walls
 {
  scope = 2;
  displayName = "bagfenceend";
  model = "\ca\misc2\bagfenceend.p3d";
 };
 class CUP_A2_bagfencelong: CUP_A2_Walls
 {
  scope = 2;
  displayName = "bagfencelong";
  model = "\ca\misc2\bagfencelong.p3d";
 };
 class CUP_A2_bagfenceround: CUP_A2_Walls
 {
  scope = 2;
  displayName = "bagfenceround";
  model = "\ca\misc2\bagfenceround.p3d";
 };
 class CUP_A2_bagfenceshort: CUP_A2_Walls
 {
  scope = 2;
  displayName = "bagfenceshort";
  model = "\ca\misc2\bagfenceshort.p3d";
 };
 class CUP_A2_betonovy_blok: CUP_A2_Walls
 {
  scope = 2;
  displayName = "betonovy_blok";
  model = "\ca\misc\betonovy_blok.p3d";
 };
 class CUP_A2_betonovy_blok_zacatek: CUP_A2_Walls
 {
  scope = 2;
  displayName = "betonovy_blok_zacatek";
  model = "\ca\misc\betonovy_blok_zacatek.p3d";
 };
 class CUP_A2_brana02nodoor: CUP_A2_Walls
 {
  scope = 2;
  displayName = "brana02nodoor";
  model = "\ca\buildings\brana02nodoor.p3d";
 };
 class CUP_A2_castle_bastion: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_bastion";
  model = "\ca\structures\castle\a_castle_bastion.p3d";
 };
 class CUP_A2_castle_bergfrit: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_bergfrit";
  model = "\ca\structures\castle\a_castle_bergfrit.p3d";
 };
 class CUP_A2_castle_bergfrit_dam: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_bergfrit_dam";
  model = "\ca\structures\castle\a_castle_bergfrit_dam.p3d";
 };
 class CUP_A2_castle_donjon: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_donjon";
  model = "\ca\structures\castle\a_castle_donjon.p3d";
 };
 class CUP_A2_castle_donjon_dam: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_donjon_dam";
  model = "\ca\structures\castle\a_castle_donjon_dam.p3d";
 };
 class CUP_A2_castle_gate: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_gate";
  model = "\ca\structures\castle\a_castle_gate.p3d";
 };
 class CUP_A2_castle_stairs_a: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_stairs_a";
  model = "\ca\structures\castle\a_castle_stairs_a.p3d";
 };
 class CUP_A2_castle_wall1_20: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall1_20";
  model = "\ca\structures\castle\a_castle_wall1_20.p3d";
 };
 class CUP_A2_castle_wall1_20_turn: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall1_20_turn";
  model = "\ca\structures\castle\a_castle_wall1_20_turn.p3d";
 };
 class CUP_A2_castle_wall1_corner: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall1_corner";
  model = "\ca\structures\castle\a_castle_wall1_corner.p3d";
 };
 class CUP_A2_castle_wall1_corner_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall1_corner_2";
  model = "\ca\structures\castle\a_castle_wall1_corner_2.p3d";
 };
 class CUP_A2_castle_wall1_end: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall1_end";
  model = "\ca\structures\castle\a_castle_wall1_end.p3d";
 };
 class CUP_A2_castle_wall1_end_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall1_end_2";
  model = "\ca\structures\castle\a_castle_wall1_end_2.p3d";
 };
 class CUP_A2_castle_wall2_30: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall2_30";
  model = "\ca\structures\castle\a_castle_wall2_30.p3d";
 };
 class CUP_A2_castle_wall2_corner: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall2_corner";
  model = "\ca\structures\castle\a_castle_wall2_corner.p3d";
 };
 class CUP_A2_castle_wall2_corner_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall2_corner_2";
  model = "\ca\structures\castle\a_castle_wall2_corner_2.p3d";
 };
 class CUP_A2_castle_wall2_end: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall2_end";
  model = "\ca\structures\castle\a_castle_wall2_end.p3d";
 };
 class CUP_A2_castle_wall2_end_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_wall2_end_2";
  model = "\ca\structures\castle\a_castle_wall2_end_2.p3d";
 };
 class CUP_A2_castle_walls_10: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_walls_10";
  model = "\ca\structures\castle\a_castle_walls_10.p3d";
 };
 class CUP_A2_castle_walls_5_d: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_walls_5_d";
  model = "\ca\structures\castle\a_castle_walls_5_d.p3d";
 };
 class CUP_A2_castle_walls_end: CUP_A2_Walls
 {
  scope = 2;
  displayName = "castle_walls_end";
  model = "\ca\structures\castle\a_castle_walls_end.p3d";
 };
 class CUP_A2_cbrk_5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cbrk_5";
  model = "\ca\structures\wall\wall_cbrk_5.p3d";
 };
 class CUP_A2_cbrk_5_d: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cbrk_5_d";
  model = "\ca\structures\wall\wall_cbrk_5_d.p3d";
 };
 class CUP_A2_cbrk_corner: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cbrk_corner";
  model = "\ca\structures\wall\wall_cbrk_corner.p3d";
 };
 class CUP_A2_cbrk_end: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cbrk_end";
  model = "\ca\structures\wall\wall_cbrk_end.p3d";
 };
 class CUP_A2_cgry_5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgry_5";
  model = "\ca\structures\wall\wall_cgry_5.p3d";
 };
 class CUP_A2_cgry_5_d: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgry_5_d";
  model = "\ca\structures\wall\wall_cgry_5_d.p3d";
 };
 class CUP_A2_cgry_corner: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgry_corner";
  model = "\ca\structures\wall\wall_cgry_corner.p3d";
 };
 class CUP_A2_cgry_corner_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgry_corner_2";
  model = "\ca\structures\wall\wall_cgry_corner_2.p3d";
 };
 class CUP_A2_cgry_end: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgry_end";
  model = "\ca\structures\wall\wall_cgry_end.p3d";
 };
 class CUP_A2_cgrylow_5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgrylow_5";
  model = "\ca\structures\wall\wall_cgrylow_5.p3d";
 };
 class CUP_A2_cgrylow_end1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgrylow_end1";
  model = "\ca\structures\wall\wall_cgrylow_end1.p3d";
 };
 class CUP_A2_cgrylow_end2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cgrylow_end2";
  model = "\ca\structures\wall\wall_cgrylow_end2.p3d";
 };
 class CUP_A2_citygate1_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "citygate1_ep1";
  model = "\ca\structures_e\housea\a_citygate1\a_citygate1_ep1.p3d";
 };
 class CUP_A2_cncblock: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cncblock";
  model = "\ca\misc3\cncblock.p3d";
 };
 class CUP_A2_cncblock_d: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cncblock_d";
  model = "\ca\misc3\cncblock_d.p3d";
 };
 class CUP_A2_cncblock_stripes: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cncblock_stripes";
  model = "\ca\misc3\cncblock_stripes.p3d";
 };
 class CUP_A2_concrete_block: CUP_A2_Walls
 {
  scope = 2;
  displayName = "concrete_block";
  model = "\ca\structures\misc\armory\concrete_block\concrete_block.p3d";
 };
 class CUP_A2_concrete_ramp: CUP_A2_Walls
 {
  scope = 2;
  displayName = "concrete_ramp";
  model = "\ca\structures\misc\armory\concrete_ramp\concrete_ramp.p3d";
 };
 class CUP_A2_concrete_wall: CUP_A2_Walls
 {
  scope = 2;
  displayName = "concrete_wall";
  model = "\ca\mp_armory\misc\concrete_wall\concrete_wall.p3d";
 };
 class CUP_A2_cyel_5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cyel_5";
  model = "\ca\structures\wall\wall_cyel_5.p3d";
 };
 class CUP_A2_cyel_corner: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cyel_corner";
  model = "\ca\structures\wall\wall_cyel_corner.p3d";
 };
 class CUP_A2_cyel_end: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cyel_end";
  model = "\ca\structures\wall\wall_cyel_end.p3d";
 };
 class CUP_A2_cyel_end2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "cyel_end2";
  model = "\ca\structures\wall\wall_cyel_end2.p3d";
 };
 class CUP_A2_dirthump01: CUP_A2_Walls
 {
  scope = 2;
  displayName = "dirthump01";
  model = "\ca\structures\misc\armory\dirthump\dirthump01.p3d";
 };
 class CUP_A2_dragonteeth: CUP_A2_Walls
 {
  scope = 2;
  displayName = "dragonteeth";
  model = "\ca\misc3\dragonteeth\dragonteeth.p3d";
 };
 class CUP_A2_dragonteethbig: CUP_A2_Walls
 {
  scope = 2;
  displayName = "dragonteethbig";
  model = "\ca\misc3\dragonteeth\dragonteethbig.p3d";
 };
 class CUP_A2_dum_istan4_zidka: CUP_A2_Walls
 {
  scope = 2;
  displayName = "dum_istan4_zidka";
  model = "\ca\buildings\dum_istan4_zidka.p3d";
 };
 class CUP_A2_fort_bagfence_corner: CUP_A2_Walls
 {
  scope = 2;
  displayName = "fort_bagfence_corner";
  model = "\ca\misc3\fort_bagfence_corner.p3d";
 };
 class CUP_A2_fort_bagfence_long: CUP_A2_Walls
 {
  scope = 2;
  displayName = "fort_bagfence_long";
  model = "\ca\misc3\fort_bagfence_long.p3d";
 };
 class CUP_A2_fort_bagfence_round: CUP_A2_Walls
 {
  scope = 2;
  displayName = "fort_bagfence_round";
  model = "\ca\misc3\fort_bagfence_round.p3d";
 };
 class CUP_A2_fort_envelopebig: CUP_A2_Walls
 {
  scope = 2;
  displayName = "fort_envelopebig";
  model = "\ca\misc\fort_envelopebig.p3d";
 };
 class CUP_A2_fort_envelopesmall: CUP_A2_Walls
 {
  scope = 2;
  displayName = "fort_envelopesmall";
  model = "\ca\misc\fort_envelopesmall.p3d";
 };
 class CUP_A2_fort_rampart: CUP_A2_Walls
 {
  scope = 2;
  displayName = "fort_rampart";
  model = "\ca\misc3\fort_rampart.p3d";
 };
 class CUP_A2_gate_ind1_l: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind1_l";
  model = "\ca\structures\wall\wall_gate_ind1_l.p3d";
 };
 class CUP_A2_gate_ind1_r: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind1_r";
  model = "\ca\structures\wall\wall_gate_ind1_r.p3d";
 };
 class CUP_A2_gate_ind2a_l: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind2a_l";
  model = "\ca\structures\wall\wall_gate_ind2a_l.p3d";
 };
 class CUP_A2_gate_ind2a_r: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind2a_r";
  model = "\ca\structures\wall\wall_gate_ind2a_r.p3d";
 };
 class CUP_A2_gate_ind2b_l: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind2b_l";
  model = "\ca\structures\wall\wall_gate_ind2b_l.p3d";
 };
 class CUP_A2_gate_ind2b_r: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind2b_r";
  model = "\ca\structures\wall\wall_gate_ind2b_r.p3d";
 };
 class CUP_A2_gate_ind2rail_l: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind2rail_l";
  model = "\ca\structures\wall\wall_gate_ind2rail_l.p3d";
 };
 class CUP_A2_gate_ind2rail_r: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_ind2rail_r";
  model = "\ca\structures\wall\wall_gate_ind2rail_r.p3d";
 };
 class CUP_A2_gate_indvar2_5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_indvar2_5";
  model = "\ca\structures\wall\gate_indvar2_5.p3d";
 };
 class CUP_A2_gate_kolchoz: CUP_A2_Walls
 {
  scope = 2;
  displayName = "gate_kolchoz";
  model = "\ca\structures\wall\wall_gate_kolchoz.p3d";
 };
 class CUP_A2_hbarrier1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "hbarrier1";
  model = "\ca\misc2\hbarrier1.p3d";
 };
 class CUP_A2_hbarrier3: CUP_A2_Walls
 {
  scope = 2;
  displayName = "hbarrier3";
  model = "\ca\misc2\hbarrier3.p3d";
 };
 class CUP_A2_hbarrier5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "hbarrier5";
  model = "\ca\misc2\hbarrier5.p3d";
 };
 class CUP_A2_hesco_10x_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "hesco_10x_ep1";
  model = "\ca\misc_e\wf\wf_hesco_10x_ep1.p3d";
 };
 class CUP_A2_hesco_5x_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "hesco_5x_ep1";
  model = "\ca\misc_e\wf\wf_hesco_5x_ep1.p3d";
 };
 class CUP_A2_hesco_big_10x_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "hesco_big_10x_ep1";
  model = "\ca\misc_e\wf\wf_hesco_big_10x_ep1.p3d";
 };
 class CUP_A2_indcnc_4: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc_4";
  model = "\ca\structures\wall\wall_indcnc_4.p3d";
 };
 class CUP_A2_indcnc_4_d: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc_4_d";
  model = "\ca\structures\wall\wall_indcnc_4_d.p3d";
 };
 class CUP_A2_indcnc_4_d_pmc: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc_4_d_pmc";
  model = "\ca\structures_pmc\walls\wall_indcnc_4_d_pmc.p3d";
 };
 class CUP_A2_indcnc_end_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc_end_2";
  model = "\ca\structures\wall\wall_indcnc_end_2.p3d";
 };
 class CUP_A2_indcnc_end_2_pmc: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc_end_2_pmc";
  model = "\ca\structures_pmc\walls\wall_indcnc_end_2_pmc.p3d";
 };
 class CUP_A2_indcnc_end_3: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc_end_3";
  model = "\ca\structures\wall\wall_indcnc_end_3.p3d";
 };
 class CUP_A2_indcnc_pole: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc_pole";
  model = "\ca\structures\wall\wall_indcnc_pole.p3d";
 };
 class CUP_A2_indcnc2_3: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indcnc2_3";
  model = "\ca\structures\wall\wall_indcnc2_3.p3d";
 };
 class CUP_A2_indvar1_5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar1_5";
  model = "\ca\structures\wall\wall_indvar1_5.p3d";
 };
 class CUP_A2_indvar1_5_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar1_5_2";
  model = "\ca\structures\wall\wall_indvar1_5_2.p3d";
 };
 class CUP_A2_indvar1_5_d: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar1_5_d";
  model = "\ca\structures\wall\wall_indvar1_5_d.p3d";
 };
 class CUP_A2_indvar1_5_d_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar1_5_d_2";
  model = "\ca\structures\wall\wall_indvar1_5_d_2.p3d";
 };
 class CUP_A2_indvar1_pole: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar1_pole";
  model = "\ca\structures\wall\wall_indvar1_pole.p3d";
 };
 class CUP_A2_indvar2_5: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar2_5";
  model = "\ca\structures\wall\wall_indvar2_5.p3d";
 };
 class CUP_A2_indvar2_5_d: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar2_5_d";
  model = "\ca\structures\wall\wall_indvar2_5_d.p3d";
 };
 class CUP_A2_indvar2_pole: CUP_A2_Walls
 {
  scope = 2;
  displayName = "indvar2_pole";
  model = "\ca\structures\wall\wall_indvar2_pole.p3d";
 };
 class CUP_A2_l_2m5_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l_2m5_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_2m5_ep1.p3d";
 };
 class CUP_A2_l_2m5_gate_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l_2m5_gate_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_2m5_gate_ep1.p3d";
 };
 class CUP_A2_l_5m_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l_5m_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_5m_ep1.p3d";
 };
 class CUP_A2_l1_2m5_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l1_2m5_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l1_2m5_ep1.p3d";
 };
 class CUP_A2_l1_5m_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l1_5m_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l1_5m_ep1.p3d";
 };
 class CUP_A2_l1_gate_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l1_gate_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l1_gate_ep1.p3d";
 };
 class CUP_A2_l1_pillar_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l1_pillar_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l1_pillar_ep1.p3d";
 };
 class CUP_A2_l2_5m_end_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l2_5m_end_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l2_5m_end_ep1.p3d";
 };
 class CUP_A2_l2_5m_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l2_5m_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l2_5m_ep1.p3d";
 };
 class CUP_A2_l3_5m_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l3_5m_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l3_5m_ep1.p3d";
 };
 class CUP_A2_l3_gate_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l3_gate_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l3_gate_ep1.p3d";
 };
 class CUP_A2_l3_pillar_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l3_pillar_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l3_pillar_ep1.p3d";
 };
 class CUP_A2_l4_10m_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l4_10m_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l4_10m_ep1.p3d";
 };
 class CUP_A2_l5_10m_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "l5_10m_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l5_10m_ep1.p3d";
 };
 class CUP_A2_mosque_1_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_1_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_mosque_1_ep1.p3d";
 };
 class CUP_A2_mosque_2_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_2_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_mosque_2_ep1.p3d";
 };
 class CUP_A2_mosque_big_addon_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_addon_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_addon_ep1.p3d";
 };
 class CUP_A2_mosque_big_hq_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_hq_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_hq_ep1.p3d";
 };
 class CUP_A2_mosque_big_hq_interier_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_hq_interier_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_hq_interier_ep1.p3d";
 };
 class CUP_A2_mosque_big_minaret_1_dam_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_minaret_1_dam_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_minaret_1_dam_ep1.p3d";
 };
 class CUP_A2_mosque_big_minaret_1_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_minaret_1_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_minaret_1_ep1.p3d";
 };
 class CUP_A2_mosque_big_minaret_2_dam_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_minaret_2_dam_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_minaret_2_dam_ep1.p3d";
 };
 class CUP_A2_mosque_big_minaret_2_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_minaret_2_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_minaret_2_ep1.p3d";
 };
 class CUP_A2_mosque_big_wall_corner_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_wall_corner_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_wall_corner_ep1.p3d";
 };
 class CUP_A2_mosque_big_wall_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_wall_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_wall_ep1.p3d";
 };
 class CUP_A2_mosque_big_wall_gate_dam_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_wall_gate_dam_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_wall_gate_dam_ep1.p3d";
 };
 class CUP_A2_mosque_big_wall_gate_ep1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "mosque_big_wall_gate_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_wall_gate_ep1.p3d";
 };
 class CUP_A2_ohrada_popelnice: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ohrada_popelnice";
  model = "\ca\misc\ohrada_popelnice.p3d";
 };
 class CUP_A2_ohrada_popelnice_roh: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ohrada_popelnice_roh";
  model = "\ca\misc\ohrada_popelnice_roh.p3d";
 };
 class CUP_A2_patnik: CUP_A2_Walls
 {
  scope = 2;
  displayName = "patnik";
  model = "\ca\misc\patnik.p3d";
 };
 class CUP_A2_patniky: CUP_A2_Walls
 {
  scope = 2;
  displayName = "patniky";
  model = "\ca\misc\patniky.p3d";
 };
 class CUP_A2_plot_istan1_rovny: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan1_rovny";
  model = "\ca\buildings\misc\plot_istan1_rovny.p3d";
 };
 class CUP_A2_plot_istan1_rovny_bezs: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan1_rovny_bezs";
  model = "\ca\buildings\misc\plot_istan1_rovny_bezs.p3d";
 };
 class CUP_A2_plot_istan1_rovny_end1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan1_rovny_end1";
  model = "\ca\buildings\misc\plot_istan1_rovny_end1.p3d";
 };
 class CUP_A2_plot_istan1_rovny_gate: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan1_rovny_gate";
  model = "\ca\buildings\misc\plot_istan1_rovny_gate.p3d";
 };
 class CUP_A2_plot_istan1_rovny_ohlod: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan1_rovny_ohlod";
  model = "\ca\buildings\misc\plot_istan1_rovny_ohlod.p3d";
 };
 class CUP_A2_plot_istan1_rovny_short: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan1_rovny_short";
  model = "\ca\buildings\misc\plot_istan1_rovny_short.p3d";
 };
 class CUP_A2_plot_istan1_sloupek: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan1_sloupek";
  model = "\ca\buildings\misc\plot_istan1_sloupek.p3d";
 };
 class CUP_A2_plot_istan3: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan3";
  model = "\ca\buildings\misc\plot_istan3.p3d";
 };
 class CUP_A2_plot_istan3_short: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan3_short";
  model = "\ca\buildings\misc\plot_istan3_short.p3d";
 };
 class CUP_A2_plot_istan3_sloupek: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_istan3_sloupek";
  model = "\ca\buildings\misc\plot_istan3_sloupek.p3d";
 };
 class CUP_A2_plot_zboreny: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_zboreny";
  model = "\ca\buildings\misc\plot_zboreny.p3d";
 };
 class CUP_A2_plot_zed_drevo1_branka: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_zed_drevo1_branka";
  model = "\ca\buildings\misc\plot_zed_drevo1_branka.p3d";
 };
 class CUP_A2_plot_zed_drevo1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_zed_drevo1";
  model = "\ca\buildings\misc\plot_zed-drevo1.p3d";
 };
 class CUP_A2_plot_zed_drevo2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_zed_drevo2";
  model = "\ca\buildings\misc\plot_zed-drevo2.p3d";
 };
 class CUP_A2_plot_zed_drevo3: CUP_A2_Walls
 {
  scope = 2;
  displayName = "plot_zed-drevo3";
  model = "\ca\buildings\misc\plot_zed_drevo3.p3d";
 };
 class CUP_A2_ruin_corner_1: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_corner_1";
  model = "\ca\structures\ruins\ruin_corner_1.p3d";
 };
 class CUP_A2_ruin_corner_1_pmc: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_corner_1_pmc";
  model = "\ca\structures_pmc\ruins\ruin_corner_1_pmc.p3d";
 };
 class CUP_A2_ruin_corner_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_corner_2";
  model = "\ca\structures\ruins\ruin_corner_2.p3d";
 };
 class CUP_A2_ruin_corner_2_pmc: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_corner_2_pmc";
  model = "\ca\structures_pmc\ruins\ruin_corner_2_pmc.p3d";
 };
 class CUP_A2_ruin_wall: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_wall";
  model = "\ca\structures\ruins\ruin_wall.p3d";
 };
 class CUP_A2_ruin_wall_pmc: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_wall_pmc";
  model = "\ca\structures_pmc\ruins\ruin_wall_pmc.p3d";
 };
 class CUP_A2_ruin_walldoor: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_walldoor";
  model = "\ca\structures\ruins\ruin_walldoor.p3d";
 };
 class CUP_A2_ruin_walldoor_pmc: CUP_A2_Walls
 {
  scope = 2;
  displayName = "ruin_walldoor_pmc";
  model = "\ca\structures_pmc\ruins\ruin_walldoor_pmc.p3d";
 };
 class CUP_A2_statek_brana: CUP_A2_Walls
 {
  scope = 2;
  displayName = "statek_brana";
  model = "\ca\buildings\statek_brana.p3d";
 };
 class CUP_A2_statek_brana_open: CUP_A2_Walls
 {
  scope = 2;
  displayName = "statek_brana_open";
  model = "\ca\buildings\statek_brana_open.p3d";
 };
 class CUP_A2_wall_stone: CUP_A2_Walls
 {
  scope = 2;
  displayName = "wall_stone";
  model = "\ca\structures\wall\wall_stone.p3d";
 };
 class CUP_A2_wall_stoned: CUP_A2_Walls
 {
  scope = 2;
  displayName = "wall_stoned";
  model = "\ca\structures\wall\wall_stoned.p3d";
 };
 class CUP_A2_zavora_2: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zavora_2";
  model = "\ca\buildings\misc\zavora_2.p3d";
 };
 class CUP_A2_zed_civil: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zed_civil";
  model = "\ca\buildings\misc\zed_civil.p3d";
 };
 class CUP_A2_zed_dira_civil: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zed_dira_civil";
  model = "\ca\buildings\misc\zed_dira_civil.p3d";
 };
 class CUP_A2_zed_podplaz_civil: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zed_podplaz_civil";
  model = "\ca\buildings\misc\zed_podplaz_civil.p3d";
 };
 class CUP_A2_zed2_civil: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zed2_civil";
  model = "\ca\buildings\misc\zed2_civil.p3d";
 };
 class CUP_A2_zed_drevo_sloupek: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zed-drevo_sloupek";
  model = "\ca\buildings\misc\plot_zed-drevo_sloupek.p3d";
 };
 class CUP_A2_zidka_branka: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zidka_branka";
  model = "\ca\buildings\misc\zidka_branka.p3d";
 };
 class CUP_A2_zidka01: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zidka01";
  model = "\ca\buildings\misc\zidka01.p3d";
 };
 class CUP_A2_zidka02: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zidka02";
  model = "\ca\buildings\misc\zidka02.p3d";
 };
 class CUP_A2_zidka03: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zidka03";
  model = "\ca\buildings\misc\zidka03.p3d";
 };
 class CUP_A2_zidka04: CUP_A2_Walls
 {
  scope = 2;
  displayName = "zidka04";
  model = "\ca\buildings\misc\zidka04.p3d";
 };
 class CUP_A2_barbedwire: CUP_A2_Fences
 {
  scope = 2;
  displayName = "barbedwire";
  model = "\ca\misc\barbedwire.p3d";
 };
 class CUP_A2_barbgate: CUP_A2_Fences
 {
  scope = 2;
  displayName = "barbgate";
  model = "\ca\misc2\barbgate.p3d";
 };
 class CUP_A2_dd_pletivo: CUP_A2_Fences
 {
  scope = 2;
  displayName = "dd_pletivo";
  model = "\ca\buildings\misc\dd_pletivo.p3d";
 };
 class CUP_A2_dd_pletivo_dira: CUP_A2_Fences
 {
  scope = 2;
  displayName = "dd_pletivo_dira";
  model = "\ca\buildings\misc\dd_pletivo_dira.p3d";
 };
 class CUP_A2_dd_pletivo_sl: CUP_A2_Fences
 {
  scope = 2;
  displayName = "dd_pletivo_sl";
  model = "\ca\buildings\misc\dd_pletivo_sl.p3d";
 };
 class CUP_A2_embeddedtire: CUP_A2_Fences
 {
  scope = 2;
  displayName = "embeddedtire";
  model = "\ca\signs2\embeddedtire.p3d";
 };
 class CUP_A2_fen1_5: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fen1_5";
  model = "\ca\structures\wall\wall_fen1_5.p3d";
 };
 class CUP_A2_fen1_5_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fen1_5_2";
  model = "\ca\structures\wall\wall_fen1_5_2.p3d";
 };
 class CUP_A2_fen1_5_hole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fen1_5_hole";
  model = "\ca\structures\wall\wall_fen1_5_hole.p3d";
 };
 class CUP_A2_fen1_5_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fen1_5_pole";
  model = "\ca\structures\wall\wall_fen1_5_pole.p3d";
 };
 class CUP_A2_fenw_7: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fenw_7";
  model = "\ca\structures\wall\wall_fenw_7.p3d";
 };
 class CUP_A2_fenw_7_d: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fenw_7_d";
  model = "\ca\structures\wall\wall_fenw_7_d.p3d";
 };
 class CUP_A2_fenw_7_s: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fenw_7_s";
  model = "\ca\structures\wall\wall_fenw_7_s.p3d";
 };
 class CUP_A2_fenw2_6_ep1: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fenw2_6_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_fenw2_6_ep1.p3d";
 };
 class CUP_A2_fort_razorwire: CUP_A2_Fences
 {
  scope = 2;
  displayName = "fort_razorwire";
  model = "\ca\misc\fort_razorwire.p3d";
 };
 class CUP_A2_gate_opendam: CUP_A2_Fences
 {
  scope = 2;
  displayName = "gate_opendam";
  model = "\ca\structures\wall\wall_gate_opendam.p3d";
 };
 class CUP_A2_gate_village: CUP_A2_Fences
 {
  scope = 2;
  displayName = "gate_village";
  model = "\ca\structures\wall\wall_gate_village.p3d";
 };
 class CUP_A2_gate_wood1: CUP_A2_Fences
 {
  scope = 2;
  displayName = "gate_wood1";
  model = "\ca\structures\wall\wall_gate_wood1.p3d";
 };
 class CUP_A2_gate_wood1_5: CUP_A2_Fences
 {
  scope = 2;
  displayName = "gate_wood1_5";
  model = "\ca\structures\wall\gate_wood1_5.p3d";
 };
 class CUP_A2_gate_wood2_5: CUP_A2_Fences
 {
  scope = 2;
  displayName = "gate_wood2_5";
  model = "\ca\structures\wall\gate_wood2_5.p3d";
 };
 class CUP_A2_indfnc_3: CUP_A2_Fences
 {
  scope = 2;
  displayName = "indfnc_3";
  model = "\ca\structures\wall\wall_indfnc_3.p3d";
 };
 class CUP_A2_indfnc_3_d: CUP_A2_Fences
 {
  scope = 2;
  displayName = "indfnc_3_d";
  model = "\ca\structures\wall\wall_indfnc_3_d.p3d";
 };
 class CUP_A2_indfnc_3_hole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "indfnc_3_hole";
  model = "\ca\structures\wall\wall_indfnc_3_hole.p3d";
 };
 class CUP_A2_indfnc_9: CUP_A2_Fences
 {
  scope = 2;
  displayName = "indfnc_9";
  model = "\ca\structures\wall\wall_indfnc_9.p3d";
 };
 class CUP_A2_indfnc_corner: CUP_A2_Fences
 {
  scope = 2;
  displayName = "indfnc_corner";
  model = "\ca\structures\wall\wall_indfnc_corner.p3d";
 };
 class CUP_A2_indfnc_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "indfnc_pole";
  model = "\ca\structures\wall\wall_indfnc_pole.p3d";
 };
 class CUP_A2_jezek_kov: CUP_A2_Fences
 {
  scope = 2;
  displayName = "jezek_kov";
  model = "\ca\misc\jezek_kov.p3d";
 };
 class CUP_A2_newplot: CUP_A2_Fences
 {
  scope = 2;
  displayName = "newplot";
  model = "\ca\buildings\misc\newplot.p3d";
 };
 class CUP_A2_newplot2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "newplot2";
  model = "\ca\buildings\misc\newplot2.p3d";
 };
 class CUP_A2_plastovy_patnik: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plastovy_patnik";
  model = "\ca\misc\plastovy_patnik.p3d";
 };
 class CUP_A2_pletivo_wired: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pletivo_wired";
  model = "\ca\buildings\misc\pletivo_wired.p3d";
 };
 class CUP_A2_pletivo_wired_branal_civil: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pletivo_wired_branal_civil";
  model = "\ca\buildings\misc\pletivo_wired_branal_civil.p3d";
 };
 class CUP_A2_pletivo_wired_branap: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pletivo_wired_branap";
  model = "\ca\buildings\misc\pletivo_wired_branap.p3d";
 };
 class CUP_A2_pletivo_wired_hole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pletivo_wired_hole";
  model = "\ca\buildings\misc\pletivo_wired_hole.p3d";
 };
 class CUP_A2_pletivo_wired_slope: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pletivo_wired_slope";
  model = "\ca\buildings\misc\pletivo_wired_slope.p3d";
 };
 class CUP_A2_plot_green_brank_o: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_brank_o";
  model = "\ca\buildings\misc\plot_green_brank_o.p3d";
 };
 class CUP_A2_plot_green_branka: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_branka";
  model = "\ca\buildings\misc\plot_green_branka.p3d";
 };
 class CUP_A2_plot_green_cihlsloup: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_cihlsloup";
  model = "\ca\buildings\misc\plot_green_cihlsloup.p3d";
 };
 class CUP_A2_plot_green_draty: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_draty";
  model = "\ca\buildings\misc\plot_green_draty.p3d";
 };
 class CUP_A2_plot_green_vrat_l: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_vrat_l";
  model = "\ca\buildings\misc\plot_green_vrat_l.p3d";
 };
 class CUP_A2_plot_green_vrat_o: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_vrat_o";
  model = "\ca\buildings\misc\plot_green_vrat_o.p3d";
 };
 class CUP_A2_plot_green_vrat_r: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_vrat_r";
  model = "\ca\buildings\misc\plot_green_vrat_r.p3d";
 };
 class CUP_A2_plot_green_vrata: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_green_vrata";
  model = "\ca\buildings\misc\plot_green_vrata.p3d";
 };
 class CUP_A2_plot_ohrada: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_ohrada";
  model = "\ca\buildings\misc\plot_ohrada.p3d";
 };
 class CUP_A2_plot_ohrada_pruchozi: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_ohrada_pruchozi";
  model = "\ca\buildings\misc\plot_ohrada_pruchozi.p3d";
 };
 class CUP_A2_plot_ohrada_zlomena: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_ohrada_zlomena";
  model = "\ca\buildings\misc\plot_ohrada_zlomena.p3d";
 };
 class CUP_A2_plot_provizorni: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_provizorni";
  model = "\ca\buildings\misc\plot_provizorni.p3d";
 };
 class CUP_A2_plot_rust_brank_o: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_brank_o";
  model = "\ca\buildings\misc\plot_rust_brank_o.p3d";
 };
 class CUP_A2_plot_rust_branka: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_branka";
  model = "\ca\buildings\misc\plot_rust_branka.p3d";
 };
 class CUP_A2_plot_rust_cihlsloup: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_cihlsloup";
  model = "\ca\buildings\misc\plot_rust_cihlsloup.p3d";
 };
 class CUP_A2_plot_rust_draty: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_draty";
  model = "\ca\buildings\misc\plot_rust_draty.p3d";
 };
 class CUP_A2_plot_rust_vrat_l: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_vrat_l";
  model = "\ca\buildings\misc\plot_rust_vrat_l.p3d";
 };
 class CUP_A2_plot_rust_vrat_o: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_vrat_o";
  model = "\ca\buildings\misc\plot_rust_vrat_o.p3d";
 };
 class CUP_A2_plot_rust_vrat_r: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_vrat_r";
  model = "\ca\buildings\misc\plot_rust_vrat_r.p3d";
 };
 class CUP_A2_plot_rust_vrata: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_rust_vrata";
  model = "\ca\buildings\misc\plot_rust_vrata.p3d";
 };
 class CUP_A2_plot_vinice: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_vinice";
  model = "\ca\buildings\misc\plot_vinice.p3d";
 };
 class CUP_A2_plot_vlnplech1: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_vlnplech1";
  model = "\ca\buildings\misc\plot_vlnplech1.p3d";
 };
 class CUP_A2_plot_vlnplech2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_vlnplech2";
  model = "\ca\buildings\misc\plot_vlnplech2.p3d";
 };
 class CUP_A2_plot_wood: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_wood";
  model = "\ca\buildings\misc\plot_wood.p3d";
 };
 class CUP_A2_plot_wood_door: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_wood_door";
  model = "\ca\buildings\misc\plot_wood_door.p3d";
 };
 class CUP_A2_plot_wood_sloupek: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_wood_sloupek";
  model = "\ca\buildings\misc\plot_wood_sloupek.p3d";
 };
 class CUP_A2_plot_wood1: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_wood1";
  model = "\ca\buildings\misc\plot_wood1.p3d";
 };
 class CUP_A2_plot_wood1_door: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_wood1_door";
  model = "\ca\buildings\misc\plot_wood1_door.p3d";
 };
 class CUP_A2_plot_wood1b: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_wood1b";
  model = "\ca\buildings\misc\plot_wood1b.p3d";
 };
 class CUP_A2_plot_woodb: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plot_woodb";
  model = "\ca\buildings\misc\plot_woodb.p3d";
 };
 class CUP_A2_plutek: CUP_A2_Fences
 {
  scope = 2;
  displayName = "plutek";
  model = "\ca\buildings\misc\plutek.p3d";
 };
 class CUP_A2_podlejzacka: CUP_A2_Fences
 {
  scope = 2;
  displayName = "podlejzacka";
  model = "\ca\misc\podlejzacka.p3d";
 };
 class CUP_A2_pruhovane_levykonec: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pruhovane_levykonec";
  model = "\ca\buildings\misc\zabradli_pruhovane_levykonec.p3d";
 };
 class CUP_A2_pruhovane_pravykonec: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pruhovane_pravykonec";
  model = "\ca\buildings\misc\zabradli_pruhovane_pravykonec.p3d";
 };
 class CUP_A2_pruhovane_stred: CUP_A2_Fences
 {
  scope = 2;
  displayName = "pruhovane_stred";
  model = "\ca\buildings\misc\zabradli_pruhovane_stred.p3d";
 };
 class CUP_A2_spurstone: CUP_A2_Fences
 {
  scope = 2;
  displayName = "spurstone";
  model = "\ca\signs2\spurstone.p3d";
 };
 class CUP_A2_svodidla: CUP_A2_Fences
 {
  scope = 2;
  displayName = "svodidla";
  model = "\ca\misc\svodidla.p3d";
 };
 class CUP_A2_svodidla_5m: CUP_A2_Fences
 {
  scope = 2;
  displayName = "svodidla_5m";
  model = "\ca\misc\svodidla_5m.p3d";
 };
 class CUP_A2_tape_redwhite: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tape_redwhite";
  model = "\ca\misc\tape_redwhite.p3d";
 };
 class CUP_A2_tin_4: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tin_4";
  model = "\ca\structures\wall\wall_tin_4.p3d";
 };
 class CUP_A2_tin_4_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tin_4_2";
  model = "\ca\structures\wall\wall_tin_4_2.p3d";
 };
 class CUP_A2_tin_4_2_pmc: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tin_4_2_pmc";
  model = "\ca\structures_pmc\walls\wall_tin_4_2_pmc.p3d";
 };
 class CUP_A2_tin_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tin_pole";
  model = "\ca\structures\wall\wall_tin_pole.p3d";
 };
 class CUP_A2_tin_pole_pmc: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tin_pole_pmc";
  model = "\ca\structures_pmc\walls\wall_tin_pole_pmc.p3d";
 };
 class CUP_A2_tincom_3: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tincom_3";
  model = "\ca\structures\wall\wall_tincom_3.p3d";
 };
 class CUP_A2_tincom_9: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tincom_9";
  model = "\ca\structures\wall\wall_tincom_9.p3d";
 };
 class CUP_A2_tincom_9_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tincom_9_2";
  model = "\ca\structures\wall\wall_tincom_9_2.p3d";
 };
 class CUP_A2_tincom_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "tincom_pole";
  model = "\ca\structures\wall\wall_tincom_pole.p3d";
 };
 class CUP_A2_vilvar1_6: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar1_6";
  model = "\ca\structures\wall\wall_vilvar1_6.p3d";
 };
 class CUP_A2_vilvar1_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar1_pole";
  model = "\ca\structures\wall\wall_vilvar1_pole.p3d";
 };
 class CUP_A2_vilvar2_4: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar2_4";
  model = "\ca\structures\wall\wall_vilvar2_4.p3d";
 };
 class CUP_A2_vilvar2_4_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar2_4_2";
  model = "\ca\structures\wall\wall_vilvar2_4_2.p3d";
 };
 class CUP_A2_vilvar2_4_d: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar2_4_d";
  model = "\ca\structures\wall\wall_vilvar2_4_d.p3d";
 };
 class CUP_A2_vilvar2_4_end: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar2_4_end";
  model = "\ca\structures\wall\wall_vilvar2_4_end.p3d";
 };
 class CUP_A2_vilvar2_4_end_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar2_4_end_2";
  model = "\ca\structures\wall\wall_vilvar2_4_end_2.p3d";
 };
 class CUP_A2_vilvar2_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "vilvar2_pole";
  model = "\ca\structures\wall\wall_vilvar2_pole.p3d";
 };
 class CUP_A2_wood1_5: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood1_5";
  model = "\ca\structures\wall\wall_wood1_5.p3d";
 };
 class CUP_A2_wood1_5_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood1_5_2";
  model = "\ca\structures\wall\wall_wood1_5_2.p3d";
 };
 class CUP_A2_wood1_5_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood1_5_pole";
  model = "\ca\structures\wall\wall_wood1_5_pole.p3d";
 };
 class CUP_A2_wood1d_5: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood1d_5";
  model = "\ca\structures\wall\wall_wood1d_5.p3d";
 };
 class CUP_A2_wood1d_5_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood1d_5_2";
  model = "\ca\structures\wall\wall_wood1d_5_2.p3d";
 };
 class CUP_A2_wood1d_5_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood1d_5_pole";
  model = "\ca\structures\wall\wall_wood1d_5_pole.p3d";
 };
 class CUP_A2_wood2_5: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood2_5";
  model = "\ca\structures\wall\wall_wood2_5.p3d";
 };
 class CUP_A2_wood2_5_d: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood2_5_d";
  model = "\ca\structures\wall\wall_wood2_5_d.p3d";
 };
 class CUP_A2_wood2_5_end: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood2_5_end";
  model = "\ca\structures\wall\wall_wood2_5_end.p3d";
 };
 class CUP_A2_wood2_5_end_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood2_5_end_2";
  model = "\ca\structures\wall\wall_wood2_5_end_2.p3d";
 };
 class CUP_A2_wood2_5_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "wood2_5_pole";
  model = "\ca\structures\wall\wall_wood2_5_pole.p3d";
 };
 class CUP_A2_woodf_5: CUP_A2_Fences
 {
  scope = 2;
  displayName = "woodf_5";
  model = "\ca\structures\wall\wall_woodf_5.p3d";
 };
 class CUP_A2_woodf_5_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "woodf_5_2";
  model = "\ca\structures\wall\wall_woodf_5_2.p3d";
 };
 class CUP_A2_woodf_5_end: CUP_A2_Fences
 {
  scope = 2;
  displayName = "woodf_5_end";
  model = "\ca\structures\wall\wall_woodf_5_end.p3d";
 };
 class CUP_A2_woodvil_4: CUP_A2_Fences
 {
  scope = 2;
  displayName = "woodvil_4";
  model = "\ca\structures\wall\wall_woodvil_4.p3d";
 };
 class CUP_A2_woodvil_4_2: CUP_A2_Fences
 {
  scope = 2;
  displayName = "woodvil_4_2";
  model = "\ca\structures\wall\wall_woodvil_4_2.p3d";
 };
 class CUP_A2_woodvil_4_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "woodvil_4_pole";
  model = "\ca\structures\wall\wall_woodvil_4_pole.p3d";
 };
 class CUP_A2_woodvil_pole: CUP_A2_Fences
 {
  scope = 2;
  displayName = "woodvil_pole";
  model = "\ca\structures\wall\wall_woodvil_pole.p3d";
 };
 class CUP_A2_coltan_conv1_10_ep1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "coltan_conv1_10_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_conv1_10_ep1.p3d";
 };
 class CUP_A2_coltan_conv1_end_ep1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "coltan_conv1_end_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_conv1_end_ep1.p3d";
 };
 class CUP_A2_coltan_conv1_main_ep1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "coltan_conv1_main_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_conv1_main_ep1.p3d";
 };
 class CUP_A2_coltan_conv2_ep1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "coltan_conv2_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_conv2_ep1.p3d";
 };
 class CUP_A2_concoutlet_ep1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "concoutlet_ep1";
  model = "\ca\structures_e\misc\misc_construction\misc_concoutlet_ep1.p3d";
 };
 class CUP_A2_concpipeline_ep1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "concpipeline_ep1";
  model = "\ca\structures_e\misc\misc_construction\misc_concpipe_ep1.p3d";
 };
 class CUP_A2_dopravnik_d_pec_vez1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "dopravnik_d_pec_vez1";
  model = "\ca\buildings2\ind_cementworks\ind_dopravnik\d_pec_vez1.p3d";
 };
 class CUP_A2_dopravnik_d_pec_vez2: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "dopravnik_d_pec_vez2";
  model = "\ca\buildings2\ind_cementworks\ind_dopravnik\d_pec_vez2.p3d";
 };
 class CUP_A2_dopravnik_d_vez_mlyn: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "dopravnik_d_vez_mlyn";
  model = "\ca\buildings2\ind_cementworks\ind_dopravnik\d_vez_mlyn.p3d";
 };
 class CUP_A2_dopravnik_d_vsilo_pec: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "dopravnik_d_vsilo_pec";
  model = "\ca\buildings2\ind_cementworks\ind_dopravnik\d_vsilo_pec.p3d";
 };
 class CUP_A2_dopravnik_vez_pec: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "dopravnik_vez_pec";
  model = "\ca\buildings2\ind_cementworks\ind_dopravnik\vez_pec.p3d";
 };
 class CUP_A2_dopravnik_vez_silo: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "dopravnik_vez_silo";
  model = "\ca\buildings2\ind_cementworks\ind_dopravnik\vez_silo.p3d";
 };
 class CUP_A2_indpipe1_20m: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_20m";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_20m.p3d";
 };
 class CUP_A2_indpipe1_45degl: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_45degl";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_45degl.p3d";
 };
 class CUP_A2_indpipe1_45degr: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_45degr";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_45degr.p3d";
 };
 class CUP_A2_indpipe1_90degl: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_90degl";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_90degl.p3d";
 };
 class CUP_A2_indpipe1_90degr: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_90degr";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_90degr.p3d";
 };
 class CUP_A2_indpipe1_broken: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_broken";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_broken.p3d";
 };
 class CUP_A2_indpipe1_ground: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_ground";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_ground.p3d";
 };
 class CUP_A2_indpipe1_ground2: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_ground2";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_ground2.p3d";
 };
 class CUP_A2_indpipe1_stair: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_stair";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_stair.p3d";
 };
 class CUP_A2_indpipe1_ul: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_ul";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_ul.p3d";
 };
 class CUP_A2_indpipe1_up: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_up";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_uup.p3d";
 };
 class CUP_A2_indpipe1_ur: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_ur";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_ur.p3d";
 };
 class CUP_A2_indpipe1_valve: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe1_valve";
  model = "\ca\buildings2\ind_pipe\indpipe1\indpipe1_valve.p3d";
 };
 class CUP_A2_indpipe2_big_18: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_big_18";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_big_18.p3d";
 };
 class CUP_A2_indpipe2_big_18ladder: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_big_18ladder";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_big_18ladder.p3d";
 };
 class CUP_A2_indpipe2_big_9: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_big_9";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_big_9.p3d";
 };
 class CUP_A2_indpipe2_big_ground1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_big_ground1";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_big_ground1.p3d";
 };
 class CUP_A2_indpipe2_big_ground2: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_big_ground2";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_big_ground2.p3d";
 };
 class CUP_A2_indpipe2_big_support: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_big_support";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_big_support.p3d";
 };
 class CUP_A2_indpipe2_bigbuild1_l: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_bigbuild1_l";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_bigbuild1_l.p3d";
 };
 class CUP_A2_indpipe2_bigbuild1_r: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_bigbuild1_r";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_bigbuild1_r.p3d";
 };
 class CUP_A2_indpipe2_bigbuild2_l: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_bigbuild2_l";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_bigbuild2_l.p3d";
 };
 class CUP_A2_indpipe2_bigbuild2_r: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_bigbuild2_r";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_bigbuild2_r.p3d";
 };
 class CUP_A2_indpipe2_bigl_l: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_bigl_l";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_bigl_l.p3d";
 };
 class CUP_A2_indpipe2_bigl_r: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_bigl_r";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_bigl_r.p3d";
 };
 class CUP_A2_indpipe2_small_9: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_small_9";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_small_9.p3d";
 };
 class CUP_A2_indpipe2_small_ground1: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_small_ground1";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_small_ground1.p3d";
 };
 class CUP_A2_indpipe2_small_ground2: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_small_ground2";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_small_ground2.p3d";
 };
 class CUP_A2_indpipe2_smallbuild1_l: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_smallbuild1_l";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_smallbuild1_l.p3d";
 };
 class CUP_A2_indpipe2_smallbuild1_r: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_smallbuild1_r";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_smallbuild1_r.p3d";
 };
 class CUP_A2_indpipe2_smallbuild2_l: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_smallbuild2_l";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_smallbuild2_l.p3d";
 };
 class CUP_A2_indpipe2_smallbuild2_r: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_smallbuild2_r";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_smallbuild2_r.p3d";
 };
 class CUP_A2_indpipe2_smalll_l: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_smalll_l";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_smalll_l.p3d";
 };
 class CUP_A2_indpipe2_t_l: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_t_l";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_t_l.p3d";
 };
 class CUP_A2_indpipe2_t_r: CUP_A2_Pipelines
 {
  scope = 2;
  displayName = "indpipe2_t_r";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_t_r.p3d";
 };
 class CUP_A2_cable_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "cable_ep1";
  model = "\ca\structures_e\misc\misc_cables\misc_cable_ep1.p3d";
 };
 class CUP_A2_cable_rugs1_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "cable_rugs1_ep1";
  model = "\ca\structures_e\misc\misc_cables\misc_cable_rugs1_ep1.p3d";
 };
 class CUP_A2_cable_v_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "cable_v_ep1";
  model = "\ca\structures_e\misc\misc_cables\misc_cable_v_ep1.p3d";
 };
 class CUP_A2_powerline_vhv_pmc: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powerline_vhv_pmc";
  model = "\ca\structures_pmc\misc\powers\power_vhv_pmc.p3d";
 };
 class CUP_A2_powerstation_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powerstation_ep1";
  model = "\ca\structures_e\ind\ind_powerstation\ind_powerstation_ep1.p3d";
 };
 class CUP_A2_powline_wire_a_left_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powline_wire_a_left_ep1";
  model = "\ca\structures_e\misc\misc_power\pow_wire_a_left_ep1.p3d";
 };
 class CUP_A2_powline_wire_a_right_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powline_wire_a_right_ep1";
  model = "\ca\structures_e\misc\misc_power\pow_wire_a_right_ep1.p3d";
 };
 class CUP_A2_powline_wire_ab_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powline_wire_ab_ep1";
  model = "\ca\structures_e\misc\misc_power\pow_wire_ab_ep1.p3d";
 };
 class CUP_A2_powline_wire_bb_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powline_wire_bb_ep1";
  model = "\ca\structures_e\misc\misc_power\pow_wire_bb_ep1.p3d";
 };
 class CUP_A2_powlinea_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlinea_ep1";
  model = "\ca\structures_e\misc\misc_power\powa_ep1.p3d";
 };
 class CUP_A2_powlineb_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlineb_ep1";
  model = "\ca\structures_e\misc\misc_power\powb_ep1.p3d";
 };
 class CUP_A2_powlines_conc1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_conc1";
  model = "\ca\structures\misc_powers\pows_conc1.p3d";
 };
 class CUP_A2_powlines_conc2: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_conc2";
  model = "\ca\structures\misc_powers\pows_conc2.p3d";
 };
 class CUP_A2_powlines_conc2a_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_conc2a_ep1";
  model = "\ca\structures_e\misc\misc_power\pows_conc2a_ep1.p3d";
 };
 class CUP_A2_powlines_conc2l_ep1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_conc2l_ep1";
  model = "\ca\structures_e\misc\misc_power\pows_conc2l_ep1.p3d";
 };
 class CUP_A2_powlines_conc3: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_conc3";
  model = "\ca\structures\misc_powers\pows_conc3.p3d";
 };
 class CUP_A2_powlines_conca: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_conca";
  model = "\ca\structures\misc_powers\pows_conca.p3d";
 };
 class CUP_A2_powlines_concl: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_concl";
  model = "\ca\structures\misc_powers\pows_concl.p3d";
 };
 class CUP_A2_powlines_transformer1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_transformer1";
  model = "\ca\structures\misc_powers\pows_transformer1.p3d";
 };
 class CUP_A2_powlines_transformer2: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_transformer2";
  model = "\ca\structures\misc_powers\pows_transformer2.p3d";
 };
 class CUP_A2_powlines_wood1: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_wood1";
  model = "\ca\structures\misc_powers\pows_wood1.p3d";
 };
 class CUP_A2_powlines_wood2: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_wood2";
  model = "\ca\structures\misc_powers\pows_wood2.p3d";
 };
 class CUP_A2_powlines_wooda: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_wooda";
  model = "\ca\structures\misc_powers\pows_wooda.p3d";
 };
 class CUP_A2_powlines_woodl: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "powlines_woodl";
  model = "\ca\structures\misc_powers\pows_woodl.p3d";
 };
 class CUP_A2_sloup_vn: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloup_vn";
  model = "\ca\misc\sloup_vn.p3d";
 };
 class CUP_A2_sloup_vn_drat: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloup_vn_drat";
  model = "\ca\misc\sloup_vn_drat.p3d";
 };
 class CUP_A2_sloup_vn_drat_d: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloup_vn_drat_d";
  model = "\ca\misc\sloup_vn_drat_d.p3d";
 };
 class CUP_A2_sloup_vn_dratz: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloup_vn_dratz";
  model = "\ca\misc\sloup_vn_dratz.p3d";
 };
 class CUP_A2_sloup_vn_dratzl: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloup_vn_dratzl";
  model = "\ca\misc\sloup_vn_dratzl.p3d";
 };
 class CUP_A2_sloup_vn_dratzp: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloup_vn_dratzp";
  model = "\ca\misc\sloup_vn_dratzp.p3d";
 };
 class CUP_A2_sloupyela: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloupyela";
  model = "\ca\misc\sloupyela.p3d";
 };
 class CUP_A2_sloupyele: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloupyele";
  model = "\ca\misc\sloupyele.p3d";
 };
 class CUP_A2_sloupyeli: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "sloupyeli";
  model = "\ca\misc\sloupyeli.p3d";
 };
 class CUP_A2_trafostanica_mala: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "trafostanica_mala";
  model = "\ca\buildings\trafostanica_mala.p3d";
 };
 class CUP_A2_trafostanica_velka: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "trafostanica_velka";
  model = "\ca\buildings\trafostanica_velka.p3d";
 };
 class CUP_A2_trafostanica_velka_draty: CUP_A2_Powerlines
 {
  scope = 2;
  displayName = "trafostanica_velka_draty";
  model = "\ca\buildings\trafostanica_velka_draty.p3d";
 };
 class CUP_A2_lampa_ind: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lampa_ind";
  model = "\ca\buildings\misc\lampa_ind.p3d";
 };
 class CUP_A2_lampa_ind_zebr: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lampa_ind_zebr";
  model = "\ca\buildings\misc\lampa_ind_zebr.p3d";
 };
 class CUP_A2_lampa_sidl: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lampa_sidl";
  model = "\ca\buildings\misc\lampa_sidl.p3d";
 };
 class CUP_A2_lampa_sidl_2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lampa_sidl_2";
  model = "\ca\buildings\misc\lampa_sidl_2.p3d";
 };
 class CUP_A2_lampa_sidl_3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lampa_sidl_3";
  model = "\ca\buildings\misc\lampa_sidl_3.p3d";
 };
 class CUP_A2_stoplight01: CUP_A2_Roads
 {
  scope = 2;
  displayName = "stoplight01";
  model = "\ca\buildings\misc\stoplight01.p3d";
 };
 class CUP_A2_stoplight02: CUP_A2_Roads
 {
  scope = 2;
  displayName = "stoplight02";
  model = "\ca\buildings\misc\stoplight02.p3d";
 };
 class CUP_A2_traffics_danger: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_danger";
  model = "\ca\misc\sign_danger.p3d";
 };
 class CUP_A2_traffics_dangerousroad: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_dangerousroad";
  model = "\ca\signs_e\signt\signt_dangerousroad.p3d";
 };
 class CUP_A2_traffics_nodriving2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_nodriving2";
  model = "\ca\signs_e\signt\signt_nodriving.p3d";
 };
 class CUP_A2_traffics_speedlimit80: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_speedlimit80";
  model = "\ca\signs_e\signt\signt_speedlimit80.p3d";
 };
 class CUP_A2_traffics_warningrocks: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_warningrocks";
  model = "\ca\signs_e\signt\signt_warningrocks.p3d";
 };
 class CUP_A2_traffics_airport: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_airport";
  model = "\ca\signs2\signt\sign_airport.p3d";
 };
 class CUP_A2_traffics_attention: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_attention";
  model = "\ca\signs2\signt\sign_attention.p3d";
 };
 class CUP_A2_traffics_badroadside: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_badroadside";
  model = "\ca\signs2\signt\sign_badroadside.p3d";
 };
 class CUP_A2_traffics_blindway_left_new: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_blindway_left_new";
  model = "\ca\signs2\signt\sign_blindway_left_new.p3d";
 };
 class CUP_A2_traffics_blindway_new: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_blindway_new";
  model = "\ca\signs2\signt\sign_blindway_new.p3d";
 };
 class CUP_A2_traffics_blindway_right_new: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_blindway_right_new";
  model = "\ca\signs2\signt\sign_blindway_right_new.p3d";
 };
 class CUP_A2_traffics_bus: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_bus";
  model = "\ca\signs2\signt\sign_bus.p3d";
 };
 class CUP_A2_traffics_children_new: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_children_new";
  model = "\ca\signs2\signt\sign_children_new.p3d";
 };
 class CUP_A2_traffics_cow: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_cow";
  model = "\ca\signs2\signt\sign_cow.p3d";
 };
 class CUP_A2_traffics_crossroad: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_crossroad";
  model = "\ca\signs2\signt\sign_crossroad.p3d";
 };
 class CUP_A2_traffics_crossroadmain: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_crossroadmain";
  model = "\ca\signs2\signt\sign_crossroadmain.p3d";
 };
 class CUP_A2_traffics_deer: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_deer";
  model = "\ca\signs2\signt\sign_deer.p3d";
 };
 class CUP_A2_traffics_downhill: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_downhill";
  model = "\ca\signs2\signt\sign_downhill.p3d";
 };
 class CUP_A2_traffics_fallingstones: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_fallingstones";
  model = "\ca\signs2\signt\sign_fallingstones.p3d";
 };
 class CUP_A2_traffics_flyawaygrit: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_flyawaygrit";
  model = "\ca\signs2\signt\sign_flyawaygrit.p3d";
 };
 class CUP_A2_traffics_food: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_food";
  model = "\ca\signs2\signt\sign_food.p3d";
 };
 class CUP_A2_traffics_fuel: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_fuel";
  model = "\ca\signs2\signt\sign_fuel.p3d";
 };
 class CUP_A2_traffics_heightlimit: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_heightlimit";
  model = "\ca\signs2\signt\sign_heightlimit.p3d";
 };
 class CUP_A2_traffics_hospital: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_hospital";
  model = "\ca\signs2\signt\sign_hospital.p3d";
 };
 class CUP_A2_traffics_left: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_left";
  model = "\ca\signs2\signt\sign_left.p3d";
 };
 class CUP_A2_traffics_leftdirection: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_leftdirection";
  model = "\ca\signs2\signt\sign_leftdirection.p3d";
 };
 class CUP_A2_traffics_main: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_main";
  model = "\ca\signs2\signt\sign_main.p3d";
 };
 class CUP_A2_traffics_main_end: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_main_end";
  model = "\ca\signs2\signt\sign_main_end.p3d";
 };
 class CUP_A2_traffics_nodriving: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_nodriving";
  model = "\ca\signs2\signt\sign_nodriving.p3d";
 };
 class CUP_A2_traffics_nodrivingwronway: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_nodrivingwronway";
  model = "\ca\signs2\signt\sign_nodrivingwronway.p3d";
 };
 class CUP_A2_traffics_noovertaking: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_noovertaking";
  model = "\ca\signs2\signt\sign_noovertaking.p3d";
 };
 class CUP_A2_traffics_oneway: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_oneway";
  model = "\ca\signs2\signt\sign_oneway.p3d";
 };
 class CUP_A2_traffics_parking: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_parking";
  model = "\ca\signs2\signt\sign_parking.p3d";
 };
 class CUP_A2_traffics_pass_new: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_pass_new";
  model = "\ca\signs2\signt\sign_pass_new.p3d";
 };
 class CUP_A2_traffics_pedcrossing: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_pedcrossing";
  model = "\ca\signs2\signt\sign_pedcrossing.p3d";
 };
 class CUP_A2_traffics_port: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_port";
  model = "\ca\signs2\signt\sign_port.p3d";
 };
 class CUP_A2_traffics_prejezd: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_prejezd";
  model = "\ca\signs2\signt\sign_prejezd.p3d";
 };
 class CUP_A2_traffics_prejezd2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_prejezd2";
  model = "\ca\signs2\signt\sign_prejezd2.p3d";
 };
 class CUP_A2_traffics_prejezd3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_prejezd3";
  model = "\ca\signs2\signt\sign_prejezd3.p3d";
 };
 class CUP_A2_traffics_priority: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_priority";
  model = "\ca\signs2\signt\sign_priority.p3d";
 };
 class CUP_A2_traffics_right: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_right";
  model = "\ca\signs2\signt\sign_right.p3d";
 };
 class CUP_A2_traffics_rightdirection: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_rightdirection";
  model = "\ca\signs2\signt\sign_rightdirection.p3d";
 };
 class CUP_A2_traffics_roadworks_new: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_roadworks_new";
  model = "\ca\signs2\signt\sign_roadworks_new.p3d";
 };
 class CUP_A2_traffics_serpentine_left: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_serpentine_left";
  model = "\ca\signs2\signt\sign_serpentine_left.p3d";
 };
 class CUP_A2_traffics_serpentine_right: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_serpentine_right";
  model = "\ca\signs2\signt\sign_serpentine_right.p3d";
 };
 class CUP_A2_traffics_service: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_service";
  model = "\ca\signs2\signt\sign_service.p3d";
 };
 class CUP_A2_traffics_snow_new: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_snow_new";
  model = "\ca\signs2\signt\sign_snow_new.p3d";
 };
 class CUP_A2_traffics_snowchains: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_snowchains";
  model = "\ca\signs2\signt\sign_snowchains.p3d";
 };
 class CUP_A2_traffics_snowchains_end: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_snowchains_end";
  model = "\ca\signs2\signt\sign_snowchains_end.p3d";
 };
 class CUP_A2_traffics_speed20: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_speed20";
  model = "\ca\signs2\signt\sign_speed20.p3d";
 };
 class CUP_A2_traffics_speed50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_speed50";
  model = "\ca\signs2\signt\sign_speed50.p3d";
 };
 class CUP_A2_traffics_stop: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_stop";
  model = "\ca\signs2\signt\sign_stop.p3d";
 };
 class CUP_A2_traffics_stopprohibited: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_stopprohibited";
  model = "\ca\signs2\signt\sign_stopprohibited.p3d";
 };
 class CUP_A2_traffics_tractorprohibited: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_tractorprohibited";
  model = "\ca\signs2\signt\sign_tractorprohibited.p3d";
 };
 class CUP_A2_traffics_train: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_train";
  model = "\ca\signs2\signt\sign_train.p3d";
 };
 class CUP_A2_traffics_uphill: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_uphill";
  model = "\ca\signs2\signt\sign_uphill.p3d";
 };
 class CUP_A2_traffics_widthlimit: CUP_A2_Roads
 {
  scope = 2;
  displayName = "traffics_widthlimit";
  model = "\ca\signs2\signt\sign_widthlimit.p3d";
 };
 class CUP_A2_amplion_conc: CUP_A2_Roads
 {
  scope = 2;
  displayName = "amplion_conc";
  model = "\ca\structures\misc\misc_amplion\misc_amplion_conc.p3d";
 };
 class CUP_A2_amplion_wood: CUP_A2_Roads
 {
  scope = 2;
  displayName = "amplion_wood";
  model = "\ca\structures\misc\misc_amplion\misc_amplion_wood.p3d";
 };
 class CUP_A2_lamp_small_ep1: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lamp_small_ep1";
  model = "\ca\structures_e\misc\misc_lamp\lamp_small_ep1.p3d";
 };
 class CUP_A2_lamp_street1_ep1: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lamp_street1_ep1";
  model = "\ca\structures_e\misc\misc_lamp\lamp_street1_ep1.p3d";
 };
 class CUP_A2_lamp_street2_ep1: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lamp_street2_ep1";
  model = "\ca\structures_e\misc\misc_lamp\lamp_street2_ep1.p3d";
 };
 class CUP_A2_lamp_street2_off_ep1: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lamp_street2_off_ep1";
  model = "\ca\structures_e\misc\misc_lamp\lamp_street2_off_ep1.p3d";
 };
 class CUP_A2_lampa_ind_ep1: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lampa_ind_ep1";
  model = "\ca\structures_e\misc\misc_lamp\lampa_ind_ep1.p3d";
 };
 class CUP_A2_lamp_street1_off_pmc: CUP_A2_Roads
 {
  scope = 2;
  displayName = "lamp_street1_off_pmc";
  model = "\ca\structures_pmc\misc\lamps\lamp_street1_off_pmc.p3d";
 };
 class CUP_A2_OA_asf1_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_6";
  model = "\ca\roads_e\roads\asf1_6.p3d";
 };
 class CUP_A2_OA_asf1_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_6konec";
  model = "\ca\roads_e\roads\asf1_6konec.p3d";
 };
 class CUP_A2_OA_asf1_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_12";
  model = "\ca\roads_e\roads\asf1_12.p3d";
 };
 class CUP_A2_OA_asf1_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_25";
  model = "\ca\roads_e\roads\asf1_25.p3d";
 };
 class CUP_A2_OA_asf1_1575: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_1575";
  model = "\ca\roads_e\roads\asf1_1575.p3d";
 };
 class CUP_A2_OA_asf1_02000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_02000";
  model = "\ca\roads_e\roads\asf1_02000.p3d";
 };
 class CUP_A2_OA_asf1_2250: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_2250";
  model = "\ca\roads_e\roads\asf1_2250.p3d";
 };
 class CUP_A2_OA_asf1_3025: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_3025";
  model = "\ca\roads_e\roads\asf1_3025.p3d";
 };
 class CUP_A2_OA_asf1_6010: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_6010";
  model = "\ca\roads_e\roads\asf1_6010.p3d";
 };
 class CUP_A2_OA_asf1_7100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_7100";
  model = "\ca\roads_e\roads\asf1_7100.p3d";
 };
 class CUP_A2_OA_asf1_11000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf1_11000";
  model = "\ca\roads_e\roads\asf1_11000.p3d";
 };
 class CUP_A2_OA_asf2_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_6";
  model = "\ca\roads_e\roads\asf2_6.p3d";
 };
 class CUP_A2_OA_asf2_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_6konec";
  model = "\ca\roads_e\roads\asf2_6konec.p3d";
 };
 class CUP_A2_OA_asf2_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_12";
  model = "\ca\roads_e\roads\asf2_12.p3d";
 };
 class CUP_A2_OA_asf2_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_25";
  model = "\ca\roads_e\roads\asf2_25.p3d";
 };
 class CUP_A2_OA_asf2_1575: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_1575";
  model = "\ca\roads_e\roads\asf2_1575.p3d";
 };
 class CUP_A2_OA_asf2_02000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_02000";
  model = "\ca\roads_e\roads\asf2_02000.p3d";
 };
 class CUP_A2_OA_asf2_2250: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_2250";
  model = "\ca\roads_e\roads\asf2_2250.p3d";
 };
 class CUP_A2_OA_asf2_3025: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_3025";
  model = "\ca\roads_e\roads\asf2_3025.p3d";
 };
 class CUP_A2_OA_asf2_6010: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_6010";
  model = "\ca\roads_e\roads\asf2_6010.p3d";
 };
 class CUP_A2_OA_asf2_7100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_7100";
  model = "\ca\roads_e\roads\asf2_7100.p3d";
 };
 class CUP_A2_OA_asf2_11000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_asf2_11000";
  model = "\ca\roads_e\roads\asf2_11000.p3d";
 };
 class CUP_A2_OA_dirt1_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_6";
  model = "\ca\roads_e\roads\dirt1_6.p3d";
 };
 class CUP_A2_OA_dirt1_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_6konec";
  model = "\ca\roads_e\roads\dirt1_6konec.p3d";
 };
 class CUP_A2_OA_dirt1_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_12";
  model = "\ca\roads_e\roads\dirt1_12.p3d";
 };
 class CUP_A2_OA_dirt1_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_25";
  model = "\ca\roads_e\roads\dirt1_25.p3d";
 };
 class CUP_A2_OA_dirt1_1575: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_1575";
  model = "\ca\roads_e\roads\dirt1_1575.p3d";
 };
 class CUP_A2_OA_dirt1_02000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_02000";
  model = "\ca\roads_e\roads\dirt1_02000.p3d";
 };
 class CUP_A2_OA_dirt1_2250: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_2250";
  model = "\ca\roads_e\roads\dirt1_2250.p3d";
 };
 class CUP_A2_OA_dirt1_3025: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_3025";
  model = "\ca\roads_e\roads\dirt1_3025.p3d";
 };
 class CUP_A2_OA_dirt1_6010: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_6010";
  model = "\ca\roads_e\roads\dirt1_6010.p3d";
 };
 class CUP_A2_OA_dirt1_7100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_7100";
  model = "\ca\roads_e\roads\dirt1_7100.p3d";
 };
 class CUP_A2_OA_dirt1_11000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt1_11000";
  model = "\ca\roads_e\roads\dirt1_11000.p3d";
 };
 class CUP_A2_OA_dirt2_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_6";
  model = "\ca\roads_e\roads\dirt2_6.p3d";
 };
 class CUP_A2_OA_dirt2_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_6konec";
  model = "\ca\roads_e\roads\dirt2_6konec.p3d";
 };
 class CUP_A2_OA_dirt2_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_12";
  model = "\ca\roads_e\roads\dirt2_12.p3d";
 };
 class CUP_A2_OA_dirt2_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_25";
  model = "\ca\roads_e\roads\dirt2_25.p3d";
 };
 class CUP_A2_OA_dirt2_1575: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_1575";
  model = "\ca\roads_e\roads\dirt2_1575.p3d";
 };
 class CUP_A2_OA_dirt2_02000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_02000";
  model = "\ca\roads_e\roads\dirt2_02000.p3d";
 };
 class CUP_A2_OA_dirt2_2250: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_2250";
  model = "\ca\roads_e\roads\dirt2_2250.p3d";
 };
 class CUP_A2_OA_dirt2_3025: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_3025";
  model = "\ca\roads_e\roads\dirt2_3025.p3d";
 };
 class CUP_A2_OA_dirt2_6010: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_6010";
  model = "\ca\roads_e\roads\dirt2_6010.p3d";
 };
 class CUP_A2_OA_dirt2_7100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_7100";
  model = "\ca\roads_e\roads\dirt2_7100.p3d";
 };
 class CUP_A2_OA_dirt2_11000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_dirt2_11000";
  model = "\ca\roads_e\roads\dirt2_11000.p3d";
 };
 class CUP_A2_OA_path_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_6konec";
  model = "\ca\roads_e\roads\path_6konec.p3d";
 };
 class CUP_A2_OA_path_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_12";
  model = "\ca\roads_e\roads\path_12.p3d";
 };
 class CUP_A2_OA_path_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_25";
  model = "\ca\roads_e\roads\path_25.p3d";
 };
 class CUP_A2_OA_path_1575: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_1575";
  model = "\ca\roads_e\roads\path_1575.p3d";
 };
 class CUP_A2_OA_path_02000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_02000";
  model = "\ca\roads_e\roads\path_02000.p3d";
 };
 class CUP_A2_OA_path_2250: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_2250";
  model = "\ca\roads_e\roads\path_2250.p3d";
 };
 class CUP_A2_OA_path_3025: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_3025";
  model = "\ca\roads_e\roads\path_3025.p3d";
 };
 class CUP_A2_OA_path_6010: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_6010";
  model = "\ca\roads_e\roads\path_6010.p3d";
 };
 class CUP_A2_OA_path_7100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_7100";
  model = "\ca\roads_e\roads\path_7100.p3d";
 };
 class CUP_A2_OA_path_11000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_11000";
  model = "\ca\roads_e\roads\path_11000.p3d";
 };
 class CUP_A2_OA_path_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_6";
  model = "\ca\roads_e\roads\path_6.p3d";
 };
 class CUP_A2_bridge_asf_pmc: CUP_A2_Roads
 {
  scope = 2;
  displayName = "bridge_asf_pmc";
  model = "\ca\roads_pmc\bridge\bridge_asf_pmc.p3d";
 };
 class CUP_A2_bridge_asf1_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "bridge_asf1_25";
  model = "\ca\roads2\bridge\bridge_asf1_25.p3d";
 };
 class CUP_A2_bridge_stone_asf2_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "bridge_stone_asf2_25";
  model = "\ca\roads2\bridge\bridge_stone_asf2_25.p3d";
 };
 class CUP_A2_bridge_wood_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "bridge_wood_25";
  model = "\ca\roads2\bridge\bridge_wood_25.p3d";
 };
 class CUP_A2_asf1_0_2000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_0_2000";
  model = "\ca\roads2\asf1_0 2000.p3d";
 };
 class CUP_A2_asf1_1_1000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_1_1000";
  model = "\ca\roads2\asf1_1 1000.p3d";
 };
 class CUP_A2_asf1_6_crosswalk: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_6_crosswalk";
  model = "\ca\roads2\asf1_6_crosswalk.p3d";
 };
 class CUP_A2_asf1_7_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_7_100";
  model = "\ca\roads2\asf1_7 100.p3d";
 };
 class CUP_A2_asf1_10_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_10_25";
  model = "\ca\roads2\asf1_10 25.p3d";
 };
 class CUP_A2_asf1_10_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_10_50";
  model = "\ca\roads2\asf1_10 50.p3d";
 };
 class CUP_A2_asf1_10_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_10_75";
  model = "\ca\roads2\asf1_10 75.p3d";
 };
 class CUP_A2_asf1_10_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_10_100";
  model = "\ca\roads2\asf1_10 100.p3d";
 };
 class CUP_A2_asf1_15_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_15_75";
  model = "\ca\roads2\asf1_15 75.p3d";
 };
 class CUP_A2_asf1_22_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_22_50";
  model = "\ca\roads2\asf1_22 50.p3d";
 };
 class CUP_A2_asf1_30_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_30_25";
  model = "\ca\roads2\asf1_30 25.p3d";
 };
 class CUP_A2_asf1_60_10: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_60_10";
  model = "\ca\roads2\asf1_60 10.p3d";
 };
 class CUP_A2_asf2_0_2000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_0_2000";
  model = "\ca\roads2\asf2_0 2000.p3d";
 };
 class CUP_A2_asf2_1_1000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_1_1000";
  model = "\ca\roads2\asf2_1 1000.p3d";
 };
 class CUP_A2_asf2_6_crosswalk: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_6_crosswalk";
  model = "\ca\roads2\asf2_6_crosswalk.p3d";
 };
 class CUP_A2_asf2_7_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_7_100";
  model = "\ca\roads2\asf2_7 100.p3d";
 };
 class CUP_A2_asf2_10_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_10_25";
  model = "\ca\roads2\asf2_10 25.p3d";
 };
 class CUP_A2_asf2_10_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_10_50";
  model = "\ca\roads2\asf2_10 50.p3d";
 };
 class CUP_A2_asf2_10_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_10_75";
  model = "\ca\roads2\asf2_10 75.p3d";
 };
 class CUP_A2_asf2_10_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_10_100";
  model = "\ca\roads2\asf2_10 100.p3d";
 };
 class CUP_A2_asf2_15_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_15_75";
  model = "\ca\roads2\asf2_15 75.p3d";
 };
 class CUP_A2_asf2_22_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_22_50";
  model = "\ca\roads2\asf2_22 50.p3d";
 };
 class CUP_A2_asf2_30_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_30_25";
  model = "\ca\roads2\asf2_30 25.p3d";
 };
 class CUP_A2_asf2_60_10: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_60_10";
  model = "\ca\roads2\asf2_60 10.p3d";
 };
 class CUP_A2_asf3_0_2000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_0_2000";
  model = "\ca\roads2\asf3_0 2000.p3d";
 };
 class CUP_A2_asf3_1_1000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_1_1000";
  model = "\ca\roads2\asf3_1 1000.p3d";
 };
 class CUP_A2_asf3_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_6";
  model = "\ca\roads2\asf3_6.p3d";
 };
 class CUP_A2_asf3_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_6konec";
  model = "\ca\roads2\asf3_6konec.p3d";
 };
 class CUP_A2_asf3_7_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_7_100";
  model = "\ca\roads2\asf3_7 100.p3d";
 };
 class CUP_A2_asf3_10_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_10_25";
  model = "\ca\roads2\asf3_10 25.p3d";
 };
 class CUP_A2_asf3_10_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_10_50";
  model = "\ca\roads2\asf3_10 50.p3d";
 };
 class CUP_A2_asf3_10_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_10_75";
  model = "\ca\roads2\asf3_10 75.p3d";
 };
 class CUP_A2_asf3_10_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_10_100";
  model = "\ca\roads2\asf3_10 100.p3d";
 };
 class CUP_A2_asf3_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_12";
  model = "\ca\roads2\asf3_12.p3d";
 };
 class CUP_A2_asf3_15_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_15_75";
  model = "\ca\roads2\asf3_15 75.p3d";
 };
 class CUP_A2_asf3_22_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_22_50";
  model = "\ca\roads2\asf3_22 50.p3d";
 };
 class CUP_A2_asf3_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_25";
  model = "\ca\roads2\asf3_25.p3d";
 };
 class CUP_A2_asf3_30_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_30_25";
  model = "\ca\roads2\asf3_30 25.p3d";
 };
 class CUP_A2_asf3_60_10: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf3_60_10";
  model = "\ca\roads2\asf3_60 10.p3d";
 };
 class CUP_A2_city_0_2000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_0_2000";
  model = "\ca\roads2\city_0 2000.p3d";
 };
 class CUP_A2_city_1_1000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_1_1000";
  model = "\ca\roads2\city_1 1000.p3d";
 };
 class CUP_A2_city_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_6";
  model = "\ca\roads2\city_6.p3d";
 };
 class CUP_A2_city_6_crosswalk: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_6_crosswalk";
  model = "\ca\roads2\city_6_crosswalk.p3d";
 };
 class CUP_A2_city_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_6konec";
  model = "\ca\roads2\city_6konec.p3d";
 };
 class CUP_A2_city_7_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_7_100";
  model = "\ca\roads2\city_7 100.p3d";
 };
 class CUP_A2_city_10_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_10_25";
  model = "\ca\roads2\city_10 25.p3d";
 };
 class CUP_A2_city_10_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_10_50";
  model = "\ca\roads2\city_10 50.p3d";
 };
 class CUP_A2_city_10_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_10_75";
  model = "\ca\roads2\city_10 75.p3d";
 };
 class CUP_A2_city_10_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_10_100";
  model = "\ca\roads2\city_10 100.p3d";
 };
 class CUP_A2_city_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_12";
  model = "\ca\roads2\city_12.p3d";
 };
 class CUP_A2_city_15_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_15_75";
  model = "\ca\roads2\city_15 75.p3d";
 };
 class CUP_A2_city_22_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_22_50";
  model = "\ca\roads2\city_22 50.p3d";
 };
 class CUP_A2_city_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_25";
  model = "\ca\roads2\city_25.p3d";
 };
 class CUP_A2_city_30_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_30_25";
  model = "\ca\roads2\city_30 25.p3d";
 };
 class CUP_A2_city_60_10: CUP_A2_Roads
 {
  scope = 2;
  displayName = "city_60_10";
  model = "\ca\roads2\city_60 10.p3d";
 };
 class CUP_A2_grav_0_2000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_0_2000";
  model = "\ca\roads2\grav_0 2000.p3d";
 };
 class CUP_A2_grav_1_1000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_1_1000";
  model = "\ca\roads2\grav_1 1000.p3d";
 };
 class CUP_A2_grav_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_6";
  model = "\ca\roads2\grav_6.p3d";
 };
 class CUP_A2_grav_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_6konec";
  model = "\ca\roads2\grav_6konec.p3d";
 };
 class CUP_A2_grav_7_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_7_100";
  model = "\ca\roads2\grav_7 100.p3d";
 };
 class CUP_A2_grav_10_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_10_25";
  model = "\ca\roads2\grav_10 25.p3d";
 };
 class CUP_A2_grav_10_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_10_50";
  model = "\ca\roads2\grav_10 50.p3d";
 };
 class CUP_A2_grav_10_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_10_75";
  model = "\ca\roads2\grav_10 75.p3d";
 };
 class CUP_A2_grav_10_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_10_100";
  model = "\ca\roads2\grav_10 100.p3d";
 };
 class CUP_A2_grav_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_12";
  model = "\ca\roads2\grav_12.p3d";
 };
 class CUP_A2_grav_15_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_15_75";
  model = "\ca\roads2\grav_15 75.p3d";
 };
 class CUP_A2_grav_22_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_22_50";
  model = "\ca\roads2\grav_22 50.p3d";
 };
 class CUP_A2_grav_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_25";
  model = "\ca\roads2\grav_25.p3d";
 };
 class CUP_A2_grav_30_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_30_25";
  model = "\ca\roads2\grav_30 25.p3d";
 };
 class CUP_A2_grav_60_10: CUP_A2_Roads
 {
  scope = 2;
  displayName = "grav_60_10";
  model = "\ca\roads2\grav_60 10.p3d";
 };
 class CUP_A2_mud_0_2000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_0_2000";
  model = "\ca\roads2\mud_0 2000.p3d";
 };
 class CUP_A2_mud_1_1000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_1_1000";
  model = "\ca\roads2\mud_1 1000.p3d";
 };
 class CUP_A2_mud_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_6";
  model = "\ca\roads2\mud_6.p3d";
 };
 class CUP_A2_mud_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_6konec";
  model = "\ca\roads2\mud_6konec.p3d";
 };
 class CUP_A2_mud_7_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_7_100";
  model = "\ca\roads2\mud_7 100.p3d";
 };
 class CUP_A2_mud_10_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_10_25";
  model = "\ca\roads2\mud_10 25.p3d";
 };
 class CUP_A2_mud_10_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_10_50";
  model = "\ca\roads2\mud_10 50.p3d";
 };
 class CUP_A2_mud_10_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_10_75";
  model = "\ca\roads2\mud_10 75.p3d";
 };
 class CUP_A2_mud_10_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_10_100";
  model = "\ca\roads2\mud_10 100.p3d";
 };
 class CUP_A2_mud_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_12";
  model = "\ca\roads2\mud_12.p3d";
 };
 class CUP_A2_mud_15_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_15_75";
  model = "\ca\roads2\mud_15 75.p3d";
 };
 class CUP_A2_mud_22_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_22_50";
  model = "\ca\roads2\mud_22 50.p3d";
 };
 class CUP_A2_mud_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_25";
  model = "\ca\roads2\mud_25.p3d";
 };
 class CUP_A2_mud_30_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_30_25";
  model = "\ca\roads2\mud_30 25.p3d";
 };
 class CUP_A2_mud_60_10: CUP_A2_Roads
 {
  scope = 2;
  displayName = "mud_60_10";
  model = "\ca\roads2\mud_60 10.p3d";
 };
 class CUP_A2_OA_path_0_2000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_0_2000";
  model = "\ca\roads2\path_0 2000.p3d";
 };
 class CUP_A2_OA_path_1_1000: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_1_1000";
  model = "\ca\roads2\path_1 1000.p3d";
 };
 class CUP_A2_OA_path_7_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_7_100";
  model = "\ca\roads2\path_7 100.p3d";
 };
 class CUP_A2_OA_path_10_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_10_25";
  model = "\ca\roads2\path_10 25.p3d";
 };
 class CUP_A2_OA_path_10_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_10_50";
  model = "\ca\roads2\path_10 50.p3d";
 };
 class CUP_A2_OA_path_10_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_10_75";
  model = "\ca\roads2\path_10 75.p3d";
 };
 class CUP_A2_OA_path_10_100: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_10_100";
  model = "\ca\roads2\path_10 100.p3d";
 };
 class CUP_A2_OA_path_15_75: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_15_75";
  model = "\ca\roads2\path_15 75.p3d";
 };
 class CUP_A2_OA_path_22_50: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_22_50";
  model = "\ca\roads2\path_22 50.p3d";
 };
 class CUP_A2_OA_path_30_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_30_25";
  model = "\ca\roads2\path_30 25.p3d";
 };
 class CUP_A2_OA_path_60_10: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_path_60_10";
  model = "\ca\roads2\path_60 10.p3d";
 };
 class CUP_A2_asf1_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_6";
  model = "\ca\roads2\asf1_6.p3d";
 };
 class CUP_A2_asf1_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_6konec";
  model = "\ca\roads2\asf1_6konec.p3d";
 };
 class CUP_A2_asf1_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_12";
  model = "\ca\roads2\asf1_12.p3d";
 };
 class CUP_A2_asf1_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf1_25";
  model = "\ca\roads2\asf1_25.p3d";
 };
 class CUP_A2_asf2_6: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_6";
  model = "\ca\roads2\asf2_6.p3d";
 };
 class CUP_A2_asf2_6konec: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_6konec";
  model = "\ca\roads2\asf2_6konec.p3d";
 };
 class CUP_A2_asf2_12: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_12";
  model = "\ca\roads2\asf2_12.p3d";
 };
 class CUP_A2_asf2_25: CUP_A2_Roads
 {
  scope = 2;
  displayName = "asf2_25";
  model = "\ca\roads2\asf2_25.p3d";
 };
 class CUP_A2_OA_kr_t_asf1_asf2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_kr_t_asf1_asf2";
  model = "\ca\roads_e\roads\kr_t_asf1_asf2.p3d";
 };
 class CUP_A2_OA_kr_t_asf1_dirt1: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_kr_t_asf1_dirt1";
  model = "\ca\roads_e\roads\kr_t_asf1_dirt1.p3d";
 };
 class CUP_A2_OA_kr_t_asf1_dirt2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_kr_t_asf1_dirt2";
  model = "\ca\roads_e\roads\kr_t_asf1_dirt2.p3d";
 };
 class CUP_A2_OA_kr_t_asf2_dirt2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_kr_t_asf2_dirt2";
  model = "\ca\roads_e\roads\kr_t_asf2_dirt2.p3d";
 };
 class CUP_A2_OA_kr_x_asf1_asf1: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_kr_x_asf1_asf1";
  model = "\ca\roads_e\roads\kr_x_asf1_asf1.p3d";
 };
 class CUP_A2_OA_kr_x_asf1_asf2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_kr_x_asf1_asf2";
  model = "\ca\roads_e\roads\kr_x_asf1_asf2.p3d";
 };
 class CUP_A2_OA_kr_x_asf1_dirt2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "OA_kr_x_asf1_dirt2";
  model = "\ca\roads_e\roads\kr_x_asf1_dirt2.p3d";
 };
 class CUP_A2_kr_t_asf1_asf2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf1_asf2";
  model = "\ca\roads2\kr_t_asf1_asf2.p3d";
 };
 class CUP_A2_kr_t_asf1_asf3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf1_asf3";
  model = "\ca\roads2\kr_t_asf1_asf3.p3d";
 };
 class CUP_A2_kr_t_asf1_city: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf1_city";
  model = "\ca\roads2\kr_t_asf1_city.p3d";
 };
 class CUP_A2_kr_t_asf2_asf2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf2_asf2";
  model = "\ca\roads2\kr_t_asf2_asf2.p3d";
 };
 class CUP_A2_kr_t_asf2_asf3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf2_asf3";
  model = "\ca\roads2\kr_t_asf2_asf3.p3d";
 };
 class CUP_A2_kr_t_asf3_asf2: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf3_asf2";
  model = "\ca\roads2\kr_t_asf3_asf2.p3d";
 };
 class CUP_A2_kr_t_asf3_asf3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf3_asf3";
  model = "\ca\roads2\kr_t_asf3_asf3.p3d";
 };
 class CUP_A2_kr_t_asf3_grav: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf3_grav";
  model = "\ca\roads2\kr_t_asf3_grav.p3d";
 };
 class CUP_A2_kr_t_asf3_mud: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_t_asf3_mud";
  model = "\ca\roads2\kr_t_asf3_mud.p3d";
 };
 class CUP_A2_kr_x_asf1_asf3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_x_asf1_asf3";
  model = "\ca\roads2\kr_x_asf1_asf3.p3d";
 };
 class CUP_A2_kr_x_asf1_city: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_x_asf1_city";
  model = "\ca\roads2\kr_x_asf1_city.p3d";
 };
 class CUP_A2_kr_x_asf2_asf3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_x_asf2_asf3";
  model = "\ca\roads2\kr_x_asf2_asf3.p3d";
 };
 class CUP_A2_kr_x_asf2_city: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_x_asf2_city";
  model = "\ca\roads2\kr_x_asf2_city.p3d";
 };
 class CUP_A2_kr_x_city_asf3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_x_city_asf3";
  model = "\ca\roads2\kr_x_city_asf3.p3d";
 };
 class CUP_A2_kr_x_city_city: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_x_city_city";
  model = "\ca\roads2\kr_x_city_city.p3d";
 };
 class CUP_A2_kr_x_city_city_asf3: CUP_A2_Roads
 {
  scope = 2;
  displayName = "kr_x_city_city_asf3";
  model = "\ca\roads2\kr_x_city_city_asf3.p3d";
 };
 class CUP_A2_krizeni_s_trati: CUP_A2_Rails
 {
  scope = 2;
  displayName = "krizeni_s_trati";
  model = "\ca\signs2\signt\sign_krizeni_s_trati.p3d";
 };
 class CUP_A2_loco_742_blue: CUP_A2_Rails
 {
  scope = 2;
  displayName = "loco_742_blue";
  model = "\ca\structures\rail\rail_loco\loco_742_blue.p3d";
 };
 class CUP_A2_loco_742_red: CUP_A2_Rails
 {
  scope = 2;
  displayName = "loco_742_red";
  model = "\ca\structures\rail\rail_loco\loco_742_red.p3d";
 };
 class CUP_A2_rail_50km: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_50km";
  model = "\ca\structures\rail\rail_misc\rail_50km.p3d";
 };
 class CUP_A2_rail_house_01: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_house_01";
  model = "\ca\buildings2\rail_house_01\rail_house_01.p3d";
 };
 class CUP_A2_rail_koniecnastupista: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_koniecnastupista";
  model = "\ca\structures\rail\rail_misc\rail_koniecnastupista.p3d";
 };
 class CUP_A2_rail_najazdovarampa: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_najazdovarampa";
  model = "\ca\structures\rail\rail_misc\rail_najazdovarampa.p3d";
 };
 class CUP_A2_rail_o25m_priecestie: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_o25m_priecestie";
  model = "\ca\structures\rail\rail_misc\rail_o25m_priecestie.p3d";
 };
 class CUP_A2_rail_platform_cross: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_platform_cross";
  model = "\ca\structures\rail\rail_platform\rail_platform_cross.p3d";
 };
 class CUP_A2_rail_platform_segment: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_platform_segment";
  model = "\ca\structures\rail\rail_platform\rail_platform_segment.p3d";
 };
 class CUP_A2_rail_platform_start: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_platform_start";
  model = "\ca\structures\rail\rail_platform\rail_platform_start.p3d";
 };
 class CUP_A2_rail_priecestie: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_priecestie";
  model = "\ca\structures\rail\rail_misc\rail_priecestie.p3d";
 };
 class CUP_A2_rail_semafor: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_semafor";
  model = "\ca\structures\rail\rail_misc\rail_semafor.p3d";
 };
 class CUP_A2_rail_station_big: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_station_big";
  model = "\ca\structures\rail\rail_station_big\rail_station_big.p3d";
 };
 class CUP_A2_rail_zavora: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rail_zavora";
  model = "\ca\structures\rail\rail_misc\rail_zavora.p3d";
 };
 class CUP_A2_rails_25: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_25";
  model = "\ca\structures\rail\railway\rails_25.p3d";
 };
 class CUP_A2_rails_bridge_40: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_bridge_40";
  model = "\ca\structures\rail\railway\rails_bridge_40.p3d";
 };
 class CUP_A2_rails_curve_l25_10: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_curve_l25_10";
  model = "\ca\structures\rail\railway\rails_curve_l25_10.p3d";
 };
 class CUP_A2_rails_curve_r25_10: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_curve_r25_10";
  model = "\ca\structures\rail\railway\rails_curve_r25_10.p3d";
 };
 class CUP_A2_rails_down_25: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_down_25";
  model = "\ca\structures\rail\railway\rails_down_25.p3d";
 };
 class CUP_A2_rails_down_40: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_down_40";
  model = "\ca\structures\rail\railway\rails_down_40.p3d";
 };
 class CUP_A2_rails_linebreak_concrete: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_linebreak_concrete";
  model = "\ca\structures\rail\railway\rails_break_concrete.p3d";
 };
 class CUP_A2_rails_linebreak_iron: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_linebreak_iron";
  model = "\ca\structures\rail\railway\rails_break_iron.p3d";
 };
 class CUP_A2_rails_passing_10: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_passing_10";
  model = "\ca\structures\rail\railway\rails_passing_10.p3d";
 };
 class CUP_A2_rails_passing_25: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_passing_25";
  model = "\ca\structures\rail\railway\rails_passing_25.p3d";
 };
 class CUP_A2_rails_turnout_l: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_turnout_l";
  model = "\ca\structures\rail\railway\rails_turnout_l.p3d";
 };
 class CUP_A2_rails_turnout_r: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_turnout_r";
  model = "\ca\structures\rail\railway\rails_turnout_r.p3d";
 };
 class CUP_A2_rails_up_25: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_up_25";
  model = "\ca\structures\rail\railway\rails_up_25.p3d";
 };
 class CUP_A2_rails_up_40: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_up_40";
  model = "\ca\structures\rail\railway\rails_up_40.p3d";
 };
 class CUP_A2_rails_v_lb_re: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_v_lb_re";
  model = "\ca\structures\rail\railway\rails_v_lb_re.p3d";
 };
 class CUP_A2_rails_v_le_rb: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_v_le_rb";
  model = "\ca\structures\rail\railway\rails_v_le_rb.p3d";
 };
 class CUP_A2_rails_v_sp: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_v_sp";
  model = "\ca\structures\rail\railway\rails_v_sp.p3d";
 };
 class CUP_A2_rails_v1_le_rb: CUP_A2_Rails
 {
  scope = 2;
  displayName = "rails_v1_le_rb";
  model = "\ca\structures\rail\railway\rails_v1_le_rb.p3d";
 };
 class CUP_A2_railsn_25: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_25";
  model = "\ca\structures\rail\railway\railsn_25.p3d";
 };
 class CUP_A2_railsn_40: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_40";
  model = "\ca\structures\rail\railway\railsn_40.p3d";
 };
 class CUP_A2_railsn_curve_l25_10: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_curve_l25_10";
  model = "\ca\structures\rail\railway\railsn_curve_l25_10.p3d";
 };
 class CUP_A2_railsn_curve_l25_5: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_curve_l25_5";
  model = "\ca\structures\rail\railway\railsn_curve_l25_5.p3d";
 };
 class CUP_A2_railsn_curve_l30_20: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_curve_l30_20";
  model = "\ca\structures\rail\railway\railsn_curve_l30_20.p3d";
 };
 class CUP_A2_railsn_curve_r25_10: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_curve_r25_10";
  model = "\ca\structures\rail\railway\railsn_curve_r25_10.p3d";
 };
 class CUP_A2_railsn_curve_r25_5: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_curve_r25_5";
  model = "\ca\structures\rail\railway\railsn_curve_r25_5.p3d";
 };
 class CUP_A2_railsn_curve_r30_20: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_curve_r30_20";
  model = "\ca\structures\rail\railway\railsn_curve_r30_20.p3d";
 };
 class CUP_A2_railsn_turnout_l: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_turnout_l";
  model = "\ca\structures\rail\railway\railsn_turnout_l.p3d";
 };
 class CUP_A2_railsn_turnout_r: CUP_A2_Rails
 {
  scope = 2;
  displayName = "railsn_turnout_r";
  model = "\ca\structures\rail\railway\railsn_turnout_r.p3d";
 };
 class CUP_A2_wagon_box: CUP_A2_Rails
 {
  scope = 2;
  displayName = "wagon_box";
  model = "\ca\structures\rail\rail_wagon\wagon_box.p3d";
 };
 class CUP_A2_wagon_flat: CUP_A2_Rails
 {
  scope = 2;
  displayName = "wagon_flat";
  model = "\ca\structures\rail\rail_wagon\wagon_flat.p3d";
 };
 class CUP_A2_wagon_tanker: CUP_A2_Rails
 {
  scope = 2;
  displayName = "wagon_tanker";
  model = "\ca\structures\rail\rail_wagon\wagon_tanker.p3d";
 };
 class CUP_A2_naviglight: CUP_A2_Runway
 {
  scope = 2;
  displayName = "naviglight";
  model = "\ca\buildings\misc\naviglight.p3d";
 };
 class CUP_A2_runway_beton: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_beton";
  model = "\ca\roads2\runway_beton.p3d";
 };
 class CUP_A2_runway_beton_end1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_beton_end1";
  model = "\ca\roads2\runway_beton_end1.p3d";
 };
 class CUP_A2_runway_beton_end1_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_beton_end1_ep1";
  model = "\ca\roads_e\runway\runway_beton_end1_ep1.p3d";
 };
 class CUP_A2_runway_beton_end2: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_beton_end2";
  model = "\ca\roads2\runway_beton_end2.p3d";
 };
 class CUP_A2_runway_beton_end2_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_beton_end2_ep1";
  model = "\ca\roads_e\runway\runway_beton_end2_ep1.p3d";
 };
 class CUP_A2_runway_beton_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_beton_ep1";
  model = "\ca\roads_e\runway\runway_beton_ep1.p3d";
 };
 class CUP_A2_runway_dirt_1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_dirt_1";
  model = "\ca\roads2\runway_dirt_1.p3d";
 };
 class CUP_A2_runway_dirt_1_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_dirt_1_ep1";
  model = "\ca\roads_e\runway\runway_dirt_1_ep1.p3d";
 };
 class CUP_A2_runway_dirt_2: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_dirt_2";
  model = "\ca\roads2\runway_dirt_2.p3d";
 };
 class CUP_A2_runway_dirt_2_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_dirt_2_ep1";
  model = "\ca\roads_e\runway\runway_dirt_2_ep1.p3d";
 };
 class CUP_A2_runway_dirt_3: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_dirt_3";
  model = "\ca\roads2\runway_dirt_3.p3d";
 };
 class CUP_A2_runway_dirt_3_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_dirt_3_ep1";
  model = "\ca\roads_e\runway\runway_dirt_3_ep1.p3d";
 };
 class CUP_A2_runway_edgelight: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_edgelight";
  model = "\ca\buildings\misc\runway_edgelight.p3d";
 };
 class CUP_A2_runway_end00_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end00_ep1";
  model = "\ca\roads_e\runway\runway_end00_ep1.p3d";
 };
 class CUP_A2_runway_end04_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end04_ep1";
  model = "\ca\roads_e\runway\runway_end04_ep1.p3d";
 };
 class CUP_A2_runway_end06_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end06_ep1";
  model = "\ca\roads_e\runway\runway_end06_ep1.p3d";
 };
 class CUP_A2_runway_end09_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end09_ep1";
  model = "\ca\roads_e\runway\runway_end09_ep1.p3d";
 };
 class CUP_A2_runway_end15: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end15";
  model = "\ca\roads2\runway_end15.p3d";
 };
 class CUP_A2_runway_end15_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end15_ep1";
  model = "\ca\roads_e\runway\runway_end15_ep1.p3d";
 };
 class CUP_A2_runway_end18_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end18_ep1";
  model = "\ca\roads_e\runway\runway_end18_ep1.p3d";
 };
 class CUP_A2_runway_end22_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end22_ep1";
  model = "\ca\roads_e\runway\runway_end22_ep1.p3d";
 };
 class CUP_A2_runway_end24_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end24_ep1";
  model = "\ca\roads_e\runway\runway_end24_ep1.p3d";
 };
 class CUP_A2_runway_end27_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end27_ep1";
  model = "\ca\roads_e\runway\runway_end27_ep1.p3d";
 };
 class CUP_A2_runway_end33: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end33";
  model = "\ca\roads2\runway_end33.p3d";
 };
 class CUP_A2_runway_end33_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_end33_ep1";
  model = "\ca\roads_e\runway\runway_end33_ep1.p3d";
 };
 class CUP_A2_runway_main: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_main";
  model = "\ca\roads2\runway_main.p3d";
 };
 class CUP_A2_runway_main_40: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_main_40";
  model = "\ca\roads2\runway_main_40.p3d";
 };
 class CUP_A2_runway_main_40_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_main_40_ep1";
  model = "\ca\roads_e\runway\runway_main_40_ep1.p3d";
 };
 class CUP_A2_runway_main_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_main_ep1";
  model = "\ca\roads_e\runway\runway_main_ep1.p3d";
 };
 class CUP_A2_runway_papi: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_papi";
  model = "\ca\buildings\misc\runway_papi.p3d";
 };
 class CUP_A2_runway_papi_2: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_papi_2";
  model = "\ca\buildings\misc\runway_papi_2.p3d";
 };
 class CUP_A2_runway_papi_3: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_papi_3";
  model = "\ca\buildings\misc\runway_papi_3.p3d";
 };
 class CUP_A2_runway_papi_4: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_papi_4";
  model = "\ca\buildings\misc\runway_papi_4.p3d";
 };
 class CUP_A2_runway_poj_draha: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_draha";
  model = "\ca\roads2\runway_poj_draha.p3d";
 };
 class CUP_A2_runway_poj_draha_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_draha_ep1";
  model = "\ca\roads_e\runway\runway_poj_draha_ep1.p3d";
 };
 class CUP_A2_runway_poj_l_1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_1";
  model = "\ca\roads2\runway_poj_l_1.p3d";
 };
 class CUP_A2_runway_poj_l_1_end: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_1_end";
  model = "\ca\roads2\runway_poj_l_1_end.p3d";
 };
 class CUP_A2_runway_poj_l_1_end_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_1_end_ep1";
  model = "\ca\roads_e\runway\runway_poj_l_1_end_ep1.p3d";
 };
 class CUP_A2_runway_poj_l_1_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_1_ep1";
  model = "\ca\roads_e\runway\runway_poj_l_1_ep1.p3d";
 };
 class CUP_A2_runway_poj_l_2: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_2";
  model = "\ca\roads2\runway_poj_l_2.p3d";
 };
 class CUP_A2_runway_poj_l_2_end: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_2_end";
  model = "\ca\roads2\runway_poj_l_2_end.p3d";
 };
 class CUP_A2_runway_poj_l_2_end_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_2_end_ep1";
  model = "\ca\roads_e\runway\runway_poj_l_2_end_ep1.p3d";
 };
 class CUP_A2_runway_poj_l_2_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_l_2_ep1";
  model = "\ca\roads_e\runway\runway_poj_l_2_ep1.p3d";
 };
 class CUP_A2_runway_poj_spoj: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_spoj";
  model = "\ca\roads2\runway_poj_spoj.p3d";
 };
 class CUP_A2_runway_poj_spoj_2: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_spoj_2";
  model = "\ca\roads2\runway_poj_spoj_2.p3d";
 };
 class CUP_A2_runway_poj_spoj_2_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_spoj_2_ep1";
  model = "\ca\roads_e\runway\runway_poj_spoj_2_ep1.p3d";
 };
 class CUP_A2_runway_poj_spoj_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_spoj_ep1";
  model = "\ca\roads_e\runway\runway_poj_spoj_ep1.p3d";
 };
 class CUP_A2_runway_poj_t_1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_t_1";
  model = "\ca\roads2\runway_poj_t_1.p3d";
 };
 class CUP_A2_runway_poj_t_1_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_t_1_ep1";
  model = "\ca\roads_e\runway\runway_poj_t_1_ep1.p3d";
 };
 class CUP_A2_runway_poj_t_2: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_t_2";
  model = "\ca\roads2\runway_poj_t_2.p3d";
 };
 class CUP_A2_runway_poj_t_2_ep1: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runway_poj_t_2_ep1";
  model = "\ca\roads_e\runway\runway_poj_t_2_ep1.p3d";
 };
 class CUP_A2_runwayold_40_main: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runwayold_40_main";
  model = "\ca\roads2\runwayold_40_main.p3d";
 };
 class CUP_A2_runwayold_80_dirt: CUP_A2_Runway
 {
  scope = 2;
  displayName = "runwayold_80_dirt";
  model = "\ca\roads2\runwayold_80_dirt.p3d";
 };
 class 13_sidewalks_13_sidewalkclearlong: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkclearlong";
  model = "\ca\misc\sidewalks\sidewalkclearlong.p3d";
 };
 class 13_sidewalks_13_sidewalkclearmiddle: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkclearmiddle";
  model = "\ca\misc\sidewalks\sidewalkclearmiddle.p3d";
 };
 class 13_sidewalks_13_sidewalkclearshort: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkclearshort";
  model = "\ca\misc\sidewalks\sidewalkclearshort.p3d";
 };
 class 13_sidewalks_13_sidewalkcorner: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkcorner";
  model = "\ca\misc\sidewalks\sidewalkcorner.p3d";
 };
 class 13_sidewalks_13_sidewalkcrossing: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkcrossing";
  model = "\ca\misc\sidewalks\sidewalkcrossing.p3d";
 };
 class 13_sidewalks_13_sidewalkcrossingt: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkcrossingt";
  model = "\ca\misc\sidewalks\sidewalkcrossingt.p3d";
 };
 class 13_sidewalks_13_sidewalkshortend: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkshortend";
  model = "\ca\misc\sidewalks\sidewalkshortend.p3d";
 };
 class 13_sidewalks_13_sidewalkturn10deg: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkturn10deg";
  model = "\ca\misc\sidewalks\sidewalkturn10deg.p3d";
 };
 class 13_sidewalks_13_sidewalkturn20deg: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkturn20deg";
  model = "\ca\misc\sidewalks\sidewalkturn20deg.p3d";
 };
 class 13_sidewalks_13_sidewalkturn30deg: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkturn30deg";
  model = "\ca\misc\sidewalks\sidewalkturn30deg.p3d";
 };
 class 13_sidewalks_13_sidewalkturn5deg: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sidewalkturn5deg";
  model = "\ca\misc\sidewalks\sidewalkturn5deg.p3d";
 };
 class 13_sidewalks_13_sw_a_body_6m_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_a_body_6m_ep1";
  model = "\ca\roads_e\sidewalks\sw_a_body_6m_ep1.p3d";
 };
 class 13_sidewalks_13_sw_a_end_l_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_a_end_l_ep1";
  model = "\ca\roads_e\sidewalks\sw_a_end_l_ep1.p3d";
 };
 class 13_sidewalks_13_sw_a_end_r_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_a_end_r_ep1";
  model = "\ca\roads_e\sidewalks\sw_a_end_r_ep1.p3d";
 };
 class 13_sidewalks_13_sw_a_turn_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_a_turn_ep1";
  model = "\ca\roads_e\sidewalks\sw_a_turn_ep1.p3d";
 };
 class 13_sidewalks_13_sw_b_body_6m_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_b_body_6m_ep1";
  model = "\ca\roads_e\sidewalks\sw_b_body_6m_ep1.p3d";
 };
 class 13_sidewalks_13_sw_b_end_l_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_b_end_l_ep1";
  model = "\ca\roads_e\sidewalks\sw_b_end_l_ep1.p3d";
 };
 class 13_sidewalks_13_sw_b_end_r_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_b_end_r_ep1";
  model = "\ca\roads_e\sidewalks\sw_b_end_r_ep1.p3d";
 };
 class 13_sidewalks_13_sw_c_body_6m_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_c_body_6m_ep1";
  model = "\ca\roads_e\sidewalks\sw_c_body_6m_ep1.p3d";
 };
 class 13_sidewalks_13_sw_c_crosst_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_c_crosst_ep1";
  model = "\ca\roads_e\sidewalks\sw_c_crosst_ep1.p3d";
 };
 class 13_sidewalks_13_sw_c_end_l_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_c_end_l_ep1";
  model = "\ca\roads_e\sidewalks\sw_c_end_l_ep1.p3d";
 };
 class 13_sidewalks_13_sw_c_end_r_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_c_end_r_ep1";
  model = "\ca\roads_e\sidewalks\sw_c_end_r_ep1.p3d";
 };
 class 13_sidewalks_13_sw_c_turn_ep1: CUP_A2_Sidewalks
 {
  scope = 2;
  displayName = "sw_c_turn_ep1";
  model = "\ca\roads_e\sidewalks\sw_c_turn_ep1.p3d";
 };
 class 14_pier_14_lighthouse: CUP_A2_Pier
 {
  scope = 2;
  displayName = "lighthouse";
  model = "\ca\structures\nav\nav_lighthouse.p3d";
 };
 class 14_pier_14_lighthouse2: CUP_A2_Pier
 {
  scope = 2;
  displayName = "lighthouse2";
  model = "\ca\structures\nav\nav_lighthouse2.p3d";
 };
 class 14_pier_14_majak: CUP_A2_Pier
 {
  scope = 2;
  displayName = "majak";
  model = "\ca\buildings\majak.p3d";
 };
 class 14_pier_14_majak_podesta: CUP_A2_Pier
 {
  scope = 2;
  displayName = "majak_podesta";
  model = "\ca\buildings\majak_podesta.p3d";
 };
 class 14_pier_14_majak2: CUP_A2_Pier
 {
  scope = 2;
  displayName = "majak2";
  model = "\ca\buildings\majak2.p3d";
 };
 class 14_pier_14_molo_krychle: CUP_A2_Pier
 {
  scope = 2;
  displayName = "molo_krychle";
  model = "\ca\buildings\molo_krychle.p3d";
 };
 class 14_pier_14_nav_boathouse: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_boathouse";
  model = "\ca\structures\nav_boathouse\nav_boathouse.p3d";
 };
 class 14_pier_14_nav_boathouse_pier: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_boathouse_pier";
  model = "\ca\structures\nav_boathouse\nav_boathouse_pier.p3d";
 };
 class 14_pier_14_nav_boathouse_pierl: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_boathouse_pierl";
  model = "\ca\structures\nav_boathouse\nav_boathouse_pierl.p3d";
 };
 class 14_pier_14_nav_boathouse_pierr: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_boathouse_pierr";
  model = "\ca\structures\nav_boathouse\nav_boathouse_pierr.p3d";
 };
 class 14_pier_14_nav_boathouse_piert: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_boathouse_piert";
  model = "\ca\structures\nav_boathouse\nav_boathouse_piert.p3d";
 };
 class 14_pier_14_nav_molo_beton: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_molo_beton";
  model = "\ca\buildings\molo_beton.p3d";
 };
 class 14_pier_14_nav_molo_drevo_bs: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_molo_drevo_bs";
  model = "\ca\buildings\molo_drevo_bs.p3d";
 };
 class 14_pier_14_nav_molo_drevo_end: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_molo_drevo_end";
  model = "\ca\buildings\molo_drevo_end.p3d";
 };
 class 14_pier_14_nav_pier_c: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c";
  model = "\ca\structures\nav_pier\nav_pier_c.p3d";
 };
 class 14_pier_14_nav_pier_c_270: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_270";
  model = "\ca\structures\nav_pier\nav_pier_c_270.p3d";
 };
 class 14_pier_14_nav_pier_c_90: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_90";
  model = "\ca\structures\nav_pier\nav_pier_c_90.p3d";
 };
 class 14_pier_14_nav_pier_c_big: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_big";
  model = "\ca\structures\nav_pier\nav_pier_c_big.p3d";
 };
 class 14_pier_14_nav_pier_c_l: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_l";
  model = "\ca\structures\nav_pier\nav_pier_c_l.p3d";
 };
 class 14_pier_14_nav_pier_c_l10: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_l10";
  model = "\ca\structures\nav_pier\nav_pier_c_l10.p3d";
 };
 class 14_pier_14_nav_pier_c_l30: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_l30";
  model = "\ca\structures\nav_pier\nav_pier_c_l30.p3d";
 };
 class 14_pier_14_nav_pier_c_r: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_r";
  model = "\ca\structures\nav_pier\nav_pier_c_r.p3d";
 };
 class 14_pier_14_nav_pier_c_r10: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_r10";
  model = "\ca\structures\nav_pier\nav_pier_c_r10.p3d";
 };
 class 14_pier_14_nav_pier_c_r30: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_r30";
  model = "\ca\structures\nav_pier\nav_pier_c_r30.p3d";
 };
 class 14_pier_14_nav_pier_c_t15: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_t15";
  model = "\ca\structures\nav_pier\nav_pier_c_t15.p3d";
 };
 class 14_pier_14_nav_pier_c_t20: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c_t20";
  model = "\ca\structures\nav_pier\nav_pier_c_t20.p3d";
 };
 class 14_pier_14_nav_pier_c2: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c2";
  model = "\ca\structures\nav_pier\nav_pier_c2.p3d";
 };
 class 14_pier_14_nav_pier_c2_end: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_c2_end";
  model = "\ca\structures\nav_pier\nav_pier_c2_end.p3d";
 };
 class 14_pier_14_nav_pier_f_17: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_f_17";
  model = "\ca\structures\nav_pier\nav_pier_f_17.p3d";
 };
 class 14_pier_14_nav_pier_f_23: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_f_23";
  model = "\ca\structures\nav_pier\nav_pier_f_23.p3d";
 };
 class 14_pier_14_nav_pier_m: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_m";
  model = "\ca\structures\nav_pier\nav_pier_m.p3d";
 };
 class 14_pier_14_nav_pier_m_1: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_m_1";
  model = "\ca\structures\nav_pier\nav_pier_m_1.p3d";
 };
 class 14_pier_14_nav_pier_m_2: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_m_2";
  model = "\ca\structures\nav_pier\nav_pier_m_2.p3d";
 };
 class 14_pier_14_nav_pier_m_end: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_m_end";
  model = "\ca\structures\nav_pier\nav_pier_m_end.p3d";
 };
 class 14_pier_14_nav_pier_m_fuel: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_m_fuel";
  model = "\ca\structures\nav_pier\nav_pier_m_fuel.p3d";
 };
 class 14_pier_14_nav_pier_pneu: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_pneu";
  model = "\ca\structures\nav_pier\nav_pier_pneu.p3d";
 };
 class 14_pier_14_nav_pier_uvaz: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_pier_uvaz";
  model = "\ca\structures\nav_pier\nav_pier_uvaz.p3d";
 };
 class 14_pier_14_nav_wave_breaker: CUP_A2_Pier
 {
  scope = 2;
  displayName = "nav_wave_breaker";
  model = "\ca\structures\nav_pier\nav_wave_breaker.p3d";
 };
 class CUP_A2_a_buildingwip_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_buildingwip_ruins";
  model = "\ca\structures\a_buildingwip\a_buildingwip_ruins.p3d";
 };
 class CUP_A2_a_citygate1_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_citygate1_ruins_ep1";
  model = "\ca\structures_e\housea\a_citygate1\a_citygate1_ruins_ep1.p3d";
 };
 class CUP_A2_a_fuelstation_build_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_fuelstation_build_ruins";
  model = "\ca\structures\house\a_fuelstation\a_fuelstation_build_ruins.p3d";
 };
 class CUP_A2_a_fuelstation_shed_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_fuelstation_shed_ruins";
  model = "\ca\structures\house\a_fuelstation\a_fuelstation_shed_ruins.p3d";
 };
 class CUP_A2_a_generalstore_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_generalstore_01_ruins";
  model = "\ca\buildings2\a_generalstore_01\a_generalstore_01_ruins.p3d";
 };
 class CUP_A2_a_hospital_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_hospital_ruins";
  model = "\ca\structures\house\a_hospital\a_hospital_ruins.p3d";
 };
 class CUP_A2_a_municipaloffice_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_municipaloffice_ruins";
  model = "\ca\structures\a_municipaloffice\a_municipaloffice_ruins.p3d";
 };
 class CUP_A2_a_office01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_office01_ruins";
  model = "\ca\structures\house\a_office01\a_office01_ruins.p3d";
 };
 class CUP_A2_a_office01_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_office01_ruins_ep1";
  model = "\ca\structures_e\housea\a_office01\a_office01_ruins_ep1.p3d";
 };
 class CUP_A2_a_office02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_office02_ruins";
  model = "\ca\structures\house\a_office02\a_office02_ruins.p3d";
 };
 class CUP_A2_a_stationhouse_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_stationhouse_ruins";
  model = "\ca\structures\house\a_stationhouse\a_stationhouse_ruins.p3d";
 };
 class CUP_A2_a_statue01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_statue01_ruins";
  model = "\ca\buildings2\a_statue\a_statue01_ruins.p3d";
 };
 class CUP_A2_a_villa_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "a_villa_ruins_ep1";
  model = "\ca\structures_e\housea\a_villa\a_villa_ruins_ep1.p3d";
 };
 class CUP_A2_afbarabizna: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afbarabizna";
  model = "\ca\buildings\afbarabizna.p3d";
 };
 class CUP_A2_afbarabizna_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afbarabizna_ruins";
  model = "\ca\buildings\ruins\afbarabizna_ruins.p3d";
 };
 class CUP_A2_afdum_mesto2: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afdum_mesto2";
  model = "\ca\buildings\afdum_mesto2.p3d";
 };
 class CUP_A2_afdum_mesto2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afdum_mesto2_ruins";
  model = "\ca\buildings\ruins\afdum_mesto2_ruins.p3d";
 };
 class CUP_A2_afdum_mesto2l: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afdum_mesto2l";
  model = "\ca\buildings\afdum_mesto2l.p3d";
 };
 class CUP_A2_afdum_mesto2l_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afdum_mesto2l_ruins";
  model = "\ca\buildings\ruins\afdum_mesto2l_ruins.p3d";
 };
 class CUP_A2_afdum_mesto3: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afdum_mesto3";
  model = "\ca\buildings\afdum_mesto3.p3d";
 };
 class CUP_A2_afdum_mesto3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afdum_mesto3_ruins";
  model = "\ca\buildings\ruins\afdum_mesto3_ruins.p3d";
 };
 class CUP_A2_afhospoda_mesto: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afhospoda_mesto";
  model = "\ca\buildings\afhospoda_mesto.p3d";
 };
 class CUP_A2_afhospoda_mesto_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "afhospoda_mesto_ruins";
  model = "\ca\buildings\ruins\afhospoda_mesto_ruins.p3d";
 };
 class CUP_A2_barn_metal_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "barn_metal_ruins";
  model = "\ca\buildings2\barn_metal\barn_metal_ruins.p3d";
 };
 class CUP_A2_barn_w_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "barn_w_01_ruins";
  model = "\ca\structures\barn_w\barn_w_01_ruins.p3d";
 };
 class CUP_A2_barn_w_02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "barn_w_02_ruins";
  model = "\ca\structures\barn_w\barn_w_02_ruins.p3d";
 };
 class CUP_A2_barracks_i_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "barracks_i_ruins_ep1";
  model = "\ca\structures_e\mil\mil_barracks_i_ruins_ep1.p3d";
 };
 class CUP_A2_barracks_l_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "barracks_l_ruins_ep1";
  model = "\ca\structures_e\mil\mil_barracks_l_ruins_ep1.p3d";
 };
 class CUP_A2_barracks_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "barracks_ruins_ep1";
  model = "\ca\structures_e\mil\mil_barracks_ruins_ep1.p3d";
 };
 class CUP_A2_bouda1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "bouda1_ruins";
  model = "\ca\buildings\ruins\bouda1_ruins.p3d";
 };
 class CUP_A2_bouda3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "bouda3_ruins";
  model = "\ca\buildings\ruins\bouda3_ruins.p3d";
 };
 class CUP_A2_brana02nodoor_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "brana02nodoor_ruins";
  model = "\ca\buildings\ruins\brana02nodoor_ruins.p3d";
 };
 class CUP_A2_budova1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "budova1_ruins";
  model = "\ca\buildings\ruins\budova1_ruins.p3d";
 };
 class CUP_A2_budova2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "budova2_ruins";
  model = "\ca\buildings\ruins\budova2_ruins.p3d";
 };
 class CUP_A2_budova4_in_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "budova4_in_ruins";
  model = "\ca\buildings\ruins\budova4_in_ruins.p3d";
 };
 class CUP_A2_budova4_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "budova4_ruins";
  model = "\ca\buildings\ruins\budova4_ruins.p3d";
 };
 class CUP_A2_budova5_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "budova5_ruins";
  model = "\ca\buildings\ruins\budova5_ruins.p3d";
 };
 class CUP_A2_bunker_pmc_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "bunker_pmc_ruins";
  model = "\ca\structures_pmc\buildings\bunker\bunker_pmc_ruins.p3d";
 };
 class CUP_A2_cargoruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "cargoruins_ep1";
  model = "\ca\misc_e\misc_cargo1a_ruins_ep1.p3d";
 };
 class CUP_A2_castle_bastion_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_bastion_ruins";
  model = "\ca\structures\castle\a_castle_wall1_corner_ruins.p3d";
 };
 class CUP_A2_castle_bergfrit_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_bergfrit_ruins";
  model = "\ca\structures\castle\a_castle_bergfrit_ruins.p3d";
 };
 class CUP_A2_castle_donjon_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_donjon_ruins";
  model = "\ca\structures\castle\a_castle_donjon_ruins.p3d";
 };
 class CUP_A2_castle_gate_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_gate_ruins";
  model = "\ca\structures\castle\a_castle_gate_ruins.p3d";
 };
 class CUP_A2_castle_stairs_a_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_stairs_a_ruins";
  model = "\ca\structures\castle\a_castle_stairs_a_ruins.p3d";
 };
 class CUP_A2_castle_stairs_a_ruins_old: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_stairs_a_ruins_old";
  model = "\ca\structures\castle\a_castle_stairs_a_ruins_old.p3d";
 };
 class CUP_A2_castle_wall1_20_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall1_20_ruins";
  model = "\ca\structures\castle\a_castle_wall1_20_ruins.p3d";
 };
 class CUP_A2_castle_wall1_20_turn_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall1_20_turn_ruins";
  model = "\ca\structures\castle\a_castle_wall1_20_turn_ruins.p3d";
 };
 class CUP_A2_castle_wall1_corner_2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall1_corner_2_ruins";
  model = "\ca\structures\castle\a_castle_wall1_corner_2_ruins.p3d";
 };
 class CUP_A2_castle_wall1_end_2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall1_end_2_ruins";
  model = "\ca\structures\castle\a_castle_wall1_end_2_ruins.p3d";
 };
 class CUP_A2_castle_wall1_end_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall1_end_ruins";
  model = "\ca\structures\castle\a_castle_wall1_end_ruins.p3d";
 };
 class CUP_A2_castle_wall2_30_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall2_30_ruins";
  model = "\ca\structures\castle\a_castle_wall2_30_ruins.p3d";
 };
 class CUP_A2_castle_wall2_corner_2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall2_corner_2_ruins";
  model = "\ca\structures\castle\a_castle_wall2_corner_2_ruins.p3d";
 };
 class CUP_A2_castle_wall2_corner_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall2_corner_ruins";
  model = "\ca\structures\castle\a_castle_wall2_corner_ruins.p3d";
 };
 class CUP_A2_castle_wall2_end_2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall2_end_2_ruins";
  model = "\ca\structures\castle\a_castle_wall2_end_2_ruins.p3d";
 };
 class CUP_A2_castle_wall2_end_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall2_end_ruins";
  model = "\ca\structures\castle\a_castle_wall2_end_ruins.p3d";
 };
 class CUP_A2_castle_wall5_d_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_wall5_d_ruins";
  model = "\ca\structures\castle\a_castle_walls_5_d_ruins.p3d";
 };
 class CUP_A2_castle_walls_10_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_walls_10_ruins";
  model = "\ca\structures\castle\a_castle_walls_10_ruins.p3d";
 };
 class CUP_A2_castle_walls_end_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "castle_walls_end_ruins";
  model = "\ca\structures\castle\a_castle_walls_end_ruins.p3d";
 };
 class CUP_A2_church_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "church_01_ruins";
  model = "\ca\buildings2\church_01\church_01_ruins.p3d";
 };
 class CUP_A2_church_02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "church_02_ruins";
  model = "\ca\structures\house\church_02\church_02_ruins.p3d";
 };
 class CUP_A2_church_03_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "church_03_ruins";
  model = "\ca\structures\house\church_03\church_03_ruins.p3d";
 };
 class CUP_A2_church_05r: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "church_05r";
  model = "\ca\structures\house\church_05r\church_05r.p3d";
 };
 class CUP_A2_cihlovej_dum_in_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "cihlovej_dum_in_ruins";
  model = "\ca\buildings\ruins\cihlovej_dum_in_ruins.p3d";
 };
 class CUP_A2_cihlovej_dum_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "cihlovej_dum_ruins";
  model = "\ca\buildings\ruins\cihlovej_dum_ruins.p3d";
 };
 class CUP_A2_coltan_conv1_10_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "coltan_conv1_10_ruins_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_conv1_10_ruins_ep1.p3d";
 };
 class CUP_A2_coltan_conv1_main_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "coltan_conv1_main_ruins_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_conv1_main_ruins_ep1.p3d";
 };
 class CUP_A2_coltan_conv2_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "coltan_conv2_ruins_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_conv2_ruins_ep1.p3d";
 };
 class CUP_A2_coltan_hopper_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "coltan_hopper_ruins_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_hopper_ruins_ep1.p3d";
 };
 class CUP_A2_coltan_main_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "coltan_main_ruins_ep1";
  model = "\ca\structures_e\ind\ind_coltan_mine\ind_coltan_main_ruins_ep1.p3d";
 };
 class CUP_A2_com_tower_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "com_tower_ruins_ep1";
  model = "\ca\structures_e\misc\com_tower_ruins_ep1.p3d";
 };
 class CUP_A2_controltower_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "controltower_ruins";
  model = "\ca\structures\mil\mil_controltower_ruins.p3d";
 };
 class CUP_A2_controltower_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "controltower_ruins_ep1";
  model = "\ca\structures_e\mil\mil_controltower_ruins_ep1.p3d";
 };
 class CUP_A2_deutshe_mini_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "deutshe_mini_ruins";
  model = "\ca\buildings\ruins\deutshe_mini_ruins.p3d";
 };
 class CUP_A2_deutshe_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "deutshe_ruins";
  model = "\ca\buildings\ruins\deutshe_ruins.p3d";
 };
 class CUP_A2_domek_rosa_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "domek_rosa_ruins";
  model = "\ca\buildings\ruins\domek_rosa_ruins.p3d";
 };
 class CUP_A2_dulni_bs: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dulni_bs";
  model = "\ca\buildings\dulni_bs.p3d";
 };
 class CUP_A2_dulni_bs_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dulni_bs_ruins";
  model = "\ca\buildings\ruins\dulni_bs_ruins.p3d";
 };
 class CUP_A2_dum_istan3_hromada2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_istan3_hromada2_ruins";
  model = "\ca\buildings\ruins\dum_istan3_hromada2_ruins.p3d";
 };
 class CUP_A2_dum_istan3_pumpa_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_istan3_pumpa_ruins";
  model = "\ca\buildings\ruins\dum_istan3_pumpa_ruins.p3d";
 };
 class CUP_A2_dum_m2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_m2_ruins";
  model = "\ca\buildings\ruins\dum_m2_ruins.p3d";
 };
 class CUP_A2_dum_mesto_in_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_mesto_in_ruins";
  model = "\ca\buildings\ruins\dum_mesto_in_ruins.p3d";
 };
 class CUP_A2_dum_mesto_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_mesto_ruins";
  model = "\ca\buildings\ruins\dum_mesto_ruins.p3d";
 };
 class CUP_A2_dum_mesto2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_mesto2_ruins";
  model = "\ca\buildings\ruins\dum_mesto2_ruins.p3d";
 };
 class CUP_A2_dum_mesto2l_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_mesto2l_ruins";
  model = "\ca\buildings\ruins\dum_mesto2l_ruins.p3d";
 };
 class CUP_A2_dum_mesto3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_mesto3_ruins";
  model = "\ca\buildings\ruins\dum_mesto3_ruins.p3d";
 };
 class CUP_A2_dum_olez_istan1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_olez_istan1_ruins";
  model = "\ca\buildings\ruins\dum_olez_istan1_ruins.p3d";
 };
 class CUP_A2_dum_olez_istan2_maly_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_olez_istan2_maly_ruins";
  model = "\ca\buildings\ruins\dum_olez_istan2_maly_ruins.p3d";
 };
 class CUP_A2_dum_olez_istan2_maly2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_olez_istan2_maly2_ruins";
  model = "\ca\buildings\ruins\dum_olez_istan2_maly2_ruins.p3d";
 };
 class CUP_A2_dum_olez_istan2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_olez_istan2_ruins";
  model = "\ca\buildings\ruins\dum_olez_istan2_ruins.p3d";
 };
 class CUP_A2_dum_olezlina_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_olezlina_ruins";
  model = "\ca\buildings\ruins\dum_olezlina_ruins.p3d";
 };
 class CUP_A2_dum_rasovna_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_rasovna_ruins";
  model = "\ca\buildings\ruins\dum_rasovna_ruins.p3d";
 };
 class CUP_A2_dum_zboreny: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_zboreny";
  model = "\ca\buildings\dum_zboreny.p3d";
 };
 class CUP_A2_dum_zboreny_lidice: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_zboreny_lidice";
  model = "\ca\buildings\dum_zboreny_lidice.p3d";
 };
 class CUP_A2_dum_zboreny_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_zboreny_ruins";
  model = "\ca\buildings\ruins\dum_zboreny_ruins.p3d";
 };
 class CUP_A2_dum_zboreny_total: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_zboreny_total";
  model = "\ca\buildings\dum_zboreny_total.p3d";
 };
 class CUP_A2_dum_zboreny_total_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum_zboreny_total_ruins";
  model = "\ca\buildings\ruins\dum_zboreny_total_ruins.p3d";
 };
 class CUP_A2_dum01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dum01_ruins";
  model = "\ca\buildings\ruins\dum01_ruins.p3d";
 };
 class CUP_A2_dumruina_mini_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "dumruina_mini_ruins";
  model = "\ca\buildings\ruins\dumruina_mini_ruins.p3d";
 };
 class CUP_A2_farm_cowshed_a_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "farm_cowshed_a_ruins";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_a_ruins.p3d";
 };
 class CUP_A2_farm_cowshed_b_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "farm_cowshed_b_ruins";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_b_ruins.p3d";
 };
 class CUP_A2_farm_cowshed_c_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "farm_cowshed_c_ruins";
  model = "\ca\buildings2\farm_cowshed\farm_cowshed_c_ruins.p3d";
 };
 class CUP_A2_farm_wtower_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "farm_wtower_ruins";
  model = "\ca\buildings2\farm_wtower\farm_wtower_ruins.p3d";
 };
 class CUP_A2_fort_barricade: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "fort_barricade";
  model = "\ca\misc\fort_barricade.p3d";
 };
 class CUP_A2_fuelstation_build_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "fuelstation_build_ruins_ep1";
  model = "\ca\structures_e\ind\ind_fuelstation\ind_fuelstation_build_ruins_ep1.p3d";
 };
 class CUP_A2_fuelstation_shed_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "fuelstation_shed_ruins_ep1";
  model = "\ca\structures_e\ind\ind_fuelstation\ind_fuelstation_shed_ruins_ep1.p3d";
 };
 class CUP_A2_garage01_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garage01_ruins_ep1";
  model = "\ca\structures_e\ind\ind_garage01\ind_garage01_ruins_ep1.p3d";
 };
 class CUP_A2_garaz_mala_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garaz_mala_ruins";
  model = "\ca\buildings\ruins\garaz_mala_ruins.p3d";
 };
 class CUP_A2_garaz_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garaz_ruins";
  model = "\ca\buildings\ruins\garaz_ruins.p3d";
 };
 class CUP_A2_garb_3_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_3_ep1";
  model = "\ca\structures_e\misc\misc_garbage\misc_garb_3_ep1.p3d";
 };
 class CUP_A2_garb_4_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_4_ep1";
  model = "\ca\structures_e\misc\misc_garbage\misc_garb_4_ep1.p3d";
 };
 class CUP_A2_garb_grondsquare5_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_grondsquare5_pmc";
  model = "\ca\structures_pmc\misc\garbage\garb_grondsquare5_pmc.p3d";
 };
 class CUP_A2_garb_groundlong_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_groundlong_pmc";
  model = "\ca\structures_pmc\misc\garbage\garb_groundlong_pmc.p3d";
 };
 class CUP_A2_garb_groundsquare3_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_groundsquare3_pmc";
  model = "\ca\structures_pmc\misc\garbage\garb_groundsquare3_pmc.p3d";
 };
 class CUP_A2_garb_heap_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_heap_ep1";
  model = "\ca\structures_e\misc\misc_garbage\misc_garb_heap_ep1.p3d";
 };
 class CUP_A2_garb_heap_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_heap_pmc";
  model = "\ca\structures_pmc\misc\garbage\garb_heap_pmc.p3d";
 };
 class CUP_A2_garb_junkpile_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_junkpile_pmc";
  model = "\ca\structures_pmc\misc\garbage\garb_junkpile_pmc.p3d";
 };
 class CUP_A2_garb_misc_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_misc_pmc";
  model = "\ca\structures_pmc\misc\garbage\garb_misc_pmc.p3d";
 };
 class CUP_A2_garb_paleta_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_paleta_pmc";
  model = "\ca\structures_pmc\misc\garbage\garb_paleta_pmc.p3d";
 };
 class CUP_A2_garb_square_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garb_square_ep1";
  model = "\ca\structures_e\misc\misc_garbage\misc_garb_square_ep1.p3d";
 };
 class CUP_A2_garbage_long: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garbage_long";
  model = "\ca\misc\ground_garbage_long.p3d";
 };
 class CUP_A2_garbage_misc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garbage_misc";
  model = "\ca\misc\garbage_misc.p3d";
 };
 class CUP_A2_garbage_paleta: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garbage_paleta";
  model = "\ca\misc\garbage_paleta.p3d";
 };
 class CUP_A2_garbage_square3: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garbage_square3";
  model = "\ca\misc\ground_garbage_square3.p3d";
 };
 class CUP_A2_garbage_square5: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "garbage_square5";
  model = "\ca\misc\ground_garbage_square5.p3d";
 };
 class CUP_A2_generalstore_01a_ruins_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "generalstore_01a_ruins_pmc";
  model = "\ca\structures_pmc\buildings\generalstore\generalstore_01a_ruins_pmc.p3d";
 };
 class CUP_A2_glass_cullet_01: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "glass_cullet_01";
  model = "\ca\structures\ruins\glass_cullet_01.p3d";
 };
 class CUP_A2_guardhouse_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "guardhouse_ruins_ep1";
  model = "\ca\structures_e\mil\mil_guardhouse_ruins_ep1.p3d";
 };
 class CUP_A2_hangar_2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hangar_2_ruins";
  model = "\ca\buildings\ruins\hangar_2_ruins.p3d";
 };
 class CUP_A2_hangar_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hangar_ruins_ep1";
  model = "\ca\structures_e\mil\mil_hangar_ruins_ep1.p3d";
 };
 class CUP_A2_hlidac_budka_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hlidac_budka_ruins";
  model = "\ca\buildings\ruins\hlidac_budka_ruins.p3d";
 };
 class CUP_A2_hopper_old_ruins_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hopper_old_ruins_pmc";
  model = "\ca\structures_pmc\ind\hopper_old_ruins_pmc.p3d";
 };
 class CUP_A2_hospital_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hospital_ruins";
  model = "\ca\buildings\ruins\hospital_ruins.p3d";
 };
 class CUP_A2_house_c_1_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_1_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_1_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_1_v2_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_1_v2_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_1_v2_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_10_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_10_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_10_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_11_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_11_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_11_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_12_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_12_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_12_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_2_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_2_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_2_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_3_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_3_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_3_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_4_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_4_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_4_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_5_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_5_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_5_ruins_ep1.p3d";
 };
 class CUP_A2_house_c_9_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_c_9_ruins_ep1";
  model = "\ca\structures_e\housec\house_c_9_ruins_ep1.p3d";
 };
 class CUP_A2_house_k_1_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_k_1_ruins_ep1";
  model = "\ca\structures_e\housek\house_k_1_ruins_ep1.p3d";
 };
 class CUP_A2_house_k_3_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_k_3_ruins_ep1";
  model = "\ca\structures_e\housek\house_k_3_ruins_ep1.p3d";
 };
 class CUP_A2_house_k_5_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_k_5_ruins_ep1";
  model = "\ca\structures_e\housek\house_k_5_ruins_ep1.p3d";
 };
 class CUP_A2_house_k_6_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_k_6_ruins_ep1";
  model = "\ca\structures_e\housek\house_k_6_ruins_ep1.p3d";
 };
 class CUP_A2_house_k_7_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_k_7_ruins_ep1";
  model = "\ca\structures_e\housek\house_k_7_ruins_ep1.p3d";
 };
 class CUP_A2_house_k_8_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_k_8_ruins_ep1";
  model = "\ca\structures_e\housek\house_k_8_ruins_ep1.p3d";
 };
 class CUP_A2_house_l_1_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_l_1_ruins_ep1";
  model = "\ca\structures_e\housel\house_l_1_ruins_ep1.p3d";
 };
 class CUP_A2_house_l_3_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_l_3_ruins_ep1";
  model = "\ca\structures_e\housel\house_l_3_ruins_ep1.p3d";
 };
 class CUP_A2_house_l_4_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_l_4_ruins_ep1";
  model = "\ca\structures_e\housel\house_l_4_ruins_ep1.p3d";
 };
 class CUP_A2_house_l_6_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_l_6_ruins_ep1";
  model = "\ca\structures_e\housel\house_l_6_ruins_ep1.p3d";
 };
 class CUP_A2_house_l_7_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_l_7_ruins_ep1";
  model = "\ca\structures_e\housel\house_l_7_ruins_ep1.p3d";
 };
 class CUP_A2_house_l_8_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_l_8_ruins_ep1";
  model = "\ca\structures_e\housel\house_l_8_ruins_ep1.p3d";
 };
 class CUP_A2_house_l_9_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_l_9_ruins_ep1";
  model = "\ca\structures_e\housel\house_l_9_ruins_ep1.p3d";
 };
 class CUP_A2_house_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "house_ruins_ep1";
  model = "\ca\structures_e\mil\mil_house_ruins_ep1.p3d";
 };
 class CUP_A2_houseb_tenement_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseb_tenement_ruins";
  model = "\ca\structures\house\housebt\houseb_tenement_ruins.p3d";
 };
 class CUP_A2_houseblock_a1_1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_a1_1_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a1_1_ruins.p3d";
 };
 class CUP_A2_houseblock_a1_half_ruin: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_a1_half_ruin";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a1_half_ruin.p3d";
 };
 class CUP_A2_houseblock_a1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_a1_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a1_ruins.p3d";
 };
 class CUP_A2_houseblock_a2_1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_a2_1_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a2_1_ruins.p3d";
 };
 class CUP_A2_houseblock_a2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_a2_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a2_ruins.p3d";
 };
 class CUP_A2_houseblock_a3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_a3_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_a\houseblock_a3_ruins.p3d";
 };
 class CUP_A2_houseblock_b1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_b1_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b1_ruins.p3d";
 };
 class CUP_A2_houseblock_b2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_b2_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b2_ruins.p3d";
 };
 class CUP_A2_houseblock_b3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_b3_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b3_ruins.p3d";
 };
 class CUP_A2_houseblock_b4_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_b4_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b4_ruins.p3d";
 };
 class CUP_A2_houseblock_b5_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_b5_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b5_ruins.p3d";
 };
 class CUP_A2_houseblock_b6_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_b6_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_b\houseblock_b6_ruins.p3d";
 };
 class CUP_A2_houseblock_c1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_c1_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c1_ruins.p3d";
 };
 class CUP_A2_houseblock_c2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_c2_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c2_ruins.p3d";
 };
 class CUP_A2_houseblock_c3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_c3_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c3_ruins.p3d";
 };
 class CUP_A2_houseblock_c4_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_c4_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c4_ruins.p3d";
 };
 class CUP_A2_houseblock_c5_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_c5_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_c\houseblock_c5_ruins.p3d";
 };
 class CUP_A2_houseblock_d1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_d1_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_d\houseblock_d1_ruins.p3d";
 };
 class CUP_A2_houseblock_d2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "houseblock_d2_ruins";
  model = "\ca\buildings2\houseblocks\houseblock_d\houseblock_d2_ruins.p3d";
 };
 class CUP_A2_housev_1i1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_1i1_ruins";
  model = "\ca\structures\house\housev\housev_1i1_ruins.p3d";
 };
 class CUP_A2_housev_1i2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_1i2_ruins";
  model = "\ca\structures\house\housev\housev_1i2_ruins.p3d";
 };
 class CUP_A2_housev_1i3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_1i3_ruins";
  model = "\ca\structures\house\housev\housev_1i3_ruins.p3d";
 };
 class CUP_A2_housev_1i4_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_1i4_ruins";
  model = "\ca\structures\house\housev\housev_1i4_ruins.p3d";
 };
 class CUP_A2_housev_1l1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_1l1_ruins";
  model = "\ca\structures\house\housev\housev_1l1_ruins.p3d";
 };
 class CUP_A2_housev_1l2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_1l2_ruins";
  model = "\ca\structures\house\housev\housev_1l2_ruins.p3d";
 };
 class CUP_A2_housev_1t_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_1t_ruins";
  model = "\ca\structures\house\housev\housev_1t_ruins.p3d";
 };
 class CUP_A2_housev_2i_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_2i_ruins";
  model = "\ca\structures\house\housev\housev_2i_ruins.p3d";
 };
 class CUP_A2_housev_2l_dam_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_2l_dam_ruins";
  model = "\ca\structures\house\housev\housev_2l_dam_ruins.p3d";
 };
 class CUP_A2_housev_2l_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_2l_ruins";
  model = "\ca\structures\house\housev\housev_2l_ruins.p3d";
 };
 class CUP_A2_housev_2t1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_2t1_ruins";
  model = "\ca\structures\house\housev\housev_2t1_ruins.p3d";
 };
 class CUP_A2_housev_2t2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_2t2_ruins";
  model = "\ca\structures\house\housev\housev_2t2_ruins.p3d";
 };
 class CUP_A2_housev_3i1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_3i1_ruins";
  model = "\ca\structures\house\housev\housev_3i1_ruins.p3d";
 };
 class CUP_A2_housev_3i2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_3i2_ruins";
  model = "\ca\structures\house\housev\housev_3i2_ruins.p3d";
 };
 class CUP_A2_housev_3i3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_3i3_ruins";
  model = "\ca\structures\house\housev\housev_3i3_ruins.p3d";
 };
 class CUP_A2_housev_3i4_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev_3i4_ruins";
  model = "\ca\structures\house\housev\housev_3i4_ruins.p3d";
 };
 class CUP_A2_housev2_01a_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev2_01a_ruins";
  model = "\ca\structures\house\housev2\housev2_01a_ruins.p3d";
 };
 class CUP_A2_housev2_01b_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev2_01b_ruins";
  model = "\ca\structures\house\housev2\housev2_01b_ruins.p3d";
 };
 class CUP_A2_housev2_02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev2_02_ruins";
  model = "\ca\structures\house\housev2\housev2_02_ruins.p3d";
 };
 class CUP_A2_housev2_03_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev2_03_ruins";
  model = "\ca\structures\house\housev2\housev2_03_ruins.p3d";
 };
 class CUP_A2_housev2_03b_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev2_03b_ruins";
  model = "\ca\structures\house\housev2\housev2_03b_ruins.p3d";
 };
 class CUP_A2_housev2_04_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev2_04_ruins";
  model = "\ca\structures\house\housev2\housev2_04_ruins.p3d";
 };
 class CUP_A2_housev2_05_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "housev2_05_ruins";
  model = "\ca\structures\house\housev2\housev2_05_ruins.p3d";
 };
 class CUP_A2_hruzdum_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hruzdum_ruins";
  model = "\ca\buildings\ruins\hruzdum_ruins.p3d";
 };
 class CUP_A2_hut_old02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hut_old02_ruins";
  model = "\ca\buildings\ruins\hut_old02_ruins.p3d";
 };
 class CUP_A2_hut06_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "hut06_ruins";
  model = "\ca\buildings\ruins\hut06_ruins.p3d";
 };
 class CUP_A2_ind_expedice_1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_expedice_1_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_expedice\ind_expedice_1_ruins.p3d";
 };
 class CUP_A2_ind_expedice_2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_expedice_2_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_expedice\ind_expedice_2_ruins.p3d";
 };
 class CUP_A2_ind_expedice_3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_expedice_3_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_expedice\ind_expedice_3_ruins.p3d";
 };
 class CUP_A2_ind_garage01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_garage01_ruins";
  model = "\ca\buildings2\ind_garage01\ind_garage01_ruins.p3d";
 };
 class CUP_A2_ind_indpipe2_smalll_r: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_indpipe2_smalll_r";
  model = "\ca\buildings2\ind_pipe\indpipe2\indpipe2_smalll_r.p3d";
 };
 class CUP_A2_ind_insilovelke_02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_insilovelke_02_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_silovelke\ind_silovelke_02_ruins.p3d";
 };
 class CUP_A2_ind_malykomin_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_malykomin_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_malykomin\ind_malykomin_ruins.p3d";
 };
 class CUP_A2_ind_mlyn_02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_mlyn_02_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_02_ruins.p3d";
 };
 class CUP_A2_ind_mlyn_03_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_mlyn_03_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_03_ruins.p3d";
 };
 class CUP_A2_ind_mlyn_04_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_mlyn_04_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_04_ruins.p3d";
 };
 class CUP_A2_ind_nd_mlyn_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_nd_mlyn_01_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_mlyn\ind_mlyn_01_ruins.p3d";
 };
 class CUP_A2_ind_pec_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_pec_01_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_01_ruins.p3d";
 };
 class CUP_A2_ind_pec_02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_pec_02_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_02_ruins.p3d";
 };
 class CUP_A2_ind_pec_03_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_pec_03_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_pec\ind_pec_03_ruins.p3d";
 };
 class CUP_A2_ind_shed_01_end_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_shed_01_end_ruins";
  model = "\ca\buildings2\ind_shed_01\ind_shed_01_end_ruins.p3d";
 };
 class CUP_A2_ind_shed_01_main_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_shed_01_main_ruins";
  model = "\ca\buildings2\ind_shed_01\ind_shed_01_main_ruins.p3d";
 };
 class CUP_A2_ind_shed_02_main_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_shed_02_main_ruins";
  model = "\ca\buildings2\ind_shed_02\ind_shed_02_main_ruins.p3d";
 };
 class CUP_A2_ind_silomale_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_silomale_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_silomale\ind_silomale_ruins.p3d";
 };
 class CUP_A2_ind_silovelke_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_silovelke_01_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_silovelke\ind_silovelke_01_ruins.p3d";
 };
 class CUP_A2_ind_tankbig_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_tankbig_ruins";
  model = "\ca\buildings2\ind_tank\ind_tankbig_ruins.p3d";
 };
 class CUP_A2_ind_tanksmall_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_tanksmall_ruins";
  model = "\ca\buildings2\ind_tank\ind_tanksmall_ruins.p3d";
 };
 class CUP_A2_ind_vysypka_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_vysypka_ruins";
  model = "\ca\buildings2\ind_cementworks\ind_vysypka\ind_vysypka_ruins.p3d";
 };
 class CUP_A2_ind_workshop01_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_workshop01_01_ruins";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_01_ruins.p3d";
 };
 class CUP_A2_ind_workshop01_02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_workshop01_02_ruins";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_02_ruins.p3d";
 };
 class CUP_A2_ind_workshop01_03_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_workshop01_03_ruins";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_03_ruins.p3d";
 };
 class CUP_A2_ind_workshop01_04_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_workshop01_04_ruins";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_04_ruins.p3d";
 };
 class CUP_A2_ind_workshop01_box_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_workshop01_box_ruins";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_box_ruins.p3d";
 };
 class CUP_A2_ind_workshop01_l_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ind_workshop01_l_ruins";
  model = "\ca\buildings2\ind_workshop01\ind_workshop01_l_ruins.p3d";
 };
 class CUP_A2_junkpile: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "junkpile";
  model = "\ca\misc\junkpile.p3d";
 };
 class CUP_A2_komin_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "komin_ruins";
  model = "\ca\buildings\ruins\komin_ruins.p3d";
 };
 class CUP_A2_kopa_1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kopa_1";
  model = "\ca\buildings\kopa_1.p3d";
 };
 class CUP_A2_kopa_2: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kopa_2";
  model = "\ca\buildings\kopa_2.p3d";
 };
 class CUP_A2_kopa_3: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kopa_3";
  model = "\ca\buildings\kopa_3.p3d";
 };
 class CUP_A2_kopa_4r: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kopa_4r";
  model = "\ca\buildings\kopa_4r.p3d";
 };
 class CUP_A2_kostel_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kostel_ruins";
  model = "\ca\buildings\ruins\kostel_ruins.p3d";
 };
 class CUP_A2_kostel_trosky: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kostel_trosky";
  model = "\ca\buildings\kostel_trosky.p3d";
 };
 class CUP_A2_kostel_trosky_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kostel_trosky_ruins";
  model = "\ca\buildings\ruins\kostel_trosky_ruins.p3d";
 };
 class CUP_A2_kostel3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "kostel3_ruins";
  model = "\ca\buildings\ruins\kostel3_ruins.p3d";
 };
 class CUP_A2_l3_5m_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "l3_5m_ruins_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l3_5m_ruins_ep1.p3d";
 };
 class CUP_A2_l3_pillar_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "l3_pillar_ruins_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l3_pillar_ruins_ep1.p3d";
 };
 class CUP_A2_leseni2x_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "leseni2x_ruins";
  model = "\ca\buildings\ruins\leseni2x_ruins.p3d";
 };
 class CUP_A2_leseni4x_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "leseni4x_ruins";
  model = "\ca\buildings\ruins\leseni4x_ruins.p3d";
 };
 class CUP_A2_lighthouse_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "lighthouse_ruins";
  model = "\ca\structures\nav\nav_lighthouse_ruins.p3d";
 };
 class CUP_A2_majak_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "majak_ruins";
  model = "\ca\buildings\ruins\majak_ruins.p3d";
 };
 class CUP_A2_milhouse_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "milhouse_ruins";
  model = "\ca\structures\mil\mil_house_ruins.p3d";
 };
 class CUP_A2_minaret_porto_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "minaret_porto_ruins_ep1";
  model = "\ca\structures_e\housea\a_minaret_porto\a_minaret_porto_ruins_ep1.p3d";
 };
 class CUP_A2_minaret_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "minaret_ruins_ep1";
  model = "\ca\structures_e\housea\a_minaret\a_minaret_ruins_ep1.p3d";
 };
 class CUP_A2_misc_powerstation_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "misc_powerstation_ruins";
  model = "\ca\buildings2\misc_powerstation\misc_powerstation_ruins.p3d";
 };
 class CUP_A2_misc_waterstation_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "misc_waterstation_ruins";
  model = "\ca\buildings2\misc_waterstation\misc_waterstation_ruins.p3d";
 };
 class CUP_A2_mosque_1_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_1_ruins_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_mosque_1_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_2_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_2_ruins_ep1";
  model = "\ca\structures_e\wall\wall_l\wall_l_mosque_2_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_big_addon_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_big_addon_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_addon_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_big_hq_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_big_hq_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_hq_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_big_minaret_1_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_big_minaret_1_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_minaret_1_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_big_minaret_2_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_big_minaret_2_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_minaret_2_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_big_wall_corner_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_big_wall_corner_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_wall_corner_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_big_wall_gate_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_big_wall_gate_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_wall_gate_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_big_wall_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_big_wall_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_big\a_mosque_big_wall_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_small_1_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_small_1_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_small\a_mosque_small_1_ruins_ep1.p3d";
 };
 class CUP_A2_mosque_small_2_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "mosque_small_2_ruins_ep1";
  model = "\ca\structures_e\housea\a_mosque_small\a_mosque_small_2_ruins_ep1.p3d";
 };
 class CUP_A2_nasypka_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "nasypka_ruins";
  model = "\ca\buildings\ruins\nasypka_ruins.p3d";
 };
 class CUP_A2_nav_boathouse_pier_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "nav_boathouse_pier_ruins";
  model = "\ca\structures\nav_boathouse\nav_boathouse_pier_ruins.p3d";
 };
 class CUP_A2_nav_boathouse_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "nav_boathouse_ruins";
  model = "\ca\structures\nav_boathouse\nav_boathouse_ruins.p3d";
 };
 class CUP_A2_oil_pump_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "oil_pump_ruins_ep1";
  model = "\ca\structures_e\ind\ind_oil_mine\ind_oil_pump_ruins_ep1.p3d";
 };
 class CUP_A2_oil_tower_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "oil_tower_ruins_ep1";
  model = "\ca\structures_e\ind\ind_oil_mine\ind_oil_tower_ruins_ep1.p3d";
 };
 class CUP_A2_panelak_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "panelak_ruins";
  model = "\ca\buildings\ruins\panelak_ruins.p3d";
 };
 class CUP_A2_panelak2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "panelak2_ruins";
  model = "\ca\buildings\ruins\panelak2_ruins.p3d";
 };
 class CUP_A2_panelak3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "panelak3_ruins";
  model = "\ca\buildings\ruins\panelak3_ruins.p3d";
 };
 class CUP_A2_powerstation_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "powerstation_ruins_ep1";
  model = "\ca\structures_e\ind\ind_powerstation\ind_powerstation_ruins_ep1.p3d";
 };
 class CUP_A2_quarry_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "quarry_ruins";
  model = "\ca\structures\ind_quarry\ind_quarry_ruins.p3d";
 };
 class CUP_A2_r_a_generalstore_01a: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_a_generalstore_01a";
  model = "\ca\buildings2\houseruins\r_a_generalstore_01a.p3d";
 };
 class CUP_A2_r_barn_metal: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_barn_metal";
  model = "\ca\buildings2\houseruins\r_barn_metal.p3d";
 };
 class CUP_A2_r_barn_w_01: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_barn_w_01";
  model = "\ca\buildings2\houseruins\r_barn_w_01.p3d";
 };
 class CUP_A2_r_farm_cowshed_a: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_farm_cowshed_a";
  model = "\ca\buildings2\houseruins\r_farm_cowshed_a.p3d";
 };
 class CUP_A2_r_housev_1i1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_housev_1i1";
  model = "\ca\buildings2\houseruins\r_housev_1i1.p3d";
 };
 class CUP_A2_r_housev_2l: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_housev_2l";
  model = "\ca\buildings2\houseruins\r_housev_2l.p3d";
 };
 class CUP_A2_r_housev2_01a: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_housev2_01a";
  model = "\ca\buildings2\houseruins\r_housev2_01a.p3d";
 };
 class CUP_A2_r_housev2_02: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_housev2_02";
  model = "\ca\buildings2\houseruins\r_housev2_02.p3d";
 };
 class CUP_A2_r_housev2_03b: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_housev2_03b";
  model = "\ca\buildings2\houseruins\r_housev2_03b.p3d";
 };
 class CUP_A2_r_housev2_04: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_housev2_04";
  model = "\ca\buildings2\houseruins\r_housev2_04.p3d";
 };
 class CUP_A2_r_shed_ind02: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "r_shed_ind02";
  model = "\ca\buildings2\houseruins\r_shed_ind02.p3d";
 };
 class CUP_A2_rail_house_01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rail_house_01_ruins";
  model = "\ca\buildings2\rail_house_01\rail_house_01_ruins.p3d";
 };
 class CUP_A2_rail_station_big_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rail_station_big_ruins";
  model = "\ca\structures\rail\rail_station_big\rail_station_big_ruins.p3d";
 };
 class CUP_A2_repair_center_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "repair_center_ruins";
  model = "\ca\buildings\ruins\repair_center_ruins.p3d";
 };
 class CUP_A2_repair_center_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "repair_center_ruins_ep1";
  model = "\ca\structures_e\mil\mil_repair_center_ruins_ep1.p3d";
 };
 class CUP_A2_rubble_bricks_01: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_bricks_01";
  model = "\ca\structures\ruins\rubble_bricks_01.p3d";
 };
 class CUP_A2_rubble_bricks_02: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_bricks_02";
  model = "\ca\structures\ruins\rubble_bricks_02.p3d";
 };
 class CUP_A2_rubble_bricks_03: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_bricks_03";
  model = "\ca\structures\ruins\rubble_bricks_03.p3d";
 };
 class CUP_A2_rubble_bricks_04: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_bricks_04";
  model = "\ca\structures\ruins\rubble_bricks_04.p3d";
 };
 class CUP_A2_rubble_concrete_01_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_concrete_01_pmc";
  model = "\ca\structures_pmc\buildings\ruins\rubble_concrete_01_pmc.p3d";
 };
 class CUP_A2_rubble_concrete_02: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_concrete_02";
  model = "\ca\structures\ruins\rubble_concrete_02.p3d";
 };
 class CUP_A2_rubble_concrete_02_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_concrete_02_pmc";
  model = "\ca\structures_pmc\buildings\ruins\rubble_concrete_02_pmc.p3d";
 };
 class CUP_A2_rubble_concrete_03: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_concrete_03";
  model = "\ca\structures\ruins\rubble_concrete_03.p3d";
 };
 class CUP_A2_rubble_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_ep1";
  model = "\ca\structures_e\misc\misc_construction\misc_rubble_ep1.p3d";
 };
 class CUP_A2_rubble_metal_plates_01: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_metal_plates_01";
  model = "\ca\structures\ruins\rubble_metal_plates_01.p3d";
 };
 class CUP_A2_rubble_metal_plates_02: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_metal_plates_02";
  model = "\ca\structures\ruins\rubble_metal_plates_02.p3d";
 };
 class CUP_A2_rubble_metal_plates_03: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_metal_plates_03";
  model = "\ca\structures\ruins\rubble_metal_plates_03.p3d";
 };
 class CUP_A2_rubble_metal_plates_04: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_metal_plates_04";
  model = "\ca\structures\ruins\rubble_metal_plates_04.p3d";
 };
 class CUP_A2_rubble_rocks_01: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_rocks_01";
  model = "\ca\structures\ruins\rubble_rocks_01.p3d";
 };
 class CUP_A2_rubble_rocks_02: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_rocks_02";
  model = "\ca\structures\ruins\rubble_rocks_02.p3d";
 };
 class CUP_A2_rubble_rocks_03: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_rocks_03";
  model = "\ca\structures\ruins\rubble_rocks_03.p3d";
 };
 class CUP_A2_rubble_wood_01: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_wood_01";
  model = "\ca\structures\ruins\rubble_wood_01.p3d";
 };
 class CUP_A2_rubble_wood_02: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_wood_02";
  model = "\ca\structures\ruins\rubble_wood_02.p3d";
 };
 class CUP_A2_rubble_wood_03: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_wood_03";
  model = "\ca\structures\ruins\rubble_wood_03.p3d";
 };
 class CUP_A2_rubble_wood_girder: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "rubble_wood_girder";
  model = "\ca\structures\ruins\rubble_wood_girder.p3d";
 };
 class CUP_A2_ruin_01: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_01";
  model = "\ca\structures\ruins\ruin_01.p3d";
 };
 class CUP_A2_ruin_01_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_01_pmc";
  model = "\ca\structures_pmc\ruins\ruin_01_pmc.p3d";
 };
 class CUP_A2_ruin_chimney: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_chimney";
  model = "\ca\structures\ruins\ruin_chimney.p3d";
 };
 class CUP_A2_ruin_chimney_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_chimney_pmc";
  model = "\ca\structures_pmc\ruins\ruin_chimney_pmc.p3d";
 };
 class CUP_A2_ruin_cowshed_a_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_cowshed_a_pmc";
  model = "\ca\structures_pmc\buildings\ruins\farm_cowshed\ruin_cowshed_a_pmc.p3d";
 };
 class CUP_A2_ruin_cowshed_a_ruins_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_cowshed_a_ruins_pmc";
  model = "\ca\structures_pmc\buildings\ruins\farm_cowshed\ruin_cowshed_a_ruins_pmc.p3d";
 };
 class CUP_A2_ruin_cowshed_b_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_cowshed_b_pmc";
  model = "\ca\structures_pmc\buildings\ruins\farm_cowshed\ruin_cowshed_b_pmc.p3d";
 };
 class CUP_A2_ruin_cowshed_b_ruins_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_cowshed_b_ruins_pmc";
  model = "\ca\structures_pmc\buildings\ruins\farm_cowshed\ruin_cowshed_b_ruins_pmc.p3d";
 };
 class CUP_A2_ruin_cowshed_c_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_cowshed_c_pmc";
  model = "\ca\structures_pmc\buildings\ruins\farm_cowshed\ruin_cowshed_c_pmc.p3d";
 };
 class CUP_A2_ruin_cowshed_c_ruins_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_cowshed_c_ruins_pmc";
  model = "\ca\structures_pmc\buildings\ruins\farm_cowshed\ruin_cowshed_c_ruins_pmc.p3d";
 };
 class CUP_A2_ruin_rubble: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_rubble";
  model = "\ca\structures\ruins\ruin_rubble.p3d";
 };
 class CUP_A2_ruin_rubble_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ruin_rubble_pmc";
  model = "\ca\structures_pmc\ruins\ruin_rubble_pmc.p3d";
 };
 class CUP_A2_sara_domek_hospoda_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_domek_hospoda_ruins";
  model = "\ca\buildings\ruins\sara_domek_hospoda_ruins.p3d";
 };
 class CUP_A2_sara_domek_kovarna_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_domek_kovarna_ruins";
  model = "\ca\buildings\ruins\sara_domek_kovarna_ruins.p3d";
 };
 class CUP_A2_sara_domek_podhradi_1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_domek_podhradi_1_ruins";
  model = "\ca\buildings\ruins\sara_domek_podhradi_1_ruins.p3d";
 };
 class CUP_A2_sara_domek_ruina_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_domek_ruina_ruins";
  model = "\ca\buildings\ruins\sara_domek_ruina_ruins.p3d";
 };
 class CUP_A2_sara_domek_sedy_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_domek_sedy_ruins";
  model = "\ca\buildings\ruins\sara_domek_sedy_ruins.p3d";
 };
 class CUP_A2_sara_domek_vilka_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_domek_vilka_ruins";
  model = "\ca\buildings\ruins\sara_domek_vilka_ruins.p3d";
 };
 class CUP_A2_sara_domek_zluty_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_domek_zluty_ruins";
  model = "\ca\buildings\ruins\sara_domek_zluty_ruins.p3d";
 };
 class CUP_A2_sara_hasic_zbroj_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_hasic_zbroj_ruins";
  model = "\ca\buildings\ruins\sara_hasic_zbroj_ruins.p3d";
 };
 class CUP_A2_sara_stodola_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_stodola_ruins";
  model = "\ca\buildings\ruins\sara_stodola_ruins.p3d";
 };
 class CUP_A2_sara_stodola3_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sara_stodola3_ruins";
  model = "\ca\buildings\ruins\sara_stodola3_ruins.p3d";
 };
 class CUP_A2_sawmill_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "sawmill_ruins";
  model = "\ca\structures\ind_sawmill\ind_sawmill_ruins.p3d";
 };
 class CUP_A2_shed_01_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_01_ruins_ep1";
  model = "\ca\structures_e\ind\ind_shed\ind_shed_01_ruins_ep1.p3d";
 };
 class CUP_A2_shed_02_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_02_ruins_ep1";
  model = "\ca\structures_e\ind\ind_shed\ind_shed_02_ruins_ep1.p3d";
 };
 class CUP_A2_shed_ind02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_ind02_ruins";
  model = "\ca\structures\shed_ind\shed_ind02_ruins.p3d";
 };
 class CUP_A2_shed_m01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_m01_ruins";
  model = "\ca\buildings2\shed_small\shed_m01_ruins.p3d";
 };
 class CUP_A2_shed_m01_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_m01_ruins_ep1";
  model = "\ca\structures_e\misc\shed_m01_ruins_ep1.p3d";
 };
 class CUP_A2_shed_m02_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_m02_ruins";
  model = "\ca\buildings2\shed_small\shed_m02_ruins.p3d";
 };
 class CUP_A2_shed_m03_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_m03_ruins";
  model = "\ca\buildings2\shed_small\shed_m03_ruins.p3d";
 };
 class CUP_A2_shed_m03_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_m03_ruins_ep1";
  model = "\ca\structures_e\misc\shed_m03_ruins_ep1.p3d";
 };
 class CUP_A2_shed_w01_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_w01_ruins";
  model = "\ca\buildings2\shed_small\shed_w01_ruins.p3d";
 };
 class CUP_A2_shed_w02_ruins_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_w02_ruins_pmc";
  model = "\ca\structures_pmc\misc\shed\shed_w02_ruins_pmc.p3d";
 };
 class CUP_A2_shed_w03_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_w03_ruins";
  model = "\ca\buildings2\shed_small\shed_w03_ruins.p3d";
 };
 class CUP_A2_shed_w03_ruins_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_w03_ruins_ep1";
  model = "\ca\structures_e\misc\shed_w03_ruins_ep1.p3d";
 };
 class CUP_A2_shed_w03_ruins_pmc: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_w03_ruins_pmc";
  model = "\ca\structures_pmc\misc\shed\shed_w03_ruins_pmc.p3d";
 };
 class CUP_A2_shed_w4_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_w4_ruins";
  model = "\ca\structures\shed\shed_small\shed_w4_ruins.p3d";
 };
 class CUP_A2_shed_wooden_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "shed_wooden_ruins";
  model = "\ca\buildings2\shed_wooden\shed_wooden_ruins.p3d";
 };
 class CUP_A2_ss_hangar_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "ss_hangar_ruins";
  model = "\ca\buildings\ruins\ss_hangar_ruins.p3d";
 };
 class CUP_A2_stack_big_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "stack_big_ruins";
  model = "\ca\structures\ind\ind_stack_big_ruins.p3d";
 };
 class CUP_A2_stanice_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "stanice_ruins";
  model = "\ca\buildings\ruins\stanice_ruins.p3d";
 };
 class CUP_A2_statek_brana_open_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "statek_brana_open_ruins";
  model = "\ca\buildings\ruins\statek_brana_open_ruins.p3d";
 };
 class CUP_A2_statek_brana_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "statek_brana_ruins";
  model = "\ca\buildings\ruins\statek_brana_ruins.p3d";
 };
 class CUP_A2_statek_hl_bud_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "statek_hl_bud_ruins";
  model = "\ca\buildings\ruins\statek_hl_bud_ruins.p3d";
 };
 class CUP_A2_statek_kulna_old_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "statek_kulna_old_ruins";
  model = "\ca\buildings\ruins\statek_kulna_old_ruins.p3d";
 };
 class CUP_A2_statek_kulna_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "statek_kulna_ruins";
  model = "\ca\buildings\ruins\statek_kulna_ruins.p3d";
 };
 class CUP_A2_stodola_old_open_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "stodola_old_open_ruins";
  model = "\ca\buildings\ruins\stodola_old_open_ruins.p3d";
 };
 class CUP_A2_stodola_open_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "stodola_open_ruins";
  model = "\ca\buildings\ruins\stodola_open_ruins.p3d";
 };
 class CUP_A2_telek1_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "telek1_ruins";
  model = "\ca\buildings\ruins\telek1_ruins.p3d";
 };
 class CUP_A2_tovarna2_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "tovarna2_ruins";
  model = "\ca\buildings\ruins\tovarna2_ruins.p3d";
 };
 class CUP_A2_trafostanica_mala_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "trafostanica_mala_ruins";
  model = "\ca\buildings\ruins\trafostanica_mala_ruins.p3d";
 };
 class CUP_A2_trafostanica_velka_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "trafostanica_velka_ruins";
  model = "\ca\buildings\ruins\trafostanica_velka_ruins.p3d";
 };
 class CUP_A2_tyreheap: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "tyreheap";
  model = "\ca\misc\misc_tyreheap.p3d";
 };
 class CUP_A2_tyreheap_ep1: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "tyreheap_ep1";
  model = "\ca\misc_e\misc_tyreheap_ep1.p3d";
 };
 class CUP_A2_vez_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "vez_ruins";
  model = "\ca\buildings\ruins\vez_ruins.p3d";
 };
 class CUP_A2_zalchata_ruins: CUP_A2_Ruins
 {
  scope = 2;
  displayName = "zalchata_ruins";
  model = "\ca\buildings\ruins\zalchata_ruins.p3d";
 };
 class CUP_A2_a10wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "a10wreck";
  model = "\ca\a10\a10wreck.p3d";
 };
 class CUP_A2_ah1zwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "ah1zwreck";
  model = "\ca\air\ah1zwreck.p3d";
 };
 class CUP_A2_ah64dwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "ah64dwreck";
  model = "\ca\air_e\ah64\ah64dwreck.p3d";
 };
 class CUP_A2_ah6wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "ah6wreck";
  model = "\ca\air_e\ah6j\ah6wreck.p3d";
 };
 class CUP_A2_an2wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "an2wreck";
  model = "\ca\air_e\an2\an2wreck.p3d";
 };
 class CUP_A2_av8bwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "av8bwreck";
  model = "\ca\air\av8bwreck.p3d";
 };
 class CUP_A2_aw159_baf_wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "aw159_baf_wreck";
  model = "\ca\air_d_baf\aw159_baf_wreck.p3d";
 };
 class CUP_A2_bmp2_wrecked: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "bmp2_wrecked";
  model = "\ca\misc\bmp2_wrecked.p3d";
 };
 class CUP_A2_brdm2_wrecked: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "brdm2_wrecked";
  model = "\ca\misc\brdm2_wrecked.p3d";
 };
 class CUP_A2_c130jwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "c130jwreck";
  model = "\ca\air_e\c130j\c130jwreck.p3d";
 };
 class CUP_A2_ch_47fwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "ch_47fwreck";
  model = "\ca\air_e\ch47\ch_47fwreck.p3d";
 };
 class CUP_A2_datsun01t: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "datsun01t";
  model = "\ca\misc\datsun01t.p3d";
 };
 class CUP_A2_datsun02t: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "datsun02t";
  model = "\ca\misc\datsun02t.p3d";
 };
 class CUP_A2_drevtank_ruin: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "drevtank_ruin";
  model = "\ca\misc\drevtank_ruin.p3d";
 };
 class CUP_A2_f35bwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "f35bwreck";
  model = "\ca\air2\f35b\f35bwreck.p3d";
 };
 class CUP_A2_hiluxt: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "hiluxt";
  model = "\ca\misc\hiluxt.p3d";
 };
 class CUP_A2_hmmwv_wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "hmmwv_wreck";
  model = "\ca\wheeled\hmmwv_wreck.p3d";
 };
 class CUP_A2_hmmwv_wrecked: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "hmmwv_wrecked";
  model = "\ca\wheeled\hmmwv_wrecked.p3d";
 };
 class CUP_A2_ka52wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "ka52wreck";
  model = "\ca\air2\ka52\ka52wreck.p3d";
 };
 class CUP_A2_ka60_pmcwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "ka60_pmcwreck";
  model = "\ca\air_pmc\ka60\ka60_pmcwreck.p3d";
 };
 class CUP_A2_l39wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "l39wreck";
  model = "\ca\l39\l39wreck.p3d";
 };
 class CUP_A2_m1a2_tusk_wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "m1a2_tusk_wreck";
  model = "\ca\tracked\m1a2_tusk_wreck.p3d";
 };
 class CUP_A2_mh_60wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "mh_60wreck";
  model = "\ca\air\mh_60wreck.p3d";
 };
 class CUP_A2_mi24wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "mi24wreck";
  model = "\ca\air2\mi35\mi24wreck.p3d";
 };
 class CUP_A2_mi8_crashed: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "mi8_crashed";
  model = "\ca\misc\mi8_crashed.p3d";
 };
 class CUP_A2_mi8wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "mi8wreck";
  model = "\ca\air_e\mi17\mi8wreck.p3d";
 };
 class CUP_A2_mq9predatorwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "mq9predatorwreck";
  model = "\ca\air_e\mq9predatorb\mq9predatorwreck.p3d";
 };
 class CUP_A2_mv22wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "mv22wreck";
  model = "\ca\air2\mv22\mv22wreck.p3d";
 };
 class CUP_A2_powgen_big_ruins: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "powgen_big_ruins";
  model = "\ca\misc2\samsite\powgen_big_ruins.p3d";
 };
 class CUP_A2_skodovka_wrecked: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "skodovka_wrecked";
  model = "\ca\wheeled\skodovka_wrecked.p3d";
 };
 class CUP_A2_su25wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "su25wreck";
  model = "\ca\air_e\su25\su25wreck.p3d";
 };
 class CUP_A2_su34wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "su34wreck";
  model = "\ca\air3\su34\su34wreck.p3d";
 };
 class CUP_A2_t72_wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "t72_wreck";
  model = "\ca\tracked\t72_wreck.p3d";
 };
 class CUP_A2_t72_wrecked: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "t72_wrecked";
  model = "\ca\misc\t72_wrecked.p3d";
 };
 class CUP_A2_t72_wrecked_turret: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "t72_wrecked_turret";
  model = "\ca\misc\t72_wrecked_turret.p3d";
 };
 class CUP_A2_uaz_wreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "uaz_wreck";
  model = "\ca\wheeled\uaz_wreck.p3d";
 };
 class CUP_A2_uaz_wrecked: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "uaz_wrecked";
  model = "\ca\misc\uaz_wrecked.p3d";
 };
 class CUP_A2_uh1hwreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "uh1hwreck";
  model = "\ca\air_e\uh1h\uh1hwreck.p3d";
 };
 class CUP_A2_uh1ywreck: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "uh1ywreck";
  model = "\ca\air2\uh1y\uh1ywreck.p3d";
 };
 class CUP_A2_ural_wrecked: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "ural_wrecked";
  model = "\ca\misc\ural_wrecked.p3d";
 };
 class CUP_A2_wreck_ship_1: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "wreck_ship_1";
  model = "\ca\structures\wreck\wreck_ship_1.p3d";
 };
 class CUP_A2_wreck_ship_2: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "wreck_ship_2";
  model = "\ca\structures\wreck\wreck_ship_2.p3d";
 };
 class CUP_A2_wreck_uh60: CUP_A2_Wrecks
 {
  scope = 2;
  displayName = "wreck_uh60";
  model = "\ca\misc_e\wreck_uh60.p3d";
 };
};
//};
