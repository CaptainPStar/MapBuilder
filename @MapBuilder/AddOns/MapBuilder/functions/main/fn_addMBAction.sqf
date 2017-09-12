private["_adc"];
_adc = player getvariable["MapBuilder_Action",-1];
_EHIdx = player getvariable["MapBuilder_Killed_Handler",-1];

if(_adc >= 0) then {
	player removeAction _adc;
};
if(_EHIdx>=0) then {
	player removeEventHandler ["Respawn", _EHIdx];
};

_adc = player addaction["Map Builder", { _this call MB_fnc_Start }];
_EHIdx = player addEventHandler ["Respawn", {_this call mb_fnc_addMBAction;}];

player setvariable["MapBuilder_Action",_adc];
player setvariable["MapBuilder_Killed_Handler",_EHIdx];
