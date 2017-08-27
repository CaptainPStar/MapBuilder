private["_delta","_camPos"];
_delta = _this select 0;

_camPos = MB_CamPos select 0;
_camPos set[0,(_camPos select 0)+_delta*0.5*sin(MB_CamPos select 1)];
_camPos set[1,(_camPos select 1)+_delta*0.5*cos(MB_CamPos select 1)];
_camPos set[2,(_camPos select 2)+_delta*0.5*sin(MB_CamPos select 2)];