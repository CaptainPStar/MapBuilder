["BeginLeftMBDrag",{_this spawn MB_fnc_BrushBegin;},{MB_Mode==1}] call MB_fnc_addCallback;
["EndLeftMBDrag",{_this spawn MB_fnc_BrushEnd;},{MB_Mode==1 && MB_Brushing}] call MB_fnc_addCallback;
["MouseMoved",{_this spawn MB_fnc_BrushUpdate;},{MB_Mode==1 && MB_Brushing}] call MB_fnc_addCallback;

MB_Brushing = false;
MB_BrushStart = [];
MB_BrushNode = [];
MB_BrushWidth = 15;
MB_fnc_BrushBegin = {

	MB_Brushing = true;
	MB_BrushStart = MB_MousePosition;
	//_vertex = "Sign_Sphere100cm_F" createvehicle MB_MousePosition;
	//_vertex setObjectTexture [0, "#(rgb,8,8,3)color(1,0,0,1)"];
};
MB_fnc_BrushUpdate = {
	if(count MB_BrushNode == 0) then {
		if((MB_BrushStart vectorDistance MB_MousePosition)>0.5) then {
			private["_vector","_dir"];
			_vector = MB_BrushStart vectorFromTo MB_MousePosition;
			_dir = (_vector select 0) atan2 (_vector select 1);
			MB_BrushNode = MB_MousePosition;
			[MB_BrushNode,_dir] call MB_fnc_drawBrush;
		} else {
			MB_3DVectors = [[MB_BrushStart,MB_MousePosition]];
		};
	} else {
		if((MB_BrushNode vectorDistance MB_MousePosition)>=MB_BrushWidth) then {
			private["_vector","_dir"];
			_vector = MB_BrushNode vectorFromTo MB_MousePosition;
			_dir = (_vector select 0) atan2 (_vector select 1);
			MB_BrushNode = MB_MousePosition;
			[MB_BrushNode,_dir] call MB_fnc_drawBrush;
		} else {
			MB_3DVectors = [[MB_BrushNode,MB_MousePosition]];
		};
	};
};
MB_fnc_BrushEnd = {
	MB_Brushing = false;
	MB_3DVectors = [];
	MB_BrushNode = [];
	MB_BrushStart = [];
};
//0;b_FicusC2s_F;4474.76;4555.69;0;0;0;0;1
//0;b_FicusC1s_F;4470.03;4558.37;0;0;0;0;1
//0;t_FicusB1s_F;4471.58;4560.42;0;0;0;0;1

MB_CurBrush = [];
//MB_CurBrush pushBack [type,chance,count,relpos,dir,pitch,bank,scale,randompos,randomdir,randompitch,randombank,randomscale];
//MB_CurBrush pushBack ["b_FicusC2s_F",0.7,1,[0,0,0],0,0,0,1,[4,4,0],360,5,5,0.2];
//MB_CurBrush pushBack ["b_FicusC1s_F",0.7,1,[0,0,0],0,0,0,1,[4,4,0],360,5,5,0.2];
//MB_CurBrush pushBack ["t_FicusB1s_F",0.2,1,[0,0,0],0,0,0,1,[1,1,0],360,5,5,0.2];
//MB_CurBrush pushBack ["VergePost_F",1,1,[8,0,0],0,0,0,1,[0.1,0.1,0],0,20,20,0];
//MB_CurBrush pushBack ["VergePost_F",1,1,[-8,0,0],180,0,0,1,[0.1,0.1,0],0,20,20,0];

MB_CurBrush pushBack ["t_populusn3s_f",1,1,[9,0,0],0,0,0,1,[0.4,0.7,0],360,5,5,0.2];
MB_CurBrush pushBack ["t_populusn3s_f",1,1,[-9,0,0],0,0,0,1,[0.4,0.7,0],360,5,5,0.2];
MB_fnc_drawBrush = {
	private["_dir","_pos","_obj"];
	systemChat "Brushie!";
	_pos = _this select 0;
	_dir = _this select 1;
	systemChat format["Dir is %1",_dir];
	{
		_type = _x select 0;
		_chance = _x select 1;
		_count = _x select 2;
		_rpos = _x select 3;
		_yaw = _x select 4;
		_pitch  = _x select 5;
		_bank = _x select 6;
		_scale = _x select 7;
		_rndPos = _x select 8;
		_rndDir = _x select 9;
		_rndPitch = _x select 10;
		_rndBank = _x select 11;
		_rndScale = _x select 12;
		
		for "_i" from 1 to _count do {
			if(random 100 <= (_chance*100)) then {
				_offset = [_rpos,_dir] call MB_fnc_RotateRelPos;
					
				_cpos = _pos vectorAdd _offset vectorAdd [2*random(_rndPos select 0)-(_rndPos select 0), 2*random(_rndPos select 1)-(_rndPos select 1), random(_rndPos select 2)];
				_obj = [_type,_cpos] call MB_fnc_CreateObject;
				
				_obj setvariable["MB_ObjVar_PositionATL",_cpos,false];
				_obj setvariable["MB_ObjVar_Pitch",(_pitch + 2*(random _rndPitch)-_rndPitch),false];
				_obj setvariable["MB_ObjVar_Bank",(_bank + 2*(random _rndBank)-_rndBank),false];
				_obj setvariable["MB_ObjVar_Yaw",_dir+(_yaw + 2*(random _rndDir)-_rndDir),false];

				
				_obj setvariable["MB_ObjVar_Scale",(_scale + 2*(random _rndScale)-_rndScale),false];
				
				[_obj] call MB_fnc_UpdateObject;
			};
		};
	
	} foreach MB_CurBrush;

};

//vertex = "Sign_Sphere100cm_F" createvehicle [_x+_dx*_grid,_y+_dy*_grid,0];
//_vertex setObjectTexture [0, "#(rgb,8,8,3)color(1,0,0,1)"];