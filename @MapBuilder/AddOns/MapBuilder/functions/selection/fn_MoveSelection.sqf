private["_direction","_boost"];
_direction = param[0];
_boost = param[1,1];
_displacement = 0.1*_boost;



switch (_direction) do {
    case "Forward": {
		if(count(MB_Selected)>1) then {
			[[0,_displacement,0],false] call MB_FNC_MoveSelected;
		} else {
			[[0,_displacement,0],true] call MB_FNC_MoveSelected;
		};
	};
    case "Backward": {
		if(count(MB_Selected)>1) then {
			[[0,-1*_displacement,0],false] call MB_FNC_MoveSelected;
		} else {
			[[0,-1*_displacement,0],true] call MB_FNC_MoveSelected;
		};
	};
	case "Right": {
		if(count(MB_Selected)>1) then {
			[[_displacement,0,0],false] call MB_FNC_MoveSelected;
		} else {
			[[_displacement,0,0],true] call MB_FNC_MoveSelected;
		};
	};
    case "Left": {
		if(count(MB_Selected)>1) then {
			[[-1*_displacement,0,0],false] call MB_FNC_MoveSelected;
		} else {
			[[-1*_displacement,0,0],true] call MB_FNC_MoveSelected;
		};
	};
	case "Up": {
		if(count(MB_Selected)>1) then {
			[[0,0,_displacement],false] call MB_FNC_MoveSelected;
		} else {
			[[0,0,_displacement],true] call MB_FNC_MoveSelected;
		};
	};
    case "Down": {
		if(count(MB_Selected)>1) then {
			[[0,0,-1*_displacement],false] call MB_FNC_MoveSelected;
		} else {
			[[0,0,-1*_displacement],true] call MB_FNC_MoveSelected;
		};
	};
	case "RotRight": {
		[_displacement*10,false] call MB_FNC_RotateSelected;
	};
    case "RotLeft": {
		[-1*_displacement*10,false] call MB_FNC_RotateSelected;
	};
};