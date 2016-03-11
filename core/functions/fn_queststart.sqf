/*
	File: fn_Questlogin.sqf
	Author: synced-gaming.de - Phil

	Description:
	Questanzeige beim Login
*/

disableSerialization;
_quest = life_quest;

sleep 10;

if (_quest == 0) then {
	"Terroristenanwärter_1" setMarkerAlphaLocal 0;
	"Terroristenanwärter_2" setMarkerAlphaLocal 0;
	"Terroristenanwärter" setMarkerAlphaLocal 0;
	_quest = 1;
	life_quest = 1;
};
if (_quest == 1) then {
  "schakaleins_1_1_0" setMarkerAlphaLocal 1;
		player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Ein neuer Anfang
                                                Lass dich als Rebelle anwerben!
								"
						]
					];
  [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Ein neuer Anfang? <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + Lass dich als Rebelle anwerben! <br /> + Questziel markiert"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
};

if (_quest == 2) then {
	"schakaleins_1_1_1" setMarkerAlphaLocal 1;
};

if (_quest == 3) then {
  "schakaleins_1_2_0" setMarkerAlphaLocal 1;
  [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Nachschub <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + Erledige 3 Anfänger-Transporte für mich! <br /> + Questziel markiert"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
  player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Nachschub
                                                Erledige 3 Transporte für mich
								"
						]
					];

};

if (_quest == 4) then
{
  "schakaleins_1_2_1" setMarkerAlphaLocal 1;
};

if (_quest == 5) then {
  "blond_1_1_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Der Fremde <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + Gehe zum Eremiten! <br /> + Questziel markiert"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
   player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Der Fremde
                                                Gehe zum Eremiten
								"
						]
					];
};
if (_quest == 6) then {
  "blond_1_1_1" setMarkerAlphaLocal 1;
};


if (_quest == 7) then {
  "blond_1_2_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Geschichtenerzähler <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + Besorge ein Glas Ziegenmilch vom Markt! <br /> + Questziel markiert!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Geschichtenerzähler
                                                Bringe dem Eremiten ein Glas Ziegenmilch vom Markt
								"
						]
					];
};

if (_quest == 8) then {
  "blond_1_2_1" setMarkerAlphaLocal 1;

};

if (_quest == 9) then {
  "blond_1_3_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Das Paradies <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + Gehe zum Dorfältestenen! <br /> + Questziel markiert!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Das Paradies
                                                Gehe zum Imam
								"
						]
					];
};

if (_quest == 10) then {
  "blond_1_3_1" setMarkerAlphaLocal 1;

};

if (_quest == 11) then {
  "blond_1_4_0" setMarkerAlphaLocal 1;
 [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Vorbereitungen <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + Stelle Sprengstoff her! <br /> + Besorge einen Guertel beim Markt! <br /> + Questziel markiert!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                  player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Vorbereitungen
                                                Gehe zum Markt und hole einen Gürtel. Besorge dann Sprengstoff.
								"
						]
					];

};

if (_quest == 12) then {
  "blond_1_4_1" setMarkerAlphaLocal 1;

};

if (_quest == 13) then {
  "blond_1_5_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> 69 Blonde Schönheiten <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + Baue eine Sprengstoffweste! <br /> + Sprenge dich samt eines Soldaten in die Luft!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             69 Blonde Schönheiten
                                                Baue eine Sprengstoffweste. Wenn du überlebst sprenge dich in die Luft.
								"
						]
					];
};

if (_quest == 14) then {
  "blond_1_5_1" setMarkerAlphaLocal 1;

};

if (_quest == 15) then {
  "schakalzwei_1_1_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Befreie uns von der Geißel <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ Besorge 2 Dog-Tags!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Befreie uns von der Geißel
                                                Sammle 2 Nato Dog Tags
								"
						]
					];
};

if (_quest == 16) then {
  "schakalzwei_1_1_1" setMarkerAlphaLocal 1;


};

