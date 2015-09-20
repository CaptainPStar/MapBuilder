
class MB_Map : MB_RscMapMain
{
	idc = 170301;
	x = "safezoneX";
	y = "safezoneY";
	w = "safezoneW * 0.8";
	h = "safezoneH * 0.97";
	
	alphaFadeStartScale = 1.1; // Scale at which satellite map starts appearing
	alphaFadeEndScale = 1.1; // Scale at which satellite map is fully rendered
	maxSatelliteAlpha = 0.85; // Maximum alpha of satellite map
			
	onLoad = "";
	onMouseButtonDblClick = "_this call MB_fnc_mapDblClickTeleport;";
	
	onSetFocus = "false";
	onKillFocus = "false";
	onKeyDown = "systemchat ""blub"";_this call MB_fnc_KeyDown;true";
	onKeyUp = "false";
	onMouseButtonDown = "false";
	onMouseButtonUp = "false";
	onMouseButtonClick = "false";

	onMouseZChanged = "false";
	onMouseMoving = "";
	onMouseHolding = "";
};
