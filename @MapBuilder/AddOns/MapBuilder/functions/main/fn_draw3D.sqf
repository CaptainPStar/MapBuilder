//=========================================
//= Scene drawing
//=========================================
//MB_3DVectors = [];
private["_up","_dir","_pos","_scale"];

	
	//{
	//	[_x] call MB_fnc_DrawBoundingBox;
	//	if((_x getvariable "MB_ObjVar_Scale") != 1) then {
	//		[_x,(_x getvariable "MB_ObjVar_Scale"),[1,0,0,1]] call MB_fnc_DrawBoundingBox;
	//	};
	//	_up = vectorup _x;
	//	_dir = vectordir _x;
	//	_pos = _x modelToWorld [0,0,0];
	//	//_scale = (sizeOf (typeof _x))*2;
	//	_scale = 0;
	//	if(_scale == 0) then {
	//		_scale = 4;
	//	};
	//	//[_pos,(_pos vectoradd (_up vectorMultiply _scale)),[0,0,1,1]] call drawLine3DThick;
	//	//[_pos,(_pos vectoradd (_dir vectorMultiply _scale)),[0,1,0,1]] call drawLine3DThick;
	//	//[_pos,(_pos vectoradd ((_dir vectorCrossProduct _up) vectorMultiply _scale)),[1,0,0,1]] call drawLine3DThick;//

	//	
	//	drawLine3D [_pos,(_pos vectoradd (_up vectorMultiply _scale)),[0,0,1,1]];
	//	drawLine3D [_pos,(_pos vectoradd (_dir vectorMultiply _scale)),[0,1,0,1]];
	//	drawLine3D [_pos,(_pos vectoradd ((_dir vectorCrossProduct _up) vectorMultiply _scale)),[1,0,0,1]];

		//drawLine3D [_pos,(_pos vectoradd [5,0,0]),[0,0,1,1]];
		//drawLine3D [_pos,(_pos vectoradd [0,5,0]),[0,1,0,1]];
		//drawLine3D [_pos,(_pos vectoradd [0,0,5]),[1,0,0,1]];
	//	if(!isNil("RotatedNorth")) then {
	//		drawLine3D [_pos,(_pos vectoradd (RotatedNorth vectorMultiply 5)),[0,0,1,1]];
	//		drawLine3D [_pos,(_pos vectoradd (RotatedRight vectorMultiply 5)),[0,1,0,1]];
	//		//drawLine3D [_pos,(_pos vectoradd (RotatedUp vectorMultiply 5)),[1,0,0,1]];
	//	};
	
	{
		private["_pos","_gpos"];

		_pos = _x modelToWorld [0,0,0];
		_gpos = +_pos;
		
		
		_gpos set[2,0];
		drawLine3D [_pos,_gpos,[0,1,0,1]];
	} foreach MB_Selected;
	
	{
		drawLine3D [_x select 0,_x select 1,[0,0,1,1]];
	} foreach MB_DebugLines;
	
	if(count(MB_SelectionRectangle) == 2) then {
		_a = MB_SelectionRectangle select 0;
		_c = MB_SelectionRectangle select 1;		
		_z = (_a select 2);
		if((_c select 2)>_z) then {
			_z = (_c select 2);
		};
		_b = [(_c select 0),(_a select 1),_z];
		_d = [(_a select 0),(_c select 1),_z];
		drawLine3D [_a,_b,[0,0,1,1]];
		drawLine3D [_b,_c,[0,0,1,1]];
		drawLine3D [_c,_d,[0,0,1,1]];
		drawLine3D [_d,_a,[0,0,1,1]];
	};
	if(count(MB_SelectionBox)==2) then {
	
	MB_SelectionBox call MB_fnc_DrawBox;
	
	};
	if(!isNil("MB_VertexHelpers")) then {
		{
			_row = _x;
			_rowindex = _forEachIndex;
			{
			//drawIcon3D ["\a3\ui_f\data\gui\cfg\cursors\add_gs.paa", [1,1,0,1], _x, 1.0, 1.0, 0,"", 1, 0.05, "PuristaMedium"];

			if(count(_row)>(_forEachIndex+1)) then {
				drawLine3D [_x,_row select (_forEachIndex+1),[1,1,0,1]];
			};
			if(count(MB_VertexHelpers)>(_rowindex+1)) then {
				drawLine3D [_x,((MB_VertexHelpers select (_rowindex+1)) select _forEachIndex),[1,1,0,1]];
			};
			} foreach _row;
		} foreach MB_VertexHelpers;
	};
	{
		_start = (_x select 0) vectorAdd [0,0,0.5];
		_end = ((_x select 1) vectorAdd [0,0,0.5]);
		drawLine3D [_start,_end,[0,1,0,1]];
	} foreach MB_3DVectors;
