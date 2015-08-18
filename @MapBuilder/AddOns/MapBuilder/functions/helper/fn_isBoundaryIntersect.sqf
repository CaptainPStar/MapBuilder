if(!params["_edgeA1","_edgeA2","_edgeB1","_edgeB2"]) exitwith {["Missing argument in MB_fnc_inBoundary."] call BIS_fnc_error;};

private["_inBoundary"];

_leftEdgeA = (_edgeA1 select 0) min (_edgeA2 select 0);
_leftEdgeB = (_edgeB1 select 0) min (_edgeB2 select 0);
_rightEdgeA = (_edgeA1 select 0) max (_edgeA2 select 0);
_rightEdgeB = (_edgeB1 select 0) max (_edgeB2 select 0);

_topEdgeA = (_edgeA1 select 1) max (_edgeA2 select 1);
_topEdgeB = (_edgeB1 select 1) max (_edgeB2 select 1);
_bottomEdgeA = (_edgeA1 select 1) min (_edgeA2 select 1);
_bottomEdgeB = (_edgeB1 select 1) min (_edgeB2 select 1);


if (_leftEdgeA < _rightEdgeB && _rightEdgeA > _leftEdgeB &&
    _bottomEdgeA < _topEdgeB && _topEdgeA > _bottomEdgeB) exitwith {
		true;
};


false;