/*
    File: fn_medichlwed
    Author: Phil

    Description:
    setconscious 25 blut/25 leben
*/
if (life_blood == 100) exitWith {hint "Du kannst genug Blut!"};


titleText ["Ein Medic wendet eine Herz-Lungen-Massage an!", "PLAIN",15];
sleep 30;
titleText ["", "PLAIN",5];
player setVariable ["unconscious",false, false];
life_blood = 25;
player setDamage 0.75;
