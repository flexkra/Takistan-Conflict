/*
    File: fn_bandagemate
    Author: Phil

    Description:
    heilt eine Blutung bei einem Kollegen
*/
private ["_blood","_bloodmulti"];


_blood = cursorTarget getVariable ["blood",100];
_bloodmulti = cursorTarget getVariable ["bloodmulti", 0];

if (_bloodmulti == 0) exitWith {hint "Du kannst hier nichts heilen!"};
life_ishealing = true;
player playActionNow "Medic";
[1] RemoteExecCall ["life_fnc_medicbandaged",cursorTarget,false];
sleep 15;
life_ishealing = false;