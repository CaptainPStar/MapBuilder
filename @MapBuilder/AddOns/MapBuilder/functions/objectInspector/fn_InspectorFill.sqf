disableSerialization;
	private["_object","_pos","_pitch","_bank","_yaw","_simulate","_locked","_return"];
	_object = MB_InspectedObject;
	if(!isNull _object) then {
		_pos = _object getvariable "MB_ObjVar_PositionATL";
		_pitch = _object getvariable "MB_ObjVar_Pitch";
		_bank = _object getvariable "MB_ObjVar_Bank";
		_yaw = _object getvariable "MB_ObjVar_Yaw";
		_simulate = _object getvariable "MB_ObjVar_Simulate";
		_locked = _object getvariable "MB_ObjVar_Locked";
		
		_scale = _object getvariable "MB_ObjVar_Scale";
		
		_display = uinamespace getvariable 'mb_main_dialog';
		
		_titleCtrl = _display displayCtrl 170701;
		_xCtrl = _display displayCtrl 170702;
		_yCtrl = _display displayCtrl 170703;
		_heightCtrl = _display displayCtrl 170704;
		_yawCtrl = _display displayCtrl 170705;
		_pitchCtrl = _display displayCtrl 170706;
		_bankCtrl = _display displayCtrl 170707;
		_scaleCtrl = _display displayCtrl 170708;
		
		_titleCtrl ctrlSetText (str _object);
		_xCtrl ctrlSetText format["%1",(_pos select 0)];
		_yCtrl ctrlSetText format["%1",(_pos select 1)];
		_heightCtrl ctrlSetText format["%1",(_pos select 2)];
		_yawCtrl ctrlSetText format["%1",_yaw];
		_pitchCtrl ctrlSetText format["%1",_pitch];
		_bankCtrl ctrlSetText format["%1",_bank];
		_scaleCtrl ctrlSetText format["%1",_scale];
		
	};