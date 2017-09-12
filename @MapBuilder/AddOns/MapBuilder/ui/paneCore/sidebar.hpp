class MB_CoreSidebarBG: ctrlStaticBackground {
  idc = __IDC_SIDEBAR_BG;
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = safeZoneH;
  colorBackground[] = __COLOR_BACKGROUND_SIDEBAR;
  onMouseExit = "[false] call MB_fnc_MouseInView;";
  onMouseEnter = "[true] call MB_fnc_MouseInView;";
};

class MB_CoreSidebar: ctrlControlsGroupNoHScrollbars {
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = safeZoneH;
  onMouseExit = "[false] call MB_fnc_MouseInView;";
  onMouseEnter = "[true] call MB_fnc_MouseInView;";
  class Controls { };
};
