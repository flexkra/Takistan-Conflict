#include "..\..\script_macros.hpp"

/*
File: fn_SetUpLevel.sqf
Author: Phil  ~ synced-gaming.de

Description:
Setup EXP Bar & Level

*/
_levelup = (life_level + 1);
_firstspawn = SEL(_this,0);
if (isNil "_firstspawn") then {_firstspawn = false;};
 // Level deklarieren
_level0 = 0;
_level1 = 1250;
_level2 = 2250;
_level3 = 3500;
_level4 = 5000;
_level5 = 6750;
_level6 = 8750;
_level7 = 11000;
_level8 = 13500;
_level9 = 16250;
_level10 = 19250;
_level11 = 22750;
_level12 = 26750;
_level13 = 31250;
_level14 = 36250;
_level15 = 42250;
_level16 = 49250;
_level17 = 57250;
_level18 = 66250;
_level19 = 76250;
_level20 = 87250;
_level21 = 99250;
_level22 = 112750;
_level23 = 126750;
_level24 = 141750;
_level25 = 157750;
_level26 = 174750;
_level27 = 192750;
_level28 = 211750;
_level29 = 231750;
_level30 = 252750;
_level31 = 274750;
_level32 = 297750;
_level33 = 321750;
_level34 = 346750;
_level35 = 371750;
_level36 = 396750;
_level37 = 421750;
_level38 = 446750;
_level39 = 471750;
_level40 = 498750;
_level41 = 527750;
_level42 = 558750;
_level43 = 591750;
_level44 = 627750;
_level45 = 667750;
_level46 = 712750;
_level47 = 764750;
_level48 = 824750;
_level49 = 894750;
_level50 = 1618500;


