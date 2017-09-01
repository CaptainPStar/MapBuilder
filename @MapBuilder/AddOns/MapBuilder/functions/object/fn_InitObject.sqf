private["_obj","_pos","_yaw","_pitch","_bank","_simulate","_locked","_sync"];
	_obj = [_this,0] call bis_fnc_param;
	_sync =  [_this,1,true] call bis_fnc_param;
	
	_pos = getposATL _obj;
	_yaw = 0;
	if(ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170010)) then {
		_yaw = random 360;
	};
	_pitch = 0;
	_bank = 0;
	_simulate = ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170011);
	_locked = false;
	_obj setvariable["MB_ObjVar_PositionATL",_pos,false];

	_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
	_obj setvariable["MB_ObjVar_Bank",_bank,false];
	_obj setvariable["MB_ObjVar_Yaw",_yaw,false];
	
	_obj setvariable["MB_ObjVar_Simulate",_simulate,false];
	_obj setvariable["MB_ObjVar_Locked",_locked,false];
	
	_obj setvariable["MB_ObjVar_Scale",1,false];
	
	//[_obj,MB_QuadTree] call MB_fnc_quadTreeInsert;
	
	[_obj,_sync] call MB_fnc_UpdateObject;