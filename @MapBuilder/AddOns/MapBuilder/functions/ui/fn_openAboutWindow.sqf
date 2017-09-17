/*
    Function:       MB_fnc_openAboutWindow
    Author:         NeoArmageddon
    Description:    Run when the about window is opened
*/

#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
params ["_paneCtrl"];

private _aboutWindow = (_paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT);
(_aboutWindow controlsGroupCtrl __IDC_ELEMENT_1) ctrlSetText MB_NewVersion;
private _vwarning = _aboutWindow controlsGroupCtrl __IDC_ELEMENT_2;
if(MB_NewVersionNum > 0 && MB_NewVersionNum>MB_CurVersionNum) then {
	_vwarning ctrlSetText "A newer version of Map Builder is available!";
	_vwarning ctrlSetTextColor [0.75,0,0,1];
} else {
	_vwarning ctrlSetText "Your Map Builder is up-to-date.";
	_vwarning ctrlSetTextColor [0,0.75,0,1];
};

private _creditsList = "Special thanks to:<br /><br />";
private _creditsTo = [
	"Jona",
	"CypeRevenge",
	"ZeroG",
	"Scruffy",
	"MemphisBelle",
	"Mondkalb",
	"cyrokrypto",
	"Maikeks ,Bushlurker",
	"Jakerod",
	"M1lkm8n",
	"NigelS",
	"badbenson",
	"Giallustio",
	"Kerkkoh",
	"Snake Man",
	"Adanteh",
	"and all I forgot!"
];
private _creditCount = (count _creditsTo) - 2;

{
	_creditsList = format ["%1    %2%3", _creditsList, _x, ["", ","] select (_forEachIndex < _creditCount)];
} forEach _creditsTo;
private _textCtrl = (_aboutWindow controlsGroupCtrl __IDC_ELEMENT_3);
_textCtrl ctrlSetStructuredText parseText ("Map Builder is developed by Dennis 'NeoArmageddon' Meyer<br /><br />" + _creditsList);
