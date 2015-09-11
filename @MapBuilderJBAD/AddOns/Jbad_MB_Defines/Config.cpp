////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.84
//Thu Mar 05 17:10:12 2015 : Source 'file' date Thu Mar 05 17:10:12 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class Jbad_Defines : Jbad_CfgVehicleClasses\Config.bin{
class CfgPatches
{
	class jbad_MB_CfgVehicleClasses
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"jbad_CfgVehicleClasses"};
	};
};
class CfgVehicleClasses
{
	class jbad_afghan_houses
	{
		displayName = "Jbad Afghan Houses";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Afghan Houses";
	};
	class jbad_mosques
	{
		displayName = "Jbad Mosques";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Mosques";
	};
	class jbad_walls
	{
		displayName = "Jbad Walls";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Walls";
	};
	class jbad_misc_interior
	{
		displayName = "Jbad Interior";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Interior";
	};
	class jbad_misc_market
	{
		displayName = "Jbad Market";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Market";
	};
	class jbad_vehicles
	{
		displayName = "Jbad Vehicles";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Vehicles";
	};
	class jbad_misc
	{
		displayName = "Jbad Misc";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Misc";
	};
	class jbad_mil
	{
		displayName = "Jbad Military";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Military";
	};
	class jbad_Bridge
	{
		displayName = "Jbad Bridges";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Bridges";
	};
	class jbad_Trees
	{
		displayName = "Jbad Trees";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Trees";
	};
	class jbad_Bushes
	{
		displayName = "Jbad Bushes";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Bushes";
	};
	class MB_Jbad_Powerlines
	{
		displayName = "Jbad Powerlines";
		mapbuilder_library = "JBAD";
		mapbuilder_displayname = "Powerlines";
	};
};

