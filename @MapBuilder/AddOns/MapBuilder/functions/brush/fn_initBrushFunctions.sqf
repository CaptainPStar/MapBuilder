["BeginLeftMBDrag",{_this spawn MB_fnc_BrushBegin;},{MB_Mode==1}] call MB_fnc_addCallback;
["EndLeftMBDrag",{_this spawn MB_fnc_BrushEnd;},{MB_Mode==1 && MB_Brushing}] call MB_fnc_addCallback;
["camUpdate",{_this spawn MB_fnc_BrushUpdate;},{MB_Mode==1 && MB_Brushing}] call MB_fnc_addCallback;


MB_Brushing = false;
MB_BrushStart = [];
MB_BrushNode = [];
MB_BrushWidth = 5;
MB_BrushHelper = objNull;
MB_BrushCamFollow = false;
MB_BrusherNodesToDraw = [];

MB_CurBrush = [];
//MB_CurBrush pushBack [type,chance,count,relpos,dir,pitch,bank,scale,randompos,randomdir,randompitch,randombank,randomscale];
//MB_CurBrush pushBack [["b_FicusC2s_F"],[1],0.7,1,[0,0,0],0,0,0,1,[4,4,0],360,5,5,0.2];
//MB_CurBrush pushBack [["b_FicusC1s_F"],[1],0.7,1,[0,0,0],0,0,0,1,[4,4,0],360,5,5,0.2];
//MB_CurBrush pushBack [["t_FicusB1s_F"],[1],0.2,1,[0,0,0],0,0,0,1,[1,1,0],360,5,5,0.2];
MB_CurBrush pushBack [["VergePost_F"],[1],1,1,[8,0,0],0,0,0,1,[0.1,0.1,0],0,20,20,0];
MB_CurBrush pushBack [["VergePost_F"],[1],1,1,[-8,0,0],180,0,0,1,[0.1,0.1,0],0,20,20,0];

//MB_CurBrush pushBack ["t_populusn3s_f",1,1,[9,0,0],0,0,0,1,[0.4,0.7,0],360,5,5,0.2];
//MB_CurBrush pushBack ["t_populusn3s_f",1,1,[-9,0,0],0,0,0,1,[0.4,0.7,0],360,5,5,0.2];

["fastloop",{_this spawn MB_fnc_drawBrush;},{count(MB_BrusherNodesToDraw)>0}] call MB_fnc_addCallback;
["camUpdate",{_this spawn MB_fnc_brusherUpdateCam;},{MB_BrushCamFollow && MB_Brushing}] call MB_fnc_addCallback;