switch (true) do {
	 case (life_gesamtexp == _level0):
	 {
		 life_level = 1;
		 life_exp = 0;
	 };

	case ((life_gesamtexp > _level0) AND (life_gesamtexp < _level1)):
	 {
		  life_level = 1;
		  _prozentsatz = (life_gesamtexp / _level1);
		  life_exp = _prozentsatz;
	 };

	case ((life_gesamtexp >= _level1) AND (life_gesamtexp < _level2)):
	 {
		  life_level = 2;
		  _levelexp = (life_gesamtexp - _level1); //aktuelle EXP
      _leveldif = (_level2 - _level1);
		  _prozentsatz = (_levelexp / _leveldif);
	 		 life_exp = _prozentsatz;
	 };

  	case ((life_gesamtexp >= _level2) AND (life_gesamtexp < _level3)):
	 {
		  life_level = 3;
		  _levelexp = (life_gesamtexp - _level2);
		  _leveldif = (_level3 - _level2);
    	  _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

	case ((life_gesamtexp >= _level3) AND (life_gesamtexp < _level4)):
	 {
		  life_level = 4;
		  _levelexp = (life_gesamtexp - _level3);
		  _leveldif = (_level4 - _level3);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

	 case ((life_gesamtexp >= _level4) AND (life_gesamtexp < _level5)):
   {
      life_level = 5;
      _levelexp = (life_gesamtexp - _level4);
      _leveldif = (_level5 - _level4);
      _prozentsatz = (_levelexp / _leveldif);
      life_exp = _prozentsatz;
  };



    case ((life_gesamtexp >= _level5) AND (life_gesamtexp < _level6)):
   {
      life_level = 6;
      _levelexp = (life_gesamtexp - _level5);
      _leveldif = (_level6 - _level5);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level6) AND (life_gesamtexp < _level7)):
   {
      life_level = 7;
      _levelexp = (life_gesamtexp - _level6);
      _leveldif = (_level7 - _level6);
      _prozentsatz = (_levelexp / _leveldif);
      life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level7) AND (life_gesamtexp < _level8)):
   {
      life_level = 8;
      _levelexp = (life_gesamtexp - _level7);
      _leveldif = (_level7 - _level8);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level8) AND (life_gesamtexp < _level9)):
   {
      life_level = 9;
      _levelexp = (life_gesamtexp - _level8);
      _leveldif = (_level9 - _level8);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level9) AND (life_gesamtexp < _level10)):
   {
      life_level = 10;
      _levelexp = (life_gesamtexp - _level9);
      _leveldif = (_level10 - _level9);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level10) AND (life_gesamtexp < _level11)):
   {
      life_level = 11;
      _levelexp = (life_gesamtexp - _level10);
      _leveldif = (_level11 - _level10);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level11) AND (life_gesamtexp < _level12)):
   {
      life_level = 12;
      _levelexp = (life_gesamtexp - _level11);
      _leveldif = (_level12 - _level11);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level12) AND (life_gesamtexp < _level13)):
   {
      life_level = 13;
      _levelexp = (life_gesamtexp - _level12);
      _leveldif = (_level13 - _level12);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level13) AND (life_gesamtexp < _level14)):
   {
      life_level = 14;
      _levelexp = (life_gesamtexp - _level13);
      _leveldif = (_level14 - _level13);
      _prozentsatz = (_levelexp / _leveldif);
      life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level14) AND (life_gesamtexp < _level15)):
   {
      life_level = 15;
      _levelexp = (life_gesamtexp - _level14);
      _leveldif = (_level15 - _level14);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level15) AND (life_gesamtexp < _level16)):
   {
      life_level = 16;
      _levelexp = (life_gesamtexp - _level15);
      _leveldif = (_level16 - _level15);
      _prozentsatz = (_levelexp / _leveldif);
      life_exp = _prozentsatz;
  };

      case ((life_gesamtexp >= _level16) AND (life_gesamtexp < _level17)):
   {
      life_level = 17;
      _levelexp = (life_gesamtexp - _level16);
      _leveldif = (_level17 - _level16);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

        case ((life_gesamtexp >= _level17) AND (life_gesamtexp < _level18)):
   {
      life_level = 18;
      _levelexp = (life_gesamtexp - _level17);
      _leveldif = (_level18 - _level17);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

        case ((life_gesamtexp >= _level18) AND (life_gesamtexp < _level19)):
   {
      life_level = 19;
      _levelexp = (life_gesamtexp - _level18);
      _leveldif = (_level19 - _level18);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

        case ((life_gesamtexp >= _level19) AND (life_gesamtexp < _level20)):
   {
      life_level = 20;
      _levelexp = (life_gesamtexp - _level19);
     _leveldif = (_level20 - _level19);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

        case ((life_gesamtexp >= _level20) AND (life_gesamtexp < _level21)):
   {
      life_level = 21;
      _levelexp = (life_gesamtexp - _level20);
      _leveldif = (_level21 - _level20);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

        case ((life_gesamtexp >= _level21) AND (life_gesamtexp < _level22)):
   {
      life_level = 22;
      _levelexp = (life_gesamtexp - _level21);
      _leveldif = (_level22 - _level21);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

        case ((life_gesamtexp >= _level22) AND (life_gesamtexp < _level23)):
   {
      life_level = 23;
      _levelexp = (life_gesamtexp - _level22);
      _leveldif = (_level23 - _level22);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

        case ((life_gesamtexp >= _level23) AND (life_gesamtexp < _level24)):
   {
      life_level = 24;
      _levelexp = (life_gesamtexp - _level23);
      _leveldif = (_level24 - _level23);
      _prozentsatz = (_levelexp / _leveldif);
       life_exp = _prozentsatz;
  };

		case ((life_gesamtexp >= _level24) AND (life_gesamtexp < _level25)):
	 {
		  life_level = 25;
		  _levelexp = (life_gesamtexp - _level24);
		  _leveldif = (_level25 - _level24);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level25) AND (life_gesamtexp < _level26)):
	 {
		  life_level = 26;
		  _levelexp = (life_gesamtexp - _level25);
		  _leveldif = (_level26 - _level25);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level26) AND (life_gesamtexp < _level27)):
	 {
		  life_level = 27;
		  _levelexp = (life_gesamtexp - _level26);
		  _leveldif = (_level27 - _level26);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};


			case ((life_gesamtexp >= _level27) AND (life_gesamtexp < _level28)):
	 {
		  life_level = 28;
		  _levelexp = (life_gesamtexp - _level27);
		  _leveldif = (_level28 - _level27);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

				case ((life_gesamtexp >= _level28) AND (life_gesamtexp < _level29)):
	 {
		  life_level = 29;
		  _levelexp = (life_gesamtexp - _level28);
		  _leveldif = (_level29 - _level28);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level29) AND (life_gesamtexp < _level30)):
	 {
		  life_level = 30;
		  _levelexp = (life_gesamtexp - _level29);
		  _leveldif = (_level30 - _level29);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level30) AND (life_gesamtexp < _level31)):
	 {
		  life_level = 31;
		  _levelexp = (life_gesamtexp - _level30);
		  _leveldif = (_level31 - _level30);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level31) AND (life_gesamtexp < _level32)):
	 {
		  life_level = 32;
		  _levelexp = (life_gesamtexp - _level31);
		  _leveldif = (_level32 - _level31);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level32) AND (life_gesamtexp < _level33)):
	 {
		  life_level = 33;
		  _levelexp = (life_gesamtexp - _level32);
		  _leveldif = (_level33 - _level32);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level33) AND (life_gesamtexp < _level34)):
	 {
		  life_level = 34;
		  _levelexp = (life_gesamtexp - _level33);
		  _leveldif = (_level34 - _level33);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level34) AND (life_gesamtexp < _level35)):
	 {
		  life_level = 35;
		  _levelexp = (life_gesamtexp - _level34);
		  _leveldif = (_level35 - _level34);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level35) AND (life_gesamtexp < _level36)):
	 {
		  life_level = 36;
		  _levelexp = (life_gesamtexp - _level35);
		  _leveldif = (_level36 - _level35);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level36) AND (life_gesamtexp < _level37)):
	 {
		  life_level = 37;
		  _levelexp = (life_gesamtexp - _level36);
		  _leveldif = (_level37 - _level36);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level37) AND (life_gesamtexp < _level38)):
	 {
		  life_level = 38;
		  _levelexp = (life_gesamtexp - _level37);
		  _leveldif = (_level38 - _level37);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level38) AND (life_gesamtexp < _level39)):
	 {
		  life_level = 39;
		  _levelexp = (life_gesamtexp - _level38);
		  _leveldif = (_level39 - _level38);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level39) AND (life_gesamtexp < _level40)):
	 {
		  life_level = 40;
		  _levelexp = (life_gesamtexp - _level39);
		  _leveldif = (_level40 - _level39);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level40) AND (life_gesamtexp < _level41)):
	 {
		  life_level = 41;
		  _levelexp = (life_gesamtexp - _level40);
		  _leveldif = (_level41 - _level40);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level41) AND (life_gesamtexp < _level42)):
	 {
		  life_level = 42;
		  _levelexp = (life_gesamtexp - _level41);
		  _leveldif = (_level42 - _level41);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level42) AND (life_gesamtexp < _level43)):
	 {
		  life_level = 43;
		  _levelexp = (life_gesamtexp - _level42);
		  _leveldif = (_level43 - _level42);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level43) AND (life_gesamtexp < _level44)):
	 {
		  life_level = 44;
		  _levelexp = (life_gesamtexp - _level43);
		  _leveldif = (_level44 - _level43);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level44) AND (life_gesamtexp < _level45)):
	 {
		  life_level = 45;
		  _levelexp = (life_gesamtexp - _level44);
		  _leveldif = (_level45 - _level44);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level45) AND (life_gesamtexp < _level46)):
	 {
		  life_level = 46;
		  _levelexp = (life_gesamtexp - _level45);
		  _leveldif = (_level46 - _level45);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level46) AND (life_gesamtexp < _level47)):
	 {
		  life_level = 47;
		  _levelexp = (life_gesamtexp - _level46);
		  _leveldif = (_level47 - _level46);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level47) AND (life_gesamtexp < _level48)):
	 {
		  life_level = 48;
		  _levelexp = (life_gesamtexp - _level47);
		  _leveldif = (_level48 - _level47);
      _prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case ((life_gesamtexp >= _level48) AND (life_gesamtexp < _level49)):
	 {
		  	life_level = 49;
		  	_levelexp = (life_gesamtexp - _level48);
		  	_leveldif = (_level49 - _level48);
      	_prozentsatz = (_levelexp / _leveldif);
 			 life_exp = _prozentsatz;
	};

			case (life_gesamtexp >= _level49):
	 {
		  life_level = 50;
 		  life_exp = 1;
	};
};
CONST(life_levelshop,life_level);
[] call life_fnc_hudUpdate;

