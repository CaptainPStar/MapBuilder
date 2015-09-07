private["_vars","_offset","_center","_clipboard"];
_clipboard = "";
_br = toString [13,10];//(carriage return & line feed)
_clipboard = _clipboard + "// Object composition created and exported with Map Builder" + _br;
_clipboard = _clipboard + "// See www.map-builder.info - Map Builder by NeoArmageddon" + _br;
_clipboard = _clipboard + "// Call this script by [Position,Rotation] execVM ""filename.sqf""" + _br + _br;
_clipboard = _clipboard + "private[""_center"",""_rotation"",""_obj"",""_pos""];";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "_center = param[0];";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "_rotation = param[1];";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "_fnc_rotatePos = {";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "private [""_centerPos"", ""_pos"", ""_dir""];";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "private [""_px"", ""_py"", ""_mpx"", ""_mpy"", ""_ma"", ""_rpx"", ""_rpy""];";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "_centerPos = _this select 0;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "_pos = _this select 1;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "_dir = _this select 2;";
_clipboard = _clipboard + _br;

_clipboard = _clipboard + "    _px = _pos select 0;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "    _py = _pos select 1;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "    _mpx = _centerPos select 0;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "    _mpy = _centerPos select 1;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "    _ma = _dir;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "    _rpx = ( (_px - _mpx) * cos(_ma) ) + ( (_py - _mpy) * sin(_ma) ) + _mpx;";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "    _rpy = (-(_px - _mpx) * sin(_ma) ) + ( (_py - _mpy) * cos(_ma) ) + _mpy;";
_clipboard = _clipboard + _br;

_clipboard = _clipboard + "[_rpx, _rpy, (_pos select 2)];";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + "};";
_clipboard = _clipboard + _br;
_clipboard = _clipboard + _br;



	{
		private["_type","_offset","_vars","_pos","_dirAndUp"];
		_type = _x select 0;
		_offset = _x select 1;
		_vars = _x select 2;
		_dirAndUp = [_vars select 1,_vars select 2,_vars select 3] call MB_fnc_CalcDirAndUpVector;
		_clipboard = _clipboard +  format["_pos = [_center,_center vectorAdd %1,_rotation] call _fnc_rotatePos;",_offset];
		_clipboard = _clipboard + _br;
		_clipboard = _clipboard + format["_obj = %1 createvehicle _pos;",str _type];
		_clipboard = _clipboard + _br;
		_clipboard = _clipboard +  format["_obj setVectorDirAndUp %1;",_dirAndUp];
		_clipboard = _clipboard + _br;
		_clipboard = _clipboard +  format["_obj setdir ((getdir _obj) + _rotation);"];
		_clipboard = _clipboard + _br;
		_clipboard = _clipboard +  format["_obj setPosATL _pos;"];
		_clipboard = _clipboard + _br;
		_clipboard = _clipboard + _br;
	} foreach MB_CopyPaste;

copyToClipboard _clipboard;
