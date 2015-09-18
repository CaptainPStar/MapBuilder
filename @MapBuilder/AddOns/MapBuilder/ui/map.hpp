
class MB_Map : MB_RscMapControl
{
	idc = 170301;
	style = ST_PICTURE;
	type = CT_MAP;
	x = "safezoneX";
	y = "safezoneY";
	w = "safezoneW * 0.8";
	h = "safezoneH * 0.97";
	onLoad = "";
	onMouseButtonDblClick = "_this call MB_fnc_mapDblClickTeleport;";
	
	onSetFocus = "false";
	onKillFocus = "false";
	onKeyDown = "_this call MB_fnc_KeyDown;true";
	onKeyUp = "false";
	onMouseButtonDown = "false";
	onMouseButtonUp = "false";
	onMouseButtonClick = "false";

	onMouseZChanged = "false";
	onMouseMoving = "";
	onMouseHolding = "";
};
