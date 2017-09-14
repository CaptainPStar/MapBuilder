/*
    Function:       MB_fnc_createNamespace
    Author:         Adanteh
    Description:    Creates a namespace (Think OOP object), to set/getVariable with
*/

#define __NAMESPACE_POS [-2000, -2000, -100]
params [["_isGlobal", false]];

private _namespace = if (_isGlobal) then {
    createSimpleObject ["A3\Weapons_F\empty.p3d", __NAMESPACE_POS];
} else {
    createLocation ["fakeTown", __NAMESPACE_POS, 0, 0];
};

_namespace;
