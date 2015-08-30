_box = param[0, objNull];
_sizeX  = param[1, 1];
_sizeY = param[2, 1];
_sizeZ = param[3, 1];
_color = param[4,[0,1,0,0.5]];


_instant = true;

_box setObjectTexture [0, format["#(argb,8,8,3)color(%1,%2,%3,%4)",_color select 0,_color select 1, _color select 2, _color select 3]];

//Size X
_box animate ["flt_z",-1*(_sizeX/2),_instant];
//_box animate ["frt_x",-1*(_sizeX/2),_instant];
//_box animate ["frb_x",-1*(_sizeX/2),_instant];
//_box animate ["flb_x",-1*(_sizeX/2),_instant];

_box animate ["rlt_z",1*(_sizeX/2),_instant];
//_box animate ["rrt_x",-1*(_sizeX/2),_instant];
//_box animate ["rrb_x",-1*(_sizeX/2),_instant];
//_box animate ["rlb_x",-1*(_sizeX/2),_instant];


//SizeY
_box animate ["flt_x",-1*(_sizeY/2),_instant];
_box animate ["rlt_x",-1*(_sizeY/2),_instant];
_box animate ["flb_x",-1*(_sizeY/2),_instant];
_box animate ["rlb_x",-1*(_sizeY/2),_instant];

_box animate ["frt_x",1*(_sizeY/2),_instant];
_box animate ["rrt_x",1*(_sizeY/2),_instant];
_box animate ["frb_x",1*(_sizeY/2),_instant];
_box animate ["rrb_x",1*(_sizeY/2),_instant];


//SizeZ

_box animate ["flt_y",1*(_sizeZ/2),_instant];
_box animate ["flb_y",-1*(_sizeZ/2),_instant];
