/*
    File: fn_surgical
    Author: Phil

    Description:
    healt auf 55 Leben
*/
private ["_blood","_bloodmulti"];


_blood = cursorTarget getVariable ["blood",100];
_bloodmulti = cursorTarget getVariable ["bloodmulti", 0];
if (damage cursorTarget == 0) exitWith {hint "Du kannst hier nichts heilen!"};

life_ishealing = true;
player playActionNow "Medic";
[] RemoteExecCall ["life_fnc_medicsurgicaled",cursorTarget,false];
sleep 30;
life_ishealing = false;