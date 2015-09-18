disableSerialization;
private["_display","_open","_show"];
_open = [] call MB_FNC_mapOpen;
_show = param[0,!(_open)];
systemchat format["%1",_show];
_display = uinamespace getvariable 'mb_main_dialog';

if(_show) then {
	(_display displayCtrl 170301) mapCenterOnCamera true;
	//(_display displayCtrl 170301) ctrlMapAnimAdd [170301, 0.1, [((MB_CamPos select 0) select 0),((MB_CamPos select 0) select 1)]];
	//ctrlMapAnimCommit (_display displayCtrl 170301);
	(_display displayCtrl 170301) ctrlShow true;
	ctrlSetFocus (_display displayCtrl 170301);
	(_display displayCtrl 170301) ctrlEnable true;
	_map  = [(configFile >> "CfgWorlds" >> worldName),"pictureShot","#(argb,8,8,3)color(1,1,1,1)"] call BIS_fnc_returnConfigEntry;
	systemchat _map;
	//(_display displayCtrl 170301) ctrlSetText _map;
} else {
	(_display displayCtrl 170301) ctrlShow false;
};
