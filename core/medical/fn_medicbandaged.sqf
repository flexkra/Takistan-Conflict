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
		titleText ["Ein Medic versorgt dich mit einer Kompresse", "PLAIN",5];
		sleep 10;
		titleText ["", "PLAIN",5];
		life_bloodmulti = 0;
		titleText ["Ein Medic hat alle Blutung gestoppt!", "PLAIN",1];
		sleep 5;
		titleText ["", "PLAIN",5];
		};

};
