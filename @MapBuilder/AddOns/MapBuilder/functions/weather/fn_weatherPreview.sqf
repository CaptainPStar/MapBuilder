/*
    Function:       MB_fnc_weatherPreview
    Author:         Adanteh
    Description:    Previews weather changes (Largely broken now because server auto-syncs weather, so it'll override this stuff)
    				It still allows us to queue multiple effects and commit in one go
*/

params [
	["_type", "", ['', []]],
	["_value", 0, [[], 0]],
	["_offset", false]];

// -- Runs function named after the input type -- //
private _function = missionNamespace getVariable [("MB_fnc_weatherSet" + _type), ""];
if (_function isEqualType {}) then {
	// -- Save the set weather settings to an array. Overwrite previously set settings -- //
	private _previewArray =+ (missionNamespace getVariable ["MB_weatherPreview", [[], []]]);
	private _typeIndex = ((_previewArray select 0) find _type);
	if (_typeIndex == -1) then {
		_typeIndex = (_previewArray select 0) pushBack _type;
	};

	private _value = [_value, _offset, true] call _function;
	(_previewArray select 1) set [_typeIndex, _value];
	MB_weatherPreview = _previewArray;
};
