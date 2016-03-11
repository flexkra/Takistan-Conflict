/*
    File: fn_bandage
    Author: Phil

    Description:
    heilt eine Blutung
*/

	if (life_bloodmulti == 0) exitWith {hint "Du kannst hier nichts heilen!"};
			if ([false,"bandage",1] call life_fnc_handleInv) then {
			life_ishealing = true;
			if (life_bloodmulti >=1) then {
			titleText ["Diese Bandage verringert deine Blutung", "PLAIN",5];
			player playActionNow "Medic";
			sleep 10;
			titleText ["", "PLAIN",5];


			if (life_bloodmulti ==1) then {
			life_bloodmulti = 0;
			};

			if (life_bloodmulti ==2) then {
			life_bloodmulti = 1;
			};

			if (life_bloodmulti == 3) then {

			life_bloodmulti = 2;
			};


			titleText ["Du hast deine Blutung verringert!", "PLAIN",5];
			sleep 2;
			titleText ["", "PLAIN",5];
			life_ishealing = false;
			if (life_bloodmulti == 0) then {life_bloodstatus = "";};
			if (life_bloodmulti == 1) then {life_bloodstatus = "einfache Blutung";};
			if (life_bloodmulti == 2) then {life_bloodstatus = "mittlere Blutung";};
			if (life_bloodmulti == 3) then {life_bloodstatus = "schwere Blutung";};
			[] call life_fnc_HudUpdate;
			};
		}
		else
		{
			hint "Du hast keine Bandage übrig!";
		};
