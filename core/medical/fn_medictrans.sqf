/*
    File: fn_medictrans
    Author: Phil

    Description:
    Bluttrans bei Medic
*/
private ["_blood","_bloodmulti"];


_blood = cursorTarget getVariable ["blood",100];
_bloodmulti = cursorTarget getVariable ["bloodmulti", 0];

if (_blood == 100) exitWith {hint "Du kannst hier nichts heilen!"};
if (cursorTarget getVariable ["unconscious",false]) exitWith {hint "Dieser Patient ist bewusstlos!"};

[] RemoteExecCall ["life_fnc_medictransed",cursorTarget,false];
life_ishealing = true;
player playActionNow "Medic";
sleep 9;
player playActionNow "Medic";
sleep 21;
life_ishealing = false;