if (_firstspawn) exitWith {};
 if (life_level == _levelup) then {
    if (_levelup == 2) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Uniform erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 3) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Equipment erhalten <br /> + neuen Rucksack erhalten <br /> + neue Weste erhalten <br /> + neue Kopfbedeckung erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 4) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Uniform erhalten <br /> + neues Fahrzeug erhalten <br /> + neue Kopfbedeckung erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 5) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Uniform erhalten <br /> + neue Weste erhalten <br /> + neues Equipment erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 6) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Uniform erhalten <br /> + neuen Rucksack erhalten <br /> + neues Equipment erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 7) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Uniform erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 8) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Uniform erhalten <br /> + neues Equipment erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 9) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Uniform erhalten <br /> + neues Craftingrezept erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neuen Rucksack erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 10) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Uniform erhalten <br /> + neues Equipment erhalten <br /> + neues Accessoire erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 11) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neuen Rucksack erhalten <br /> + neue Uniform erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 12) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neuen Zünder erhalten <br /> + neue Uniform erhalten <br /> + neues Visier erhalten <br /> + neues Accessoire erhalten <br /> + neue Kopfbedeckung erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 13) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Visier erhalten <br /> + neue Uniform erhalten <br /> + neuen Rucksack erhalten <br /> + neue Weste erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 14) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Visier erhalten <br /> + neues Equipment erhalten <br /> + neue Kopfbedeckung erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 15) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Equipment erhalten <br /> + neue Uniform erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 16) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Accessoire erhalten <br /> + neuen Rucksack erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 17) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Craftingrezept erhalten <br /> + neues Equipment erhalten <br /> + neue Uniform erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 18) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Visier erhalten <br /> + neue Uniform erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 19) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Visier erhalten <br /> + neue Accessoire erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 20) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Equipment erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 21) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Craftingrezept erhalten <br /> + neues Visier erhalten <br /> + neues Equipment erhalten <br /> + neue Uniform erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 22) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Fahrzeug erhalten <br /> + neues Equipment erhalten <br /> + neues Accessoire erhalten <br /> + neue Uniform erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 23) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 24) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Uniform erhalten <br /> + neues Equipment erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neuen Helikopter erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 25) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Equipment erhalten <br /> + neue Uniform erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 26) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Uniform erhalten <br /> + neues Equipment erhalten <br /> + neues Accessoire erhalten <br /> + neues Craftingrezept erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 27) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Uniform erhalten <br /> + neues Equipment erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 28) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Visier erhalten <br /> + neues Equipment erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 29) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Uniform erhalten <br /> + neues Visier erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 30) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neues Fahrzeug erhalten <br /> + neues Equipment erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 31) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Uniform erhalten <br /> + neues Accessoire erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 32) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Equipment erhalten <br /> + neue Uniform erhalten <br /> + neuen Helikopter erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 33) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neue Uniform erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 34) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neuen Rucksack erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText; /////////////////////////
    _levelup = (life_level + 1);
    };
    if (_levelup == 35) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Visier erhalten <br /> + neue Uniform erhalten <br /> + neues Craftingrezept erhalten <br /> + neues Equipment erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 36) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Equipment erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 37) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Visier erhalten <br /> + neue Uniform erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 38) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Munition erhalten <br /> + neue Uniform erhalten <br /> + neue Kopfbedeckung erhalten <br /> + neues Accessoire erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 39) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 40) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Equipment erhalten <br /> + neue Uniform erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 41) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Visier erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 42) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Munition erhalten <br /> + neues Equipment erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 43) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 44) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neues Equipment erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 45) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 46) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten <br /> + neues Visier erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 47) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Munition erhalten <br /> + neues Equipment erhalten <br /> + neues Fahrzeug erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 48) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Waffe erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 49) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Munition erhalten <br /> + neuen Helikopter erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
    if (_levelup == 50) then {
    [format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Level aufgestiegen! <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + neue Munition erhalten <br /> + neue Uniform erhalten"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
    _levelup = (life_level + 1);
    };
  };





