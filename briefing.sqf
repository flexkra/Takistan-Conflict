waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};



player createDiarySubject ["changelog","Change Log"];
player createDiarySubject ["serverrules","Serverregeln"];
player createDiarySubject ["hotkeys","Tastenbelegungen"];
player createDiarySubject ["questbuch","Quest-Buch"];
player createDiarySubject ["transportbuch","Transport-Buch"];
/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
				TEXT HERE<br/><br/>
				"
		]
	];
*/


	player createDiaryRecord["changelog",
		[
			"Changelog",
				"
					Aktuelle Änderungen findet ihr in unserem Forum: www.synced-gaming.de
				"
		]
	];

		player createDiaryRecord ["serverrules",
		[
			"Regeln",
				"
				Unsere Regeln findet ihr auf unserer Homepage: synced-gaming.de <br/>
				"
		]
	];




	player createDiaryRecord ["hotkeys",
		[
			"Tastenbelegung",
			"
      		Strg + Win Taste : ACE Selbstinteraktionsmenü.<br/>
      		Win Taste : ACE Interaktionsmenü.<br/>
      		ACE Selbstinteraktionsmenü : Ergeben.<br/>
      		ACE Selbstinteraktionsmenü : Ohrstöpsel.<br/>
      		ACE Interaktionsmenü : Fahrzeug reparieren.<br/>
          	ACE Interaktionsmenü : Fesseln/Verhaften.<br/>
      		8 : Granaten Wurfweite anpassen.<br/>
      		2-7 : Taktische Handzeichen.<br/>
      		0 : Waffe holstern/ziehen.<br/>
      		STRG+Numpad 1/2 : Liegestütze/Kniebeuge.<br/>
			Z : Spielermenü.<br/>
			U : Fahrzeug auf/abschließen.<br/>
			T : Kofferraum.<br/>
      		Entf : Speedlimiter.<br/>
      		Mausrad Menü : Fahrzeug umdrehen.<br/>
        	Links STRG : Mine farmen.<br/>
        	STRG + T : Items aufheben.<br/>
      		Alternativ ist es möglich sämtliche ACE Einstellungen selbst anzupassen unter Konfigurieren/Steuerung/Configure Addons.<br/>
			"
		]
	];


