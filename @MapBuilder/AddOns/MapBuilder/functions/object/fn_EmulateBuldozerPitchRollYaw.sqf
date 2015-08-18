_obj = [_this,0] call bis_fnc_param; 
_pitch = [_this,1] call bis_fnc_param; 
_bank = [_this,2] call bis_fnc_param;  
_yaw = [_this,3] call bis_fnc_param;  

_up = [0,0,1];
_dir = [0,1,0];
_right = [1,0,0];
//Bank
_up = [_up,_dir,_bank] call MB_fnc_RotateVector3D;
_right = [_right,_dir,_bank] call MB_fnc_RotateVector3D;

//Pitch
_up = [_up,_right,_pitch] call MB_fnc_RotateVector3D;
_dir = [_dir,_right,_pitch] call MB_fnc_RotateVector3D;

//Yaw
_dir = [_dir,_up,_yaw] call MB_fnc_RotateVector3D;
_right = [_right,_up,_yaw] call MB_fnc_RotateVector3D;

_obj setVectorDirAndUp [_dir,_up];
_return = [_dir,_up];
_return;