/*
    File: fn_bandage
    Author: Phil

    Description:
    füllt Blut bei einem Kollegen
*/
private ["_blood","_bloodmulti"];


_blood = cursorTarget getVariable ["blood",100];
_bloodmulti = cursorTarget getVariable ["bloodmulti", 0];

if (_blood == 100) exitWith {hint "Du kannst hier nichts heilen!"};
if (cursorTarget getVariable ["unconscious",false]) exitWith {hint "Dieser Patient ist bewusstlos!"};
if ([false,"kochsalz",1] call life_fnc_handleInv) then {

[] RemoteExecCall ["life_fnc_kochsalz",cursorTarget,false];
life_ishealing = true;
player playActionNow "Medic";
sleep 9;
player playActionNow "Medic";
sleep 9;
}
else
{
hint "Du hast kein Kochsalz übrig!";
};
life_ishealing = false;