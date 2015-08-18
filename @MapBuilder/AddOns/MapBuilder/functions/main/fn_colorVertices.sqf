
	private["_pos","_grid","_xp","_yp","_index","_vertex"];
	_pos = [_this,0,[]] call bis_fnc_param;
	_grid = 4;
	_radius = 10;
	_vertices = [];
	if(isNil("MB_VertexHelpers")) then {
		MB_VertexHelpers = [];
	};
	
	_xp = (_pos select 0) - ((_pos select 0) mod _grid);
	_yp = (_pos select 1) - ((_pos select 1) mod _grid);
	_index = 0;
	_cols = [];
	for[{_dx=-_radius},{_dx<=_radius},{_dx=_dx+1}] do {
		_rows = [];
		for[{_dy=-_radius},{_dy<=_radius},{_dy=_dy+1}] do {
			//_vertex = "Sign_Sphere100cm_F" createvehicle [_x+_dx*_grid,_y+_dy*_grid,0];
			//_vertex setObjectTexture [0, "#(rgb,8,8,3)color(1,0,0,1)"];
			_vertex = [_xp+_dx*_grid,_yp+_dy*_grid,0.5];
			_rows pushBack _vertex;
		};
		_cols pushBack _rows;
	};
	MB_VertexHelpers = _cols;
