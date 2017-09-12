//###################
//	Taskbar
//###################

class MB_Taskbar : MB_RscText { //--- Render out.
  idc = 171009;
  text = "";
  x = "SafeZoneX + (SafeZoneW * 0)";
  y = "SafeZoneY + (SafezoneH * 0.97)";
  w = "SafeZoneW * 1.0";
  h = "SafeZoneH * 0.03";
  colorBackground[] = {0, 0, 0, 0.3};
};
class MB_Taskbar_Version : MB_RscText { //--- Render out.
  idc = 171010;
  text = "Version: 0.0.0";
  x = "SafeZoneX + (SafeZoneW * 0.82)";
  y = "SafeZoneY + (SafezoneH * 0.94)";
  w = "SafeZoneW * 0.08";
  h = "SafeZoneH * 0.03";
};
class MB_Taskbar_Website : MB_RscStructuredText { //--- Render out.
  idc = -1;
  text = "<a underline='false' href='http://map-builder.info'>Map-Builder.info</a>";
  x = "SafeZoneX + (SafeZoneW * 0.82)";
  y = "SafeZoneY + (SafezoneH * 0.97)";
  w = "SafeZoneW * 0.1";
  h = "SafeZoneH * 0.03";
  size = MB_TEXT_LARGE;
  sizeEx = MB_TEXT_LARGE;
  class Attributes
    {
      font = MB_TEXT_FONT;
      color = "#ffffff";
      align = "left";
      shadow = 0;
    };
};
class MB_Taskbar_Position : MB_RscText { //--- Render out.
  idc = 171011;
  text = "Position: 0/0/0";
  x = "SafeZoneX + (SafeZoneW * 0.3)";
  y = "SafeZoneY + (SafezoneH * 0.97)";
  w = "SafeZoneW * 0.16";
  h = "SafeZoneH * 0.03";
};
class MB_Taskbar_ObjectsTotal : MB_RscText { //--- Render out.
  idc = 171013;
  text = "0 Objects";
  x = "SafeZoneX + (SafeZoneW * 0.5)";
  y = "SafeZoneY + (SafezoneH * 0.97)";
  w = "SafeZoneW * 0.08";
  h = "SafeZoneH * 0.03";
  toolip = "Blah";
};
class MB_Taskbar_Selected : MB_RscText { //--- Render out.
  idc = 171012;
  text = "0 Objects selected";
  x = "SafeZoneX + (SafeZoneW * 0.7)";
  y = "SafeZoneY + (SafezoneH * 0.97)";
  w = "SafeZoneW * 0.08";
  h = "SafeZoneH * 0.03";
};
#ifdef DEBUG
class MB_Taskbar_Dev_Refresh : MB_RscButton {
  idc = -1;
  x = "SafeZoneX + (SafeZoneW * 0.05)";
  y = "SafeZoneY + (SafezoneH * 0.975)";
  w = "SafeZoneW * 0.2";
  h = "SafeZoneH * 0.02";
  text = "Refresh Config/Scripts";
  action = "closeDialog 0;[] call MB_fnc_refreshConfig;";
};
#endif
