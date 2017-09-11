/*
    Function:       MB_fnc_arrayMove
    Author:         Adanteh
    Description:    Moves an element in an array from it's current index to another one
    Example:        [['hi', 'bye', 'hello', 'cya'], 'hi', 1] call MB_fnc_arrayMove;
    Return:         ['bye', 'hi', 'hello', 'cya']
*/

params ["_array", "_element", "_targetIndex"];

_array deleteAt (_array find _element);
private _right = _array select [_targetIndex, (count _array)]; // [''hello', 'cya']
_array resize _targetIndex; // ['bye']
_array pushBack _element; // ['bye', 'hi']
_array append _right; // ['bye', 'hi', 'hello', 'cya']
_array;
