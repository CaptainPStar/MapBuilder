disableSerialization;
private["_display","_open","_show"];
_open = [] call MB_FNC_mapOpen;
_show = param[0,!(_open)];
systemchat format["%1",_show];
_display = uinamespace getvariable 'mb_main_dialog';

if(_show) then {
	(_display displayCtrl 170301) ctrlShow true;
	(_display displayCtrl 170302) ctrlShow true;
	(_display displayCtrl 170303) ctrlShow true;
	(_display displayCtrl 170304) ctrlShow true;
} else {
	(_display displayCtrl 170301) ctrlShow false;
	(_display displayCtrl 170302) ctrlShow false;
	(_display displayCtrl 170303) ctrlShow false;
	(_display displayCtrl 170304) ctrlShow false;
};
