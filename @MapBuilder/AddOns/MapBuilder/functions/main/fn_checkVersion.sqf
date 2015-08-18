	#include "\MB\MapBuilder\version.hpp"
	disableSerialization;
	private["_curVersionStr","_curVersion","_latestVersionStr","_curVersion"];
	MB_CurVersion = MB_VERSION;
	MB_CurVersionNum = parseNumber ([MB_CurVersion,"0123456789"] call BIS_fnc_filterString);
	MB_NewVersion = "MB_Helper" callExtension "checkversion";
	MB_NewVersionNum = parseNumber ([MB_NewVersion,"0123456789"] call BIS_fnc_filterString);
	//if(MB_NewVersionNum>MB_CurVersionNum) then {
		//systemChat format["Your Map Builder version is v%1.",_curVersionStr];
		//systemChat format["There is a newer version of Map Builder (v%1) available.",_latestVersionStr];
	
	//} else {
		//systemChat format["Your Map Builder version v%1 is up-to-date.",_curVersionStr];
	//};
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 171010;
	_ctrl ctrlSetText format["Version: %1",MB_CurVersion];
	if(MB_NewVersionNum>MB_CurVersionNum) then {
		_ctrl ctrlSetTextColor [1,0,0,1];
	};