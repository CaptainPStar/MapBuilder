private["_start","_end","_color","_vec","_spread"];
_start = param[0];
_end = param[1];
_color = param[2];

_vec = (_start vectorDiff _end);

_spread = _vec vectorCrossProduct [1, 0, 0] * 0.01;
drawLine3D [(_start vectoradd _spread),(_end vectoradd _spread),_color];
_spread = _vec vectorCrossProduct [0, 1, 0] * 0.01;
drawLine3D [(_start vectoradd _spread),(_end vectoradd _spread),_color];
_spread = _vec vectorCrossProduct [0, 0, 1] * 0.01;
drawLine3D [(_start vectoradd _spread),(_end vectoradd _spread),_color];
_spread = _vec vectorCrossProduct [0, 1, 1] * 0.01;
drawLine3D [(_start vectoradd _spread),(_end vectoradd _spread),_color];
_spread = _vec vectorCrossProduct [1, 1, 0] * 0.01;
drawLine3D [(_start vectoradd _spread),(_end vectoradd _spread),_color];
_spread = _vec vectorCrossProduct [1, 1, 1] * 0.01;
drawLine3D [(_start vectoradd _spread),(_end vectoradd _spread),_color];

_spread = [0,0,0];
drawLine3D [(_start vectoradd _spread),(_end vectoradd _spread),_color];

