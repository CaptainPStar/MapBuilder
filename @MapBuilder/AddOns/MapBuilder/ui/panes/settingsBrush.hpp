class MB_PaneSettingsBrush: ctrlControlsGroupNoScrollbars {
  idc = __IDC_ELEMENT_1;
  x = GRID_TOOLBAR_X(1);
  y = GRID_TOOLBAR_Y(1);
  w = __GUI_PANE_W - GRID_TOOLBAR_X(2);
  h = (safeZoneH * 0.98) - GRID_TOOLBAR_Y(2);
  class Controls {
    class SavedSets: ctrlCombo {
      idc = __IDC_ELEMENT_1;
      x = 0;
      y = 0;
      w = __GUI_PANE_W - GRID_TOOLBAR_X(2);
      h = GRID_TOOLBAR_Y(1.5);
      onLBSelChanged = "['selectcombo', _this] call MB_fnc_brushToolbarSettings";
    };

    class ObjectInSet: ctrlListbox {
      idc = __IDC_ELEMENT_2;
      x = 0;
      y = GRID_TOOLBAR_Y(2);
      w = __GUI_PANE_W - GRID_TOOLBAR_X(2);
      h = GRID_TOOLBAR_Y(15);
      onLBSelChanged = "['selectobject', _this] call MB_fnc_brushToolbarSettings";
    };

    class AdvancedButton: MB_CtrlPaneButton {
      idc = __IDC_BUTTON_2;
      x = 0;
      y = GRID_TOOLBAR_Y(17.5);
      w = __GUI_PANE_W - GRID_TOOLBAR_X(2);
      h = GRID_TOOLBAR_Y(1.5)
      text = "ADVANCED SETTINGS";
      action = "['brusher', true] call MB_fnc_uiPaneOpen";
    };
  };
};