if (_quest == 17) then {
  "glauben_1_1_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Erweiterung deines Fuhrparks <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ Kaufe dir einen GAZ-24!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Erweiterung deines Fuhrparks
                                                Kaufe dir einen GAZ-24
								"
						]
					];
};

if (_quest == 18) then {
  "glauben_1_1_1" setMarkerAlphaLocal 1;

};

if (_quest == 19) then {
  "glauben_1_2_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br />  Dunkles Geheimnis <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ Besorge dir eine Map-Flashlight!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Dunkles Geheimnis
                                                Besorge dir eine Mapflash
								"
						]
					];
};

if (_quest == 20) then {
  "glauben_1_2_1" setMarkerAlphaLocal 1;

};

if (_quest == 21) then {
  "glauben_1_3_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Dope für den Kampf <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ farme Haschisch und gib es im Rebellenlager ab"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Dope für den Kampf
                                                Farme Haschisch und gib es im Rebellenlager ab
								"
						]
					];
};

if (_quest == 22) then {
  "glauben_1_3_1" setMarkerAlphaLocal 1;

};
if (_quest == 23) then {
  "propaganda_1_1_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Filmreif <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ bringe eine UAZ zum Rebellenlager!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Filmreif
                                                Bringe einen UAZ zum Rebellenlager
								"
						]
					];
};

if (_quest == 24) then {
  "propaganda_1_1_1" setMarkerAlphaLocal 1;

};

if (_quest == 25) then {
  "propaganda_1_2_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Teures Rebellenleben <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ kaufe eine AK 74"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Teures Rebellenleben
                                                Kaufe eine AK 74
								"
						]
					];
};

if (_quest == 26) then {
  "propaganda_1_2_1" setMarkerAlphaLocal 1;

};
if (_quest == 27) then {
  "propaganda_1_3_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Moviestar <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ Stell dich 10 Sekunden vor die Kamera"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Moviestar
                                                Stell dich 10 Sekunden vor die Kamera und sprich deine Botschaft
								"
						]
					];
};
if (_quest == 28) then {
  "propaganda_1_3_1" setMarkerAlphaLocal 1;

};
if (_quest == 29) then {
  "schakaldrei_1_1_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Aufstieg des Bösen <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ Spreche mit dem Warlord!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Aufstieg des Bösen
                                                Sprich mit dem Warlord
								"
						]
					];
};
if (_quest == 30) then {
  "schakaldrei_1_1_1" setMarkerAlphaLocal 1;

};
if (_quest == 31) then {
  "schakaldrei_1_2_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Schon wieder Nachschub <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ Erledige 3 Transporte für Fortgeschrittene"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Schon wieder Nachschub
                                                Erledige 3 Transporte für mich
								"
						]
					];
};
if (_quest == 32) then {
  "schakaldrei_1_2_1" setMarkerAlphaLocal 1;

};
if (_quest == 33) then {
  "schakaldrei_1_3_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest<br /> Befreiung unserer Städte <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>+ Gewinne einen Gebietskampf"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Befreiung unserer Städte
                                                Gewinne einen Gebietskampf
								"
						]
					];
};
if (_quest == 34) then {
  "schakaldrei_1_3_1" setMarkerAlphaLocal 1;

};
if (_quest == 35) then {
  "abhoeren_1_1_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Neues Sortiment <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Gehe zu Abduls Elektronikladen"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Neues Sortiment
                                                Gehe zu Abduls Elektronikladen
								"
						]
					];
};
if (_quest == 36) then {
  "abhoeren_1_1_1" setMarkerAlphaLocal 1;

};
if (_quest == 37) then {
  "abhoeren_1_2_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Besorgungen <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Gehe ins Rebellenlager"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Besorgungen
                                                Gehe ins Rebellenlager
								"
						]
					];
};
if (_quest == 38) then {
  "abhoeren_1_2_1" setMarkerAlphaLocal 1;

};

