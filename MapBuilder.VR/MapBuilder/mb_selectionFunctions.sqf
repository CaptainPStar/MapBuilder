
//=========================================
//= Selection
//=========================================
MB_fnc_Select = {
	private["_object"];
	_object = _this select 0;
	if(!isNull _object) then {
		if(!(_object in MB_Selected)) then {
			MB_Selected set [count(MB_Selected),_object];
		};
	};
};
MB_fnc_Deselect = {
	private["_object","_newArray","_corners"];
	_object = _this select 0;
	_newArray = [];
	for "_i" from 0 to (count(MB_Selected)-1) do {
		if((MB_Selected select _i) != _object) then {
			_newArray set [count(_newArray),(MB_Selected select _i)];
		};

	};
	MB_Selected = _newArray;	
};

MB_fnc_DeselectAll = {
	while{count(MB_Selected)>0} do {
		[(MB_Selected select 0)] call MB_fnc_Deselect;	
	};
	MB_Selected = [];

};

//############################
// Rectangle Selection
//############################
MB_SelectionRectangle = [];
MB_SelectionModeAdd = false; 
MB_fnc_BeginRectangleDrag = {
	//systemchat format["Rectdrag at %1",MB_MousePosition];
	MB_SelectionRectangle = [MB_MousePosition,MB_MousePosition];
	MB_SelectionModeAdd = (_this select 4);
};

