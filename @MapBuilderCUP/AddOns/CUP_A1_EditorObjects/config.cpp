class CfgPatches
{
 class CUP_A1_EditorObjects
 {
  units[] = {};
  weapons[] = {};
  requiredAddons[] = {"CUP_Worlds"};
  projectName = "Map Builder";
  author = "NeoArmageddon";
 };
};
class CfgVehicleClasses
{
	class CUP_A1_EditorClass_Buildings
	{
		displayName = "CUP A1 Buildings";
		mapbuilder_library = "CUP";
		mapbuilder_displayname = "Buildings (A1)";
	};
	class CUP_A1_EditorClass_Misc : CUP_A1_EditorClass_Buildings
	{
		displayName = "CUP A1 Misc";
		mapbuilder_displayname = "Misc (A1)";
	};
	class CUP_A1_EditorClass_Plants : CUP_A1_EditorClass_Buildings
	{
		displayName = "CUP A1 Plants";
		mapbuilder_displayname = "Plants (A1)";
	};
	class CUP_A1_EditorClass_Roads : CUP_A1_EditorClass_Buildings
	{
		displayName = "CUP A1 Roads";
		mapbuilder_displayname = "Roads (A1)";
	};
	class CUP_A1_EditorClass_Rocks : CUP_A1_EditorClass_Buildings
	{
		displayName = "CUP A1 Rocks";
		mapbuilder_displayname = "Rocks (A1)";
	};
	class CUP_A1_EditorClass_Signs : CUP_A1_EditorClass_Buildings
	{
		displayName = "CUP A1 Signs";
		mapbuilder_displayname = "Signs (A1)";
	};
};
class CfgVehicles
{
	class Static;
	class CUP_A1_BaseObject: Static
	{
		displayName = "";
		accuracy = 1000;
		model = "";
		nameSound = "";
		animated = 0;
		simulation = "house";
		cost = 0;
		armor = 1000;
		placement = "vertical";
		scope = 0;
	};
	class CUP_A1_Buildings : CUP_A1_BaseObject
	{
		vehicleClass = "CUP_A1_EditorClass_Buildings";
	};
	class CUP_A1_Misc : CUP_A1_BaseObject
	{
		vehicleClass = "CUP_A1_EditorClass_Misc";
	};
	class CUP_A1_Plants : CUP_A1_BaseObject
	{
		vehicleClass = "CUP_A1_EditorClass_Plants";
	};
	class CUP_A1_Roads : CUP_A1_BaseObject
	{
		vehicleClass = "CUP_A1_EditorClass_Roads";
	};
	class CUP_A1_Rocks : CUP_A1_BaseObject
	{
		vehicleClass = "CUP_A1_EditorClass_Rocks";
	};
	class CUP_A1_Signs : CUP_A1_BaseObject
	{
		vehicleClass = "CUP_A1_EditorClass_Signs";
	};
	class CUP_A1_AFbarabizna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFbarabizna";
		model = "ca\buildings\afbarabizna.p3d";
	};
	class CUP_A1_AFDum_mesto2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFDum_mesto2";
		model = "ca\buildings\afdum_mesto2.p3d";
	};
	class CUP_A1_AFDum_mesto2L: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFDum_mesto2L";
		model = "ca\buildings\afdum_mesto2l.p3d";
	};
	class CUP_A1_AFDum_mesto3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFDum_mesto3";
		model = "ca\buildings\afdum_mesto3.p3d";
	};
	class CUP_A1_AFHospoda_mesto: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFHospoda_mesto";
		model = "ca\buildings\afhospoda_mesto.p3d";
	};
	class CUP_A1_ammostore2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "ammostore2";
		model = "ca\buildings\ammostore2.p3d";
	};
	class CUP_A1_army_hut2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut2";
		model = "ca\buildings\army_hut2.p3d";
	};
	class CUP_A1_army_hut2_int: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut2_int";
		model = "ca\buildings\army_hut2_int.p3d";
	};
	class CUP_A1_army_hut3_long: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut3_long";
		model = "ca\buildings\army_hut3_long.p3d";
	};
	class CUP_A1_army_hut3_long_int: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut3_long_int";
		model = "ca\buildings\army_hut3_long_int.p3d";
	};
	class CUP_A1_army_hut_int: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut_int";
		model = "ca\buildings\army_hut_int.p3d";
	};
	class CUP_A1_army_hut_storrage: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut_storrage";
		model = "ca\buildings\army_hut_storrage.p3d";
	};
	class CUP_A1_aut_zast: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "aut_zast";
		model = "ca\buildings\aut_zast.p3d";
	};
	class CUP_A1_benzina_schnell: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "benzina_schnell";
		model = "ca\buildings\benzina_schnell.p3d";
	};
	class CUP_A1_bordel_zidka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bordel_zidka";
		model = "ca\buildings\bordel_zidka.p3d";
	};
	class CUP_A1_bouda1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bouda1";
		model = "ca\buildings\bouda1.p3d";
	};
	class CUP_A1_bouda2_vnitrek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bouda2_vnitrek";
		model = "ca\buildings\bouda2_vnitrek.p3d";
	};
	class CUP_A1_bouda3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bouda3";
		model = "ca\buildings\bouda3.p3d";
	};
	class CUP_A1_bouda_garaz: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bouda_garaz";
		model = "ca\buildings\bouda_garaz.p3d";
	};
	class CUP_A1_bouda_plech: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bouda_plech";
		model = "ca\buildings\bouda_plech.p3d";
	};
	class CUP_A1_bozi_muka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bozi_muka";
		model = "ca\buildings\bozi_muka.p3d";
	};
	class CUP_A1_brana02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "brana02";
		model = "ca\buildings\brana02.p3d";
	};
	class CUP_A1_brana02nodoor: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "brana02nodoor";
		model = "ca\buildings\brana02nodoor.p3d";
	};
	class CUP_A1_budova1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova1";
		model = "ca\buildings\budova1.p3d";
	};
	class CUP_A1_budova2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova2";
		model = "ca\buildings\budova2.p3d";
	};
	class CUP_A1_budova3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova3";
		model = "ca\buildings\budova3.p3d";
	};
	class CUP_A1_budova4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova4";
		model = "ca\buildings\budova4.p3d";
	};
	class CUP_A1_budova4_in: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova4_in";
		model = "ca\buildings\budova4_in.p3d";
	};
	class CUP_A1_budova5: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova5";
		model = "ca\buildings\budova5.p3d";
	};
	class CUP_A1_Cihlovej_dum: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Cihlovej_dum";
		model = "ca\buildings\cihlovej_dum.p3d";
	};
	class CUP_A1_Cihlovej_dum_in: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Cihlovej_dum_in";
		model = "ca\buildings\cihlovej_dum_in.p3d";
	};
	class CUP_A1_Cihlovej_dum_mini: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Cihlovej_dum_mini";
		model = "ca\buildings\cihlovej_dum_mini.p3d";
	};
	class CUP_A1_Deutshe: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Deutshe";
		model = "ca\buildings\deutshe.p3d";
	};
	class CUP_A1_Deutshe_mini: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Deutshe_mini";
		model = "ca\buildings\deutshe_mini.p3d";
	};
	class CUP_A1_domek_rosa: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "domek_rosa";
		model = "ca\buildings\domek_rosa.p3d";
	};
	class CUP_A1_Dulni_bs: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dulni_bs";
		model = "ca\buildings\dulni_bs.p3d";
	};
	class CUP_A1_dum01: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum01";
		model = "ca\buildings\dum01.p3d";
	};
	class CUP_A1_dum02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum02";
		model = "ca\buildings\dum02.p3d";
	};
	class CUP_A1_Dumruina: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dumruina";
		model = "ca\buildings\dumruina.p3d";
	};
	class CUP_A1_Dumruina_mini: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dumruina_mini";
		model = "ca\buildings\dumruina_mini.p3d";
	};
	class CUP_A1_dum_istan2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan2";
		model = "ca\buildings\dum_istan2.p3d";
	};
	class CUP_A1_dum_istan2b: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan2b";
		model = "ca\buildings\dum_istan2b.p3d";
	};
	class CUP_A1_Dum_istan2_01: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_01";
		model = "ca\buildings\dum_istan2_01.p3d";
	};
	class CUP_A1_Dum_istan2_02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_02";
		model = "ca\buildings\dum_istan2_02.p3d";
	};
	class CUP_A1_Dum_istan2_03: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_03";
		model = "ca\buildings\dum_istan2_03.p3d";
	};
	class CUP_A1_Dum_istan2_03a: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_03a";
		model = "ca\buildings\dum_istan2_03a.p3d";
	};
	class CUP_A1_dum_istan2_04a: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan2_04a";
		model = "ca\buildings\dum_istan2_04a.p3d";
	};
	class CUP_A1_dum_istan3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3";
		model = "ca\buildings\dum_istan3.p3d";
	};
	class CUP_A1_dum_istan3_hromada: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3_hromada";
		model = "ca\buildings\dum_istan3_hromada.p3d";
	};
	class CUP_A1_dum_istan3_hromada2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3_hromada2";
		model = "ca\buildings\dum_istan3_hromada2.p3d";
	};
	class CUP_A1_dum_istan3_pumpa: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3_pumpa";
		model = "ca\buildings\dum_istan3_pumpa.p3d";
	};
	class CUP_A1_dum_istan4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4";
		model = "ca\buildings\dum_istan4.p3d";
	};
	class CUP_A1_dum_istan4_big: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_big";
		model = "ca\buildings\dum_istan4_big.p3d";
	};
	class CUP_A1_dum_istan4_big_inverse: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_big_inverse";
		model = "ca\buildings\dum_istan4_big_inverse.p3d";
	};
	class CUP_A1_dum_istan4_chodnik: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_chodnik";
		model = "ca\buildings\dum_istan4_chodnik.p3d";
	};
	class CUP_A1_dum_istan4_detaily1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_detaily1";
		model = "ca\buildings\dum_istan4_detaily1.p3d";
	};
	class CUP_A1_dum_istan4_inverse: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_inverse";
		model = "ca\buildings\dum_istan4_inverse.p3d";
	};
	class CUP_A1_dum_istan4_zidka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_zidka";
		model = "ca\buildings\dum_istan4_zidka.p3d";
	};
	class CUP_A1_Dum_m2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_m2";
		model = "ca\buildings\dum_m2.p3d";
	};
	class CUP_A1_Dum_mesto: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto";
		model = "ca\buildings\dum_mesto.p3d";
	};
	class CUP_A1_Dum_mesto2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto2";
		model = "ca\buildings\dum_mesto2.p3d";
	};
	class CUP_A1_Dum_mesto2L: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto2L";
		model = "ca\buildings\dum_mesto2l.p3d";
	};
	class CUP_A1_Dum_mesto3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto3";
		model = "ca\buildings\dum_mesto3.p3d";
	};
	class CUP_A1_Dum_mesto3_istan: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto3_istan";
		model = "ca\buildings\dum_mesto3_istan.p3d";
	};
	class CUP_A1_dum_mesto_in: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_mesto_in";
		model = "ca\buildings\dum_mesto_in.p3d";
	};
	class CUP_A1_dum_olezlina: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olezlina";
		model = "ca\buildings\dum_olezlina.p3d";
	};
	class CUP_A1_dum_olez_istan1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan1";
		model = "ca\buildings\dum_olez_istan1.p3d";
	};
	class CUP_A1_dum_olez_istan2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan2";
		model = "ca\buildings\dum_olez_istan2.p3d";
	};
	class CUP_A1_dum_olez_istan2_maly: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan2_maly";
		model = "ca\buildings\dum_olez_istan2_maly.p3d";
	};
	class CUP_A1_dum_olez_istan2_maly2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan2_maly2";
		model = "ca\buildings\dum_olez_istan2_maly2.p3d";
	};
	class CUP_A1_dum_rasovna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_rasovna";
		model = "ca\buildings\dum_rasovna.p3d";
	};
	class CUP_A1_dum_zboreny: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_zboreny";
		model = "ca\buildings\dum_zboreny.p3d";
	};
	class CUP_A1_dum_zboreny_Lidice: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_zboreny_Lidice";
		model = "ca\buildings\dum_zboreny_lidice.p3d";
	};
	class CUP_A1_dum_zboreny_total: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_zboreny_total";
		model = "ca\buildings\dum_zboreny_total.p3d";
	};
	class CUP_A1_fuelstation: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "fuelstation";
		model = "ca\buildings\fuelstation.p3d";
	};
	class CUP_A1_fuelstation_army: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "fuelstation_army";
		model = "ca\buildings\fuelstation_army.p3d";
	};
	class CUP_A1_garaz: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "garaz";
		model = "ca\buildings\garaz.p3d";
	};
	class CUP_A1_garaz_bez_tanku: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "garaz_bez_tanku";
		model = "ca\buildings\garaz_bez_tanku.p3d";
	};
	class CUP_A1_garaz_mala: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "garaz_mala";
		model = "ca\buildings\garaz_mala.p3d";
	};
	class CUP_A1_garaz_s_tankem: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "garaz_s_tankem";
		model = "ca\buildings\garaz_s_tankem.p3d";
	};
	class CUP_A1_hangar_2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hangar_2";
		model = "ca\buildings\hangar_2.p3d";
	};
	class CUP_A1_helper: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "helper";
		model = "ca\buildings\helper.p3d";
	};
	class CUP_A1_hlaska: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hlaska";
		model = "ca\buildings\hlaska.p3d";
	};
	class CUP_A1_Hlidac_budka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hlidac_budka";
		model = "ca\buildings\hlidac_budka.p3d";
	};
	class CUP_A1_hospital: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hospital";
		model = "ca\buildings\hospital.p3d";
	};
	class CUP_A1_hospoda_mesto: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hospoda_mesto";
		model = "ca\buildings\hospoda_mesto.p3d";
	};
	class CUP_A1_Hotel: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hotel";
		model = "ca\buildings\hotel.p3d";
	};
	class CUP_A1_hotel_riviera1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hotel_riviera1";
		model = "ca\buildings\hotel_riviera1.p3d";
	};
	class CUP_A1_hotel_riviera2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hotel_riviera2";
		model = "ca\buildings\hotel_riviera2.p3d";
	};
	class CUP_A1_house_y: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "house_y";
		model = "ca\buildings\house_y.p3d";
	};
	class CUP_A1_Hruzdum: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hruzdum";
		model = "ca\buildings\hruzdum.p3d";
	};
	class CUP_A1_hut01: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut01";
		model = "ca\buildings\hut01.p3d";
	};
	class CUP_A1_hut02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut02";
		model = "ca\buildings\hut02.p3d";
	};
	class CUP_A1_hut03: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut03";
		model = "ca\buildings\hut03.p3d";
	};
	class CUP_A1_hut04: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut04";
		model = "ca\buildings\hut04.p3d";
	};
	class CUP_A1_hut06: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut06";
		model = "ca\buildings\hut06.p3d";
	};
	class CUP_A1_hut_old02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut_old02";
		model = "ca\buildings\hut_old02.p3d";
	};
	class CUP_A1_hut_old02d1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut_old02d1";
		model = "ca\buildings\hut_old02d1.p3d";
	};
	class CUP_A1_hut_old02d2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut_old02d2";
		model = "ca\buildings\hut_old02d2.p3d";
	};
	class CUP_A1_invisible_house: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "invisible_house";
		model = "ca\buildings\invisible_house.p3d";
	};
	class CUP_A1_kap02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kap02";
		model = "ca\buildings\kap02.p3d";
	};
	class CUP_A1_kapl: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kapl";
		model = "ca\buildings\kapl.p3d";
	};
	class CUP_A1_kasarna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna";
		model = "ca\buildings\kasarna.p3d";
	};
	class CUP_A1_kasarna_brana: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna_brana";
		model = "ca\buildings\kasarna_brana.p3d";
	};
	class CUP_A1_kasarna_prujezd: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna_prujezd";
		model = "ca\buildings\kasarna_prujezd.p3d";
	};
	class CUP_A1_kasarna_rohova: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna_rohova";
		model = "ca\buildings\kasarna_rohova.p3d";
	};
	class CUP_A1_kasna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasna";
		model = "ca\buildings\kasna.p3d";
	};
	class CUP_A1_kasna_new: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasna_new";
		model = "ca\buildings\kasna_new.p3d";
	};
	class CUP_A1_kasna_new_bez: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasna_new_bez";
		model = "ca\buildings\kasna_new_bez.p3d";
	};
	class CUP_A1_kasna_sucha: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasna_sucha";
		model = "ca\buildings\kasna_sucha.p3d";
	};
	class CUP_A1_Komin: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Komin";
		model = "ca\buildings\komin.p3d";
	};
	class CUP_A1_kostel: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel";
		model = "ca\buildings\kostel.p3d";
	};
	class CUP_A1_Kostel2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Kostel2";
		model = "ca\buildings\kostel2.p3d";
	};
	class CUP_A1_kostel3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel3";
		model = "ca\buildings\kostel3.p3d";
	};
	class CUP_A1_kostelik: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostelik";
		model = "ca\buildings\kostelik.p3d";
	};
	class CUP_A1_kostel_mexico: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel_mexico";
		model = "ca\buildings\kostel_mexico.p3d";
	};
	class CUP_A1_kostel_trosky: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel_trosky";
		model = "ca\buildings\kostel_trosky.p3d";
	};
	class CUP_A1_kulna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kulna";
		model = "ca\buildings\kulna.p3d";
	};
	class CUP_A1_Letistni_hala: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Letistni_hala";
		model = "ca\buildings\letistni_hala.p3d";
	};
	class CUP_A1_Majak: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Majak";
		model = "ca\buildings\majak.p3d";
	};
	class CUP_A1_Majak2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Majak2";
		model = "ca\buildings\majak2.p3d";
	};
	class CUP_A1_Majak_podesta: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Majak_podesta";
		model = "ca\buildings\majak_podesta.p3d";
	};
	class CUP_A1_Majak_v_celku: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Majak_v_celku";
		model = "ca\buildings\majak_v_celku.p3d";
	};
	class CUP_A1_Molo_beton: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Molo_beton";
		model = "ca\buildings\molo_beton.p3d";
	};
	class CUP_A1_Molo_drevo: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Molo_drevo";
		model = "ca\buildings\molo_drevo.p3d";
	};
	class CUP_A1_Molo_drevo_bs: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Molo_drevo_bs";
		model = "ca\buildings\molo_drevo_bs.p3d";
	};
	class CUP_A1_Molo_drevo_end: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Molo_drevo_end";
		model = "ca\buildings\molo_drevo_end.p3d";
	};
	class CUP_A1_Molo_krychle: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Molo_krychle";
		model = "ca\buildings\molo_krychle.p3d";
	};
	class CUP_A1_Molo_krychle2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Molo_krychle2";
		model = "ca\buildings\molo_krychle2.p3d";
	};
	class CUP_A1_nabrezi: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "nabrezi";
		model = "ca\buildings\nabrezi.p3d";
	};
	class CUP_A1_nabrezi_najezd: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "nabrezi_najezd";
		model = "ca\buildings\nabrezi_najezd.p3d";
	};
	class CUP_A1_OrlHot: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "OrlHot";
		model = "ca\buildings\orlhot.p3d";
	};
	class CUP_A1_Panelak: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Panelak";
		model = "ca\buildings\panelak.p3d";
	};
	class CUP_A1_Panelak2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Panelak2";
		model = "ca\buildings\panelak2.p3d";
	};
	class CUP_A1_Panelak3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Panelak3";
		model = "ca\buildings\panelak3.p3d";
	};
	class CUP_A1_podesta_10: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_10";
		model = "ca\buildings\podesta_10.p3d";
	};
	class CUP_A1_podesta_1_cornL: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_cornL";
		model = "ca\buildings\podesta_1_cornl.p3d";
	};
	class CUP_A1_podesta_1_cornP: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_cornP";
		model = "ca\buildings\podesta_1_cornp.p3d";
	};
	class CUP_A1_podesta_1_cube: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_cube";
		model = "ca\buildings\podesta_1_cube.p3d";
	};
	class CUP_A1_podesta_1_cube_long: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_cube_long";
		model = "ca\buildings\podesta_1_cube_long.p3d";
	};
	class CUP_A1_podesta_1_mid: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_mid";
		model = "ca\buildings\podesta_1_mid.p3d";
	};
	class CUP_A1_podesta_1_mid_cornL: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_mid_cornL";
		model = "ca\buildings\podesta_1_mid_cornl.p3d";
	};
	class CUP_A1_podesta_1_mid_cornP: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_mid_cornP";
		model = "ca\buildings\podesta_1_mid_cornp.p3d";
	};
	class CUP_A1_podesta_1_stairs: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_stairs";
		model = "ca\buildings\podesta_1_stairs.p3d";
	};
	class CUP_A1_podesta_1_stairs2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_stairs2";
		model = "ca\buildings\podesta_1_stairs2.p3d";
	};
	class CUP_A1_podesta_1_stairs3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_stairs3";
		model = "ca\buildings\podesta_1_stairs3.p3d";
	};
	class CUP_A1_podesta_1_stairs4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_1_stairs4";
		model = "ca\buildings\podesta_1_stairs4.p3d";
	};
	class CUP_A1_podesta_5: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_5";
		model = "ca\buildings\podesta_5.p3d";
	};
	class CUP_A1_podesta_S10: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_S10";
		model = "ca\buildings\podesta_s10.p3d";
	};
	class CUP_A1_podesta_S5: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "podesta_S5";
		model = "ca\buildings\podesta_s5.p3d";
	};
	class CUP_A1_posed: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "posed";
		model = "ca\buildings\posed.p3d";
	};
	class CUP_A1_psi_bouda: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "psi_bouda";
		model = "ca\buildings\psi_bouda.p3d";
	};
	class CUP_A1_Repair_center: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Repair_center";
		model = "ca\buildings\repair_center.p3d";
	};
	class CUP_A1_Ryb_domek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Ryb_domek";
		model = "ca\buildings\ryb_domek.p3d";
	};
	class CUP_A1_Sara_domek01: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek01";
		model = "ca\buildings\sara_domek01.p3d";
	};
	class CUP_A1_Sara_domek02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek02";
		model = "ca\buildings\sara_domek02.p3d";
	};
	class CUP_A1_Sara_domek03: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek03";
		model = "ca\buildings\sara_domek03.p3d";
	};
	class CUP_A1_shop1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop1";
		model = "ca\buildings\shop1.p3d";
	};
	class CUP_A1_Sara_domek04: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek04";
		model = "ca\buildings\sara_domek04.p3d";
	};
	class CUP_A1_Sara_domek05: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek05";
		model = "ca\buildings\sara_domek05.p3d";
	};
	class CUP_A1_Sara_domek_hospoda: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_hospoda";
		model = "ca\buildings\sara_domek_hospoda.p3d";
	};
	class CUP_A1_Sara_domek_kovarna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_kovarna";
		model = "ca\buildings\sara_domek_kovarna.p3d";
	};
	class CUP_A1_Sara_domek_podhradi_1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_podhradi_1";
		model = "ca\buildings\sara_domek_podhradi_1.p3d";
	};
	class CUP_A1_Sara_domek_rosa: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_rosa";
		model = "ca\buildings\sara_domek_rosa.p3d";
	};
	class CUP_A1_Sara_domek_ruina: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_ruina";
		model = "ca\buildings\sara_domek_ruina.p3d";
	};
	class CUP_A1_Sara_domek_sedy: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_sedy";
		model = "ca\buildings\sara_domek_sedy.p3d";
	};
	class CUP_A1_Sara_domek_sedy_BEZ: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_sedy_BEZ";
		model = "ca\buildings\sara_domek_sedy_bez.p3d";
	};
	class CUP_A1_sara_domek_vilka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "sara_domek_vilka";
		model = "ca\buildings\sara_domek_vilka.p3d";
	};
	class CUP_A1_Sara_domek_zluty: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_zluty";
		model = "ca\buildings\sara_domek_zluty.p3d";
	};
	class CUP_A1_Sara_domek_zluty_BEZ: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_zluty_BEZ";
		model = "ca\buildings\sara_domek_zluty_bez.p3d";
	};
	class CUP_A1_Sara_dum_podloubi03klaster: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_dum_podloubi03klaster";
		model = "ca\buildings\sara_dum_podloubi03klaster.p3d";
	};
	class CUP_A1_Sara_dum_podloubi03rovny: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_dum_podloubi03rovny";
		model = "ca\buildings\sara_dum_podloubi03rovny.p3d";
	};
	class CUP_A1_Sara_Hasic_zbroj: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_Hasic_zbroj";
		model = "ca\buildings\sara_hasic_zbroj.p3d";
	};
	class CUP_A1_Sara_stodola: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_stodola";
		model = "ca\buildings\sara_stodola.p3d";
	};
	class CUP_A1_Sara_stodola2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_stodola2";
		model = "ca\buildings\sara_stodola2.p3d";
	};
	class CUP_A1_Sara_stodola3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_stodola3";
		model = "ca\buildings\sara_stodola3.p3d";
	};
	class CUP_A1_Sara_zluty_statek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_zluty_statek";
		model = "ca\buildings\sara_zluty_statek.p3d";
	};
	class CUP_A1_Sara_zluty_statek_in: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_zluty_statek_in";
		model = "ca\buildings\sara_zluty_statek_in.p3d";
	};
	class CUP_A1_shop1_double: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop1_double";
		model = "ca\buildings\shop1_double.p3d";
	};
	class CUP_A1_shop2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop2";
		model = "ca\buildings\shop2.p3d";
	};
	class CUP_A1_shop2_double: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop2_double";
		model = "ca\buildings\shop2_double.p3d";
	};
	class CUP_A1_shop2_short: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop2_short";
		model = "ca\buildings\shop2_short.p3d";
	};
	class CUP_A1_shop3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop3";
		model = "ca\buildings\shop3.p3d";
	};
	class CUP_A1_shop3_short: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop3_short";
		model = "ca\buildings\shop3_short.p3d";
	};
	class CUP_A1_shop4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop4";
		model = "ca\buildings\shop4.p3d";
	};
	class CUP_A1_shop5: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop5";
		model = "ca\buildings\shop5.p3d";
	};
	class CUP_A1_shop5_double: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop5_double";
		model = "ca\buildings\shop5_double.p3d";
	};
	class CUP_A1_shop5_short: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "shop5_short";
		model = "ca\buildings\shop5_short.p3d";
	};
	class CUP_A1_skola: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "skola";
		model = "ca\buildings\skola.p3d";
	};
	class CUP_A1_SS_hangar: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "SS_hangar";
		model = "ca\buildings\ss_hangar.p3d";
	};
	class CUP_A1_SS_hangarD: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "SS_hangarD";
		model = "ca\buildings\ss_hangard.p3d";
	};
	class CUP_A1_stanice: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanice";
		model = "ca\buildings\stanice.p3d";
	};
	class CUP_A1_Statek_brana: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_brana";
		model = "ca\buildings\statek_brana.p3d";
	};
	class CUP_A1_Statek_brana_open: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_brana_open";
		model = "ca\buildings\statek_brana_open.p3d";
	};
	class CUP_A1_Statek_hl_bud: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_hl_bud";
		model = "ca\buildings\statek_hl_bud.p3d";
	};
	class CUP_A1_Statek_kulna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_kulna";
		model = "ca\buildings\statek_kulna.p3d";
	};
	class CUP_A1_stodola_old: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stodola_old";
		model = "ca\buildings\stodola_old.p3d";
	};
	class CUP_A1_stodola_old_open: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stodola_old_open";
		model = "ca\buildings\stodola_old_open.p3d";
	};
	class CUP_A1_stodola_open: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stodola_open";
		model = "ca\buildings\stodola_open.p3d";
	};
	class CUP_A1_strazni_vez: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "strazni_vez";
		model = "ca\buildings\strazni_vez.p3d";
	};
	class CUP_A1_telek1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "telek1";
		model = "ca\buildings\telek1.p3d";
	};
	class CUP_A1_Tovarna1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Tovarna1";
		model = "ca\buildings\tovarna1.p3d";
	};
	class CUP_A1_tovarna2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "tovarna2";
		model = "ca\buildings\tovarna2.p3d";
	};
	class CUP_A1_trafostanica_mala: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "trafostanica_mala";
		model = "ca\buildings\trafostanica_mala.p3d";
	};
	class CUP_A1_trafostanica_velka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "trafostanica_velka";
		model = "ca\buildings\trafostanica_velka.p3d";
	};
	class CUP_A1_trafostanica_velka_draty: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "trafostanica_velka_draty";
		model = "ca\buildings\trafostanica_velka_draty.p3d";
	};
	class CUP_A1_vez: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "vez";
		model = "ca\buildings\vez.p3d";
	};
	class CUP_A1_vysilac_FM: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "vysilac_FM";
		model = "ca\buildings\vysilac_fm.p3d";
	};
	class CUP_A1_vysilac_FM2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "vysilac_FM2";
		model = "ca\buildings\vysilac_fm2.p3d";
	};
	class CUP_A1_watertower1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "watertower1";
		model = "ca\buildings\watertower1.p3d";
	};
	class CUP_A1_ZalChata: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "ZalChata";
		model = "ca\buildings\zalchata.p3d";
	};
	class CUP_A1_zastavka_jih: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zastavka_jih";
		model = "ca\buildings\zastavka_jih.p3d";
	};
	class CUP_A1_zastavka_sever: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zastavka_sever";
		model = "ca\buildings\zastavka_sever.p3d";
	};
	class CUP_A1_zvonice: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zvonice";
		model = "ca\buildings\zvonice.p3d";
	};
	class CUP_A1_Astan: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Astan";
		model = "ca\buildings\tents\astan.p3d";
	};
	class CUP_A1_Camo_Box: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Camo_Box";
		model = "ca\buildings\tents\camo_box.p3d";
	};
	class CUP_A1_Fortress_01: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Fortress_01";
		model = "ca\buildings\tents\fortress_01.p3d";
	};
	class CUP_A1_Fortress_02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Fortress_02";
		model = "ca\buildings\tents\fortress_02.p3d";
	};
	class CUP_A1_MASH: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "MASH";
		model = "ca\buildings\tents\mash.p3d";
	};
	class CUP_A1_Pristresek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Pristresek";
		model = "ca\buildings\tents\pristresek.p3d";
	};
	class CUP_A1_Pristresek_mensi: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Pristresek_mensi";
		model = "ca\buildings\tents\pristresek_mensi.p3d";
	};
	class CUP_A1_Stan: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Stan";
		model = "ca\buildings\tents\stan.p3d";
	};
	class CUP_A1_Stan_east: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Stan_east";
		model = "ca\buildings\tents\stan_east.p3d";
	};
	class CUP_A1_AFbarabizna_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFbarabizna_ruins";
		model = "ca\buildings\ruins\afbarabizna_ruins.p3d";
	};
	class CUP_A1_AFDum_mesto2L_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFDum_mesto2L_ruins";
		model = "ca\buildings\ruins\afdum_mesto2l_ruins.p3d";
	};
	class CUP_A1_AFDum_mesto2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFDum_mesto2_ruins";
		model = "ca\buildings\ruins\afdum_mesto2_ruins.p3d";
	};
	class CUP_A1_AFDum_mesto3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFDum_mesto3_ruins";
		model = "ca\buildings\ruins\afdum_mesto3_ruins.p3d";
	};
	class CUP_A1_AFHospoda_mesto_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFHospoda_mesto_ruins";
		model = "ca\buildings\ruins\afhospoda_mesto_ruins.p3d";
	};
	class CUP_A1_army_hut2_int_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut2_int_ruins";
		model = "ca\buildings\ruins\army_hut2_int_ruins.p3d";
	};
	class CUP_A1_army_hut2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut2_ruins";
		model = "ca\buildings\ruins\army_hut2_ruins.p3d";
	};
	class CUP_A1_army_hut3_long_int_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut3_long_int_ruins";
		model = "ca\buildings\ruins\army_hut3_long_int_ruins.p3d";
	};
	class CUP_A1_army_hut3_long_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut3_long_ruins";
		model = "ca\buildings\ruins\army_hut3_long_ruins.p3d";
	};
	class CUP_A1_army_hut_int_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut_int_ruins";
		model = "ca\buildings\ruins\army_hut_int_ruins.p3d";
	};
	class CUP_A1_army_hut_storrage_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "army_hut_storrage_ruins";
		model = "ca\buildings\ruins\army_hut_storrage_ruins.p3d";
	};
	class CUP_A1_benzina_schnell_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "benzina_schnell_ruins";
		model = "ca\buildings\ruins\benzina_schnell_ruins.p3d";
	};
	class CUP_A1_bouda1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bouda1_ruins";
		model = "ca\buildings\ruins\bouda1_ruins.p3d";
	};
	class CUP_A1_bouda3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bouda3_ruins";
		model = "ca\buildings\ruins\bouda3_ruins.p3d";
	};
	class CUP_A1_brana02nodoor_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "brana02nodoor_ruins";
		model = "ca\buildings\ruins\brana02nodoor_ruins.p3d";
	};
	class CUP_A1_brana02_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "brana02_ruins";
		model = "ca\buildings\ruins\brana02_ruins.p3d";
	};
	class CUP_A1_budova1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova1_ruins";
		model = "ca\buildings\ruins\budova1_ruins.p3d";
	};
	class CUP_A1_budova2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova2_ruins";
		model = "ca\buildings\ruins\budova2_ruins.p3d";
	};
	class CUP_A1_budova3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova3_ruins";
		model = "ca\buildings\ruins\budova3_ruins.p3d";
	};
	class CUP_A1_budova4_in_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova4_in_ruins";
		model = "ca\buildings\ruins\budova4_in_ruins.p3d";
	};
	class CUP_A1_budova4_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova4_ruins";
		model = "ca\buildings\ruins\budova4_ruins.p3d";
	};
	class CUP_A1_budova5_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "budova5_ruins";
		model = "ca\buildings\ruins\budova5_ruins.p3d";
	};
	class CUP_A1_Cihlovej_dum_in_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Cihlovej_dum_in_ruins";
		model = "ca\buildings\ruins\cihlovej_dum_in_ruins.p3d";
	};
	class CUP_A1_Cihlovej_dum_mini_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Cihlovej_dum_mini_ruins";
		model = "ca\buildings\ruins\cihlovej_dum_mini_ruins.p3d";
	};
	class CUP_A1_Cihlovej_dum_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Cihlovej_dum_ruins";
		model = "ca\buildings\ruins\cihlovej_dum_ruins.p3d";
	};
	class CUP_A1_Deutshe_mini_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Deutshe_mini_ruins";
		model = "ca\buildings\ruins\deutshe_mini_ruins.p3d";
	};
	class CUP_A1_Deutshe_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Deutshe_ruins";
		model = "ca\buildings\ruins\deutshe_ruins.p3d";
	};
	class CUP_A1_domek_rosa_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "domek_rosa_ruins";
		model = "ca\buildings\ruins\domek_rosa_ruins.p3d";
	};
	class CUP_A1_Dulni_bs_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dulni_bs_ruins";
		model = "ca\buildings\ruins\dulni_bs_ruins.p3d";
	};
	class CUP_A1_dum01_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum01_ruins";
		model = "ca\buildings\ruins\dum01_ruins.p3d";
	};
	class CUP_A1_dum02_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum02_ruins";
		model = "ca\buildings\ruins\dum02_ruins.p3d";
	};
	class CUP_A1_Dumruina_mini_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dumruina_mini_ruins";
		model = "ca\buildings\ruins\dumruina_mini_ruins.p3d";
	};
	class CUP_A1_Dumruina_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dumruina_ruins";
		model = "ca\buildings\ruins\dumruina_ruins.p3d";
	};
	class CUP_A1_dum_istan2b_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan2b_ruins";
		model = "ca\buildings\ruins\dum_istan2b_ruins.p3d";
	};
	class CUP_A1_Dum_istan2_01_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_01_ruins";
		model = "ca\buildings\ruins\dum_istan2_01_ruins.p3d";
	};
	class CUP_A1_Dum_istan2_02_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_02_ruins";
		model = "ca\buildings\ruins\dum_istan2_02_ruins.p3d";
	};
	class CUP_A1_Dum_istan2_03a_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_03a_ruins";
		model = "ca\buildings\ruins\dum_istan2_03a_ruins.p3d";
	};
	class CUP_A1_Dum_istan2_03_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_istan2_03_ruins";
		model = "ca\buildings\ruins\dum_istan2_03_ruins.p3d";
	};
	class CUP_A1_dum_istan2_04a_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan2_04a_ruins";
		model = "ca\buildings\ruins\dum_istan2_04a_ruins.p3d";
	};
	class CUP_A1_dum_istan2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan2_ruins";
		model = "ca\buildings\ruins\dum_istan2_ruins.p3d";
	};
	class CUP_A1_dum_istan3_hromada2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3_hromada2_ruins";
		model = "ca\buildings\ruins\dum_istan3_hromada2_ruins.p3d";
	};
	class CUP_A1_dum_istan3_hromada_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3_hromada_ruins";
		model = "ca\buildings\ruins\dum_istan3_hromada_ruins.p3d";
	};
	class CUP_A1_dum_istan3_pumpa_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3_pumpa_ruins";
		model = "ca\buildings\ruins\dum_istan3_pumpa_ruins.p3d";
	};
	class CUP_A1_dum_istan3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan3_ruins";
		model = "ca\buildings\ruins\dum_istan3_ruins.p3d";
	};
	class CUP_A1_dum_istan4_big_inverse_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_big_inverse_ruins";
		model = "ca\buildings\ruins\dum_istan4_big_inverse_ruins.p3d";
	};
	class CUP_A1_dum_istan4_big_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_big_ruins";
		model = "ca\buildings\ruins\dum_istan4_big_ruins.p3d";
	};
	class CUP_A1_dum_istan4_detaily1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_detaily1_ruins";
		model = "ca\buildings\ruins\dum_istan4_detaily1_ruins.p3d";
	};
	class CUP_A1_dum_istan4_inverse_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_inverse_ruins";
		model = "ca\buildings\ruins\dum_istan4_inverse_ruins.p3d";
	};
	class CUP_A1_dum_istan4_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_istan4_ruins";
		model = "ca\buildings\ruins\dum_istan4_ruins.p3d";
	};
	class CUP_A1_Dum_m2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_m2_ruins";
		model = "ca\buildings\ruins\dum_m2_ruins.p3d";
	};
	class CUP_A1_Dum_mesto2L_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto2L_ruins";
		model = "ca\buildings\ruins\dum_mesto2l_ruins.p3d";
	};
	class CUP_A1_Dum_mesto2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto2_ruins";
		model = "ca\buildings\ruins\dum_mesto2_ruins.p3d";
	};
	class CUP_A1_Dum_mesto3_istan_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto3_istan_ruins";
		model = "ca\buildings\ruins\dum_mesto3_istan_ruins.p3d";
	};
	class CUP_A1_Dum_mesto3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto3_ruins";
		model = "ca\buildings\ruins\dum_mesto3_ruins.p3d";
	};
	class CUP_A1_dum_mesto_in_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_mesto_in_ruins";
		model = "ca\buildings\ruins\dum_mesto_in_ruins.p3d";
	};
	class CUP_A1_Dum_mesto_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dum_mesto_ruins";
		model = "ca\buildings\ruins\dum_mesto_ruins.p3d";
	};
	class CUP_A1_dum_olezlina_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olezlina_ruins";
		model = "ca\buildings\ruins\dum_olezlina_ruins.p3d";
	};
	class CUP_A1_dum_olez_istan1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan1_ruins";
		model = "ca\buildings\ruins\dum_olez_istan1_ruins.p3d";
	};
	class CUP_A1_dum_olez_istan2_maly2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan2_maly2_ruins";
		model = "ca\buildings\ruins\dum_olez_istan2_maly2_ruins.p3d";
	};
	class CUP_A1_dum_olez_istan2_maly_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan2_maly_ruins";
		model = "ca\buildings\ruins\dum_olez_istan2_maly_ruins.p3d";
	};
	class CUP_A1_dum_olez_istan2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_olez_istan2_ruins";
		model = "ca\buildings\ruins\dum_olez_istan2_ruins.p3d";
	};
	class CUP_A1_dum_rasovna_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_rasovna_ruins";
		model = "ca\buildings\ruins\dum_rasovna_ruins.p3d";
	};
	class CUP_A1_dum_zboreny_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_zboreny_ruins";
		model = "ca\buildings\ruins\dum_zboreny_ruins.p3d";
	};
	class CUP_A1_dum_zboreny_total_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "dum_zboreny_total_ruins";
		model = "ca\buildings\ruins\dum_zboreny_total_ruins.p3d";
	};
	class CUP_A1_garaz_mala_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "garaz_mala_ruins";
		model = "ca\buildings\ruins\garaz_mala_ruins.p3d";
	};
	class CUP_A1_garaz_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "garaz_ruins";
		model = "ca\buildings\ruins\garaz_ruins.p3d";
	};
	class CUP_A1_hangar_2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hangar_2_ruins";
		model = "ca\buildings\ruins\hangar_2_ruins.p3d";
	};
	class CUP_A1_hlaska_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hlaska_ruins";
		model = "ca\buildings\ruins\hlaska_ruins.p3d";
	};
	class CUP_A1_Hlidac_budka_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hlidac_budka_ruins";
		model = "ca\buildings\ruins\hlidac_budka_ruins.p3d";
	};
	class CUP_A1_hospital_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hospital_ruins";
		model = "ca\buildings\ruins\hospital_ruins.p3d";
	};
	class CUP_A1_hospoda_mesto_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hospoda_mesto_ruins";
		model = "ca\buildings\ruins\hospoda_mesto_ruins.p3d";
	};
	class CUP_A1_hotel_riviera1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hotel_riviera1_ruins";
		model = "ca\buildings\ruins\hotel_riviera1_ruins.p3d";
	};
	class CUP_A1_hotel_riviera2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hotel_riviera2_ruins";
		model = "ca\buildings\ruins\hotel_riviera2_ruins.p3d";
	};
	class CUP_A1_Hotel_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hotel_ruins";
		model = "ca\buildings\ruins\hotel_ruins.p3d";
	};
	class CUP_A1_house_y_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "house_y_ruins";
		model = "ca\buildings\ruins\house_y_ruins.p3d";
	};
	class CUP_A1_Hruzdum_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hruzdum_ruins";
		model = "ca\buildings\ruins\hruzdum_ruins.p3d";
	};
	class CUP_A1_hut01_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut01_ruins";
		model = "ca\buildings\ruins\hut01_ruins.p3d";
	};
	class CUP_A1_hut02_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut02_ruins";
		model = "ca\buildings\ruins\hut02_ruins.p3d";
	};
	class CUP_A1_hut03_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut03_ruins";
		model = "ca\buildings\ruins\hut03_ruins.p3d";
	};
	class CUP_A1_hut04_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut04_ruins";
		model = "ca\buildings\ruins\hut04_ruins.p3d";
	};
	class CUP_A1_hut06_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut06_ruins";
		model = "ca\buildings\ruins\hut06_ruins.p3d";
	};
	class CUP_A1_hut_old02_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hut_old02_ruins";
		model = "ca\buildings\ruins\hut_old02_ruins.p3d";
	};
	class CUP_A1_kasarna_brana_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna_brana_ruins";
		model = "ca\buildings\ruins\kasarna_brana_ruins.p3d";
	};
	class CUP_A1_kasarna_prujezd_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna_prujezd_ruins";
		model = "ca\buildings\ruins\kasarna_prujezd_ruins.p3d";
	};
	class CUP_A1_kasarna_rohova_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna_rohova_ruins";
		model = "ca\buildings\ruins\kasarna_rohova_ruins.p3d";
	};
	class CUP_A1_kasarna_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kasarna_ruins";
		model = "ca\buildings\ruins\kasarna_ruins.p3d";
	};
	class CUP_A1_Komin_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Komin_ruins";
		model = "ca\buildings\ruins\komin_ruins.p3d";
	};
	class CUP_A1_Kostel2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Kostel2_ruins";
		model = "ca\buildings\ruins\kostel2_ruins.p3d";
	};
	class CUP_A1_kostel3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel3_ruins";
		model = "ca\buildings\ruins\kostel3_ruins.p3d";
	};
	class CUP_A1_kostelik_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostelik_ruins";
		model = "ca\buildings\ruins\kostelik_ruins.p3d";
	};
	class CUP_A1_kostel_mexico_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel_mexico_ruins";
		model = "ca\buildings\ruins\kostel_mexico_ruins.p3d";
	};
	class CUP_A1_kostel_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel_ruins";
		model = "ca\buildings\ruins\kostel_ruins.p3d";
	};
	class CUP_A1_kostel_trosky_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kostel_trosky_ruins";
		model = "ca\buildings\ruins\kostel_trosky_ruins.p3d";
	};
	class CUP_A1_leseni2x_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "leseni2x_ruins";
		model = "ca\buildings\ruins\leseni2x_ruins.p3d";
	};
	class CUP_A1_leseni4x_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "leseni4x_ruins";
		model = "ca\buildings\ruins\leseni4x_ruins.p3d";
	};
	class CUP_A1_Letistni_hala_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Letistni_hala_ruins";
		model = "ca\buildings\ruins\letistni_hala_ruins.p3d";
	};
	class CUP_A1_Majak_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Majak_ruins";
		model = "ca\buildings\ruins\majak_ruins.p3d";
	};
	class CUP_A1_Majak_v_celku_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Majak_v_celku_ruins";
		model = "ca\buildings\ruins\majak_v_celku_ruins.p3d";
	};
	class CUP_A1_Nasypka_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nasypka_ruins";
		model = "ca\buildings\ruins\nasypka_ruins.p3d";
	};
	class CUP_A1_OrlHot_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "OrlHot_ruins";
		model = "ca\buildings\ruins\orlhot_ruins.p3d";
	};
	class CUP_A1_Panelak2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Panelak2_ruins";
		model = "ca\buildings\ruins\panelak2_ruins.p3d";
	};
	class CUP_A1_Panelak3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Panelak3_ruins";
		model = "ca\buildings\ruins\panelak3_ruins.p3d";
	};
	class CUP_A1_Panelak_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Panelak_ruins";
		model = "ca\buildings\ruins\panelak_ruins.p3d";
	};
	class CUP_A1_posed_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "posed_ruins";
		model = "ca\buildings\ruins\posed_ruins.p3d";
	};
	class CUP_A1_repair_center_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "repair_center_ruins";
		model = "ca\buildings\ruins\repair_center_ruins.p3d";
	};
	class CUP_A1_Ryb_domek_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Ryb_domek_ruins";
		model = "ca\buildings\ruins\ryb_domek_ruins.p3d";
	};
	class CUP_A1_Sara_domek01_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek01_ruins";
		model = "ca\buildings\ruins\sara_domek01_ruins.p3d";
	};
	class CUP_A1_Sara_domek02_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek02_ruins";
		model = "ca\buildings\ruins\sara_domek02_ruins.p3d";
	};
	class CUP_A1_Sara_domek03_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek03_ruins";
		model = "ca\buildings\ruins\sara_domek03_ruins.p3d";
	};
	class CUP_A1_Sara_domek04_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek04_ruins";
		model = "ca\buildings\ruins\sara_domek04_ruins.p3d";
	};
	class CUP_A1_Sara_domek05_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek05_ruins";
		model = "ca\buildings\ruins\sara_domek05_ruins.p3d";
	};
	class CUP_A1_Sara_domek_hospoda_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_hospoda_ruins";
		model = "ca\buildings\ruins\sara_domek_hospoda_ruins.p3d";
	};
	class CUP_A1_Sara_domek_kovarna_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_kovarna_ruins";
		model = "ca\buildings\ruins\sara_domek_kovarna_ruins.p3d";
	};
	class CUP_A1_Sara_domek_podhradi_1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_podhradi_1_ruins";
		model = "ca\buildings\ruins\sara_domek_podhradi_1_ruins.p3d";
	};
	class CUP_A1_Sara_domek_rosa_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_rosa_ruins";
		model = "ca\buildings\ruins\sara_domek_rosa_ruins.p3d";
	};
	class CUP_A1_Sara_domek_ruina_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_ruina_ruins";
		model = "ca\buildings\ruins\sara_domek_ruina_ruins.p3d";
	};
	class CUP_A1_Sara_domek_sedy_BEZ_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_sedy_BEZ_ruins";
		model = "ca\buildings\ruins\sara_domek_sedy_bez_ruins.p3d";
	};
	class CUP_A1_Sara_domek_sedy_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_sedy_ruins";
		model = "ca\buildings\ruins\sara_domek_sedy_ruins.p3d";
	};
	class CUP_A1_sara_domek_vilka_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "sara_domek_vilka_ruins";
		model = "ca\buildings\ruins\sara_domek_vilka_ruins.p3d";
	};
	class CUP_A1_Sara_domek_zluty_BEZ_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_zluty_BEZ_ruins";
		model = "ca\buildings\ruins\sara_domek_zluty_bez_ruins.p3d";
	};
	class CUP_A1_Sara_domek_zluty_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_domek_zluty_ruins";
		model = "ca\buildings\ruins\sara_domek_zluty_ruins.p3d";
	};
	class CUP_A1_Sara_dum_podloubi03klaster_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_dum_podloubi03klaster_ruins";
		model = "ca\buildings\ruins\sara_dum_podloubi03klaster_ruins.p3d";
	};
	class CUP_A1_Sara_dum_podloubi03rovny_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_dum_podloubi03rovny_ruins";
		model = "ca\buildings\ruins\sara_dum_podloubi03rovny_ruins.p3d";
	};
	class CUP_A1_Sara_Hasic_zbroj_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_Hasic_zbroj_ruins";
		model = "ca\buildings\ruins\sara_hasic_zbroj_ruins.p3d";
	};
	class CUP_A1_Sara_stodola2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_stodola2_ruins";
		model = "ca\buildings\ruins\sara_stodola2_ruins.p3d";
	};
	class CUP_A1_Sara_stodola3_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_stodola3_ruins";
		model = "ca\buildings\ruins\sara_stodola3_ruins.p3d";
	};
	class CUP_A1_Sara_stodola_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_stodola_ruins";
		model = "ca\buildings\ruins\sara_stodola_ruins.p3d";
	};
	class CUP_A1_Sara_zluty_statek_in_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_zluty_statek_in_ruins";
		model = "ca\buildings\ruins\sara_zluty_statek_in_ruins.p3d";
	};
	class CUP_A1_Sara_zluty_statek_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Sara_zluty_statek_ruins";
		model = "ca\buildings\ruins\sara_zluty_statek_ruins.p3d";
	};
	class CUP_A1_skola_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "skola_ruins";
		model = "ca\buildings\ruins\skola_ruins.p3d";
	};
	class CUP_A1_SS_hangarD_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "SS_hangarD_ruins";
		model = "ca\buildings\ruins\ss_hangard_ruins.p3d";
	};
	class CUP_A1_SS_hangar_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "SS_hangar_ruins";
		model = "ca\buildings\ruins\ss_hangar_ruins.p3d";
	};
	class CUP_A1_stanice_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanice_ruins";
		model = "ca\buildings\ruins\stanice_ruins.p3d";
	};
	class CUP_A1_Statek_brana_open_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_brana_open_ruins";
		model = "ca\buildings\ruins\statek_brana_open_ruins.p3d";
	};
	class CUP_A1_Statek_brana_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_brana_ruins";
		model = "ca\buildings\ruins\statek_brana_ruins.p3d";
	};
	class CUP_A1_Statek_hl_bud_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_hl_bud_ruins";
		model = "ca\buildings\ruins\statek_hl_bud_ruins.p3d";
	};
	class CUP_A1_Statek_kulna_old_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_kulna_old_ruins";
		model = "ca\buildings\ruins\statek_kulna_old_ruins.p3d";
	};
	class CUP_A1_Statek_kulna_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_kulna_ruins";
		model = "ca\buildings\ruins\statek_kulna_ruins.p3d";
	};
	class CUP_A1_stodola_old_open_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stodola_old_open_ruins";
		model = "ca\buildings\ruins\stodola_old_open_ruins.p3d";
	};
	class CUP_A1_stodola_old_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stodola_old_ruins";
		model = "ca\buildings\ruins\stodola_old_ruins.p3d";
	};
	class CUP_A1_stodola_open_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stodola_open_ruins";
		model = "ca\buildings\ruins\stodola_open_ruins.p3d";
	};
	class CUP_A1_strazni_vez_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "strazni_vez_ruins";
		model = "ca\buildings\ruins\strazni_vez_ruins.p3d";
	};
	class CUP_A1_telek1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "telek1_ruins";
		model = "ca\buildings\ruins\telek1_ruins.p3d";
	};
	class CUP_A1_Tovarna1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Tovarna1_ruins";
		model = "ca\buildings\ruins\tovarna1_ruins.p3d";
	};
	class CUP_A1_tovarna2_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "tovarna2_ruins";
		model = "ca\buildings\ruins\tovarna2_ruins.p3d";
	};
	class CUP_A1_trafostanica_mala_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "trafostanica_mala_ruins";
		model = "ca\buildings\ruins\trafostanica_mala_ruins.p3d";
	};
	class CUP_A1_trafostanica_velka_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "trafostanica_velka_ruins";
		model = "ca\buildings\ruins\trafostanica_velka_ruins.p3d";
	};
	class CUP_A1_vez_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "vez_ruins";
		model = "ca\buildings\ruins\vez_ruins.p3d";
	};
	class CUP_A1_watertower1_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "watertower1_ruins";
		model = "ca\buildings\ruins\watertower1_ruins.p3d";
	};
	class CUP_A1_zalchata_ruins: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zalchata_ruins";
		model = "ca\buildings\ruins\zalchata_ruins.p3d";
	};
	class CUP_A1_AFNewplot2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "AFNewplot2";
		model = "ca\buildings\misc\afnewplot2.p3d";
	};
	class CUP_A1_aut_z_st: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "aut_z_st";
		model = "ca\buildings\misc\aut_z_st.p3d";
	};
	class CUP_A1_DD_pletivo: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "DD_pletivo";
		model = "ca\buildings\misc\dd_pletivo.p3d";
	};
	class CUP_A1_DD_pletivo_dira: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "DD_pletivo_dira";
		model = "ca\buildings\misc\dd_pletivo_dira.p3d";
	};
	class CUP_A1_DD_pletivo_sl: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "DD_pletivo_sl";
		model = "ca\buildings\misc\dd_pletivo_sl.p3d";
	};
	class CUP_A1_Hrob1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hrob1";
		model = "ca\buildings\misc\hrob1.p3d";
	};
	class CUP_A1_Hrob2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Hrob2";
		model = "ca\buildings\misc\hrob2.p3d";
	};
	class CUP_A1_hrobecek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hrobecek";
		model = "ca\buildings\misc\hrobecek.p3d";
	};
	class CUP_A1_hrobecek2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hrobecek2";
		model = "ca\buildings\misc\hrobecek2.p3d";
	};
	class CUP_A1_hrobecek_krizek1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hrobecek_krizek1";
		model = "ca\buildings\misc\hrobecek_krizek1.p3d";
	};
	class CUP_A1_hrobecek_krizek2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hrobecek_krizek2";
		model = "ca\buildings\misc\hrobecek_krizek2.p3d";
	};
	class CUP_A1_hrobecek_krizekhelma: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hrobecek_krizekhelma";
		model = "ca\buildings\misc\hrobecek_krizekhelma.p3d";
	};
	class CUP_A1_Kbud: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Kbud";
		model = "ca\buildings\misc\kbud.p3d";
	};
	class CUP_A1_lampa_STROP: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa STROP";
		model = "ca\buildings\misc\lampa strop.p3d";
	};
	class CUP_A1_lampadrevo: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampadrevo";
		model = "ca\buildings\misc\lampadrevo.p3d";
	};
	class CUP_A1_lampazel: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampazel";
		model = "ca\buildings\misc\lampazel.p3d";
	};
	class CUP_A1_lampa_cut: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa_cut";
		model = "ca\buildings\misc\lampa_cut.p3d";
	};
	class CUP_A1_lampa_ind: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa_ind";
		model = "ca\buildings\misc\lampa_ind.p3d";
	};
	class CUP_A1_lampa_ind_b: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa_ind_b";
		model = "ca\buildings\misc\lampa_ind_b.p3d";
	};
	class CUP_A1_lampa_ind_zebr: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa_ind_zebr";
		model = "ca\buildings\misc\lampa_ind_zebr.p3d";
	};
	class CUP_A1_lampa_sidl: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa_sidl";
		model = "ca\buildings\misc\lampa_sidl.p3d";
	};
	class CUP_A1_lampa_sidl_2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa_sidl_2";
		model = "ca\buildings\misc\lampa_sidl_2.p3d";
	};
	class CUP_A1_lampa_sidl_3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lampa_sidl_3";
		model = "ca\buildings\misc\lampa_sidl_3.p3d";
	};
	class CUP_A1_Lampa_valec: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Lampa_valec";
		model = "ca\buildings\misc\lampa_valec.p3d";
	};
	class CUP_A1_Lampa_vysoka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Lampa_vysoka";
		model = "ca\buildings\misc\lampa_vysoka.p3d";
	};
	class CUP_A1_Lampa_vysoka_bez: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Lampa_vysoka_bez";
		model = "ca\buildings\misc\lampa_vysoka_bez.p3d";
	};
	class CUP_A1_lavicka_1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lavicka_1";
		model = "ca\buildings\misc\lavicka_1.p3d";
	};
	class CUP_A1_lavicka_2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lavicka_2";
		model = "ca\buildings\misc\lavicka_2.p3d";
	};
	class CUP_A1_lavicka_3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lavicka_3";
		model = "ca\buildings\misc\lavicka_3.p3d";
	};
	class CUP_A1_lavicka_4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "lavicka_4";
		model = "ca\buildings\misc\lavicka_4.p3d";
	};
	class CUP_A1_leseni2x: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "leseni2x";
		model = "ca\buildings\misc\leseni2x.p3d";
	};
	class CUP_A1_leseni4x: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "leseni4x";
		model = "ca\buildings\misc\leseni4x.p3d";
	};
	class CUP_A1_Nahrobek1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nahrobek1";
		model = "ca\buildings\misc\nahrobek1.p3d";
	};
	class CUP_A1_Nahrobek2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nahrobek2";
		model = "ca\buildings\misc\nahrobek2.p3d";
	};
	class CUP_A1_Nahrobek3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nahrobek3";
		model = "ca\buildings\misc\nahrobek3.p3d";
	};
	class CUP_A1_Nahrobek4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nahrobek4";
		model = "ca\buildings\misc\nahrobek4.p3d";
	};
	class CUP_A1_Nahrobek5: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nahrobek5";
		model = "ca\buildings\misc\nahrobek5.p3d";
	};
	class CUP_A1_Nam_dlazba: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nam_dlazba";
		model = "ca\buildings\misc\nam_dlazba.p3d";
	};
	class CUP_A1_Nam_okruzi: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nam_okruzi";
		model = "ca\buildings\misc\nam_okruzi.p3d";
	};
	class CUP_A1_nastenka2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "nastenka2";
		model = "ca\buildings\misc\nastenka2.p3d";
	};
	class CUP_A1_nastenka3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "nastenka3";
		model = "ca\buildings\misc\nastenka3.p3d";
	};
	class CUP_A1_Nasypka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Nasypka";
		model = "ca\buildings\misc\nasypka.p3d";
	};
	class CUP_A1_NavigLight: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "NavigLight";
		model = "ca\buildings\misc\naviglight.p3d";
	};
	class CUP_A1_Newplot: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Newplot";
		model = "ca\buildings\misc\newplot.p3d";
	};
	class CUP_A1_Newplot2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Newplot2";
		model = "ca\buildings\misc\newplot2.p3d";
	};
	class CUP_A1_pletivo: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo";
		model = "ca\buildings\misc\pletivo.p3d";
	};
	class CUP_A1_pletivo_dira: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_dira";
		model = "ca\buildings\misc\pletivo_dira.p3d";
	};
	class CUP_A1_pletivo_wired: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_wired";
		model = "ca\buildings\misc\pletivo_wired.p3d";
	};
	class CUP_A1_pletivo_wired_army: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_wired_army";
		model = "ca\buildings\misc\pletivo_wired_army.p3d";
	};
	class CUP_A1_pletivo_wired_branaL: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_wired_branaL";
		model = "ca\buildings\misc\pletivo_wired_branal.p3d";
	};
	class CUP_A1_pletivo_wired_branaL_civil: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_wired_branaL_civil";
		model = "ca\buildings\misc\pletivo_wired_branal_civil.p3d";
	};
	class CUP_A1_pletivo_wired_branaP: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_wired_branaP";
		model = "ca\buildings\misc\pletivo_wired_branap.p3d";
	};
	class CUP_A1_pletivo_wired_hole: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_wired_hole";
		model = "ca\buildings\misc\pletivo_wired_hole.p3d";
	};
	class CUP_A1_pletivo_wired_slope: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pletivo_wired_slope";
		model = "ca\buildings\misc\pletivo_wired_slope.p3d";
	};
	class CUP_A1_Plot_Bambus: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Bambus";
		model = "ca\buildings\misc\plot_bambus.p3d";
	};
	class CUP_A1_plot_chmelnice: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_chmelnice";
		model = "ca\buildings\misc\plot_chmelnice.p3d";
	};
	class CUP_A1_plot_green_branka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_branka";
		model = "ca\buildings\misc\plot_green_branka.p3d";
	};
	class CUP_A1_plot_green_brank_o: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_brank_o";
		model = "ca\buildings\misc\plot_green_brank_o.p3d";
	};
	class CUP_A1_plot_green_cihlsloup: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_cihlsloup";
		model = "ca\buildings\misc\plot_green_cihlsloup.p3d";
	};
	class CUP_A1_plot_green_draty: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_draty";
		model = "ca\buildings\misc\plot_green_draty.p3d";
	};
	class CUP_A1_plot_green_vrata: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_vrata";
		model = "ca\buildings\misc\plot_green_vrata.p3d";
	};
	class CUP_A1_plot_green_vrat_l: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_vrat_l";
		model = "ca\buildings\misc\plot_green_vrat_l.p3d";
	};
	class CUP_A1_plot_green_vrat_o: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_vrat_o";
		model = "ca\buildings\misc\plot_green_vrat_o.p3d";
	};
	class CUP_A1_plot_green_vrat_r: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_green_vrat_r";
		model = "ca\buildings\misc\plot_green_vrat_r.p3d";
	};
	class CUP_A1_plot_istan1b: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1b";
		model = "ca\buildings\misc\plot_istan1b.p3d";
	};
	class CUP_A1_plot_istan1b_end1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1b_end1";
		model = "ca\buildings\misc\plot_istan1b_end1.p3d";
	};
	class CUP_A1_plot_istan1b_hole: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1b_hole";
		model = "ca\buildings\misc\plot_istan1b_hole.p3d";
	};
	class CUP_A1_plot_istan1b_short: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1b_short";
		model = "ca\buildings\misc\plot_istan1b_short.p3d";
	};
	class CUP_A1_plot_istan1_rovny: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1_rovny";
		model = "ca\buildings\misc\plot_istan1_rovny.p3d";
	};
	class CUP_A1_plot_istan1_rovny_bezs: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1_rovny_bezs";
		model = "ca\buildings\misc\plot_istan1_rovny_bezs.p3d";
	};
	class CUP_A1_plot_istan1_rovny_end1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1_rovny_end1";
		model = "ca\buildings\misc\plot_istan1_rovny_end1.p3d";
	};
	class CUP_A1_plot_istan1_rovny_gate: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1_rovny_gate";
		model = "ca\buildings\misc\plot_istan1_rovny_gate.p3d";
	};
	class CUP_A1_plot_istan1_rovny_ohlod: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1_rovny_ohlod";
		model = "ca\buildings\misc\plot_istan1_rovny_ohlod.p3d";
	};
	class CUP_A1_plot_istan1_rovny_short: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1_rovny_short";
		model = "ca\buildings\misc\plot_istan1_rovny_short.p3d";
	};
	class CUP_A1_plot_istan1_sloupek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan1_sloupek";
		model = "ca\buildings\misc\plot_istan1_sloupek.p3d";
	};
	class CUP_A1_plot_istan2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan2";
		model = "ca\buildings\misc\plot_istan2.p3d";
	};
	class CUP_A1_plot_istan3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan3";
		model = "ca\buildings\misc\plot_istan3.p3d";
	};
	class CUP_A1_plot_istan3_short: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan3_short";
		model = "ca\buildings\misc\plot_istan3_short.p3d";
	};
	class CUP_A1_plot_istan3_sloupek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_istan3_sloupek";
		model = "ca\buildings\misc\plot_istan3_sloupek.p3d";
	};
	class CUP_A1_Plot_Ohrada: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Ohrada";
		model = "ca\buildings\misc\plot_ohrada.p3d";
	};
	class CUP_A1_Plot_Ohrada_Pruchozi: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Ohrada_Pruchozi";
		model = "ca\buildings\misc\plot_ohrada_pruchozi.p3d";
	};
	class CUP_A1_Plot_Ohrada_Zlomena: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Ohrada_Zlomena";
		model = "ca\buildings\misc\plot_ohrada_zlomena.p3d";
	};
	class CUP_A1_plot_provizorni: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_provizorni";
		model = "ca\buildings\misc\plot_provizorni.p3d";
	};
	class CUP_A1_plot_rust_branka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_branka";
		model = "ca\buildings\misc\plot_rust_branka.p3d";
	};
	class CUP_A1_plot_rust_brank_o: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_brank_o";
		model = "ca\buildings\misc\plot_rust_brank_o.p3d";
	};
	class CUP_A1_plot_rust_cihlsloup: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_cihlsloup";
		model = "ca\buildings\misc\plot_rust_cihlsloup.p3d";
	};
	class CUP_A1_plot_rust_draty: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_draty";
		model = "ca\buildings\misc\plot_rust_draty.p3d";
	};
	class CUP_A1_plot_rust_vrata: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_vrata";
		model = "ca\buildings\misc\plot_rust_vrata.p3d";
	};
	class CUP_A1_plot_rust_vrat_l: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_vrat_l";
		model = "ca\buildings\misc\plot_rust_vrat_l.p3d";
	};
	class CUP_A1_plot_rust_vrat_o: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_vrat_o";
		model = "ca\buildings\misc\plot_rust_vrat_o.p3d";
	};
	class CUP_A1_plot_rust_vrat_r: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_rust_vrat_r";
		model = "ca\buildings\misc\plot_rust_vrat_r.p3d";
	};
	class CUP_A1_plot_vinice: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_vinice";
		model = "ca\buildings\misc\plot_vinice.p3d";
	};
	class CUP_A1_plot_vlnplech1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_vlnplech1";
		model = "ca\buildings\misc\plot_vlnplech1.p3d";
	};
	class CUP_A1_plot_vlnplech2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_vlnplech2";
		model = "ca\buildings\misc\plot_vlnplech2.p3d";
	};
	class CUP_A1_Plot_Wood: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Wood";
		model = "ca\buildings\misc\plot_wood.p3d";
	};
	class CUP_A1_Plot_Wood1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Wood1";
		model = "ca\buildings\misc\plot_wood1.p3d";
	};
	class CUP_A1_Plot_Wood1b: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Wood1b";
		model = "ca\buildings\misc\plot_wood1b.p3d";
	};
	class CUP_A1_Plot_Wood1_door: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Wood1_door";
		model = "ca\buildings\misc\plot_wood1_door.p3d";
	};
	class CUP_A1_Plot_Woodb: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Woodb";
		model = "ca\buildings\misc\plot_woodb.p3d";
	};
	class CUP_A1_Plot_Wood_door: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Wood_door";
		model = "ca\buildings\misc\plot_wood_door.p3d";
	};
	class CUP_A1_Plot_Wood_sloupek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Plot_Wood_sloupek";
		model = "ca\buildings\misc\plot_wood_sloupek.p3d";
	};
	class CUP_A1_plot_zboreny: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_zboreny";
		model = "ca\buildings\misc\plot_zboreny.p3d";
	};
	//Crashes A3
	/*class CUP_A1_plot_zed_drevo1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_zed_drevo1";
		model = "ca\buildings\misc\plot_zed_drevo1.p3d";
	};
	class CUP_A1_plot_zed_drevo2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_zed_drevo2";
		model = "ca\buildings\misc\plot_zed_drevo2.p3d";
	};
	class CUP_A1_plot_zed_drevo3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_zed_drevo3";
		model = "ca\buildings\misc\plot_zed_drevo3.p3d";
	};
	class CUP_A1_plot_zed_drevo_sloupek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_zed_drevo_sloupek";
		model = "ca\buildings\misc\plot_zed_drevo_sloupek.p3d";
	};
	class CUP_A1_plot_zed_drevo1_branka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plot_zed_drevo1_branka";
		model = "ca\buildings\misc\plot_zed_drevo1_branka.p3d";
	};*/
	class CUP_A1_plutek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "plutek";
		model = "ca\buildings\misc\plutek.p3d";
	};
	class CUP_A1_pumpa: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "pumpa";
		model = "ca\buildings\misc\pumpa.p3d";
	};
	class CUP_A1_runway_edgelight: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "runway_edgelight";
		model = "ca\buildings\misc\runway_edgelight.p3d";
	};
	class CUP_A1_runway_PAPI: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "runway_PAPI";
		model = "ca\buildings\misc\runway_papi.p3d";
	};
	class CUP_A1_runway_PAPI_2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "runway_PAPI_2";
		model = "ca\buildings\misc\runway_papi_2.p3d";
	};
	class CUP_A1_runway_PAPI_3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "runway_PAPI_3";
		model = "ca\buildings\misc\runway_papi_3.p3d";
	};
	class CUP_A1_runway_PAPI_4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "runway_PAPI_4";
		model = "ca\buildings\misc\runway_papi_4.p3d";
	};
	class CUP_A1_stanek_1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_1";
		model = "ca\buildings\misc\stanek_1.p3d";
	};
	class CUP_A1_stanek_1B: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_1B";
		model = "ca\buildings\misc\stanek_1b.p3d";
	};
	class CUP_A1_stanek_1C: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_1C";
		model = "ca\buildings\misc\stanek_1c.p3d";
	};
	class CUP_A1_stanek_2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_2";
		model = "ca\buildings\misc\stanek_2.p3d";
	};
	class CUP_A1_stanek_2B: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_2B";
		model = "ca\buildings\misc\stanek_2b.p3d";
	};
	class CUP_A1_stanek_2C: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_2C";
		model = "ca\buildings\misc\stanek_2c.p3d";
	};
	class CUP_A1_stanek_3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_3";
		model = "ca\buildings\misc\stanek_3.p3d";
	};
	class CUP_A1_stanek_3B: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_3B";
		model = "ca\buildings\misc\stanek_3b.p3d";
	};
	class CUP_A1_stanek_3C: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_3C";
		model = "ca\buildings\misc\stanek_3c.p3d";
	};
	class CUP_A1_stanek_3_d: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_3_d";
		model = "ca\buildings\misc\stanek_3_d.p3d";
	};
	class CUP_A1_stanek_4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_4";
		model = "ca\buildings\misc\stanek_4.p3d";
	};
	class CUP_A1_stanek_4B: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_4B";
		model = "ca\buildings\misc\stanek_4b.p3d";
	};
	class CUP_A1_stanek_4C: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stanek_4C";
		model = "ca\buildings\misc\stanek_4c.p3d";
	};
	class CUP_A1_Statek_plot: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Statek_plot";
		model = "ca\buildings\misc\statek_plot.p3d";
	};
	class CUP_A1_Stoh: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Stoh";
		model = "ca\buildings\misc\stoh.p3d";
	};
	class CUP_A1_Stoplight01: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Stoplight01";
		model = "ca\buildings\misc\stoplight01.p3d";
	};
	class CUP_A1_Stoplight02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Stoplight02";
		model = "ca\buildings\misc\stoplight02.p3d";
	};
	class CUP_A1_stozarvn_1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stozarvn_1";
		model = "ca\buildings\misc\stozarvn_1.p3d";
	};
	class CUP_A1_stozarvn_2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stozarvn_2";
		model = "ca\buildings\misc\stozarvn_2.p3d";
	};
	class CUP_A1_stozarvn_3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stozarvn_3";
		model = "ca\buildings\misc\stozarvn_3.p3d";
	};
	class CUP_A1_tlampac_stozarvn_1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "tlampac_stozarvn_1";
		model = "ca\buildings\misc\tlampac_stozarvn_1.p3d";
	};
	class CUP_A1_tlampac_vo_seda: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "tlampac_vo_seda";
		model = "ca\buildings\misc\tlampac_vo_seda.p3d";
	};
	class CUP_A1_umyvadlo_jine: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "umyvadlo_jine";
		model = "ca\buildings\misc\umyvadlo_jine.p3d";
	};
	class CUP_A1_vo_seda: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "vo_seda";
		model = "ca\buildings\misc\vo_seda.p3d";
	};
	class CUP_A1_vo_stara1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "vo_stara1";
		model = "ca\buildings\misc\vo_stara1.p3d";
	};
	class CUP_A1_vo_zlut: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "vo_zlut";
		model = "ca\buildings\misc\vo_zlut.p3d";
	};
	class CUP_A1_Zabradli_pruhovane_levykonec: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Zabradli_pruhovane_levykonec";
		model = "ca\buildings\misc\zabradli_pruhovane_levykonec.p3d";
	};
	class CUP_A1_Zabradli_pruhovane_pravykonec: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Zabradli_pruhovane_pravykonec";
		model = "ca\buildings\misc\zabradli_pruhovane_pravykonec.p3d";
	};
	class CUP_A1_Zabradli_pruhovane_stred: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Zabradli_pruhovane_stred";
		model = "ca\buildings\misc\zabradli_pruhovane_stred.p3d";
	};
	class CUP_A1_zavora: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zavora";
		model = "ca\buildings\misc\zavora.p3d";
	};
	class CUP_A1_zavora_2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zavora_2";
		model = "ca\buildings\misc\zavora_2.p3d";
	};
	class CUP_A1_zavora_sloupek: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zavora_sloupek";
		model = "ca\buildings\misc\zavora_sloupek.p3d";
	};
	class CUP_A1_zed: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed";
		model = "ca\buildings\misc\zed.p3d";
	};
	class CUP_A1_zed2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed2";
		model = "ca\buildings\misc\zed2.p3d";
	};
	class CUP_A1_zed2_civil: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed2_civil";
		model = "ca\buildings\misc\zed2_civil.p3d";
	};
	class CUP_A1_zed3: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed3";
		model = "ca\buildings\misc\zed3.p3d";
	};
	class CUP_A1_zed_civil: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_civil";
		model = "ca\buildings\misc\zed_civil.p3d";
	};
	class CUP_A1_zed_desert: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_desert";
		model = "ca\buildings\misc\zed_desert.p3d";
	};
	class CUP_A1_zed_dira: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_dira";
		model = "ca\buildings\misc\zed_dira.p3d";
	};
	class CUP_A1_zed_dira_civil: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_dira_civil";
		model = "ca\buildings\misc\zed_dira_civil.p3d";
	};
	class CUP_A1_zed_dira_desert: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_dira_desert";
		model = "ca\buildings\misc\zed_dira_desert.p3d";
	};
	class CUP_A1_zed_kamenna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_kamenna";
		model = "ca\buildings\misc\zed_kamenna.p3d";
	};
	class CUP_A1_zed_kamenna_desert: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_kamenna_desert";
		model = "ca\buildings\misc\zed_kamenna_desert.p3d";
	};
	class CUP_A1_zed_podplaz: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_podplaz";
		model = "ca\buildings\misc\zed_podplaz.p3d";
	};
	class CUP_A1_zed_podplaz_civil: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_podplaz_civil";
		model = "ca\buildings\misc\zed_podplaz_civil.p3d";
	};
	class CUP_A1_zed_podplaz_desert: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zed_podplaz_desert";
		model = "ca\buildings\misc\zed_podplaz_desert.p3d";
	};
	class CUP_A1_zidka01: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zidka01";
		model = "ca\buildings\misc\zidka01.p3d";
	};
	class CUP_A1_zidka02: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zidka02";
		model = "ca\buildings\misc\zidka02.p3d";
	};
	class CUP_A1_zidka03: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zidka03";
		model = "ca\buildings\misc\zidka03.p3d";
	};
	class CUP_A1_zidka04: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zidka04";
		model = "ca\buildings\misc\zidka04.p3d";
	};
	class CUP_A1_zidka_branka: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "zidka_branka";
		model = "ca\buildings\misc\zidka_branka.p3d";
	};
	class CUP_A1_ammobednaX: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "ammobednaX";
		model = "ca\buildings\furniture\ammobednax.p3d";
	};
	class CUP_A1_armchair: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "armchair";
		model = "ca\buildings\furniture\armchair.p3d";
	};
	class CUP_A1_bath: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bath";
		model = "ca\buildings\furniture\bath.p3d";
	};
	class CUP_A1_bedna_ammo2X: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bedna_ammo2X";
		model = "ca\buildings\furniture\bedna_ammo2x.p3d";
	};
	class CUP_A1_bed_husbands: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "bed_husbands";
		model = "ca\buildings\furniture\bed_husbands.p3d";
	};
	class CUP_A1_case_bedroom_b: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "case_bedroom_b";
		model = "ca\buildings\furniture\case_bedroom_b.p3d";
	};
	class CUP_A1_case_wall_unit_part_c: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "case_wall_unit_part_c";
		model = "ca\buildings\furniture\case_wall_unit_part_c.p3d";
	};
	class CUP_A1_case_wall_unit_part_d: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "case_wall_unit_part_d";
		model = "ca\buildings\furniture\case_wall_unit_part_d.p3d";
	};
	class CUP_A1_case_wooden_b: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "case_wooden_b";
		model = "ca\buildings\furniture\case_wooden_b.p3d";
	};
	class CUP_A1_ch_mod_c: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "ch_mod_c";
		model = "ca\buildings\furniture\ch_mod_c.p3d";
	};
	class CUP_A1_conference_table_a: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "conference_table_a";
		model = "ca\buildings\furniture\conference_table_a.p3d";
	};
	class CUP_A1_Dhangar_brownskrin: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dhangar_brownskrin";
		model = "ca\buildings\furniture\dhangar_brownskrin.p3d";
	};
	class CUP_A1_Dhangar_knihovna: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dhangar_knihovna";
		model = "ca\buildings\furniture\dhangar_knihovna.p3d";
	};
	class CUP_A1_Dhangar_psacistul: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dhangar_psacistul";
		model = "ca\buildings\furniture\dhangar_psacistul.p3d";
	};
	class CUP_A1_Dhangar_whiteskrin: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dhangar_whiteskrin";
		model = "ca\buildings\furniture\dhangar_whiteskrin.p3d";
	};
	class CUP_A1_Dkamna_bila: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dkamna_bila";
		model = "ca\buildings\furniture\dkamna_bila.p3d";
	};
	class CUP_A1_Dkamna_uhli: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Dkamna_uhli";
		model = "ca\buildings\furniture\dkamna_uhli.p3d";
	};
	class CUP_A1_hromada_beden_dekorativniX: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "hromada_beden_dekorativniX";
		model = "ca\buildings\furniture\hromada_beden_dekorativnix.p3d";
	};
	class CUP_A1_kitchen_table_a: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "kitchen_table_a";
		model = "ca\buildings\furniture\kitchen_table_a.p3d";
	};
	class CUP_A1_obraz_kancl4: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "obraz_kancl4";
		model = "ca\buildings\furniture\obraz_kancl4.p3d";
	};
	class CUP_A1_postel_manz_kov: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "postel_manz_kov";
		model = "ca\buildings\furniture\postel_manz_kov.p3d";
	};
	class CUP_A1_postel_panelak1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "postel_panelak1";
		model = "ca\buildings\furniture\postel_panelak1.p3d";
	};
	class CUP_A1_postel_panelak2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "postel_panelak2";
		model = "ca\buildings\furniture\postel_panelak2.p3d";
	};
	class CUP_A1_skrin_bar: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "skrin_bar";
		model = "ca\buildings\furniture\skrin_bar.p3d";
	};
	class CUP_A1_Skrin_opalena: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Skrin_opalena";
		model = "ca\buildings\furniture\skrin_opalena.p3d";
	};
	class CUP_A1_stul_hospoda: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stul_hospoda";
		model = "ca\buildings\furniture\stul_hospoda.p3d";
	};
	class CUP_A1_stul_kuch1: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "stul_kuch1";
		model = "ca\buildings\furniture\stul_kuch1.p3d";
	};
	class CUP_A1_toilet_b: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "toilet_b";
		model = "ca\buildings\furniture\toilet_b.p3d";
	};
	class CUP_A1_Truhla_stara: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Truhla_stara";
		model = "ca\buildings\furniture\truhla_stara.p3d";
	};
	class CUP_A1_Vojenska_palanda: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "Vojenska_palanda";
		model = "ca\buildings\furniture\vojenska_palanda.p3d";
	};
	class CUP_A1_helfenburk: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "helfenburk";
		model = "ca\buildings\castle\helfenburk.p3d";
	};
	class CUP_A1_helfenburk_brana: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "helfenburk_brana";
		model = "ca\buildings\castle\helfenburk_brana.p3d";
	};
	class CUP_A1_helfenburk_budova2: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "helfenburk_budova2";
		model = "ca\buildings\castle\helfenburk_budova2.p3d";
	};
	class CUP_A1_helfenburk_cimburi: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "helfenburk_cimburi";
		model = "ca\buildings\castle\helfenburk_cimburi.p3d";
	};
	class CUP_A1_helfenburk_zed: CUP_A1_Buildings
	{
		scope = 2;
		displayName = "helfenburk_zed";
		model = "ca\buildings\castle\helfenburk_zed.p3d";
	};
	class CUP_A1_ammobedna: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ammobedna";
		model = "ca\misc\ammobedna.p3d";
	};
	class CUP_A1_Barbedwire: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barbedwire";
		model = "ca\misc\barbedwire.p3d";
	};
	class CUP_A1_Barel1: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barel1";
		model = "ca\misc\barel1.p3d";
	};
	class CUP_A1_Barel2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barel2";
		model = "ca\misc\barel2.p3d";
	};
	class CUP_A1_Barel3: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barel3";
		model = "ca\misc\barel3.p3d";
	};
	class CUP_A1_Barel4: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barel4";
		model = "ca\misc\barel4.p3d";
	};
	class CUP_A1_Barel5: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barel5";
		model = "ca\misc\barel5.p3d";
	};
	class CUP_A1_Barel6: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barel6";
		model = "ca\misc\barel6.p3d";
	};
	class CUP_A1_Barels: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Barels";
		model = "ca\misc\barels.p3d";
	};
	class CUP_A1_Betacam: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Betacam";
		model = "ca\misc\betacam.p3d";
	};
	class CUP_A1_BetonL_maly: CUP_A1_Misc
	{
		scope = 2;
		displayName = "BetonL_maly";
		model = "ca\misc\betonl_maly.p3d";
	};
	class CUP_A1_BetonL_velky: CUP_A1_Misc
	{
		scope = 2;
		displayName = "BetonL_velky";
		model = "ca\misc\betonl_velky.p3d";
	};
	class CUP_A1_Betonovy_blok: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Betonovy_blok";
		model = "ca\misc\betonovy_blok.p3d";
	};
	class CUP_A1_Betonovy_blok_zacatek: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Betonovy_blok_zacatek";
		model = "ca\misc\betonovy_blok_zacatek.p3d";
	};
	class CUP_A1_Bilboard_Ada: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_Ada";
		model = "ca\misc\bilboard_ada.p3d";
	};
	class CUP_A1_Bilboard_Bienvenudo: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_Bienvenudo";
		model = "ca\misc\bilboard_bienvenudo.p3d";
	};
	class CUP_A1_Bilboard_che: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_che";
		model = "ca\misc\bilboard_che.p3d";
	};
	class CUP_A1_Bilboard_HELLMART: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_HELLMART";
		model = "ca\misc\bilboard_hellmart.p3d";
	};
	class CUP_A1_Bilboard_Konstantin: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_Konstantin";
		model = "ca\misc\bilboard_konstantin.p3d";
	};
	class CUP_A1_Bilboard_nopassarao: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_nopassarao";
		model = "ca\misc\bilboard_nopassarao.p3d";
	};
	class CUP_A1_Bilboard_pivo_small: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_pivo_small";
		model = "ca\misc\bilboard_pivo_small.p3d";
	};
	class CUP_A1_Bilboard_Revolucion: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_Revolucion";
		model = "ca\misc\bilboard_revolucion.p3d";
	};
	class CUP_A1_Bilboard_Revolucion_bez_noh: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_Revolucion_bez_noh";
		model = "ca\misc\bilboard_revolucion_bez_noh.p3d";
	};
	class CUP_A1_Bilboard_Riviera: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_Riviera";
		model = "ca\misc\bilboard_riviera.p3d";
	};
	class CUP_A1_Bilboard_test: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_test";
		model = "ca\misc\bilboard_test.p3d";
	};
	class CUP_A1_Bilboard_Traidores: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_Traidores";
		model = "ca\misc\bilboard_traidores.p3d";
	};
	class CUP_A1_Bilboard_work: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Bilboard_work";
		model = "ca\misc\bilboard_work.p3d";
	};
	class CUP_A1_brana: CUP_A1_Misc
	{
		scope = 2;
		displayName = "brana";
		model = "ca\misc\brana.p3d";
	};
	class CUP_A1_bvp1T: CUP_A1_Misc
	{
		scope = 2;
		displayName = "bvp1T";
		model = "ca\misc\bvp1t.p3d";
	};
	class CUP_A1_carnakrychle: CUP_A1_Misc
	{
		scope = 2;
		displayName = "carnakrychle";
		model = "ca\misc\carnakrychle.p3d";
	};
	class CUP_A1_ClutterCutter: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ClutterCutter";
		model = "ca\misc\cluttercutter.p3d";
	};
	class CUP_A1_container: CUP_A1_Misc
	{
		scope = 2;
		displayName = "container";
		model = "ca\misc\container.p3d";
	};
	class CUP_A1_container2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "container2";
		model = "ca\misc\container2.p3d";
	};
	class CUP_A1_Danger: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Danger!";
		model = "ca\misc\danger!.p3d";
	};
	class CUP_A1_Danger_res: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Danger_res";
		model = "ca\misc\danger_res.p3d";
	};
	class CUP_A1_Danger_rus: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Danger_rus";
		model = "ca\misc\danger_rus.p3d";
	};
	class CUP_A1_Danger_us: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Danger_us";
		model = "ca\misc\danger_us.p3d";
	};
	class CUP_A1_datsun01T: CUP_A1_Misc
	{
		scope = 2;
		displayName = "datsun01T";
		model = "ca\misc\datsun01t.p3d";
	};
	class CUP_A1_datsun01T_spodok: CUP_A1_Misc
	{
		scope = 2;
		displayName = "datsun01T_spodok";
		model = "ca\misc\datsun01t_spodok.p3d";
	};
	class CUP_A1_datsun02T: CUP_A1_Misc
	{
		scope = 2;
		displayName = "datsun02T";
		model = "ca\misc\datsun02t.p3d";
	};
	class CUP_A1_deka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "deka";
		model = "ca\misc\deka.p3d";
	};
	class CUP_A1_drat: CUP_A1_Misc
	{
		scope = 2;
		displayName = "drat";
		model = "ca\misc\drat.p3d";
	};
	class CUP_A1_drevena_bedna: CUP_A1_Misc
	{
		scope = 2;
		displayName = "drevena_bedna";
		model = "ca\misc\drevena_bedna.p3d";
	};
	class CUP_A1_Drevo_hromada: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Drevo_hromada";
		model = "ca\misc\drevo_hromada.p3d";
	};
	class CUP_A1_Drevtank: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Drevtank";
		model = "ca\misc\drevtank.p3d";
	};
	class CUP_A1_Drevtank_ruin: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Drevtank_ruin";
		model = "ca\misc\drevtank_ruin.p3d";
	};
	class CUP_A1_empty: CUP_A1_Misc
	{
		scope = 2;
		displayName = "empty";
		model = "ca\misc\empty.p3d";
	};
	class CUP_A1_flags: CUP_A1_Misc
	{
		scope = 2;
		displayName = "flags";
		model = "ca\misc\flags.p3d";
	};
	class CUP_A1_flag_stozar: CUP_A1_Misc
	{
		scope = 2;
		displayName = "flag_stozar";
		model = "ca\misc\flag_stozar.p3d";
	};
	class CUP_A1_flasa_1: CUP_A1_Misc
	{
		scope = 2;
		displayName = "flasa_1";
		model = "ca\misc\flasa_1.p3d";
	};
	class CUP_A1_flasa_2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "flasa_2";
		model = "ca\misc\flasa_2.p3d";
	};
	class CUP_A1_flasa_3: CUP_A1_Misc
	{
		scope = 2;
		displayName = "flasa_3";
		model = "ca\misc\flasa_3.p3d";
	};
	class CUP_A1_Fot_Cara: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Fot_Cara";
		model = "ca\misc\fot_cara.p3d";
	};
	class CUP_A1_Fot_Kruh: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Fot_Kruh";
		model = "ca\misc\fot_kruh.p3d";
	};
	class CUP_A1_Fot_Roh: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Fot_Roh";
		model = "ca\misc\fot_roh.p3d";
	};
	class CUP_A1_Fuel_tank_big: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Fuel_tank_big";
		model = "ca\misc\fuel_tank_big.p3d";
	};
	class CUP_A1_fuel_tank_small: CUP_A1_Misc
	{
		scope = 2;
		displayName = "fuel_tank_small";
		model = "ca\misc\fuel_tank_small.p3d";
	};
	class CUP_A1_Fuel_tank_stairs: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Fuel_tank_stairs";
		model = "ca\misc\fuel_tank_stairs.p3d";
	};
	class CUP_A1_garbage_misc: CUP_A1_Misc
	{
		scope = 2;
		displayName = "garbage_misc";
		model = "ca\misc\garbage_misc.p3d";
	};
	class CUP_A1_garbage_paleta: CUP_A1_Misc
	{
		scope = 2;
		displayName = "garbage_paleta";
		model = "ca\misc\garbage_paleta.p3d";
	};
	class CUP_A1_ground_garbage_long: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ground_garbage_long";
		model = "ca\misc\ground_garbage_long.p3d";
	};
	class CUP_A1_ground_garbage_square3: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ground_garbage_square3";
		model = "ca\misc\ground_garbage_square3.p3d";
	};
	class CUP_A1_ground_garbage_square5: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ground_garbage_square5";
		model = "ca\misc\ground_garbage_square5.p3d";
	};
	class CUP_A1_Heli_H: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Heli_H";
		model = "ca\misc\heli_h.p3d";
	};
	class CUP_A1_Heli_H_army: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Heli_H_army";
		model = "ca\misc\heli_h_army.p3d";
	};
	class CUP_A1_Heli_H_civil: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Heli_H_civil";
		model = "ca\misc\heli_h_civil.p3d";
	};
	class CUP_A1_Heli_H_rescue: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Heli_H_rescue";
		model = "ca\misc\heli_h_rescue.p3d";
	};
	class CUP_A1_HiddenPath_5: CUP_A1_Misc
	{
		scope = 2;
		displayName = "HiddenPath_5";
		model = "ca\misc\hiddenpath_5.p3d";
	};
	class CUP_A1_HiddenPath_corner: CUP_A1_Misc
	{
		scope = 2;
		displayName = "HiddenPath_corner";
		model = "ca\misc\hiddenpath_corner.p3d";
	};
	class CUP_A1_hiluxT: CUP_A1_Misc
	{
		scope = 2;
		displayName = "hiluxT";
		model = "ca\misc\hiluxt.p3d";
	};
	class CUP_A1_Houpacka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Houpacka";
		model = "ca\misc\houpacka.p3d";
	};
	class CUP_A1_JeepT: CUP_A1_Misc
	{
		scope = 2;
		displayName = "JeepT";
		model = "ca\misc\jeept.p3d";
	};
	class CUP_A1_JeepT_horeznacky: CUP_A1_Misc
	{
		scope = 2;
		displayName = "JeepT_horeznacky";
		model = "ca\misc\jeept_horeznacky.p3d";
	};
	class CUP_A1_JeepT_tanker: CUP_A1_Misc
	{
		scope = 2;
		displayName = "JeepT_tanker";
		model = "ca\misc\jeept_tanker.p3d";
	};
	class CUP_A1_jehlan_cs: CUP_A1_Misc
	{
		scope = 2;
		displayName = "jehlan_cs";
		model = "ca\misc\jehlan_cs.p3d";
	};
	class CUP_A1_jezekbeton: CUP_A1_Misc
	{
		scope = 2;
		displayName = "jezekbeton";
		model = "ca\misc\jezekbeton.p3d";
	};
	class CUP_A1_jezek_kov: CUP_A1_Misc
	{
		scope = 2;
		displayName = "jezek_kov";
		model = "ca\misc\jezek_kov.p3d";
	};
	class CUP_A1_junkpile: CUP_A1_Misc
	{
		scope = 2;
		displayName = "junkpile";
		model = "ca\misc\junkpile.p3d";
	};
	class CUP_A1_Kolotoc: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Kolotoc";
		model = "ca\misc\kolotoc.p3d";
	};
	class CUP_A1_Kontejner: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Kontejner";
		model = "ca\misc\kontejner.p3d";
	};
	class CUP_A1_Kontejner_papir: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Kontejner_papir";
		model = "ca\misc\kontejner_papir.p3d";
	};
	class CUP_A1_Kontejner_plasty: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Kontejner_plasty";
		model = "ca\misc\kontejner_plasty.p3d";
	};
	class CUP_A1_Kontejner_sklo: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Kontejner_sklo";
		model = "ca\misc\kontejner_sklo.p3d";
	};
	class CUP_A1_KOSEI: CUP_A1_Misc
	{
		scope = 2;
		displayName = "KOSEI";
		model = "ca\misc\kosei.p3d";
	};
	class CUP_A1_Kulata_prolezacka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Kulata_prolezacka";
		model = "ca\misc\kulata_prolezacka.p3d";
	};
	class CUP_A1_kusplechu3: CUP_A1_Misc
	{
		scope = 2;
		displayName = "kusplechu3";
		model = "ca\misc\kusplechu3.p3d";
	};
	class CUP_A1_ladder: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ladder";
		model = "ca\misc\ladder.p3d";
	};
	class CUP_A1_ladder_half: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ladder_half";
		model = "ca\misc\ladder_half.p3d";
	};
	class CUP_A1_lekarnika_proxy: CUP_A1_Misc
	{
		scope = 2;
		displayName = "lekarnika_proxy";
		model = "ca\misc\lekarnika_proxy.p3d";
	};
	class CUP_A1_leseni_barvy: CUP_A1_Misc
	{
		scope = 2;
		displayName = "leseni_barvy";
		model = "ca\misc\leseni_barvy.p3d";
	};
	class CUP_A1_m113T: CUP_A1_Misc
	{
		scope = 2;
		displayName = "m113T";
		model = "ca\misc\m113t.p3d";
	};
	class CUP_A1_MailBoxNorth: CUP_A1_Misc
	{
		scope = 2;
		displayName = "MailBoxNorth";
		model = "ca\misc\mailboxnorth.p3d";
	};
	class CUP_A1_MailBoxSouth: CUP_A1_Misc
	{
		scope = 2;
		displayName = "MailBoxSouth";
		model = "ca\misc\mailboxsouth.p3d";
	};
	class CUP_A1_Maly_Kolotoc: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Maly_Kolotoc";
		model = "ca\misc\maly_kolotoc.p3d";
	};
	class CUP_A1_Mrtvola_Army1: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Mrtvola_Army1";
		model = "ca\misc\mrtvola_army1.p3d";
	};
	class CUP_A1_Mrtvola_Army2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Mrtvola_Army2";
		model = "ca\misc\mrtvola_army2.p3d";
	};
	class CUP_A1_Mrtvola_Army3: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Mrtvola_Army3";
		model = "ca\misc\mrtvola_army3.p3d";
	};
	class CUP_A1_mutt_vysilacka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "mutt_vysilacka";
		model = "ca\misc\mutt_vysilacka.p3d";
	};
	class CUP_A1_nastenkaX: CUP_A1_Misc
	{
		scope = 2;
		displayName = "nastenkaX";
		model = "ca\misc\nastenkax.p3d";
	};
	class CUP_A1_obihacka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "obihacka";
		model = "ca\misc\obihacka.p3d";
	};
	class CUP_A1_Odpadkovy_kos: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Odpadkovy_kos";
		model = "ca\misc\odpadkovy_kos.p3d";
	};
	class CUP_A1_ohniste: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ohniste";
		model = "ca\misc\ohniste.p3d";
	};
	class CUP_A1_ohniste_nehorici: CUP_A1_Misc
	{
		scope = 2;
		displayName = "ohniste_nehorici";
		model = "ca\misc\ohniste_nehorici.p3d";
	};
	class CUP_A1_Ohrada_popelnice: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Ohrada_popelnice";
		model = "ca\misc\ohrada_popelnice.p3d";
	};
	class CUP_A1_Ohrada_popelnice_roh: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Ohrada_popelnice_roh";
		model = "ca\misc\ohrada_popelnice_roh.p3d";
	};
	class CUP_A1_paletaA: CUP_A1_Misc
	{
		scope = 2;
		displayName = "paletaA";
		model = "ca\misc\paletaa.p3d";
	};
	class CUP_A1_paletyC: CUP_A1_Misc
	{
		scope = 2;
		displayName = "paletyC";
		model = "ca\misc\paletyc.p3d";
	};
	class CUP_A1_paletyD: CUP_A1_Misc
	{
		scope = 2;
		displayName = "paletyD";
		model = "ca\misc\paletyd.p3d";
	};
	class CUP_A1_Patnik: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Patnik";
		model = "ca\misc\patnik.p3d";
	};
	class CUP_A1_Patniky: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Patniky";
		model = "ca\misc\patniky.p3d";
	};
	class CUP_A1_pa_sx: CUP_A1_Misc
	{
		scope = 2;
		displayName = "pa_sx";
		model = "ca\misc\pa_sx.p3d";
	};
	class CUP_A1_PC: CUP_A1_Misc
	{
		scope = 2;
		displayName = "PC";
		model = "ca\misc\pc.p3d";
	};
	class CUP_A1_phone_box_north: CUP_A1_Misc
	{
		scope = 2;
		displayName = "phone_box_north";
		model = "ca\misc\phone_box_north.p3d";
	};
	class CUP_A1_phone_box_south: CUP_A1_Misc
	{
		scope = 2;
		displayName = "phone_box_south";
		model = "ca\misc\phone_box_south.p3d";
	};
	class CUP_A1_Piskoviste: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Piskoviste";
		model = "ca\misc\piskoviste.p3d";
	};
	class CUP_A1_Plastovy_patnik: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Plastovy_patnik";
		model = "ca\misc\plastovy_patnik.p3d";
	};
	class CUP_A1_plechovka_1: CUP_A1_Misc
	{
		scope = 2;
		displayName = "plechovka_1";
		model = "ca\misc\plechovka_1.p3d";
	};
	class CUP_A1_plechovka_2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "plechovka_2";
		model = "ca\misc\plechovka_2.p3d";
	};
	class CUP_A1_plechovka_3: CUP_A1_Misc
	{
		scope = 2;
		displayName = "plechovka_3";
		model = "ca\misc\plechovka_3.p3d";
	};
	class CUP_A1_podlejzacka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "podlejzacka";
		model = "ca\misc\podlejzacka.p3d";
	};
	class CUP_A1_podprapornik: CUP_A1_Misc
	{
		scope = 2;
		displayName = "podprapornik";
		model = "ca\misc\podprapornik.p3d";
	};
	class CUP_A1_pond: CUP_A1_Misc
	{
		scope = 2;
		displayName = "pond";
		model = "ca\misc\pond.p3d";
	};
	class CUP_A1_popelnice: CUP_A1_Misc
	{
		scope = 2;
		displayName = "popelnice";
		model = "ca\misc\popelnice.p3d";
	};
	class CUP_A1_popelnice_2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "popelnice_2";
		model = "ca\misc\popelnice_2.p3d";
	};
	class CUP_A1_prebehlavka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "prebehlavka";
		model = "ca\misc\prebehlavka.p3d";
	};
	class CUP_A1_prolejzacka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "prolejzacka";
		model = "ca\misc\prolejzacka.p3d";
	};
	class CUP_A1_proxykostka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "proxykostka";
		model = "ca\misc\proxykostka.p3d";
	};
	class CUP_A1_proxy_FLAG: CUP_A1_Misc
	{
		scope = 2;
		displayName = "proxy_FLAG";
		model = "ca\misc\proxy_flag.p3d";
	};
	class CUP_A1_pytle: CUP_A1_Misc
	{
		scope = 2;
		displayName = "pytle";
		model = "ca\misc\pytle.p3d";
	};
	class CUP_A1_Pytle_BSL: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Pytle_BSL";
		model = "ca\misc\pytle_bsl.p3d";
	};
	class CUP_A1_pytle_palet: CUP_A1_Misc
	{
		scope = 2;
		displayName = "pytle_palet";
		model = "ca\misc\pytle_palet.p3d";
	};
	class CUP_A1_radio: CUP_A1_Misc
	{
		scope = 2;
		displayName = "radio";
		model = "ca\misc\radio.p3d";
	};
	class CUP_A1_radio2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "radio2";
		model = "ca\misc\radio2.p3d";
	};
	class CUP_A1_sekyraspalek: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sekyraspalek";
		model = "ca\misc\sekyraspalek.p3d";
	};
	class CUP_A1_seno_balik: CUP_A1_Misc
	{
		scope = 2;
		displayName = "seno_balik";
		model = "ca\misc\seno_balik.p3d";
	};
	class CUP_A1_Sign150x50_North01: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign150x50_North01";
		model = "ca\misc\sign150x50_north01.p3d";
	};
	class CUP_A1_Sign150x50_North02: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign150x50_North02";
		model = "ca\misc\sign150x50_north02.p3d";
	};
	class CUP_A1_Sign150x50_South01: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign150x50_South01";
		model = "ca\misc\sign150x50_south01.p3d";
	};
	class CUP_A1_Sign150x50_South02: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign150x50_South02";
		model = "ca\misc\sign150x50_south02.p3d";
	};
	class CUP_A1_Sign150x50_South03: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign150x50_South03";
		model = "ca\misc\sign150x50_south03.p3d";
	};
	class CUP_A1_Sign300x90_North01: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign300x90_North01";
		model = "ca\misc\sign300x90_north01.p3d";
	};
	class CUP_A1_Sign300x90_North02: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign300x90_North02";
		model = "ca\misc\sign300x90_north02.p3d";
	};
	class CUP_A1_Sign300x90_South01: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign300x90_South01";
		model = "ca\misc\sign300x90_south01.p3d";
	};
	class CUP_A1_Sign300x90_South02: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign300x90_South02";
		model = "ca\misc\sign300x90_south02.p3d";
	};
	class CUP_A1_Sign300x90_South03: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign300x90_South03";
		model = "ca\misc\sign300x90_south03.p3d";
	};
	class CUP_A1_Sign40x120_North01: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign40x120_North01";
		model = "ca\misc\sign40x120_north01.p3d";
	};
	class CUP_A1_Sign40x120_South01: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign40x120_South01";
		model = "ca\misc\sign40x120_south01.p3d";
	};
	class CUP_A1_Sign40x120_South02: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign40x120_South02";
		model = "ca\misc\sign40x120_south02.p3d";
	};
	class CUP_A1_Sign40x120_South03: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sign40x120_South03";
		model = "ca\misc\sign40x120_south03.p3d";
	};
	class CUP_A1_sloupyelA: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloupyelA";
		model = "ca\misc\sloupyela.p3d";
	};
	class CUP_A1_sloupyelE: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloupyelE";
		model = "ca\misc\sloupyele.p3d";
	};
	class CUP_A1_sloupyelI: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloupyelI";
		model = "ca\misc\sloupyeli.p3d";
	};
	class CUP_A1_sloup_vn: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloup_vn";
		model = "ca\misc\sloup_vn.p3d";
	};
	class CUP_A1_sloup_vn_drat: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloup_vn_drat";
		model = "ca\misc\sloup_vn_drat.p3d";
	};
	class CUP_A1_sloup_vn_dratZ: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloup_vn_dratZ";
		model = "ca\misc\sloup_vn_dratz.p3d";
	};
	class CUP_A1_sloup_vn_dratZL: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloup_vn_dratZL";
		model = "ca\misc\sloup_vn_dratzl.p3d";
	};
	class CUP_A1_sloup_vn_dratZP: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sloup_vn_dratZP";
		model = "ca\misc\sloup_vn_dratzp.p3d";
	};
	class CUP_A1_sluchatko_proxy: CUP_A1_Misc
	{
		scope = 2;
		displayName = "sluchatko_proxy";
		model = "ca\misc\sluchatko_proxy.p3d";
	};
	class CUP_A1_Slunecnik_a: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Slunecnik_a";
		model = "ca\misc\slunecnik_a.p3d";
	};
	class CUP_A1_Slunecnik_b: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Slunecnik_b";
		model = "ca\misc\slunecnik_b.p3d";
	};
	class CUP_A1_Slunecnik_c: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Slunecnik_c";
		model = "ca\misc\slunecnik_c.p3d";
	};
	class CUP_A1_Slunecnik_d: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Slunecnik_d";
		model = "ca\misc\slunecnik_d.p3d";
	};
	class CUP_A1_socha: CUP_A1_Misc
	{
		scope = 2;
		displayName = "socha";
		model = "ca\misc\socha.p3d";
	};
	class CUP_A1_Spacak: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Spacak";
		model = "ca\misc\spacak.p3d";
	};
	class CUP_A1_Sphere: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sphere";
		model = "ca\misc\sphere.p3d";
	};
	class CUP_A1_Sphere2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sphere2";
		model = "ca\misc\sphere2.p3d";
	};
	class CUP_A1_Strelecky_post_new: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Strelecky_post_new";
		model = "ca\misc\strelecky_post_new.p3d";
	};
	class CUP_A1_strel_post: CUP_A1_Misc
	{
		scope = 2;
		displayName = "strel_post";
		model = "ca\misc\strel_post.p3d";
	};
	class CUP_A1_strel_post_panel: CUP_A1_Misc
	{
		scope = 2;
		displayName = "strel_post_panel";
		model = "ca\misc\strel_post_panel.p3d";
	};
	class CUP_A1_Svodidla: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Svodidla";
		model = "ca\misc\svodidla.p3d";
	};
	class CUP_A1_Svodidla_5m: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Svodidla_5m";
		model = "ca\misc\svodidla_5m.p3d";
	};
	class CUP_A1_terc: CUP_A1_Misc
	{
		scope = 2;
		displayName = "terc";
		model = "ca\misc\terc.p3d";
	};
	class CUP_A1_Terc_Postava: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Terc_Postava";
		model = "ca\misc\terc_postava.p3d";
	};
	class CUP_A1_TVstudio: CUP_A1_Misc
	{
		scope = 2;
		displayName = "TVstudio";
		model = "ca\misc\tvstudio.p3d";
	};
	class CUP_A1_UH60_Crashed: CUP_A1_Misc
	{
		scope = 2;
		displayName = "UH60_Crashed";
		model = "ca\misc\uh60_crashed.p3d";
	};
	class CUP_A1_uralT: CUP_A1_Misc
	{
		scope = 2;
		displayName = "uralT";
		model = "ca\misc\uralt.p3d";
	};
	class CUP_A1_uzaverka: CUP_A1_Misc
	{
		scope = 2;
		displayName = "uzaverka";
		model = "ca\misc\uzaverka.p3d";
	};
	class CUP_A1_vasi: CUP_A1_Misc
	{
		scope = 2;
		displayName = "vasi";
		model = "ca\misc\vasi.p3d";
	};
	class CUP_A1_vasiUpwind: CUP_A1_Misc
	{
		scope = 2;
		displayName = "vasiUpwind";
		model = "ca\misc\vasiupwind.p3d";
	};
	class CUP_A1_vez_ropa: CUP_A1_Misc
	{
		scope = 2;
		displayName = "vez_ropa";
		model = "ca\misc\vez_ropa.p3d";
	};
	class CUP_A1_vlajkstozar: CUP_A1_Misc
	{
		scope = 2;
		displayName = "vlajkstozar";
		model = "ca\misc\vlajkstozar.p3d";
	};
	class CUP_A1_water_tank: CUP_A1_Misc
	{
		scope = 2;
		displayName = "water_tank";
		model = "ca\misc\water_tank.p3d";
	};
	class CUP_A1_water_tank2: CUP_A1_Misc
	{
		scope = 2;
		displayName = "water_tank2";
		model = "ca\misc\water_tank2.p3d";
	};
	class CUP_A1_Zastavka_stojan: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Zastavka_stojan";
		model = "ca\misc\zastavka_stojan.p3d";
	};
	class CUP_A1_zidka_klek: CUP_A1_Misc
	{
		scope = 2;
		displayName = "zidka_klek";
		model = "ca\misc\zidka_klek.p3d";
	};
	class CUP_A1_zidka_stani: CUP_A1_Misc
	{
		scope = 2;
		displayName = "zidka_stani";
		model = "ca\misc\zidka_stani.p3d";
	};
	class CUP_A1_Sidewalk6Clear: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6Clear";
		model = "ca\misc\sidewalks\sidewalk6clear.p3d";
	};
	class CUP_A1_Sidewalk6ClearLong: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6ClearLong";
		model = "ca\misc\sidewalks\sidewalk6clearlong.p3d";
	};
	class CUP_A1_Sidewalk6ClearMiddle: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6ClearMiddle";
		model = "ca\misc\sidewalks\sidewalk6clearmiddle.p3d";
	};
	class CUP_A1_Sidewalk6ClearShort: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6ClearShort";
		model = "ca\misc\sidewalks\sidewalk6clearshort.p3d";
	};
	class CUP_A1_Sidewalk6Corner: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6Corner";
		model = "ca\misc\sidewalks\sidewalk6corner.p3d";
	};
	class CUP_A1_Sidewalk6Crossing: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6Crossing";
		model = "ca\misc\sidewalks\sidewalk6crossing.p3d";
	};
	class CUP_A1_Sidewalk6CrossingT: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6CrossingT";
		model = "ca\misc\sidewalks\sidewalk6crossingt.p3d";
	};
	class CUP_A1_Sidewalk6ShortEnd: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6ShortEnd";
		model = "ca\misc\sidewalks\sidewalk6shortend.p3d";
	};
	class CUP_A1_Sidewalk6Turn10deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6Turn10deg";
		model = "ca\misc\sidewalks\sidewalk6turn10deg.p3d";
	};
	class CUP_A1_Sidewalk6Turn20deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6Turn20deg";
		model = "ca\misc\sidewalks\sidewalk6turn20deg.p3d";
	};
	class CUP_A1_Sidewalk6Turn30deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6Turn30deg";
		model = "ca\misc\sidewalks\sidewalk6turn30deg.p3d";
	};
	class CUP_A1_Sidewalk6Turn5deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "Sidewalk6Turn5deg";
		model = "ca\misc\sidewalks\sidewalk6turn5deg.p3d";
	};
	class CUP_A1_SidewalkClear: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkClear";
		model = "ca\misc\sidewalks\sidewalkclear.p3d";
	};
	class CUP_A1_SidewalkClearLong: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkClearLong";
		model = "ca\misc\sidewalks\sidewalkclearlong.p3d";
	};
	class CUP_A1_SidewalkClearMiddle: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkClearMiddle";
		model = "ca\misc\sidewalks\sidewalkclearmiddle.p3d";
	};
	class CUP_A1_SidewalkClearShort: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkClearShort";
		model = "ca\misc\sidewalks\sidewalkclearshort.p3d";
	};
	class CUP_A1_SidewalkCorner: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkCorner";
		model = "ca\misc\sidewalks\sidewalkcorner.p3d";
	};
	class CUP_A1_SidewalkCrossing: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkCrossing";
		model = "ca\misc\sidewalks\sidewalkcrossing.p3d";
	};
	class CUP_A1_SidewalkCrossingT: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkCrossingT";
		model = "ca\misc\sidewalks\sidewalkcrossingt.p3d";
	};
	class CUP_A1_SidewalkSClear: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSClear";
		model = "ca\misc\sidewalks\sidewalksclear.p3d";
	};
	class CUP_A1_SidewalkSClearLong: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSClearLong";
		model = "ca\misc\sidewalks\sidewalksclearlong.p3d";
	};
	class CUP_A1_SidewalkSClearMiddle: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSClearMiddle";
		model = "ca\misc\sidewalks\sidewalksclearmiddle.p3d";
	};
	class CUP_A1_SidewalkSClearShort: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSClearShort";
		model = "ca\misc\sidewalks\sidewalksclearshort.p3d";
	};
	class CUP_A1_SidewalkSCorner: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSCorner";
		model = "ca\misc\sidewalks\sidewalkscorner.p3d";
	};
	class CUP_A1_SidewalkSCrossing: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSCrossing";
		model = "ca\misc\sidewalks\sidewalkscrossing.p3d";
	};
	class CUP_A1_SidewalkSCrossingT: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSCrossingT";
		model = "ca\misc\sidewalks\sidewalkscrossingt.p3d";
	};
	class CUP_A1_SidewalkShortEnd: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkShortEnd";
		model = "ca\misc\sidewalks\sidewalkshortend.p3d";
	};
	class CUP_A1_SidewalkSShortEnd: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSShortEnd";
		model = "ca\misc\sidewalks\sidewalksshortend.p3d";
	};
	class CUP_A1_SidewalkSTurn10deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSTurn10deg";
		model = "ca\misc\sidewalks\sidewalksturn10deg.p3d";
	};
	class CUP_A1_SidewalkSTurn20deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSTurn20deg";
		model = "ca\misc\sidewalks\sidewalksturn20deg.p3d";
	};
	class CUP_A1_SidewalkSTurn30deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSTurn30deg";
		model = "ca\misc\sidewalks\sidewalksturn30deg.p3d";
	};
	class CUP_A1_SidewalkSTurn5deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSTurn5deg";
		model = "ca\misc\sidewalks\sidewalksturn5deg.p3d";
	};
	class CUP_A1_SidewalkSVRClear: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRClear";
		model = "ca\misc\sidewalks\sidewalksvrclear.p3d";
	};
	class CUP_A1_SidewalkSVRClearLong: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRClearLong";
		model = "ca\misc\sidewalks\sidewalksvrclearlong.p3d";
	};
	class CUP_A1_SidewalkSVRClearMiddle: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRClearMiddle";
		model = "ca\misc\sidewalks\sidewalksvrclearmiddle.p3d";
	};
	class CUP_A1_SidewalkSVRClearShort: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRClearShort";
		model = "ca\misc\sidewalks\sidewalksvrclearshort.p3d";
	};
	class CUP_A1_SidewalkSVRCorner: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRCorner";
		model = "ca\misc\sidewalks\sidewalksvrcorner.p3d";
	};
	class CUP_A1_SidewalkSVRCrossing: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRCrossing";
		model = "ca\misc\sidewalks\sidewalksvrcrossing.p3d";
	};
	class CUP_A1_SidewalkSVRCrossingT: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRCrossingT";
		model = "ca\misc\sidewalks\sidewalksvrcrossingt.p3d";
	};
	class CUP_A1_SidewalkSVRShortEnd: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRShortEnd";
		model = "ca\misc\sidewalks\sidewalksvrshortend.p3d";
	};
	class CUP_A1_SidewalkSVRTurn10deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRTurn10deg";
		model = "ca\misc\sidewalks\sidewalksvrturn10deg.p3d";
	};
	class CUP_A1_SidewalkSVRTurn20deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRTurn20deg";
		model = "ca\misc\sidewalks\sidewalksvrturn20deg.p3d";
	};
	class CUP_A1_SidewalkSVRTurn30deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRTurn30deg";
		model = "ca\misc\sidewalks\sidewalksvrturn30deg.p3d";
	};
	class CUP_A1_SidewalkSVRTurn5deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkSVRTurn5deg";
		model = "ca\misc\sidewalks\sidewalksvrturn5deg.p3d";
	};
	class CUP_A1_SidewalkTurn10deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkTurn10deg";
		model = "ca\misc\sidewalks\sidewalkturn10deg.p3d";
	};
	class CUP_A1_SidewalkTurn20deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkTurn20deg";
		model = "ca\misc\sidewalks\sidewalkturn20deg.p3d";
	};
	class CUP_A1_SidewalkTurn30deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkTurn30deg";
		model = "ca\misc\sidewalks\sidewalkturn30deg.p3d";
	};
	class CUP_A1_SidewalkTurn5deg: CUP_A1_Misc
	{
		scope = 2;
		displayName = "SidewalkTurn5deg";
		model = "ca\misc\sidewalks\sidewalkturn5deg.p3d";
	};
	class CUP_A1_Akat02S: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Akat02S";
		model = "ca\plants\akat02s.p3d";
	};
	class CUP_A1_banana_2: CUP_A1_Plants
	{
		scope = 2;
		displayName = "banana_2";
		model = "ca\plants\banana_2.p3d";
	};
	class CUP_A1_banana_3: CUP_A1_Plants
	{
		scope = 2;
		displayName = "banana_3";
		model = "ca\plants\banana_3.p3d";
	};
	class CUP_A1_banana_4: CUP_A1_Plants
	{
		scope = 2;
		displayName = "banana_4";
		model = "ca\plants\banana_4.p3d";
	};
	class CUP_A1_bodlak_group: CUP_A1_Plants
	{
		scope = 2;
		displayName = "bodlak_group";
		model = "ca\plants\bodlak_group.p3d";
	};
	class CUP_A1_bolsevnik_group: CUP_A1_Plants
	{
		scope = 2;
		displayName = "bolsevnik_group";
		model = "ca\plants\bolsevnik_group.p3d";
	};
	class CUP_A1_clutter_babka: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_babka";
		model = "ca\plants\clutter_babka.p3d";
	};
	class CUP_A1_clutter_flower_mix: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_flower_mix";
		model = "ca\plants\clutter_flower_mix.p3d";
	};
	class CUP_A1_clutter_forest_fern: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_forest_fern";
		model = "ca\plants\clutter_forest_fern.p3d";
	};
	class CUP_A1_clutter_grass_desert: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_grass_desert";
		model = "ca\plants\clutter_grass_desert.p3d";
	};
	class CUP_A1_clutter_grass_flowers: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_grass_flowers";
		model = "ca\plants\clutter_grass_flowers.p3d";
	};
	class CUP_A1_clutter_grass_general: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_grass_general";
		model = "ca\plants\clutter_grass_general.p3d";
	};
	class CUP_A1_clutter_grass_long: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_grass_long";
		model = "ca\plants\clutter_grass_long.p3d";
	};
	class CUP_A1_clutter_grass_sevenbaeuty: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_grass_sevenbaeuty";
		model = "ca\plants\clutter_grass_sevenbaeuty.p3d";
	};
	class CUP_A1_clutter_grass_short: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_grass_short";
		model = "ca\plants\clutter_grass_short.p3d";
	};
	class CUP_A1_clutter_grass_yellow: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_grass_yellow";
		model = "ca\plants\clutter_grass_yellow.p3d";
	};
	class CUP_A1_clutter_horcak: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_horcak";
		model = "ca\plants\clutter_horcak.p3d";
	};
	class CUP_A1_clutter_muchomurka: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_muchomurka";
		model = "ca\plants\clutter_muchomurka.p3d";
	};
	class CUP_A1_clutter_prasivky: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_prasivky";
		model = "ca\plants\clutter_prasivky.p3d";
	};
	class CUP_A1_clutter_smetanka: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_smetanka";
		model = "ca\plants\clutter_smetanka.p3d";
	};
	class CUP_A1_clutter_trava_dlouha: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_trava_dlouha";
		model = "ca\plants\clutter_trava_dlouha.p3d";
	};
	class CUP_A1_clutter_white_flower: CUP_A1_Plants
	{
		scope = 2;
		displayName = "clutter_white_flower";
		model = "ca\plants\clutter_white_flower.p3d";
	};
	class CUP_A1_DD_borovice: CUP_A1_Plants
	{
		scope = 2;
		displayName = "DD_borovice";
		model = "ca\plants\dd_borovice.p3d";
	};
	class CUP_A1_DD_borovice02: CUP_A1_Plants
	{
		scope = 2;
		displayName = "DD_borovice02";
		model = "ca\plants\dd_borovice02.p3d";
	};
	class CUP_A1_DD_bush01: CUP_A1_Plants
	{
		scope = 2;
		displayName = "DD_bush01";
		model = "ca\plants\dd_bush01.p3d";
	};
	class CUP_A1_DD_bush02: CUP_A1_Plants
	{
		scope = 2;
		displayName = "DD_bush02";
		model = "ca\plants\dd_bush02.p3d";
	};
	class CUP_A1_grass_desert: CUP_A1_Plants
	{
		scope = 2;
		displayName = "grass_desert";
		model = "ca\plants\grass_desert.p3d";
	};
	class CUP_A1_grass_general_shader: CUP_A1_Plants
	{
		scope = 2;
		displayName = "grass_general_shader";
		model = "ca\plants\grass_general_shader.p3d";
	};
	class CUP_A1_hrusen2: CUP_A1_Plants
	{
		scope = 2;
		displayName = "hrusen2";
		model = "ca\plants\hrusen2.p3d";
	};
	class CUP_A1_jablon: CUP_A1_Plants
	{
		scope = 2;
		displayName = "jablon";
		model = "ca\plants\jablon.p3d";
	};
	class CUP_A1_jitrocel_shader: CUP_A1_Plants
	{
		scope = 2;
		displayName = "jitrocel_shader";
		model = "ca\plants\jitrocel_shader.p3d";
	};
	class CUP_A1_ker_buxus: CUP_A1_Plants
	{
		scope = 2;
		displayName = "ker buxus";
		model = "ca\plants\ker buxus.p3d";
	};
	class CUP_A1_ker_deravej: CUP_A1_Plants
	{
		scope = 2;
		displayName = "ker deravej";
		model = "ca\plants\ker deravej.p3d";
	};
	class CUP_A1_ker_pichlavej: CUP_A1_Plants
	{
		scope = 2;
		displayName = "ker pichlavej";
		model = "ca\plants\ker pichlavej.p3d";
	};
	class CUP_A1_ker_s_bobulema: CUP_A1_Plants
	{
		scope = 2;
		displayName = "ker s bobulema";
		model = "ca\plants\ker s bobulema.p3d";
	};
	class CUP_A1_ker_trs_travy3: CUP_A1_Plants
	{
		scope = 2;
		displayName = "ker trs travy3";
		model = "ca\plants\ker trs travy3.p3d";
	};
	class CUP_A1_ker_trs_travy5: CUP_A1_Plants
	{
		scope = 2;
		displayName = "ker trs travy5";
		model = "ca\plants\ker trs travy5.p3d";
	};
	class CUP_A1_klady_smrk: CUP_A1_Plants
	{
		scope = 2;
		displayName = "klady_smrk";
		model = "ca\plants\klady_smrk.p3d";
	};
	class CUP_A1_kmen_1_buk: CUP_A1_Plants
	{
		scope = 2;
		displayName = "kmen_1_buk";
		model = "ca\plants\kmen_1_buk.p3d";
	};
	class CUP_A1_koprivy: CUP_A1_Plants
	{
		scope = 2;
		displayName = "koprivy";
		model = "ca\plants\koprivy.p3d";
	};
	class CUP_A1_Krovi: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Krovi";
		model = "ca\plants\krovi.p3d";
	};
	class CUP_A1_Krovi2: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Krovi2";
		model = "ca\plants\krovi2.p3d";
	};
	class CUP_A1_Krovi4: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Krovi4";
		model = "ca\plants\krovi4.p3d";
	};
	class CUP_A1_Krovi_bigest: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Krovi_bigest";
		model = "ca\plants\krovi_bigest.p3d";
	};
	class CUP_A1_Krovi_long: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Krovi_long";
		model = "ca\plants\krovi_long.p3d";
	};
	class CUP_A1_les_buk: CUP_A1_Plants
	{
		scope = 2;
		displayName = "les_buk";
		model = "ca\plants\les_buk.p3d";
	};
	class CUP_A1_les_dub: CUP_A1_Plants
	{
		scope = 2;
		displayName = "les_dub";
		model = "ca\plants\les_dub.p3d";
	};
	class CUP_A1_les_dub_jiny: CUP_A1_Plants
	{
		scope = 2;
		displayName = "les_dub_jiny";
		model = "ca\plants\les_dub_jiny.p3d";
	};
	class CUP_A1_les_fikovnik2: CUP_A1_Plants
	{
		scope = 2;
		displayName = "les_fikovnik2";
		model = "ca\plants\les_fikovnik2.p3d";
	};
	class CUP_A1_les_singlestrom: CUP_A1_Plants
	{
		scope = 2;
		displayName = "les_singlestrom";
		model = "ca\plants\les_singlestrom.p3d";
	};
	class CUP_A1_les_singlestrom_b: CUP_A1_Plants
	{
		scope = 2;
		displayName = "les_singlestrom_b";
		model = "ca\plants\les_singlestrom_b.p3d";
	};
	class CUP_A1_lopuch: CUP_A1_Plants
	{
		scope = 2;
		displayName = "lopuch";
		model = "ca\plants\lopuch.p3d";
	};
	class CUP_A1_oliva: CUP_A1_Plants
	{
		scope = 2;
		displayName = "oliva";
		model = "ca\plants\oliva.p3d";
	};
	class CUP_A1_palmTest: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palmTest";
		model = "ca\plants\palmtest.p3d";
	};
	class CUP_A1_palm_01: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palm_01";
		model = "ca\plants\palm_01.p3d";
	};
	class CUP_A1_palm_02: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palm_02";
		model = "ca\plants\palm_02.p3d";
	};
	class CUP_A1_palm_03: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palm_03";
		model = "ca\plants\palm_03.p3d";
	};
	class CUP_A1_palm_04: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palm_04";
		model = "ca\plants\palm_04.p3d";
	};
	class CUP_A1_palm_08small: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palm_08small";
		model = "ca\plants\palm_08small.p3d";
	};
	class CUP_A1_palm_09: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palm_09";
		model = "ca\plants\palm_09.p3d";
	};
	class CUP_A1_palm_10: CUP_A1_Plants
	{
		scope = 2;
		displayName = "palm_10";
		model = "ca\plants\palm_10.p3d";
	};
	class CUP_A1_parez: CUP_A1_Plants
	{
		scope = 2;
		displayName = "parez";
		model = "ca\plants\parez.p3d";
	};
	class CUP_A1_pinus_mugo_lowpoly: CUP_A1_Plants
	{
		scope = 2;
		displayName = "pinus_mugo_lowpoly";
		model = "ca\plants\pinus_mugo_lowpoly.p3d";
	};
	class CUP_A1_Smrk_maly: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Smrk_maly";
		model = "ca\plants\smrk_maly.p3d";
	};
	class CUP_A1_Smrk_siroky: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Smrk_siroky";
		model = "ca\plants\smrk_siroky.p3d";
	};
	class CUP_A1_Smrk_velky: CUP_A1_Plants
	{
		scope = 2;
		displayName = "Smrk_velky";
		model = "ca\plants\smrk_velky.p3d";
	};
	class CUP_A1_str_briza: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str briza";
		model = "ca\plants\str briza.p3d";
	};
	class CUP_A1_str_buk: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str buk";
		model = "ca\plants\str buk.p3d";
	};
	class CUP_A1_str_dub_jiny: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str dub jiny";
		model = "ca\plants\str dub jiny.p3d";
	};
	class CUP_A1_str_dub: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str dub";
		model = "ca\plants\str dub.p3d";
	};
	class CUP_A1_str_habr: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str habr";
		model = "ca\plants\str habr.p3d";
	};
	class CUP_A1_str_jalovec: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str jalovec";
		model = "ca\plants\str jalovec.p3d";
	};
	class CUP_A1_str_javor: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str javor";
		model = "ca\plants\str javor.p3d";
	};
	class CUP_A1_str_jerabina: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str jerabina";
		model = "ca\plants\str jerabina.p3d";
	};
	class CUP_A1_str_kastan: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str kastan";
		model = "ca\plants\str kastan.p3d";
	};
	class CUP_A1_str_krovisko_vysoke: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str krovisko vysoke";
		model = "ca\plants\str krovisko vysoke.p3d";
	};
	class CUP_A1_str_lipa: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str lipa";
		model = "ca\plants\str lipa.p3d";
	};
	class CUP_A1_str_osika: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str osika";
		model = "ca\plants\str osika.p3d";
	};
	class CUP_A1_str_trnka: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str trnka";
		model = "ca\plants\str trnka.p3d";
	};
	class CUP_A1_str_vrba: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str vrba";
		model = "ca\plants\str vrba.p3d";
	};
	class CUP_A1_str_Briza_kriva: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_Briza_kriva";
		model = "ca\plants\str_briza_kriva.p3d";
	};
	class CUP_A1_str_Briza_rovna: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_Briza_rovna";
		model = "ca\plants\str_briza_rovna.p3d";
	};
	class CUP_A1_str_fikovnik: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_fikovnik";
		model = "ca\plants\str_fikovnik.p3d";
	};
	class CUP_A1_str_fikovnik2: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_fikovnik2";
		model = "ca\plants\str_fikovnik2.p3d";
	};
	class CUP_A1_str_fikovnik_ker: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_fikovnik_ker";
		model = "ca\plants\str_fikovnik_ker.p3d";
	};
	class CUP_A1_str_liskac: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_liskac";
		model = "ca\plants\str_liskac.p3d";
	};
	class CUP_A1_str_pinie: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_pinie";
		model = "ca\plants\str_pinie.p3d";
	};
	class CUP_A1_str_topol: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_topol";
		model = "ca\plants\str_topol.p3d";
	};
	class CUP_A1_str_Topol2: CUP_A1_Plants
	{
		scope = 2;
		displayName = "str_Topol2";
		model = "ca\plants\str_topol2.p3d";
	};
	class CUP_A1_vetev_1_buk: CUP_A1_Plants
	{
		scope = 2;
		displayName = "vetev_1_buk";
		model = "ca\plants\vetev_1_buk.p3d";
	};
	class CUP_A1_vetev_2_dub: CUP_A1_Plants
	{
		scope = 2;
		displayName = "vetev_2_dub";
		model = "ca\plants\vetev_2_dub.p3d";
	};
	class CUP_A1_vetev_3_borovice: CUP_A1_Plants
	{
		scope = 2;
		displayName = "vetev_3_borovice";
		model = "ca\plants\vetev_3_borovice.p3d";
	};
	class CUP_A1_vetev_4_smrk: CUP_A1_Plants
	{
		scope = 2;
		displayName = "vetev_4_smrk";
		model = "ca\plants\vetev_4_smrk.p3d";
	};
	class CUP_A1_asf10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf10 100";
		model = "ca\roads\asf10 100.p3d";
	};
	class CUP_A1_asf10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf10 25";
		model = "ca\roads\asf10 25.p3d";
	};
	class CUP_A1_asf10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf10 50";
		model = "ca\roads\asf10 50.p3d";
	};
	class CUP_A1_asf10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf10 75";
		model = "ca\roads\asf10 75.p3d";
	};
	class CUP_A1_asf12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf12";
		model = "ca\roads\asf12.p3d";
	};
	class CUP_A1_asf12_var_1: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf12_var_1";
		model = "ca\roads\asf12_var_1.p3d";
	};
	class CUP_A1_asf25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf25";
		model = "ca\roads\asf25.p3d";
	};
	class CUP_A1_asf6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf6";
		model = "ca\roads\asf6.p3d";
	};
	class CUP_A1_asf6konec: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf6konec";
		model = "ca\roads\asf6konec.p3d";
	};
	class CUP_A1_asf6_prechod: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asf6_prechod";
		model = "ca\roads\asf6_prechod.p3d";
	};
	class CUP_A1_asfaltka10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfaltka10 50";
		model = "ca\roads\asfaltka10 50.p3d";
	};
	class CUP_A1_asfaltka10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfaltka10 75";
		model = "ca\roads\asfaltka10 75.p3d";
	};
	class CUP_A1_asfaltka12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfaltka12";
		model = "ca\roads\asfaltka12.p3d";
	};
	class CUP_A1_asfaltka25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfaltka25";
		model = "ca\roads\asfaltka25.p3d";
	};
	class CUP_A1_asfaltka6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfaltka6";
		model = "ca\roads\asfaltka6.p3d";
	};
	class CUP_A1_asfaltka6konec: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfaltka6konec";
		model = "ca\roads\asfaltka6konec.p3d";
	};
	class CUP_A1_asfatlka10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfatlka10 100";
		model = "ca\roads\asfatlka10 100.p3d";
	};
	class CUP_A1_asfatlka10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "asfatlka10 25";
		model = "ca\roads\asfatlka10 25.p3d";
	};
	class CUP_A1_ces10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces10 100";
		model = "ca\roads\ces10 100.p3d";
	};
	class CUP_A1_ces10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces10 25";
		model = "ca\roads\ces10 25.p3d";
	};
	class CUP_A1_ces10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces10 50";
		model = "ca\roads\ces10 50.p3d";
	};
	class CUP_A1_ces10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces10 75";
		model = "ca\roads\ces10 75.p3d";
	};
	class CUP_A1_ces12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces12";
		model = "ca\roads\ces12.p3d";
	};
	class CUP_A1_ces25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces25";
		model = "ca\roads\ces25.p3d";
	};
	class CUP_A1_ces6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces6";
		model = "ca\roads\ces6.p3d";
	};
	class CUP_A1_ces6konec: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces6konec";
		model = "ca\roads\ces6konec.p3d";
	};
	class CUP_A1_ces_d10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d10 100";
		model = "ca\roads\ces_d10 100.p3d";
	};
	class CUP_A1_ces_d10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d10 25";
		model = "ca\roads\ces_d10 25.p3d";
	};
	class CUP_A1_ces_d10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d10 50";
		model = "ca\roads\ces_d10 50.p3d";
	};
	class CUP_A1_ces_d10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d10 75";
		model = "ca\roads\ces_d10 75.p3d";
	};
	class CUP_A1_ces_d12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d12";
		model = "ca\roads\ces_d12.p3d";
	};
	class CUP_A1_ces_d25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d25";
		model = "ca\roads\ces_d25.p3d";
	};
	class CUP_A1_ces_d6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d6";
		model = "ca\roads\ces_d6.p3d";
	};
	class CUP_A1_ces_d6konec: CUP_A1_Roads
	{
		scope = 2;
		displayName = "ces_d6konec";
		model = "ca\roads\ces_d6konec.p3d";
	};
	class CUP_A1_dalnice_18: CUP_A1_Roads
	{
		scope = 2;
		displayName = "dalnice_18";
		model = "ca\roads\dalnice_18.p3d";
	};
	class CUP_A1_dalnice_18_redukce: CUP_A1_Roads
	{
		scope = 2;
		displayName = "dalnice_18_redukce";
		model = "ca\roads\dalnice_18_redukce.p3d";
	};
	class CUP_A1_empty6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "empty6";
		model = "ca\roads\empty6.p3d";
	};
	class CUP_A1_Kamenny_most30: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Kamenny_most30";
		model = "ca\roads\kamenny_most30.p3d";
	};
	class CUP_A1_Kamenny_most30v2: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Kamenny_most30v2";
		model = "ca\roads\kamenny_most30v2.p3d";
	};
	class CUP_A1_kos10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos10 100";
		model = "ca\roads\kos10 100.p3d";
	};
	class CUP_A1_kos10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos10 25";
		model = "ca\roads\kos10 25.p3d";
	};
	class CUP_A1_kos10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos10 50";
		model = "ca\roads\kos10 50.p3d";
	};
	class CUP_A1_kos10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos10 75";
		model = "ca\roads\kos10 75.p3d";
	};
	class CUP_A1_kos12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos12";
		model = "ca\roads\kos12.p3d";
	};
	class CUP_A1_kos25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos25";
		model = "ca\roads\kos25.p3d";
	};
	class CUP_A1_kos6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos6";
		model = "ca\roads\kos6.p3d";
	};
	class CUP_A1_kos6konec: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kos6konec";
		model = "ca\roads\kos6konec.p3d";
	};
	class CUP_A1_kr_asfaltka_asfaltka_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_asfaltka_asfaltka_t";
		model = "ca\roads\kr_asfaltka_asfaltka_t.p3d";
	};
	class CUP_A1_kr_asfaltka_cesta_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_asfaltka_cesta_t";
		model = "ca\roads\kr_asfaltka_cesta_t.p3d";
	};
	class CUP_A1_kr_asfaltka_sil_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_asfaltka_sil_t";
		model = "ca\roads\kr_asfaltka_sil_t.p3d";
	};
	class CUP_A1_kr_new_asf_asf_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_asf_asf_t";
		model = "ca\roads\kr_new_asf_asf_t.p3d";
	};
	class CUP_A1_kr_new_asf_ces_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_asf_ces_t";
		model = "ca\roads\kr_new_asf_ces_t.p3d";
	};
	class CUP_A1_kr_new_asf_sil_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_asf_sil_t";
		model = "ca\roads\kr_new_asf_sil_t.p3d";
	};
	class CUP_A1_kr_new_kos: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_kos";
		model = "ca\roads\kr_new_kos.p3d";
	};
	class CUP_A1_kr_new_kos_kos_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_kos_kos_t";
		model = "ca\roads\kr_new_kos_kos_t.p3d";
	};
	class CUP_A1_kr_new_kos_sil_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_kos_sil_t";
		model = "ca\roads\kr_new_kos_sil_t.p3d";
	};
	class CUP_A1_kr_new_silxsil: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_silxsil";
		model = "ca\roads\kr_new_silxsil.p3d";
	};
	class CUP_A1_kr_new_sil_asf_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_sil_asf_t";
		model = "ca\roads\kr_new_sil_asf_t.p3d";
	};
	class CUP_A1_kr_new_sil_ces_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_sil_ces_t";
		model = "ca\roads\kr_new_sil_ces_t.p3d";
	};
	class CUP_A1_kr_new_sil_kos_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_sil_kos_t";
		model = "ca\roads\kr_new_sil_kos_t.p3d";
	};
	class CUP_A1_kr_new_sil_sil_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_sil_sil_t";
		model = "ca\roads\kr_new_sil_sil_t.p3d";
	};
	class CUP_A1_kr_new_sil_sil_t_test: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_new_sil_sil_t_test";
		model = "ca\roads\kr_new_sil_sil_t_test.p3d";
	};
	class CUP_A1_kr_silnicexsilnice: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_silnicexsilnice";
		model = "ca\roads\kr_silnicexsilnice.p3d";
	};
	class CUP_A1_kr_silnice_asfaltka_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_silnice_asfaltka_t";
		model = "ca\roads\kr_silnice_asfaltka_t.p3d";
	};
	class CUP_A1_kr_silnice_cesta_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_silnice_cesta_t";
		model = "ca\roads\kr_silnice_cesta_t.p3d";
	};
	class CUP_A1_kr_silnice_silnice_t: CUP_A1_Roads
	{
		scope = 2;
		displayName = "kr_silnice_silnice_t";
		model = "ca\roads\kr_silnice_silnice_t.p3d";
	};
	class CUP_A1_main10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "main10_25";
		model = "ca\roads\main10_25.p3d";
	};
	class CUP_A1_main_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "main_25";
		model = "ca\roads\main_25.p3d";
	};
	class CUP_A1_most_bez_lamp: CUP_A1_Roads
	{
		scope = 2;
		displayName = "most_bez_lamp";
		model = "ca\roads\most_bez_lamp.p3d";
	};
	class CUP_A1_most_stred30: CUP_A1_Roads
	{
		scope = 2;
		displayName = "most_stred30";
		model = "ca\roads\most_stred30.p3d";
	};
	class CUP_A1_najezd_benzina: CUP_A1_Roads
	{
		scope = 2;
		displayName = "najezd_benzina";
		model = "ca\roads\najezd_benzina.p3d";
	};
	class CUP_A1_pesina10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "pesina10 25";
		model = "ca\roads\pesina10 25.p3d";
	};
	class CUP_A1_pesina12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "pesina12";
		model = "ca\roads\pesina12.p3d";
	};
	class CUP_A1_pesina6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "pesina6";
		model = "ca\roads\pesina6.p3d";
	};
	class CUP_A1_road_invisible: CUP_A1_Roads
	{
		scope = 2;
		displayName = "road_invisible";
		model = "ca\roads\road_invisible.p3d";
	};
	class CUP_A1_runway_beton: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_beton";
		model = "ca\roads\runway_beton.p3d";
	};
	class CUP_A1_runway_dirt_1: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_dirt_1";
		model = "ca\roads\runway_dirt_1.p3d";
	};
	class CUP_A1_runway_dirt_2: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_dirt_2";
		model = "ca\roads\runway_dirt_2.p3d";
	};
	class CUP_A1_runway_dirt_3: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_dirt_3";
		model = "ca\roads\runway_dirt_3.p3d";
	};
	class CUP_A1_runway_end0: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_end0";
		model = "ca\roads\runway_end0.p3d";
	};
	class CUP_A1_runway_end128: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_end128";
		model = "ca\roads\runway_end128.p3d";
	};
	class CUP_A1_runway_end27: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_end27";
		model = "ca\roads\runway_end27.p3d";
	};
	class CUP_A1_runway_end9: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_end9";
		model = "ca\roads\runway_end9.p3d";
	};
	class CUP_A1_runway_main: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_main";
		model = "ca\roads\runway_main.p3d";
	};
	class CUP_A1_runway_main_Tcross: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_main_Tcross";
		model = "ca\roads\runway_main_tcross.p3d";
	};
	class CUP_A1_runway_pojdraha: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_pojdraha";
		model = "ca\roads\runway_pojdraha.p3d";
	};
	class CUP_A1_runway_poj_end27: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_poj_end27";
		model = "ca\roads\runway_poj_end27.p3d";
	};
	class CUP_A1_runway_poj_end9: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_poj_end9";
		model = "ca\roads\runway_poj_end9.p3d";
	};
	class CUP_A1_runway_poj_Tcross: CUP_A1_Roads
	{
		scope = 2;
		displayName = "runway_poj_Tcross";
		model = "ca\roads\runway_poj_tcross.p3d";
	};
	class CUP_A1_sf6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sf6";
		model = "ca\roads\sf6.p3d";
	};
	class CUP_A1_sil10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil10 100";
		model = "ca\roads\sil10 100.p3d";
	};
	class CUP_A1_sil10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil10 25";
		model = "ca\roads\sil10 25.p3d";
	};
	class CUP_A1_sil10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil10 50";
		model = "ca\roads\sil10 50.p3d";
	};
	class CUP_A1_sil10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil10 75";
		model = "ca\roads\sil10 75.p3d";
	};
	class CUP_A1_sil12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil12";
		model = "ca\roads\sil12.p3d";
	};
	class CUP_A1_sil25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil25";
		model = "ca\roads\sil25.p3d";
	};
	class CUP_A1_sil6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil6";
		model = "ca\roads\sil6.p3d";
	};
	class CUP_A1_sil6konec: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil6konec";
		model = "ca\roads\sil6konec.p3d";
	};
	class CUP_A1_sil6_prechod: CUP_A1_Roads
	{
		scope = 2;
		displayName = "sil6_prechod";
		model = "ca\roads\sil6_prechod.p3d";
	};
	class CUP_A1_silnice10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice10 100";
		model = "ca\roads\silnice10 100.p3d";
	};
	class CUP_A1_silnice10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice10 25";
		model = "ca\roads\silnice10 25.p3d";
	};
	class CUP_A1_silnice10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice10 50";
		model = "ca\roads\silnice10 50.p3d";
	};
	class CUP_A1_silnice10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice10 75";
		model = "ca\roads\silnice10 75.p3d";
	};
	class CUP_A1_silnice12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice12";
		model = "ca\roads\silnice12.p3d";
	};
	class CUP_A1_silnice25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice25";
		model = "ca\roads\silnice25.p3d";
	};
	class CUP_A1_silnice6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice6";
		model = "ca\roads\silnice6.p3d";
	};
	class CUP_A1_silnice6konec: CUP_A1_Roads
	{
		scope = 2;
		displayName = "silnice6konec";
		model = "ca\roads\silnice6konec.p3d";
	};
	class CUP_A1_Silnice_mesto_6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_6";
		model = "ca\roads\silnice_mesto_6.p3d";
	};
	class CUP_A1_Silnice_mesto_LP_6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_LP_6";
		model = "ca\roads\silnice_mesto_lp_6.p3d";
	};
	class CUP_A1_Silnice_mesto_predX_6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_predX_6";
		model = "ca\roads\silnice_mesto_predx_6.p3d";
	};
	class CUP_A1_Silnice_mesto_T_12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_T_12";
		model = "ca\roads\silnice_mesto_t_12.p3d";
	};
	class CUP_A1_Silnice_mesto_X_12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_X_12";
		model = "ca\roads\silnice_mesto_x_12.p3d";
	};
	class CUP_A1_Silnice_mesto_zJZ: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_zJZ";
		model = "ca\roads\silnice_mesto_zjz.p3d";
	};
	class CUP_A1_Silnice_mesto_zVS: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_zVS";
		model = "ca\roads\silnice_mesto_zvs.p3d";
	};
	class CUP_A1_Silnice_mesto_zZJ: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_zZJ";
		model = "ca\roads\silnice_mesto_zzj.p3d";
	};
	class CUP_A1_Silnice_mesto_zZS: CUP_A1_Roads
	{
		scope = 2;
		displayName = "Silnice_mesto_zZS";
		model = "ca\roads\silnice_mesto_zzs.p3d";
	};
	class CUP_A1_VoidPath10_100: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath10_100";
		model = "ca\roads\voidpath10_100.p3d";
	};
	class CUP_A1_VoidPath10_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath10_25";
		model = "ca\roads\voidpath10_25.p3d";
	};
	class CUP_A1_VoidPath10_50: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath10_50";
		model = "ca\roads\voidpath10_50.p3d";
	};
	class CUP_A1_VoidPath10_75: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath10_75";
		model = "ca\roads\voidpath10_75.p3d";
	};
	class CUP_A1_VoidPathTVoidPath_left: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPathTVoidPath_left";
		model = "ca\roads\voidpathtvoidpath_left.p3d";
	};
	class CUP_A1_VoidPathTVoidPath_right: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPathTVoidPath_right";
		model = "ca\roads\voidpathtvoidpath_right.p3d";
	};
	class CUP_A1_VoidPathXVoidPath: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPathXVoidPath";
		model = "ca\roads\voidpathxvoidpath.p3d";
	};
	class CUP_A1_VoidPath_12: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath_12";
		model = "ca\roads\voidpath_12.p3d";
	};
	class CUP_A1_VoidPath_25: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath_25";
		model = "ca\roads\voidpath_25.p3d";
	};
	class CUP_A1_VoidPath_6: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath_6";
		model = "ca\roads\voidpath_6.p3d";
	};
	class CUP_A1_VoidPath_6_end: CUP_A1_Roads
	{
		scope = 2;
		displayName = "VoidPath_6_end";
		model = "ca\roads\voidpath_6_end.p3d";
	};
	class CUP_A1_clutter_stone_small: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "clutter_stone_small";
		model = "ca\rocks\clutter_stone_small.p3d";
	};
	class CUP_A1_Hromada_kameni: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Hromada_kameni";
		model = "ca\rocks\hromada_kameni.p3d";
	};
	class CUP_A1_Kamen1_Piskove2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen1_Piskove2";
		model = "ca\rocks\kamen1_piskove2.p3d";
	};
	class CUP_A1_Kamen1_piskovec: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen1_piskovec";
		model = "ca\rocks\kamen1_piskovec.p3d";
	};
	class CUP_A1_Kamen1_piskovec2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen1_piskovec2";
		model = "ca\rocks\kamen1_piskovec2.p3d";
	};
	class CUP_A1_Kamen1_zula: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen1_zula";
		model = "ca\rocks\kamen1_zula.p3d";
	};
	class CUP_A1_Kamen2_piskovec: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen2_piskovec";
		model = "ca\rocks\kamen2_piskovec.p3d";
	};
	class CUP_A1_Kamen2_piskovec2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen2_piskovec2";
		model = "ca\rocks\kamen2_piskovec2.p3d";
	};
	class CUP_A1_Kamen2_zula: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen2_zula";
		model = "ca\rocks\kamen2_zula.p3d";
	};
	class CUP_A1_Kamen3_piskovec: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen3_piskovec";
		model = "ca\rocks\kamen3_piskovec.p3d";
	};
	class CUP_A1_Kamen3_piskovec2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen3_piskovec2";
		model = "ca\rocks\kamen3_piskovec2.p3d";
	};
	class CUP_A1_Kamen3_zula: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen3_zula";
		model = "ca\rocks\kamen3_zula.p3d";
	};
	class CUP_A1_Kamen4_piskovec: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen4_piskovec";
		model = "ca\rocks\kamen4_piskovec.p3d";
	};
	class CUP_A1_Kamen4_piskovec2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen4_piskovec2";
		model = "ca\rocks\kamen4_piskovec2.p3d";
	};
	class CUP_A1_Kamen4_zula: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen4_zula";
		model = "ca\rocks\kamen4_zula.p3d";
	};
	class CUP_A1_Kamen5_piskovec: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen5_piskovec";
		model = "ca\rocks\kamen5_piskovec.p3d";
	};
	class CUP_A1_Kamen5_piskovec2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen5_piskovec2";
		model = "ca\rocks\kamen5_piskovec2.p3d";
	};
	class CUP_A1_Kamen5_zula: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kamen5_zula";
		model = "ca\rocks\kamen5_zula.p3d";
	};
	class CUP_A1_kaminek_clutter: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "kaminek_clutter";
		model = "ca\rocks\kaminek_clutter.p3d";
	};
	class CUP_A1_Kopa_kameni: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kopa_kameni";
		model = "ca\rocks\kopa_kameni.p3d";
	};
	class CUP_A1_Kopa_kameni2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Kopa_kameni2";
		model = "ca\rocks\kopa_kameni2.p3d";
	};
	class CUP_A1_rock: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "rock";
		model = "ca\rocks\rock.p3d";
	};
	class CUP_A1_rockN_01: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "rockN_01";
		model = "ca\rocks\rockn_01.p3d";
	};
	class CUP_A1_rockN_02: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "rockN_02";
		model = "ca\rocks\rockn_02.p3d";
	};
	class CUP_A1_rockS_01: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "rockS_01";
		model = "ca\rocks\rocks_01.p3d";
	};
	class CUP_A1_rockS_02: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "rockS_02";
		model = "ca\rocks\rocks_02.p3d";
	};
	class CUP_A1_skala: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "skala";
		model = "ca\rocks\skala.p3d";
	};
	class CUP_A1_Skala1_1: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala1_1";
		model = "ca\rocks\skala1_1.p3d";
	};
	class CUP_A1_Skala1_2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala1_2";
		model = "ca\rocks\skala1_2.p3d";
	};
	class CUP_A1_Skala1_3: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala1_3";
		model = "ca\rocks\skala1_3.p3d";
	};
	class CUP_A1_Skala1_4: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala1_4";
		model = "ca\rocks\skala1_4.p3d";
	};
	class CUP_A1_Skala1_5: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala1_5";
		model = "ca\rocks\skala1_5.p3d";
	};
	class CUP_A1_Skala2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala2";
		model = "ca\rocks\skala2.p3d";
	};
	class CUP_A1_Skala2_1: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala2_1";
		model = "ca\rocks\skala2_1.p3d";
	};
	class CUP_A1_skala2_2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "skala2_2";
		model = "ca\rocks\skala2_2.p3d";
	};
	class CUP_A1_Skala2_3: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala2_3";
		model = "ca\rocks\skala2_3.p3d";
	};
	class CUP_A1_Skala2_4: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala2_4";
		model = "ca\rocks\skala2_4.p3d";
	};
	class CUP_A1_Skala2_5: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala2_5";
		model = "ca\rocks\skala2_5.p3d";
	};
	class CUP_A1_Skala3_1: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala3_1";
		model = "ca\rocks\skala3_1.p3d";
	};
	class CUP_A1_Skala3_2: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala3_2";
		model = "ca\rocks\skala3_2.p3d";
	};
	class CUP_A1_Skala3_3: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala3_3";
		model = "ca\rocks\skala3_3.p3d";
	};
	class CUP_A1_Skala3_4: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala3_4";
		model = "ca\rocks\skala3_4.p3d";
	};
	class CUP_A1_Skala3_5: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Skala3_5";
		model = "ca\rocks\skala3_5.p3d";
	};
	class CUP_A1_skala_new: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "skala_new";
		model = "ca\rocks\skala_new.p3d";
	};
	class CUP_A1_skala_newK: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "skala_newK";
		model = "ca\rocks\skala_newk.p3d";
	};
	class CUP_A1_Stone3: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Stone3";
		model = "ca\rocks\stone3.p3d";
	};
	class CUP_A1_Stone3a: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Stone3a";
		model = "ca\rocks\stone3a.p3d";
	};
	class CUP_A1_Stone3_clutter: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Stone3_clutter";
		model = "ca\rocks\stone3_clutter.p3d";
	};
	class CUP_A1_Stone4: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Stone4";
		model = "ca\rocks\stone4.p3d";
	};
	class CUP_A1_Stone4a: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Stone4a";
		model = "ca\rocks\stone4a.p3d";
	};
	class CUP_A1_Stone4_invert: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "Stone4_invert";
		model = "ca\rocks\stone4_invert.p3d";
	};
	class CUP_A1_sutr2_shader: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "sutr2_shader";
		model = "ca\rocks\sutr2_shader.p3d";
	};
	class CUP_A1_sutr3_shader: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "sutr3_shader";
		model = "ca\rocks\sutr3_shader.p3d";
	};
	class CUP_A1_sutr4_shader: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "sutr4_shader";
		model = "ca\rocks\sutr4_shader.p3d";
	};
	class CUP_A1_sutr5_shader: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "sutr5_shader";
		model = "ca\rocks\sutr5_shader.p3d";
	};
	class CUP_A1_sutr6_shader: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "sutr6_shader";
		model = "ca\rocks\sutr6_shader.p3d";
	};
	class CUP_A1_sutr_shader: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "sutr_shader";
		model = "ca\rocks\sutr_shader.p3d";
	};
	class CUP_A1_zula: CUP_A1_Rocks
	{
		scope = 2;
		displayName = "zula";
		model = "ca\rocks\zula.p3d";
	};
	class CUP_A1_celnice: CUP_A1_Signs
	{
		scope = 2;
		displayName = "celnice";
		model = "ca\signs\celnice.p3d";
	};
	class CUP_A1_celnice_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "celnice_new";
		model = "ca\signs\celnice_new.p3d";
	};
	class CUP_A1_cyklista_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "cyklista_new";
		model = "ca\signs\cyklista_new.p3d";
	};
	class CUP_A1_deti_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "deti_new";
		model = "ca\signs\deti_new.p3d";
	};
	class CUP_A1_deti_samopal: CUP_A1_Signs
	{
		scope = 2;
		displayName = "deti_samopal";
		model = "ca\signs\deti_samopal.p3d";
	};
	class CUP_A1_esicko_vlevo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "esicko_vlevo";
		model = "ca\signs\esicko_vlevo.p3d";
	};
	class CUP_A1_esicko_vlevo_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "esicko_vlevo_new";
		model = "ca\signs\esicko_vlevo_new.p3d";
	};
	class CUP_A1_esicko_vpravo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "esicko_vpravo";
		model = "ca\signs\esicko_vpravo.p3d";
	};
	class CUP_A1_esicko_vpravo_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "esicko_vpravo_new";
		model = "ca\signs\esicko_vpravo_new.p3d";
	};
	class CUP_A1_hlavni: CUP_A1_Signs
	{
		scope = 2;
		displayName = "hlavni";
		model = "ca\signs\hlavni.p3d";
	};
	class CUP_A1_hlavni_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "hlavni_end";
		model = "ca\signs\hlavni_end.p3d";
	};
	class CUP_A1_hlavni_end_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "hlavni_end_new";
		model = "ca\signs\hlavni_end_new.p3d";
	};
	class CUP_A1_hlavni_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "hlavni_new";
		model = "ca\signs\hlavni_new.p3d";
	};
	class CUP_A1_J01a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J01a";
		model = "ca\signs\j01a.p3d";
	};
	class CUP_A1_J01b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J01b";
		model = "ca\signs\j01b.p3d";
	};
	class CUP_A1_J02a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J02a";
		model = "ca\signs\j02a.p3d";
	};
	class CUP_A1_J02b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J02b";
		model = "ca\signs\j02b.p3d";
	};
	class CUP_A1_J02c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J02c";
		model = "ca\signs\j02c.p3d";
	};
	class CUP_A1_J03a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J03a";
		model = "ca\signs\j03a.p3d";
	};
	class CUP_A1_J03b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J03b";
		model = "ca\signs\j03b.p3d";
	};
	class CUP_A1_J04a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J04a";
		model = "ca\signs\j04a.p3d";
	};
	class CUP_A1_J04b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J04b";
		model = "ca\signs\j04b.p3d";
	};
	class CUP_A1_J05a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J05a";
		model = "ca\signs\j05a.p3d";
	};
	class CUP_A1_J05b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J05b";
		model = "ca\signs\j05b.p3d";
	};
	class CUP_A1_J05c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J05c";
		model = "ca\signs\j05c.p3d";
	};
	class CUP_A1_J06a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J06a";
		model = "ca\signs\j06a.p3d";
	};
	class CUP_A1_J06b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J06b";
		model = "ca\signs\j06b.p3d";
	};
	class CUP_A1_J06c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J06c";
		model = "ca\signs\j06c.p3d";
	};
	class CUP_A1_J07a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J07a";
		model = "ca\signs\j07a.p3d";
	};
	class CUP_A1_J07b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J07b";
		model = "ca\signs\j07b.p3d";
	};
	class CUP_A1_J07c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J07c";
		model = "ca\signs\j07c.p3d";
	};
	class CUP_A1_J08a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J08a";
		model = "ca\signs\j08a.p3d";
	};
	class CUP_A1_J08b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J08b";
		model = "ca\signs\j08b.p3d";
	};
	class CUP_A1_J08c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J08c";
		model = "ca\signs\j08c.p3d";
	};
	class CUP_A1_J09a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J09a";
		model = "ca\signs\j09a.p3d";
	};
	class CUP_A1_J09b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J09b";
		model = "ca\signs\j09b.p3d";
	};
	class CUP_A1_J09c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J09c";
		model = "ca\signs\j09c.p3d";
	};
	class CUP_A1_J10a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J10a";
		model = "ca\signs\j10a.p3d";
	};
	class CUP_A1_J10b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J10b";
		model = "ca\signs\j10b.p3d";
	};
	class CUP_A1_J11a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J11a";
		model = "ca\signs\j11a.p3d";
	};
	class CUP_A1_J11b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J11b";
		model = "ca\signs\j11b.p3d";
	};
	class CUP_A1_J11c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J11c";
		model = "ca\signs\j11c.p3d";
	};
	class CUP_A1_J12a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J12a";
		model = "ca\signs\j12a.p3d";
	};
	class CUP_A1_J12b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J12b";
		model = "ca\signs\j12b.p3d";
	};
	class CUP_A1_J13a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J13a";
		model = "ca\signs\j13a.p3d";
	};
	class CUP_A1_J13b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J13b";
		model = "ca\signs\j13b.p3d";
	};
	class CUP_A1_J14a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J14a";
		model = "ca\signs\j14a.p3d";
	};
	class CUP_A1_J14b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J14b";
		model = "ca\signs\j14b.p3d";
	};
	class CUP_A1_J14c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J14c";
		model = "ca\signs\j14c.p3d";
	};
	class CUP_A1_J15a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J15a";
		model = "ca\signs\j15a.p3d";
	};
	class CUP_A1_J15b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J15b";
		model = "ca\signs\j15b.p3d";
	};
	class CUP_A1_J15c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J15c";
		model = "ca\signs\j15c.p3d";
	};
	class CUP_A1_J16a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J16a";
		model = "ca\signs\j16a.p3d";
	};
	class CUP_A1_J16b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J16b";
		model = "ca\signs\j16b.p3d";
	};
	class CUP_A1_J16c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J16c";
		model = "ca\signs\j16c.p3d";
	};
	class CUP_A1_J17a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J17a";
		model = "ca\signs\j17a.p3d";
	};
	class CUP_A1_J17b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J17b";
		model = "ca\signs\j17b.p3d";
	};
	class CUP_A1_J17c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J17c";
		model = "ca\signs\j17c.p3d";
	};
	class CUP_A1_J18a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J18a";
		model = "ca\signs\j18a.p3d";
	};
	class CUP_A1_J18b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J18b";
		model = "ca\signs\j18b.p3d";
	};
	class CUP_A1_J18c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J18c";
		model = "ca\signs\j18c.p3d";
	};
	class CUP_A1_J19a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J19a";
		model = "ca\signs\j19a.p3d";
	};
	class CUP_A1_J19b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J19b";
		model = "ca\signs\j19b.p3d";
	};
	class CUP_A1_J19c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J19c";
		model = "ca\signs\j19c.p3d";
	};
	class CUP_A1_J20a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J20a";
		model = "ca\signs\j20a.p3d";
	};
	class CUP_A1_J20b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J20b";
		model = "ca\signs\j20b.p3d";
	};
	class CUP_A1_J20c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J20c";
		model = "ca\signs\j20c.p3d";
	};
	class CUP_A1_J21a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J21a";
		model = "ca\signs\j21a.p3d";
	};
	class CUP_A1_J21b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J21b";
		model = "ca\signs\j21b.p3d";
	};
	class CUP_A1_J21c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J21c";
		model = "ca\signs\j21c.p3d";
	};
	class CUP_A1_J22a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J22a";
		model = "ca\signs\j22a.p3d";
	};
	class CUP_A1_J22b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J22b";
		model = "ca\signs\j22b.p3d";
	};
	class CUP_A1_J22c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J22c";
		model = "ca\signs\j22c.p3d";
	};
	class CUP_A1_J23a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J23a";
		model = "ca\signs\j23a.p3d";
	};
	class CUP_A1_J23b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J23b";
		model = "ca\signs\j23b.p3d";
	};
	class CUP_A1_J23c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J23c";
		model = "ca\signs\j23c.p3d";
	};
	class CUP_A1_J24a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J24a";
		model = "ca\signs\j24a.p3d";
	};
	class CUP_A1_J24b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J24b";
		model = "ca\signs\j24b.p3d";
	};
	class CUP_A1_J25a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J25a";
		model = "ca\signs\j25a.p3d";
	};
	class CUP_A1_J25b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J25b";
		model = "ca\signs\j25b.p3d";
	};
	class CUP_A1_J26a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J26a";
		model = "ca\signs\j26a.p3d";
	};
	class CUP_A1_J26b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J26b";
		model = "ca\signs\j26b.p3d";
	};
	class CUP_A1_J26c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J26c";
		model = "ca\signs\j26c.p3d";
	};
	class CUP_A1_J27a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J27a";
		model = "ca\signs\j27a.p3d";
	};
	class CUP_A1_J27b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J27b";
		model = "ca\signs\j27b.p3d";
	};
	class CUP_A1_J27c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J27c";
		model = "ca\signs\j27c.p3d";
	};
	class CUP_A1_J28a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J28a";
		model = "ca\signs\j28a.p3d";
	};
	class CUP_A1_J28b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J28b";
		model = "ca\signs\j28b.p3d";
	};
	class CUP_A1_J28c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J28c";
		model = "ca\signs\j28c.p3d";
	};
	class CUP_A1_J29: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J29";
		model = "ca\signs\j29.p3d";
	};
	class CUP_A1_J30a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J30a";
		model = "ca\signs\j30a.p3d";
	};
	class CUP_A1_J30b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J30b";
		model = "ca\signs\j30b.p3d";
	};
	class CUP_A1_J31a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J31a";
		model = "ca\signs\j31a.p3d";
	};
	class CUP_A1_J31b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J31b";
		model = "ca\signs\j31b.p3d";
	};
	class CUP_A1_J31c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J31c";
		model = "ca\signs\j31c.p3d";
	};
	class CUP_A1_J32a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J32a";
		model = "ca\signs\j32a.p3d";
	};
	class CUP_A1_J32b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J32b";
		model = "ca\signs\j32b.p3d";
	};
	class CUP_A1_J32c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J32c";
		model = "ca\signs\j32c.p3d";
	};
	class CUP_A1_J33a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J33a";
		model = "ca\signs\j33a.p3d";
	};
	class CUP_A1_J33b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J33b";
		model = "ca\signs\j33b.p3d";
	};
	class CUP_A1_J34a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J34a";
		model = "ca\signs\j34a.p3d";
	};
	class CUP_A1_J34b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J34b";
		model = "ca\signs\j34b.p3d";
	};
	class CUP_A1_J36a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J36a";
		model = "ca\signs\j36a.p3d";
	};
	class CUP_A1_J36b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J36b";
		model = "ca\signs\j36b.p3d";
	};
	class CUP_A1_J37a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J37a";
		model = "ca\signs\j37a.p3d";
	};
	class CUP_A1_J37b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J37b";
		model = "ca\signs\j37b.p3d";
	};
	class CUP_A1_J38a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J38a";
		model = "ca\signs\j38a.p3d";
	};
	class CUP_A1_J38b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J38b";
		model = "ca\signs\j38b.p3d";
	};
	class CUP_A1_J38c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J38c";
		model = "ca\signs\j38c.p3d";
	};
	class CUP_A1_J39a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J39a";
		model = "ca\signs\j39a.p3d";
	};
	class CUP_A1_J39b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J39b";
		model = "ca\signs\j39b.p3d";
	};
	class CUP_A1_J39c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J39c";
		model = "ca\signs\j39c.p3d";
	};
	class CUP_A1_J40a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J40a";
		model = "ca\signs\j40a.p3d";
	};
	class CUP_A1_j40b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "j40b";
		model = "ca\signs\j40b.p3d";
	};
	class CUP_A1_J40c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J40c";
		model = "ca\signs\j40c.p3d";
	};
	class CUP_A1_jednosmerka: CUP_A1_Signs
	{
		scope = 2;
		displayName = "jednosmerka";
		model = "ca\signs\jednosmerka.p3d";
	};
	class CUP_A1_jelen: CUP_A1_Signs
	{
		scope = 2;
		displayName = "jelen";
		model = "ca\signs\jelen.p3d";
	};
	class CUP_A1_jelen_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "jelen_new";
		model = "ca\signs\jelen_new.p3d";
	};
	class CUP_A1_J_ambergris: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_ambergris";
		model = "ca\signs\j_ambergris.p3d";
	};
	class CUP_A1_J_ambergris_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_ambergris_end";
		model = "ca\signs\j_ambergris_end.p3d";
	};
	class CUP_A1_J_arcadia: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_arcadia";
		model = "ca\signs\j_arcadia.p3d";
	};
	class CUP_A1_J_arcadia_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_arcadia_end";
		model = "ca\signs\j_arcadia_end.p3d";
	};
	class CUP_A1_J_balmopan: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_balmopan";
		model = "ca\signs\j_balmopan.p3d";
	};
	class CUP_A1_J_balmopan_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_balmopan_end";
		model = "ca\signs\j_balmopan_end.p3d";
	};
	class CUP_A1_J_bonanza: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_bonanza";
		model = "ca\signs\j_bonanza.p3d";
	};
	class CUP_A1_J_bonanza_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_bonanza_end";
		model = "ca\signs\j_bonanza_end.p3d";
	};
	class CUP_A1_J_cayo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_cayo";
		model = "ca\signs\j_cayo.p3d";
	};
	class CUP_A1_J_cayo_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_cayo_end";
		model = "ca\signs\j_cayo_end.p3d";
	};
	class CUP_A1_J_cayo_obec: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_cayo_obec";
		model = "ca\signs\j_cayo_obec.p3d";
	};
	class CUP_A1_J_cedras: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_cedras";
		model = "ca\signs\j_cedras.p3d";
	};
	class CUP_A1_J_cedras_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_cedras_end";
		model = "ca\signs\j_cedras_end.p3d";
	};
	class CUP_A1_J_chantico: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_chantico";
		model = "ca\signs\j_chantico.p3d";
	};
	class CUP_A1_J_chantico_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_chantico_end";
		model = "ca\signs\j_chantico_end.p3d";
	};
	class CUP_A1_J_corazol: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_corazol";
		model = "ca\signs\j_corazol.p3d";
	};
	class CUP_A1_J_corazol_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_corazol_end";
		model = "ca\signs\j_corazol_end.p3d";
	};
	class CUP_A1_J_corazol_obec: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_corazol_obec";
		model = "ca\signs\j_corazol_obec.p3d";
	};
	class CUP_A1_J_corinto: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_corinto";
		model = "ca\signs\j_corinto.p3d";
	};
	class CUP_A1_J_corinto_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_corinto_end";
		model = "ca\signs\j_corinto_end.p3d";
	};
	class CUP_A1_J_dolores: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_dolores";
		model = "ca\signs\j_dolores.p3d";
	};
	class CUP_A1_J_dolores_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_dolores_end";
		model = "ca\signs\j_dolores_end.p3d";
	};
	class CUP_A1_J_dolores_obec: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_dolores_obec";
		model = "ca\signs\j_dolores_obec.p3d";
	};
	class CUP_A1_J_estrella: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_estrella";
		model = "ca\signs\j_estrella.p3d";
	};
	class CUP_A1_J_estrella_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_estrella_end";
		model = "ca\signs\j_estrella_end.p3d";
	};
	class CUP_A1_J_Geraldo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_Geraldo";
		model = "ca\signs\j_geraldo.p3d";
	};
	class CUP_A1_J_geraldo_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_geraldo_end";
		model = "ca\signs\j_geraldo_end.p3d";
	};
	class CUP_A1_J_gulan: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_gulan";
		model = "ca\signs\j_gulan.p3d";
	};
	class CUP_A1_J_gulan_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_gulan_end";
		model = "ca\signs\j_gulan_end.p3d";
	};
	class CUP_A1_J_honoria: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_honoria";
		model = "ca\signs\j_honoria.p3d";
	};
	class CUP_A1_J_honoria_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_honoria_end";
		model = "ca\signs\j_honoria_end.p3d";
	};
	class CUP_A1_J_iguana: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_iguana";
		model = "ca\signs\j_iguana.p3d";
	};
	class CUP_A1_J_iguana_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_iguana_end";
		model = "ca\signs\j_iguana_end.p3d";
	};
	class CUP_A1_J_kudykam: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_kudykam";
		model = "ca\signs\j_kudykam.p3d";
	};
	class CUP_A1_J_ortego: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_ortego";
		model = "ca\signs\j_ortego.p3d";
	};
	class CUP_A1_J_ortego_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_ortego_end";
		model = "ca\signs\j_ortego_end.p3d";
	};
	class CUP_A1_J_ortego_obec: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_ortego_obec";
		model = "ca\signs\j_ortego_obec.p3d";
	};
	class CUP_A1_J_paraiso: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_paraiso";
		model = "ca\signs\j_paraiso.p3d";
	};
	class CUP_A1_J_paraiso_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_paraiso_end";
		model = "ca\signs\j_paraiso_end.p3d";
	};
	class CUP_A1_J_parato: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_parato";
		model = "ca\signs\j_parato.p3d";
	};
	class CUP_A1_J_parato_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_parato_end";
		model = "ca\signs\j_parato_end.p3d";
	};
	class CUP_A1_J_pesto: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_pesto";
		model = "ca\signs\j_pesto.p3d";
	};
	class CUP_A1_J_pesto_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_pesto_end";
		model = "ca\signs\j_pesto_end.p3d";
	};
	class CUP_A1_J_rashidah: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_rashidah";
		model = "ca\signs\j_rashidah.p3d";
	};
	class CUP_A1_J_rashidah_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_rashidah_end";
		model = "ca\signs\j_rashidah_end.p3d";
	};
	class CUP_A1_J_sever: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_sever";
		model = "ca\signs\j_sever.p3d";
	};
	class CUP_A1_J_somato: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_somato";
		model = "ca\signs\j_somato.p3d";
	};
	class CUP_A1_J_somato_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_somato_end";
		model = "ca\signs\j_somato_end.p3d";
	};
	class CUP_A1_J_tiberia: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_tiberia";
		model = "ca\signs\j_tiberia.p3d";
	};
	class CUP_A1_J_tiberia_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_tiberia_end";
		model = "ca\signs\j_tiberia_end.p3d";
	};
	class CUP_A1_J_vlajka: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_vlajka";
		model = "ca\signs\j_vlajka.p3d";
	};
	class CUP_A1_J_yoro: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_yoro";
		model = "ca\signs\j_yoro.p3d";
	};
	class CUP_A1_J_yoro_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "J_yoro_end";
		model = "ca\signs\j_yoro_end.p3d";
	};
	class CUP_A1_kafe: CUP_A1_Signs
	{
		scope = 2;
		displayName = "kafe";
		model = "ca\signs\kafe.p3d";
	};
	class CUP_A1_kemp_karavan: CUP_A1_Signs
	{
		scope = 2;
		displayName = "kemp_karavan";
		model = "ca\signs\kemp_karavan.p3d";
	};
	class CUP_A1_klesani: CUP_A1_Signs
	{
		scope = 2;
		displayName = "klesani";
		model = "ca\signs\klesani.p3d";
	};
	class CUP_A1_klesani_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "klesani_new";
		model = "ca\signs\klesani_new.p3d";
	};
	class CUP_A1_krajnice_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "krajnice_new";
		model = "ca\signs\krajnice_new.p3d";
	};
	class CUP_A1_krava: CUP_A1_Signs
	{
		scope = 2;
		displayName = "krava";
		model = "ca\signs\krava.p3d";
	};
	class CUP_A1_krava_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "krava_new";
		model = "ca\signs\krava_new.p3d";
	};
	class CUP_A1_krizovatka: CUP_A1_Signs
	{
		scope = 2;
		displayName = "krizovatka";
		model = "ca\signs\krizovatka.p3d";
	};
	class CUP_A1_krizovatka_hlavni: CUP_A1_Signs
	{
		scope = 2;
		displayName = "krizovatka_hlavni";
		model = "ca\signs\krizovatka_hlavni.p3d";
	};
	class CUP_A1_krizovatka_hlavni_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "krizovatka_hlavni_new";
		model = "ca\signs\krizovatka_hlavni_new.p3d";
	};
	class CUP_A1_krizovatka_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "krizovatka_new";
		model = "ca\signs\krizovatka_new.p3d";
	};
	class CUP_A1_letiste: CUP_A1_Signs
	{
		scope = 2;
		displayName = "letiste";
		model = "ca\signs\letiste.p3d";
	};
	class CUP_A1_letiste_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "letiste_new";
		model = "ca\signs\letiste_new.p3d";
	};
	class CUP_A1_mestsky_okruh: CUP_A1_Signs
	{
		scope = 2;
		displayName = "mestsky_okruh";
		model = "ca\signs\mestsky_okruh.p3d";
	};
	class CUP_A1_nebezpeci: CUP_A1_Signs
	{
		scope = 2;
		displayName = "nebezpeci";
		model = "ca\signs\nebezpeci.p3d";
	};
	class CUP_A1_nemocnice: CUP_A1_Signs
	{
		scope = 2;
		displayName = "nemocnice";
		model = "ca\signs\nemocnice.p3d";
	};
	class CUP_A1_nemocnice_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "nemocnice_new";
		model = "ca\signs\nemocnice_new.p3d";
	};
	class CUP_A1_obcovnik: CUP_A1_Signs
	{
		scope = 2;
		displayName = "obcovnik";
		model = "ca\signs\obcovnik.p3d";
	};
	class CUP_A1_obcovnik_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "obcovnik_end";
		model = "ca\signs\obcovnik_end.p3d";
	};
	class CUP_A1_obcovnik_J: CUP_A1_Signs
	{
		scope = 2;
		displayName = "obcovnik_J";
		model = "ca\signs\obcovnik_j.p3d";
	};
	class CUP_A1_obcovnik_J_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "obcovnik_J_end";
		model = "ca\signs\obcovnik_j_end.p3d";
	};
	class CUP_A1_odletujici_kameni: CUP_A1_Signs
	{
		scope = 2;
		displayName = "odletujici_kameni";
		model = "ca\signs\odletujici_kameni.p3d";
	};
	class CUP_A1_opravna: CUP_A1_Signs
	{
		scope = 2;
		displayName = "opravna";
		model = "ca\signs\opravna.p3d";
	};
	class CUP_A1_opravna_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "opravna_new";
		model = "ca\signs\opravna_new.p3d";
	};
	class CUP_A1_pada_kameni: CUP_A1_Signs
	{
		scope = 2;
		displayName = "pada_kameni";
		model = "ca\signs\pada_kameni.p3d";
	};
	class CUP_A1_pada_kameni_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "pada_kameni_new";
		model = "ca\signs\pada_kameni_new.p3d";
	};
	class CUP_A1_parkoviste: CUP_A1_Signs
	{
		scope = 2;
		displayName = "parkoviste";
		model = "ca\signs\parkoviste.p3d";
	};
	class CUP_A1_parkoviste_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "parkoviste_new";
		model = "ca\signs\parkoviste_new.p3d";
	};
	class CUP_A1_pozor: CUP_A1_Signs
	{
		scope = 2;
		displayName = "pozor";
		model = "ca\signs\pozor.p3d";
	};
	class CUP_A1_prace_na_silnici_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "prace_na_silnici_new";
		model = "ca\signs\prace_na_silnici_new.p3d";
	};
	class CUP_A1_prechod_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "prechod_new";
		model = "ca\signs\prechod_new.p3d";
	};
	class CUP_A1_prednost: CUP_A1_Signs
	{
		scope = 2;
		displayName = "prednost";
		model = "ca\signs\prednost.p3d";
	};
	class CUP_A1_prednost_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "prednost_new";
		model = "ca\signs\prednost_new.p3d";
	};
	class CUP_A1_pumpa_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "pumpa_new";
		model = "ca\signs\pumpa_new.p3d";
	};
	class CUP_A1_retezy: CUP_A1_Signs
	{
		scope = 2;
		displayName = "retezy";
		model = "ca\signs\retezy.p3d";
	};
	class CUP_A1_retezy_konec: CUP_A1_Signs
	{
		scope = 2;
		displayName = "retezy_konec";
		model = "ca\signs\retezy_konec.p3d";
	};
	class CUP_A1_rozcestnik01: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rozcestnik01";
		model = "ca\signs\rozcestnik01.p3d";
	};
	class CUP_A1_rozcestnik01J: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rozcestnik01J";
		model = "ca\signs\rozcestnik01j.p3d";
	};
	class CUP_A1_rozcestnik02: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rozcestnik02";
		model = "ca\signs\rozcestnik02.p3d";
	};
	class CUP_A1_rozcestnik02j: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rozcestnik02j";
		model = "ca\signs\rozcestnik02j.p3d";
	};
	class CUP_A1_rozcestnik03: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rozcestnik03";
		model = "ca\signs\rozcestnik03.p3d";
	};
	class CUP_A1_rozcestnik03J: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rozcestnik03J";
		model = "ca\signs\rozcestnik03j.p3d";
	};
	class CUP_A1_rumcajs: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rumcajs";
		model = "ca\signs\rumcajs.p3d";
	};
	class CUP_A1_rychlost: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rychlost";
		model = "ca\signs\rychlost.p3d";
	};
	class CUP_A1_rychlost_dvacet: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rychlost_dvacet";
		model = "ca\signs\rychlost_dvacet.p3d";
	};
	class CUP_A1_rychlost_padesat: CUP_A1_Signs
	{
		scope = 2;
		displayName = "rychlost_padesat";
		model = "ca\signs\rychlost_padesat.p3d";
	};
	class CUP_A1_S01a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S01a";
		model = "ca\signs\s01a.p3d";
	};
	class CUP_A1_S01b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S01b";
		model = "ca\signs\s01b.p3d";
	};
	class CUP_A1_S01c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S01c";
		model = "ca\signs\s01c.p3d";
	};
	class CUP_A1_S02a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S02a";
		model = "ca\signs\s02a.p3d";
	};
	class CUP_A1_S02b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S02b";
		model = "ca\signs\s02b.p3d";
	};
	class CUP_A1_S02c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S02c";
		model = "ca\signs\s02c.p3d";
	};
	class CUP_A1_S03a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S03a";
		model = "ca\signs\s03a.p3d";
	};
	class CUP_A1_S03b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S03b";
		model = "ca\signs\s03b.p3d";
	};
	class CUP_A1_S03c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S03c";
		model = "ca\signs\s03c.p3d";
	};
	class CUP_A1_S04a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S04a";
		model = "ca\signs\s04a.p3d";
	};
	class CUP_A1_S04b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S04b";
		model = "ca\signs\s04b.p3d";
	};
	class CUP_A1_S04c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S04c";
		model = "ca\signs\s04c.p3d";
	};
	class CUP_A1_S05a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S05a";
		model = "ca\signs\s05a.p3d";
	};
	class CUP_A1_S05b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S05b";
		model = "ca\signs\s05b.p3d";
	};
	class CUP_A1_S05c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S05c";
		model = "ca\signs\s05c.p3d";
	};
	class CUP_A1_S06a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S06a";
		model = "ca\signs\s06a.p3d";
	};
	class CUP_A1_S06b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S06b";
		model = "ca\signs\s06b.p3d";
	};
	class CUP_A1_S06c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S06c";
		model = "ca\signs\s06c.p3d";
	};
	class CUP_A1_S07a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S07a";
		model = "ca\signs\s07a.p3d";
	};
	class CUP_A1_S07b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S07b";
		model = "ca\signs\s07b.p3d";
	};
	class CUP_A1_S08a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S08a";
		model = "ca\signs\s08a.p3d";
	};
	class CUP_A1_S08b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S08b";
		model = "ca\signs\s08b.p3d";
	};
	class CUP_A1_S08c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S08c";
		model = "ca\signs\s08c.p3d";
	};
	class CUP_A1_S09a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S09a";
		model = "ca\signs\s09a.p3d";
	};
	class CUP_A1_S09b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S09b";
		model = "ca\signs\s09b.p3d";
	};
	class CUP_A1_S09c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S09c";
		model = "ca\signs\s09c.p3d";
	};
	class CUP_A1_S10a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S10a";
		model = "ca\signs\s10a.p3d";
	};
	class CUP_A1_S11a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S11a";
		model = "ca\signs\s11a.p3d";
	};
	class CUP_A1_S11b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S11b";
		model = "ca\signs\s11b.p3d";
	};
	class CUP_A1_S12: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S12";
		model = "ca\signs\s12.p3d";
	};
	class CUP_A1_S13: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S13";
		model = "ca\signs\s13.p3d";
	};
	class CUP_A1_S14: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S14";
		model = "ca\signs\s14.p3d";
	};
	class CUP_A1_S15a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S15a";
		model = "ca\signs\s15a.p3d";
	};
	class CUP_A1_S15b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S15b";
		model = "ca\signs\s15b.p3d";
	};
	class CUP_A1_S15c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S15c";
		model = "ca\signs\s15c.p3d";
	};
	class CUP_A1_S16a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S16a";
		model = "ca\signs\s16a.p3d";
	};
	class CUP_A1_S16b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S16b";
		model = "ca\signs\s16b.p3d";
	};
	class CUP_A1_S16c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S16c";
		model = "ca\signs\s16c.p3d";
	};
	class CUP_A1_S17a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S17a";
		model = "ca\signs\s17a.p3d";
	};
	class CUP_A1_S17b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S17b";
		model = "ca\signs\s17b.p3d";
	};
	class CUP_A1_S18a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S18a";
		model = "ca\signs\s18a.p3d";
	};
	class CUP_A1_S18b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S18b";
		model = "ca\signs\s18b.p3d";
	};
	class CUP_A1_S18c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S18c";
		model = "ca\signs\s18c.p3d";
	};
	class CUP_A1_S20a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S20a";
		model = "ca\signs\s20a.p3d";
	};
	class CUP_A1_S20b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S20b";
		model = "ca\signs\s20b.p3d";
	};
	class CUP_A1_S20c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S20c";
		model = "ca\signs\s20c.p3d";
	};
	class CUP_A1_S21a: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S21a";
		model = "ca\signs\s21a.p3d";
	};
	class CUP_A1_S21b: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S21b";
		model = "ca\signs\s21b.p3d";
	};
	class CUP_A1_S21c: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S21c";
		model = "ca\signs\s21c.p3d";
	};
	class CUP_A1_slepa_: CUP_A1_Signs
	{
		scope = 2;
		displayName = "slepa_";
		model = "ca\signs\slepa_.p3d";
	};
	class CUP_A1_slepa_bocni_leva: CUP_A1_Signs
	{
		scope = 2;
		displayName = "slepa_bocni_leva";
		model = "ca\signs\slepa_bocni_leva.p3d";
	};
	class CUP_A1_slepa_bocni_leva_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "slepa_bocni_leva_new";
		model = "ca\signs\slepa_bocni_leva_new.p3d";
	};
	class CUP_A1_slepa_bocni_prava: CUP_A1_Signs
	{
		scope = 2;
		displayName = "slepa_bocni_prava";
		model = "ca\signs\slepa_bocni_prava.p3d";
	};
	class CUP_A1_slepa_bocni_prava_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "slepa_bocni_prava_new";
		model = "ca\signs\slepa_bocni_prava_new.p3d";
	};
	class CUP_A1_slepa_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "slepa_new";
		model = "ca\signs\slepa_new.p3d";
	};
	class CUP_A1_smyk: CUP_A1_Signs
	{
		scope = 2;
		displayName = "smyk";
		model = "ca\signs\smyk.p3d";
	};
	class CUP_A1_smyk_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "smyk_new";
		model = "ca\signs\smyk_new.p3d";
	};
	class CUP_A1_snih_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "snih_new";
		model = "ca\signs\snih_new.p3d";
	};
	class CUP_A1_stopka: CUP_A1_Signs
	{
		scope = 2;
		displayName = "stopka";
		model = "ca\signs\stopka.p3d";
	};
	class CUP_A1_stopka_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "stopka_new";
		model = "ca\signs\stopka_new.p3d";
	};
	class CUP_A1_stoupani: CUP_A1_Signs
	{
		scope = 2;
		displayName = "stoupani";
		model = "ca\signs\stoupani.p3d";
	};
	class CUP_A1_stoupani_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "stoupani_new";
		model = "ca\signs\stoupani_new.p3d";
	};
	class CUP_A1_S_666: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_666";
		model = "ca\signs\s_666.p3d";
	};
	class CUP_A1_S_666_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_666_end";
		model = "ca\signs\s_666_end.p3d";
	};
	class CUP_A1_S_bagango: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_bagango";
		model = "ca\signs\s_bagango.p3d";
	};
	class CUP_A1_S_bagango_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_bagango_end";
		model = "ca\signs\s_bagango_end.p3d";
	};
	class CUP_A1_S_benoma: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_benoma";
		model = "ca\signs\s_benoma.p3d";
	};
	class CUP_A1_S_benoma_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_benoma_end";
		model = "ca\signs\s_benoma_end.p3d";
	};
	class CUP_A1_S_carmen: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_carmen";
		model = "ca\signs\s_carmen.p3d";
	};
	class CUP_A1_S_carmen_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_carmen_end";
		model = "ca\signs\s_carmen_end.p3d";
	};
	class CUP_A1_S_corazol: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_corazol";
		model = "ca\signs\s_corazol.p3d";
	};
	class CUP_A1_S_corazol_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_corazol_end";
		model = "ca\signs\s_corazol_end.p3d";
	};
	class CUP_A1_S_eponia: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_eponia";
		model = "ca\signs\s_eponia.p3d";
	};
	class CUP_A1_S_eponia_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_eponia_end";
		model = "ca\signs\s_eponia_end.p3d";
	};
	class CUP_A1_S_everon: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_everon";
		model = "ca\signs\s_everon.p3d";
	};
	class CUP_A1_S_everon_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_everon_end";
		model = "ca\signs\s_everon_end.p3d";
	};
	class CUP_A1_S_gaula: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_gaula";
		model = "ca\signs\s_gaula.p3d";
	};
	class CUP_A1_S_gaula_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_gaula_end";
		model = "ca\signs\s_gaula_end.p3d";
	};
	class CUP_A1_S_hunapu: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_hunapu";
		model = "ca\signs\s_hunapu.p3d";
	};
	class CUP_A1_S_hunapu_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_hunapu_end";
		model = "ca\signs\s_hunapu_end.p3d";
	};
	class CUP_A1_S_ixel: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_ixel";
		model = "ca\signs\s_ixel.p3d";
	};
	class CUP_A1_S_ixel_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_ixel_end";
		model = "ca\signs\s_ixel_end.p3d";
	};
	class CUP_A1_S_masbete: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_masbete";
		model = "ca\signs\s_masbete.p3d";
	};
	class CUP_A1_S_masbete_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_masbete_end";
		model = "ca\signs\s_masbete_end.p3d";
	};
	class CUP_A1_S_mataredo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_mataredo";
		model = "ca\signs\s_mataredo.p3d";
	};
	class CUP_A1_S_mataredo_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_mataredo_end";
		model = "ca\signs\s_mataredo_end.p3d";
	};
	class CUP_A1_S_mercalillo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_mercalillo";
		model = "ca\signs\s_mercalillo.p3d";
	};
	class CUP_A1_S_mercalillo_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_mercalillo_end";
		model = "ca\signs\s_mercalillo_end.p3d";
	};
	class CUP_A1_S_modesta: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_modesta";
		model = "ca\signs\s_modesta.p3d";
	};
	class CUP_A1_S_modesta_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_modesta_end";
		model = "ca\signs\s_modesta_end.p3d";
	};
	class CUP_A1_S_obregan: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_obregan";
		model = "ca\signs\s_obregan.p3d";
	};
	class CUP_A1_S_obregan_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_obregan_end";
		model = "ca\signs\s_obregan_end.p3d";
	};
	class CUP_A1_S_pacamac: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_pacamac";
		model = "ca\signs\s_pacamac.p3d";
	};
	class CUP_A1_S_pacamac_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_pacamac_end";
		model = "ca\signs\s_pacamac_end.p3d";
	};
	class CUP_A1_S_pita: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_pita";
		model = "ca\signs\s_pita.p3d";
	};
	class CUP_A1_S_pita_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_pita_end";
		model = "ca\signs\s_pita_end.p3d";
	};
	class CUP_A1_S_tandag: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_tandag";
		model = "ca\signs\s_tandag.p3d";
	};
	class CUP_A1_S_tandag_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_tandag_end";
		model = "ca\signs\s_tandag_end.p3d";
	};
	class CUP_A1_S_tlaloc: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_tlaloc";
		model = "ca\signs\s_tlaloc.p3d";
	};
	class CUP_A1_S_tlaloc_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_tlaloc_end";
		model = "ca\signs\s_tlaloc_end.p3d";
	};
	class CUP_A1_S_valor: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_valor";
		model = "ca\signs\s_valor.p3d";
	};
	class CUP_A1_S_valor_end: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_valor_end";
		model = "ca\signs\s_valor_end.p3d";
	};
	class CUP_A1_S_vlajka: CUP_A1_Signs
	{
		scope = 2;
		displayName = "S_vlajka";
		model = "ca\signs\s_vlajka.p3d";
	};
	class CUP_A1_ubytovani: CUP_A1_Signs
	{
		scope = 2;
		displayName = "ubytovani";
		model = "ca\signs\ubytovani.p3d";
	};
	class CUP_A1_vitr_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vitr_new";
		model = "ca\signs\vitr_new.p3d";
	};
	class CUP_A1_vlevo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vlevo";
		model = "ca\signs\vlevo.p3d";
	};
	class CUP_A1_vlevo_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vlevo_new";
		model = "ca\signs\vlevo_new.p3d";
	};
	class CUP_A1_vlevo_prikaz: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vlevo_prikaz";
		model = "ca\signs\vlevo_prikaz.p3d";
	};
	class CUP_A1_vlevo_prikaz_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vlevo_prikaz_new";
		model = "ca\signs\vlevo_prikaz_new.p3d";
	};
	class CUP_A1_vpravo: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vpravo";
		model = "ca\signs\vpravo.p3d";
	};
	class CUP_A1_vpravo_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vpravo_new";
		model = "ca\signs\vpravo_new.p3d";
	};
	class CUP_A1_vpravo_prikaz: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vpravo_prikaz";
		model = "ca\signs\vpravo_prikaz.p3d";
	};
	class CUP_A1_vpravo_prikaz_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "vpravo_prikaz_new";
		model = "ca\signs\vpravo_prikaz_new.p3d";
	};
	class CUP_A1_zakaz_stani: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_stani";
		model = "ca\signs\zakaz_stani.p3d";
	};
	class CUP_A1_zakaz_stani_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_stani_new";
		model = "ca\signs\zakaz_stani_new.p3d";
	};
	class CUP_A1_zakaz_vjezdu: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_vjezdu";
		model = "ca\signs\zakaz_vjezdu.p3d";
	};
	class CUP_A1_zakaz_vjezdu_jednosmerka: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_vjezdu_jednosmerka";
		model = "ca\signs\zakaz_vjezdu_jednosmerka.p3d";
	};
	class CUP_A1_zakaz_vjezdu_jednosmerka_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_vjezdu_jednosmerka_new";
		model = "ca\signs\zakaz_vjezdu_jednosmerka_new.p3d";
	};
	class CUP_A1_zakaz_vjezdu_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_vjezdu_new";
		model = "ca\signs\zakaz_vjezdu_new.p3d";
	};
	class CUP_A1_zakaz_vjezdu_traktoru: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_vjezdu_traktoru";
		model = "ca\signs\zakaz_vjezdu_traktoru.p3d";
	};
	class CUP_A1_zakaz_vyhulencum: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_vyhulencum";
		model = "ca\signs\zakaz_vyhulencum.p3d";
	};
	class CUP_A1_zakaz_zastaveni: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_zastaveni";
		model = "ca\signs\zakaz_zastaveni.p3d";
	};
	class CUP_A1_zakaz_zastaveni_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zakaz_zastaveni_new";
		model = "ca\signs\zakaz_zastaveni_new.p3d";
	};
	class CUP_A1_zmena_prednosti_new: CUP_A1_Signs
	{
		scope = 2;
		displayName = "zmena_prednosti_new";
		model = "ca\signs\zmena_prednosti_new.p3d";
	};
};