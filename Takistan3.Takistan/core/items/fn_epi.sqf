/*
    File: fn_epi
    Author: Phil

    Description:
    setconscious 1 blut/1 leben
*/
if (life_blood == 100) exitWith {hint "Du kannst genug Blut!"};


titleText ["Ein Kamerad verabreicht dir Epinephrin!", "PLAIN",15];
sleep 30;
titleText ["", "PLAIN",5];
life_blood = 1;
player setDamage 0.99;
