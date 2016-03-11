/*
    File: fn_medictransed
    Author: Phil

    Description:
    100 Blut
*/
if (life_blood == 100) exitWith {hint "Du kannst genug Blut!"};


titleText ["Ein Arzt wendet eine Bluttransfusion an!", "PLAIN",15];
sleep 30;
titleText ["", "PLAIN",5];
life_blood = 100;