MB_fnc_UpdateRectangleDrag = {
	MB_SelectionRectangle set [1,MB_MousePosition];
	//When Mouse is released outside viewport, first value gets <null>. Don't ask me why.
	if(!isNil{MB_SelectionRectangle select 0}) then {
		[MB_SelectionRectangle,MB_SelectionModeAdd] call MB_fnc_SelectInRectangle;
	} else {
		MB_SelectionRectangle = [];
	};
	//systemchat format["%1",MB_SelectionRectangle];
};
MB_fnc_EndRectangleDrag = {
	MB_SelectionRectangle = [];
};
["BeginLeftMBDrag",{_this call MB_fnc_BeginRectangleDrag;},{MB_Mode==0 && count(MB_Selected)==0 || (_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
["EndLeftMBDrag",{_this call MB_fnc_EndRectangleDrag;},{MB_Mode==0 && count(MB_SelectionRectangle)>0}] call MB_fnc_addCallback;
["MouseMoved",{_this call MB_fnc_UpdateRectangleDrag;},{MB_Mode==0 && count(MB_SelectionRectangle)>0}] call MB_fnc_addCallback;






MB_fnc_SelectInRectangle = {
	private["_edges","_add","_cornerA","_cornerB","_obj","_flag"];
	_edges = _this select 0;
	_add = _this select 1;
	_cornerA = _edges select 0;
	_cornerB = _edges select 1;
	{
		_obj = _x;
		_opos = getpos _obj;
		_flag = true;
		if((_cornerA select 0)>(_cornerB select 0) &&
			((_opos select 0)>(_cornerA select 0) ||
			(_opos select 0)<(_cornerB select 0))) then {
				_flag = false;
			};
		if((_cornerA select 0)<(_cornerB select 0) &&
			((_opos select 0)<(_cornerA select 0) ||
			(_opos select 0)>(_cornerB select 0))) then {
				_flag = false;
			};
		if((_cornerA select 1)>(_cornerB select 1) &&
			((_opos select 1)>(_cornerA select 1) ||
			(_opos select 1)<(_cornerB select 1))) then {
				_flag = false;
			};
		if((_cornerA select 1)<(_cornerB select 1) &&
			((_opos select 1)<(_cornerA select 1) ||
			(_opos select 1)>(_cornerB select 1))) then {
				_flag = false;
			};
			if(_flag && !([_obj] call MB_fnc_isSelected)) then {
				[_obj] call MB_fnc_Select;
			} else {
				if(!_flag && ([_obj] call MB_fnc_isSelected) && !_add) then {
					[_obj] call MB_fnc_Deselect;
				};
			};
	} foreach MB_Objects;
};
MB_fnc_getClickedObject = {
		private["_uX","_uY","_layer","_obj","_objects","_shift","_isSelected"];
	_uX = _this select 2;
	_uY = _this select 3;
	_shift = _this select 4;
	_obj = objNull;
	_objects = lineIntersectsWith [getPosASL MBCamera, ATLtoASL screenToWorld [_uX,_uY], objNull, objNull, true];
	if(count(_objects)>0) then {
		_obj = _objects select 0;
	};
	_obj;
};

MB_fnc_SelectUnderCursor = {
	private["_uX","_uY","_layer","_obj","_pos","_opos","_objects","_shift","_isSelected"];
	_uX = _this select 2;
	_uY = _this select 3;
	_shift = _this select 4;
	_obj = _this call MB_fnc_getClickedObject;
	if(!isNull _obj) then {
		if((_obj in MB_Objects)) then {
			if(!_shift) then {
				[] call MB_fnc_DeselectAll;
			};
			_isSelected = [_obj] call MB_fnc_isSelected;
			if(!_isSelected) then {
				[_obj] call MB_fnc_Select;
			} else {
				[_obj] call MB_fnc_Deselect;
			};

		} else {
			[] call MB_fnc_DeselectAll;
		};
	} else {
		[] call MB_fnc_DeselectAll;
	};

};
["LeftMouseClick","MB_fnc_SelectUnderCursor",{MB_Mode==0 && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;

MB_fnc_isSelected = {
	private["_object","_newArray","_found"];
	_object = _this select 0;
	_found = false;
	if(_object in MB_Selected) then {
		_found = true;
	};
	_found
};

//TODO To new selection
MB_fnc_Copy = {
	private["_vars","_offset"];
	MB_CopyPaste = [];
	{
		_vars = [_x] call MB_fnc_getObjectVars;
		_offset = (_vars select 0) vectorDiff MB_MousePosition;
		MB_CopyPaste pushBack [typeof _x,_offset,_vars];
	} foreach MB_Selected;
	systemChat format["Selection of %1 objects copied to clipboard.",count(MB_CopyPaste)];
};
MB_fnc_Paste = {
	private["_vars","_offset"];
	[] call MB_fnc_DeselectAll;
	//_objects = [screenToWorld MB_MousePosition,MB_CopyPaste] call MB_fnc_ReconstructSelection;
	_center = MB_MousePosition;
	{
		_type = _x select 0;
		_offset = _x select 1;
		_vars = _x select 2;
		_pos = _center vectorAdd _offset;
		_obj = [_type,_pos] call MB_fnc_CreateObject;
		_vars set[0,_pos];
		[_obj,_vars] call MB_fnc_setObjectVars;
		[_obj] call MB_fnc_Select;
	} foreach MB_CopyPaste;
};

MB_fnc_ReconstructSelection = {
//MB_Selected set [count(MB_Selected),[_object,_relPos,_height,_dir,_pitchBank]];
	_pos = _this select 0;
	_selection = _this select 1;
	_createdObjects = [];
	_primaryObj = objNull;
	{
		_pos = [(_pos select 0) + ((_x select 1) select 0),
						(_pos select 1) + ((_x select 1) select 1),
						(_x select 2)];
		_created = [(_x select 0),_pos] call MB_fnc_CreateObject;
		if(isNull(_primaryObj)) then {
			_primaryObj = _created;
		};
		_created setposATL _pos;
		
		if(_primaryObj != _created) then {
			[_primaryObj,_created,(_x select 1),(_x select 2)] call MB_fnc_SetRelPos;
		};
		_created setdir (_x select 3);
		[_created,((_x select 4) select 0),((_x select 4) select 1)] call BIS_fnc_setPitchBank;
		_createdObjects pushBack _created;
	} foreach _selection;
	
	_createdObjects;
};

MB_SelectionBox = [];
MB_fnc_calcSelectionCenter = {
	private["_center"];
	_center = [0,0,0];
	{
		_center = _center vectorAdd (_x getvariable "MB_ObjVar_PositionATL");
	} foreach MB_Selected;
	_center = _center vectorMultiply 1/count(MB_Selected);
	_center;
};
MB_fnc_calcSelectionBox = {
	private["_edge1","_edge2","_vul","_hor","_box","_obj","_box","_points"];
	if(count(MB_Selected)>1) then {
		_edge1 = [0,0,0];
		_edge2 = [0,0,0];
		_refObj  = objNull;
		//_xrange = [];
		//_yrange = [];
		//_zrange = [];
		_points = [];
		{
			_obj = _x;
			_box = boundingBoxReal _obj;
			_vul =  (_box select 0);
			_hor =  (_box select 1);
			
			if(isNull _refObj) then {
				_refObj = _obj;
				_edge1 = _obj modelToWorld _vul;
				_edge2 = _obj modelToWorld _hor;
			};

			_height = (_hor select 2)-(_vul select 2);
			_width = (_hor select 1)-(_vul select 1);
			_length = (_hor select 0)-(_vul select 0);
			
			_vur = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)];
			_vol = [(_vul select 0),(_vul select 1),(_vul select 2)+_height];
			_vor = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)+_height];
			
			_hur = [(_hor select 0),(_hor select 1),(_hor select 2)-_height];
			_hol = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)];
			_hul = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)-_height];
			
			//systemchat format["%1",[_vul,_vur,_vol,_vor,_hor,_hur,_hol,_hul]];
			_points = _points + [_obj modelToWorld _vul,_obj modelToWorld _vur,
									_obj modelToWorld _vol,_obj modelToWorld _vor,
									_obj modelToWorld _hor,_obj modelToWorld _hur,
									_obj modelToWorld _hol,_obj modelToWorld _hul]; 

		} foreach MB_Selected;
		
		 {
			_edge1 set [0,((_x select 0) min (_edge1 select 0))];
			_edge1 set [1,((_x select 1) min (_edge1 select 1))];
			_edge1 set [2,((_x select 2) min (_edge1 select 2))];
			
			_edge2 set [0,((_x select 0) max (_edge2 select 0))];
			_edge2 set [1,((_x select 1) max (_edge2 select 1))];
			_edge2 set [2,((_x select 2) max (_edge2 select 2))];
			
			
		 } foreach _points;

		if(!isNull _refObj) then {
			MB_SelectionBox=[_edge1,_edge2];
			MB_SelectionCenter = [((_edge2 select 0)+(_edge1 select 0))/2,((_edge2 select 1)+(_edge1 select 1))/2,0];
		} else {
			MB_SelectionBox = [];
			MB_SelectionCenter = [];
		};
	} else {
		MB_SelectionBox = [];
		MB_SelectionCenter = [];
	};
};