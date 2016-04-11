/*
	File: fn_territorycount.sqf
	Author: Phil "Phil" Phil :>
	Serverseitiges Zählen der Spieler
*/


private["_pos","_radius","_countciv","_countarmy","_unit","_units","_countdown","_fraktion","_i","_nearest","_server","_random","_over","_sideciv","_sideciv","_punkte_army","_punkte_civ"];

	_server = 4;
while {(_server > 0)} do {
	_random  = round (random 4);
    if (_random == 0) then {life_territory_marker = "Garmsar"};
	if (_random == 1) then {life_territory_marker = "Zavarak"};
	if (_random == 2) then {life_territory_marker = "Sakhee"};
	if (_random == 3) then {life_territory_marker = "Sultansafee"};
	if (_random >= 4) then {life_territory_marker = "Chaman"};

	_pos = getMarkerPos life_territory_marker;
	_radius    = 500;
	_countdown = 90; // Dauer vom Kampf in Minuten
	_over= false; // Kampf vorbei
	_punkte_army = 0;
	_punkte_civ = 0;


	sleep 3600;
	waitUntil {{side _x == west} count playableUnits >= 8};
	life_territory_marker setMarkerAlpha 1;
	life_territory_marker setMarkerColor "ColorGreen";
	//[true,_pos] spawn TON_fnc_spawnDrone;
	[[5,format["<t size='1.2'><t color='#FF0000'>Gebietskampf %1</t></t><br/><br/><t size='1'>Es wurde gerade ein Gebietskampf um %1 gestartet</t>",life_territory_marker]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
while {!(_over)} do {
	_countciv  = 0;
	_countarmy = 0;
	_sidearmy = [];
	_sideciv = [];
	_units = nearestObjects[_pos,["Man"],_radius];
	{
		_unit = _x;
		if ((_x isKindOf "Man") && (side _x == west)) then{
			if ((alive _x)  && (isPlayer _x)) then {
				_countarmy = (_countarmy +1);
				_sidearmy pushBack _x;
			};
		}
		else
		{
			if ((_x isKindOf "Man") && (side _x == civilian)) then{
					if ((alive _x)  && (isPlayer _x)) then {
					_countciv = (_countciv +1);
					_sideciv pushBack _x;
				};
		};
	};
	} foreach _units;
	if ((_punkte_army+_punkte_civ) mod 5 == 0) then {[_pos,"jet"] remoteExec ["TON_fnc_atmosphereFlying",2];};
	if (_countarmy != _countciv) then {
	if (_countarmy > _countciv) then {
			life_territory_marker setMarkerAlpha 1;
			life_territory_marker setMarkerColor "ColorBLUFOR";
			_punkte_army = _punkte_army + 1;
			{
			 	[[_over],"life_fnc_territoryReward",_x,false] spawn life_fnc_MP;
			} forEach _sidearmy;
		}
		else
		{
			life_territory_marker setMarkerAlpha 1;
			life_territory_marker setMarkerColor "ColorCivilian";
			_punkte_civ = _punkte_civ +1;
			{
			 	[[_over],"life_fnc_territoryReward",_x,false] spawn life_fnc_MP;
			} forEach _sideciv;
		};
	} else {life_territory_marker setMarkerColor "ColorRed"};
	_countdown = (_countdown -1);
	[[5,format["<t size='1.2'><t color='#FF0000'>Gebietskampf %1</t></t><br/><br/>Punkte <br/><t size='1'>US ARMY %2 | Zivilisten %3 <br/>Punkte bis zum Sieg: 20</t>",life_territory_marker,_punkte_army,_punkte_civ,_countdown]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
	sleep 60;

	if (_punkte_civ == 19) then {_over = true};
	if (_punkte_army == 19) then {_over = true};
	

	if (_punkte_army > _punkte_civ) then {
		life_territory_winner = "US Army";
	}
	else
	{
		life_territory_winner = "Zivilisten";
	};


};
_over = true;

if (life_territory_winner == "US Army") then {
	_punkte_army = _punkte_army + 1;
	_units = nearestObjects[_pos,["Man"],_radius];
	{
		_unit = _x;
		if ((_x isKindOf "Man") && (side _x == west)) then{
			if ((alive _x)  && (isPlayer _x)) then {
				[[_over],"life_fnc_territoryReward",_x,false] spawn life_fnc_MP;
			};
		};
	} foreach _units;
	}
	else
	{
	_punkte_civ = _punkte_civ + 1;
	_units = nearestObjects[_pos,["Man"],_radius];
	{
		_unit = _x;
		if ((_x isKindOf "Man") && (side _x == civilian)) then{
			if ((alive _x)  && (isPlayer _x)) then {
				[[_over],"life_fnc_territoryReward",_x,false] spawn life_fnc_MP;
			};
		};
	} foreach _units;
	};

//[false,_pos] spawn TON_fnc_spawnDrone;
[[5,format["<t size='1.2'><t color='#FF0000'>Gebietskampf %1</t></t><br/><br/><t size='1'>Gewinner: %4 <br/> Endstand: <br/> US ARMY %2 | Zivilisten %3</t>",life_territory_marker,_punkte_army,_punkte_civ,life_territory_winner]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
life_territory_marker setMarkeralpha 0;

_server = (_server - 1);
};