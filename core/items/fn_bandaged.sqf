/*
    File: fn_bandage
    Author: Phil

    Description:
    heilt eine Blutung
*/
private ["_mate"];
_mate = _this select 0;
if (isNil "_mate") then {_mate = 0};


if (_mate == 1) then
{
		if (life_bloodmulti == 0) exitWith {};

		if (life_bloodmulti >=1) then {
		titleText ["Dein Kamerad versorgt dich mit einer Bandage", "PLAIN",5];
		sleep 10;
		titleText ["", "PLAIN",5];

		if (life_bloodmulti ==1) then {
		life_bloodmulti = 0;
		player setVariable ["olddamage", damage player, false];
		};

		if (life_bloodmulti ==2) then {
		life_bloodmulti = 1;
		player setVariable ["olddamage2", 0, false];
		};

		if (life_bloodmulti == 3) then {

		life_bloodmulti = 2;
		player setVariable ["olddamage3", 0, false];
		};
		titleText ["Dein Kamerad hat deine Blutung verringert!", "PLAIN",1];
		sleep 5;
		titleText ["", "PLAIN",5];
		};
};
if (life_bloodmulti == 0) then {life_bloodstatus = "";};
if (life_bloodmulti == 1) then {life_bloodstatus = "einfache Blutung";};
if (life_bloodmulti == 2) then {life_bloodstatus = "mittlere Blutung";};
if (life_bloodmulti == 3) then {life_bloodstatus = "schwere Blutung";};
[] call life_fnc_HudUpdate;