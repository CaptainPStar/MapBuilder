if(!params["_bmin","_bmax","_pos"]) exitwith {["Missing argument in MB_fnc_inBoundary."] call BIS_fnc_error;};

if((_bmin select 0)>=(_bmax select 0) &&
	((_pos select 0)>(_bmin select 0) ||
	(_pos select 0)<(_bmax select 0))) exitwith {
		false;
	};
if((_bmin select 0)<(_bmax select 0) &&
	((_pos select 0)<(_bmin select 0) ||
	(_pos select 0)>(_bmax select 0))) exitwith {
		false;
	};
if((_bmin select 1)>=(_bmax select 1) &&
	((_pos select 1)>(_bmin select 1) ||
	(_pos select 1)<(_bmax select 1))) exitwith {
		false;
	};
if((_bmin select 1)<(_bmax select 1) &&
	((_pos select 1)<(_bmin select 1) ||
	(_pos select 1)>(_bmax select 1))) exitwith {
		false;
	};
true;