class CfgVehicles
{
	class Static;
	class MB_Jbad_Bridge: Static
	{
		displayName = "";
		accuracy = 1000;
		vehicleClass = "jbad_Bridge";
		model = "";
		nameSound = "";
		animated = 0;
		simulation = "house";
		cost = 0;
		armor = 1000;
		ladders[] = {};
		placement = "vertical";
	};
	class Jbad_most_stred30: MB_Jbad_Bridge
	{
		scope = 2;
		displayName = "Jbad_most_stred30";
		model = "\Jbad_Structures\bridges\Jbad_most_stred30.p3d";
	};
	class Jbad_most_bez_lamp: MB_Jbad_Bridge
	{
		scope = 2;
		displayName = "Jbad_most_bez_lamp";
		model = "\Jbad_Structures\bridges\Jbad_most_bez_lamp.p3d";
	};
	class Jbad_Kamenny_most30: MB_Jbad_Bridge
	{
		scope = 2;
		displayName = "Jbad_Kamenny_most30";
		model = "\Jbad_Structures\bridges\Jbad_Kamenny_most30.p3d";
	};
	class Jbad_Kamenny_most30v2: MB_Jbad_Bridge
	{
		scope = 2;
		displayName = "Jbad_Kamenny_most30v2";
		model = "\Jbad_Structures\bridges\Jbad_Kamenny_most30v2.p3d";
	};
	class MB_Jbad_Baseclass: Static
	{
		displayName = "";
		accuracy = 1000;
		vehicleClass = "jbad_Trees";
		model = "";
		nameSound = "";
		animated = 0;
		simulation = "house";
		cost = 0;
		armor = 1000;
		ladders[] = {};
		placement = "vertical";
	};
	class jbad_t_acer2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_acer2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_acer2s.p3d";
	};
	class jbad_t_AmygdalusC2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_AmygdalusC2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_AmygdalusC2s.p3d";
	};
	class jbad_t_FicusB2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_FicusB2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_FicusB2s.p3d";
	};
	class jbad_t_JuniperusC2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_JuniperusC2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_JuniperusC2s.p3d";
	};
	class jbad_t_malus1s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_malus1s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_malus1s.p3d";
	};
	class jbad_t_picea1s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_picea1s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_picea1s.p3d";
	};
	class jbad_t_picea2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_picea2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_picea2s.p3d";
	};
	class jbad_t_picea2sV2: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_picea2sV2";
		model = "\Jbad_Veg\plants\Tree\jbad_t_picea2sV2.p3d";
	};
	class jbad_t_picea3f: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_picea3f";
		model = "\Jbad_Veg\plants\Tree\jbad_t_picea3f.p3d";
	};
	class jbad_t_picea3fV2: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_picea3fV2";
		model = "\Jbad_Veg\plants\Tree\jbad_t_picea3fV2.p3d";
	};
	class jbad_t_PinusE2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_PinusE2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_PinusE2s.p3d";
	};
	class jbad_t_pinusN1s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_pinusN1s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_pinusN1s.p3d";
	};
	class jbad_t_pinusN2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_pinusN2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_pinusN2s.p3d";
	};
	class jbad_t_pinusS2f: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_pinusS2f";
		model = "\Jbad_Veg\plants\Tree\jbad_t_pinusS2f.p3d";
	};
	class jbad_t_PinusS3s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_PinusS3s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_PinusS3s.p3d";
	};
	class jbad_t_PistaciaL2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_PistaciaL2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_PistaciaL2s.p3d";
	};
	class jbad_t_poplar2f_dead: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_poplar2f_dead";
		model = "\Jbad_Veg\plants\Tree\jbad_t_poplar2f_dead.p3d";
	};
	class jbad_t_PopulusB2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_PopulusB2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_PopulusB2s.p3d";
	};
	class jbad_t_PopulusF2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_PopulusF2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_PopulusF2s.p3d";
	};
	class jbad_t_PrunusS2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_PrunusS2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_PrunusS2s.p3d";
	};
	class jbad_t_salix2s: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_salix2s";
		model = "\Jbad_Veg\plants\Tree\jbad_t_salix2s.p3d";
	};
	class jbad_t_stub_picea: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_stub_picea";
		model = "\Jbad_Veg\plants\Tree\jbad_t_stub_picea.p3d";
	};
	class jbad_t_willow2s_Dead: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_t_willow2s_Dead";
		model = "\Jbad_Veg\plants\Tree\jbad_t_willow2s_Dead.p3d";
	};
	class jbad_trunk_torzo: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_trunk_torzo";
		model = "\Jbad_Veg\plants\Tree\jbad_trunk_torzo.p3d";
	};
	class jbad_trunk_water: MB_Jbad_Baseclass
	{
		scope = 2;
		displayName = "jbad_trunk_water";
		model = "\Jbad_Veg\plants\Tree\jbad_trunk_water.p3d";
	};
	class jbad_b_AmygdalusN1s: MB_Jbad_Baseclass
	{
		scope = 2;
		vehicleClass = "jbad_Bushes";
		displayName = "jbad_b_AmygdalusN1s";
		model = "\Jbad_Veg\plants\Bush\jbad_b_AmygdalusN1s.p3d";
	};
	class jbad_b_PinusM1s: MB_Jbad_Baseclass
	{
		scope = 2;
		vehicleClass = "jbad_Bushes";
		displayName = "jbad_b_PinusM1s";
		model = "\Jbad_Veg\plants\Bush\jbad_b_PinusM1s.p3d";
	};
	class jbad_b_PistaciaL1s: MB_Jbad_Baseclass
	{
		scope = 2;
		vehicleClass = "jbad_Bushes";
		displayName = "jbad_b_PistaciaL1s";
		model = "\Jbad_Veg\plants\Bush\jbad_b_PistaciaL1s.p3d";
	};
	class MB_Jbad_Powerlines: Static
	{
		displayName = "";
		accuracy = 1000;
		vehicleClass = "MB_Jbad_Powerlines";
		model = "";
		nameSound = "";
		animated = 0;
		simulation = "house";
		cost = 0;
		armor = 1000;
		ladders[] = {};
		placement = "vertical";
	};
	class Jbad_PowLine_wire_A_left: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLine_wire_A_left";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLine_wire_A_left.p3d";
	};
	class Jbad_PowLine_wire_A_right: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLine_wire_A_right";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLine_wire_A_right.p3d";
	};
	class Jbad_PowLine_wire_AB: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLine_wire_AB";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLine_wire_AB.p3d";
	};
	class Jbad_PowLine_wire_BB: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLine_wire_BB";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLine_wire_BB.p3d";
	};
	class Jbad_PowLineA: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLineA";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLineA.p3d";
	};
	class Jbad_PowLineB: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLineB";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLineB.p3d";
	};
	class Jbad_PowLines_Conc1: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLines_Conc1";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLines_Conc1.p3d";
	};
	class Jbad_PowLines_Conc2: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLines_Conc2";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLines_Conc2.p3d";
	};
	class Jbad_PowLines_Conc2A: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLines_Conc2A";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLines_Conc2A.p3d";
	};
	class Jbad_PowLines_Conc2L: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLines_Conc2L";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLines_Conc2L.p3d";
	};
	class Jbad_PowLines_Transformer1: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_PowLines_Transformer1";
		model = "\jbad_misc\Misc_Powerline\Jbad_PowLines_Transformer1.p3d";
	};
	class Jbad_metalcrate: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_metalcrate";
		model = "\jbad_misc\Misc_Cases\metalcrate\Jbad_metalcrate.p3d";
	};
	class Jbad_metalcase_01: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_metalcase_01";
		model = "\jbad_misc\Misc_Generalstore\Jbad_metalcase_01.p3d";
	};
	class Jbad_metalcase_02: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_metalcase_02";
		model = "\jbad_misc\Misc_Generalstore\Jbad_metalcase_02.p3d";
	};
	class Jbad_rubble_wood_girder: MB_Jbad_Powerlines
	{
		scope = 2;
		displayName = "Jbad_rubble_wood_girder";
		model = "\Jbad_Structures\mil\proxies\rubble_wood_girder.p3d";
	};
};
//};
