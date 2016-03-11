/*
    File: fn_medicsurgicaled
    Author: Phil

    Description:
    100 Blut
*/
if (damage player >= 55) exitWith {hint "Du bist gesund!"};


titleText ["Ein Arzt wendet ein Surgical-Kit an!", "PLAIN",15];
sleep 30;
titleText ["", "PLAIN",5];
player setDamage 0.45;
