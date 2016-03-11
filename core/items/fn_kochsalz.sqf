/*
    File: fn_bandage
    Author: Phil

    Description:
    +25 Blut
*/
if (life_blood == 100) exitWith {hint "Du kannst genug Blut!"};


titleText ["Ein Kamerad verabreicht dir Kochsalz!", "PLAIN",15];
sleep 30;
titleText ["", "PLAIN",5];
if ((life_blood + 50) > 100) then
{
    life_blood = 100;
    }
    else
    {
    life_blood = life_blood + 50;
};
