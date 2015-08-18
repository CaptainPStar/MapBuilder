private ["_centerPos", "_pos", "_dir"];
private ["_px", "_py", "_mpx", "_mpy", "_ma", "_rpx", "_rpy"];

_pos = _this select 0;
_dir = _this select 1;

    _px = _pos select 0;
    _py = _pos select 1;
    _ma = _dir;

    //Now, rotate point
    _rpx = ( (_px) * cos(_ma) ) + ( (_py) * sin(_ma) );
    _rpy = (-(_px) * sin(_ma) ) + ( (_py) * cos(_ma) );

[_rpx, _rpy, (_pos select 2)]