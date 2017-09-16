/*
    Function:       MB_fnc_brusherApplySettings
    Author:         NeoArmageddon
    Description:    A Function That Does stuff
*/

private _brusherCtrl = uiNamespace getVariable ["MB_BrushContent", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

MB_BrushWidth = parseNumber ctrlText __CTRLCONTENT(171221);
MB_BrushCamFollow = ctrlChecked  __CTRLCONTENT(171222);
MB_BrusherLockDir = ctrlChecked  __CTRLCONTENT(171223);
//MB_BrushCamFollowAngleLock = ctrlChecked  __CTRLCONTENT(171223);
