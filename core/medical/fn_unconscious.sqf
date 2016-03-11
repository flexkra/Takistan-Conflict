/*
    File: fn_bandage
    Author: Phil

    Description:
    setzt den Spieler bewusstlos
*/
	private["_countdown"];



	player switchMove "AinjPpneMstpSnonWnonDnon";
	player setVariable ["unconscious",true, true];
	_countdown = 120;
	life_unconscious = true;
	life_bloodmulti = 0;

	while {true} do {

			"colorCorrections" ppEffectAdjust [0.7, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.1, 0, 0, 1.0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
			onEachFrame {if(player getVariable "unconscious") then {player switchCamera "Internal"; "dynamicBlur" ppEffectEnable true; "dynamicBlur" ppEffectAdjust [5]; "dynamicBlur" ppEffectCommit 2; enableCamShake true;};};

			if  (life_blood > 0) then {
		 	player switchMove "amovppnemstpsraswrfldnon";
			player setVariable ["unconscious",false, false];
 			life_unconscious = false;
 			};
 			_countdown = _countdown - 1;
 			sleep 1;
 			if (_countdown == 0) then {
 				player setDamage 1;
 				player setVariable ["unconscious",false, false];
	 			life_unconscious = false;
 			};
 		if !(life_unconscious) exitWith {};
 		};
