_direction = param [0,"45"];

switch (_direction) do {
    case "0": {
		MB_CamPos set[1,0];
		MB_CamPos set[2,0];
	};
    case "45": { 
		MB_CamPos set[2,-45];
	};
	 case "north": {
		MB_CamPos set[1,0];
	 };
    case "east": { 
		MB_CamPos set[1,90];
	};
	 case "south": {
		MB_CamPos set[1,180];
	 };
    case "west": {
		MB_CamPos set[1,270];
	};
	case "top": {
		private["_pos"];
		_pos = screenToWorld [0.5,0.5];
		if(_pos distance (MB_CamPos select 0)<500) then {
			MB_CamPos set[0,[_pos select 0, _pos select 1,((MB_CamPos select 0) select 2)]];
		};
		MB_CamPos set[2,-90];
		MB_CamPos set[1,0];
	};
    default { 
	};
};