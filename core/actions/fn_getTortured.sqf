/*
	File: fn_getTortured.sqf
	synced-gaming.de - xydra

	Description:
	Getting tortured.
*/

private["_cash","_victim","_robber"];
_torturer = _this select 0;
_r = _this select 1;
if(_robber == _victim) exitWith {};
playSound "Schlag";
_damage = getDammage player;
_sd = _damage + 0.1;
player setDamage _sd;

if (_r < 50) then {[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#96281B'> Dir wurde ein Finger abgeschnitten!",name _victim],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;};
if (_r > 50) then {[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#96281B'> Dir wurde ein Zeh abgeschnitten!",name _victim],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;};


