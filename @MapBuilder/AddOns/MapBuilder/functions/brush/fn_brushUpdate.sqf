private["_vector","_dir"];
if(MB_NodesDrawn == 0) then {
		if((MB_BrushLastNode vectorDistance MB_MousePosition)>=MB_BrushWidth) then {
			private["_vector","_dir"];
			_vector = MB_BrushLastNode vectorFromTo MB_MousePosition;
			_dir = (_vector select 0) atan2 (_vector select 1);
			[+MB_BrushLastNode,_dir] call MB_fnc_brusherDrawNode;
			MB_BrushLastNode = +MB_MousePosition; //The last 'real' node placed
			MB_BrusherLastReferenceNode = +MB_MousePosition; //The last virtual node used for brush/distance measurements
			MB_BrushHelper setposATL MB_BrushLastNode;
			systemchat "Firstnode";
			//Log the angle:
			MB_BrushCamAngle = _dir;
			MB_BrushDirection = 0;
			MB_NodesDrawn = 1;
			MB_BrusherDir = vectorNormalized _vector;
			
		} else {
			private["_mpos"];
			MB_3DVectors = [[+MB_BrushLastNode,+MB_MousePosition]];
			MB_BrushPoint setposATL (MB_MousePosition vectorAdd [0,0,0.5]);
			_vector = MB_BrushLastNode vectorFromTo MB_MousePosition;
			_dir = (_vector select 0) atan2 (_vector select 1);
			MB_BrushPoint setdir _dir;
			MB_BrushDirection = _dir;
		};
	} else {
			//Calculate new Node position
			private["_mpos","_mag"];
			_mpos = +MB_MousePosition;
			if(MB_BrusherLockDir) then {
				_mag = 1;
				_mag = MB_BrusherLastReferenceNode vectorDistance MB_MousePosition;
				systemchat format["Mag %1",_mag];
				_mpos = MB_BrushLastNode vectorAdd  (MB_BrusherDir vectorMultiply _mag);
			};
			
		if((MB_BrusherLastReferenceNode vectorDistance MB_MousePosition)>=MB_BrushWidth) then {
			private["_vector","_dir"];
			_vector = MB_BrushLastNode vectorFromTo _mpos;
			_dir = (_vector select 0) atan2 (_vector select 1);
			[+MB_BrushLastNode,_dir] call MB_fnc_brusherDrawNode;
			MB_BrushLastNode = +_mpos;
			MB_BrusherLastReferenceNode = +MB_MousePosition;
			MB_BrushHelper setposATL MB_BrushLastNode;
			MB_NodesDrawn = MB_NodesDrawn + 1;
		} else {
			MB_3DVectors = [[+MB_BrushLastNode,+_mpos]];
			MB_BrushPoint setposATL (_mpos vectorAdd [0,0,0.5]);
			_vector = MB_BrushLastNode vectorFromTo _mpos;
			_dir = (_vector select 0) atan2 (_vector select 1);
			MB_BrushPoint setdir _dir;
			MB_BrushDirection = _dir;
		};
	};