if (_quest == 39) then {
  "abhoeren_1_3_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Langfinger <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Klaue ein Army-Fahrzeug und bring es zu Abdul!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Langfinger
                                                Stiehl ein Army-Fahrzeug und bringe es zu Abduls Elektronikladen
								"
						]
					];
};
if (_quest == 40) then {
  "abhoeren_1_3_1" setMarkerAlphaLocal 1;

};
if (_quest == 41) then {
  "abhoeren_1_4_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Pole <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Knacke das Fahrzeug!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Pole
                                                Knacke das Fahrzeug
								"
						]
					];
};
if (_quest == 42) then {
  "abhoeren_1_4_1" setMarkerAlphaLocal 1;

};
if (_quest == 43) then {
  "abhoeren_1_5_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Überraschung <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Kaufe das Abhörgerät"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Überraschung
                                                Kaufe das Abhörgerät
								"
						]
					];
};
if (_quest == 44) then {
  "abhoeren_1_5_1" setMarkerAlphaLocal 1;

};
if (_quest == 45) then {
  "abhoeren_1_6_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Spion <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>Besorge dir 10 Informationen"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Spion
                                                Bringe 10 Informationen zum Rebellenlager
								"
						]
					];
};
if (_quest == 46) then {
  "abhoeren_1_6_1" setMarkerAlphaLocal 1;

};
if (_quest == 47) then {
  "abhoeren_1_7_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Das Attentat <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Lösche ein Squad aus! <br/> Besorge 4 DogTags"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Das Attentat
                                                Gib ein Offiziers-Dogtag im Rebellenlager ab
								"
						]
					];
};
if (_quest == 48) then {
  "abhoeren_1_7_1" setMarkerAlphaLocal 1;

};
if (_quest == 49) then {
  "hoellenfeuer_1_1_0" setMarkerAlphaLocal 1;
	[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Kein Zurück mehr <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Beschaffe ein Dog Tag"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Kein Zurück mehr
                                                Beschaffe ein Dog Tag
								"
						]
					];
};
if (_quest == 50) then {
  "hoellenfeuer_1_1_1" setMarkerAlphaLocal 1;

};
if (_quest == 51) then {
  "hoellenfeuer_1_2_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Uniformiert <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Besorge dir ein IS Kampfanzug Weiße Hose"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Uniformiert
                                                Besorge dir eine weiße Hose
								"
						]
					];
};
if (_quest == 52) then {
  "hoellenfeuer_1_2_1" setMarkerAlphaLocal 1;

};
if (_quest == 53) then {
  "hoellenfeuer_1_3_0" setMarkerAlphaLocal 1;
	[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Wolf im Schafspelz <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Beschaffe dir einen Double Whopper ohne Blutvergießen."],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Wolf im Schafspelz
                                                Beschaffe dir einen Double Whopper ohne Blutvergießen
								"
						]
					];
};
if (_quest == 54) then {
  "hoellenfeuer_1_3_1" setMarkerAlphaLocal 1;

};
if (_quest == 55) then {
  "hoellenfeuer_1_4_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Ausnutzen <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>Stiehl ein Army Fahrzeug und bring es zum Schwarzmarkt"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Ausnutzen
                                                Stiehl ein Army-Fahrzeug und bringe es zum Schwarzmarkt
								"
						]
					];
};
if (_quest == 56) then {
  "hoellenfeuer_1_4_1" setMarkerAlphaLocal 1;

};
if (_quest == 57) then {
  "hoellenfeuer_1_5_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Kreuzzug <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Besorge 5 Dog Tags"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Kreuzzug
                                                Besorge 5 Dog Tags
								"
						]
					];
};
if (_quest == 58) then {
  "hoellenfeuer_1_5_1" setMarkerAlphaLocal 1;

};
if (_quest == 59) then {
  "hoellenfeuer_1_6_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Wocheneinkauf <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>Besorge 1x Batterie, 1x Zünder, 1x Behaelter"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Wocheneinkauf
                                                Besorge 1x Batterie, 1x Zünder, 1x Behälter
								"
						]
					];
};
if (_quest == 60) then {
  "hoellenfeuer_1_6_1" setMarkerAlphaLocal 1;

};
if (_quest == 61) then {
  "hoellenfeuer_1_7_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Pyrotechnik <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Besorge 1x Sprengsatz"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Pyrotechnik
                                                Besorge 1x Sprengstoff
								"
						]
					];
};
if (_quest == 62) then {
  "hoellenfeuer_1_7_1" setMarkerAlphaLocal 1;

};
if (_quest == 63) then {
  "hoellenfeuer_1_8_0" setMarkerAlphaLocal 1;
	[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Handwerker <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Baue 1x Small IED Dug In<br/> Besorge 4 DogTags"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Handwerker
                                                Baue 1x Small IED Dug In
								"
						]
					];
};
if (_quest == 64) then {
  "hoellenfeuer_1_8_1" setMarkerAlphaLocal 1;

};
if (_quest == 65) then {
  "hoellenfeuer_1_9_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Höllenfeuer <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Sprenge eine IED"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

            Höllenfeuer
                                                Sprenge eine IED
								"
						]
					];
};
if (_quest == 66) then {
  "hoellenfeuer_1_9_1" setMarkerAlphaLocal 1;

};
if (_quest == 67) then {
  "schakalvier_1_1_0" setMarkerAlphaLocal 1;
	[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Kondome für die Alte neben mir und Unsere Heiligen Schriften <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Gehe zu Abduls Elektronikladen"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
                player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Kondome für die Alte neben mir. Oder unsere Heiligen Schriften.
                                                Schliesse die Mission Der Heilige Krieg und Niemand möchte Tripper ab.
								"
						]
					];
};
if (_quest == 68) then {
  "schakalvier_1_1_1" setMarkerAlphaLocal 1;

};
if (_quest == 69) then {
  "schakalvier_1_2_0" setMarkerAlphaLocal 1;
	[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Die Position festigen <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Gehe ins Rebellenlager"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Die Position festigen
                                                Besorge 5 Dogtags
								"
						]
					];
};
if (_quest == 70) then {
  "schakalvier_1_2_1" setMarkerAlphaLocal 1;

};
if (_quest == 71) then {
  "schakalvier_1_3_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Der Befreiungsschlag <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Klaue ein Army-Fahrzeug und bring es zu Abdul!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Der Befreiungsschlag
                                                Gewinne 3 Gebietskämpfe
								"
						]
					];
};
if (_quest == 72) then {
  "schakalvier_1_3_1" setMarkerAlphaLocal 1;

};
if (_quest == 73) then {
  "schakalvier_1_4_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'>  Aktuelle Quest <br /> Schmerzen <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Knacke das Fahrzeug!"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Schmerzen
                                                Foltere 20x Armysoldaten
								"
						]
					];
};
if (_quest == 74) then {
  "schakalvier_1_4_1" setMarkerAlphaLocal 1;

};
if (_quest == 75) then {
  "abhoeren_1_5_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Schwäche die Ungläubigen <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> Kaufe das Abhörgerät"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Schwäche die Ungläubigen
                                                Raube das Waffenlager aus und bringe mir 1x Scharfschützengewehr und 1x Sturmgewehr
								"
						]
					];
};
if (_quest == 76) then {
  "schakalvier_1_5_1" setMarkerAlphaLocal 1;

};
if (_quest == 77) then {
  "schakalvier_1_6_0" setMarkerAlphaLocal 1;
[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'> Aktuelle Quest <br /> Totaler Krieg <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'>Besorge dir 10 Informationen"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
            player createDiaryRecord["questbuch",
					[
							"Quest-Buch",
								"

             Totaler Krieg
                                                Halte alle 3 Gebiete und eliminiere 2 hohe Offiziere. Gib 2 Offizier-Dogtags beim Warlord ab.
								"
						]
					];
};
if (_quest == 78) then {
  "schakalvier_1_6_1" setMarkerAlphaLocal 1;

};