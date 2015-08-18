disableSerialization;
_event = _this select 0;
_idc = _this select 1;
_display = uinamespace getvariable 'mb_main_dialog';
_control = _display displayCtrl _idc;
MB_DraggedWindowOffset = [(_event select 2),(_event select 3)];
MB_DraggedWindow = true;
