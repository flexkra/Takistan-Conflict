/*
    File: fn_bandage
    Author: Phil

    Description:
    füllt Blut bei einem Kollegen
*/
private ["_blood","_bloodmulti"];


_blood = cursorTarget getVariable ["blood",100];
_bloodmulti = cursorTarget getVariable ["bloodmulti", 0];

if (playerSide == west) then {
	    ["Abzeichen_Prof",1,1] call life_fnc_addLevel;
        [] call life_fnc_profSetup;
        [format ["<t align='left'><t size='0.6' shadow='1'><t color='#F78181'><br /> + 1 Abzeichen"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;

};

if (!(cursorTarget getVariable ["unconscious",false])) exitWith {hint "Du kannst hier nichts heilen!"};
if ([false,"epikit",1] call life_fnc_handleInv) then {
life_ishealing = true;
[] RemoteExecCall ["life_fnc_epi",cursorTarget,false];
player playActionNow "Medic";
sleep 9;
player playActionNow "Medic";
sleep 9;
}
else
{
hint "Du hast kein Epinephrin-Kit übrig!";
};
life_ishealing = false;