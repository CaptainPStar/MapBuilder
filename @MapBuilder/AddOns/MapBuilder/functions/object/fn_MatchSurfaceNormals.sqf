{
	(_x select 0) setVectorUp surfaceNormal position (_x select 0);
} foreach MB_Selected;