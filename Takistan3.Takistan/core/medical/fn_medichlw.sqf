/*
    File: fn_medichwl
    Author: Phil

    Description:
    Herz-Lunge
*/
private ["_blood","_bloodmulti"];


_blood = cursorTarget getVariable ["blood",100];
_bloodmulti = cursorTarget getVariable ["bloodmulti", 0];

if (!(cursorTarget getVariable ["unconscious",false])) exitWith {hint "Du kannst hier nichts heilen!"};
life_ishealing = true;
[] RemoteExecCall ["life_fnc_medichlwed",cursorTarget,false];
player playActionNow "Medic";
sleep 9;
player playActionNow "Medic";
sleep 21;
life_ishealing = false;