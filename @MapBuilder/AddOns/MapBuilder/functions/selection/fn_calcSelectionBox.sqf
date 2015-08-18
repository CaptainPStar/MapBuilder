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