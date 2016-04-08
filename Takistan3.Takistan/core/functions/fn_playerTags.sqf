#include "..\..\script_macros.hpp"
/*
	File: fn_playerTags.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Adds the tags above other players heads when close and have visible range.
*/
private["_ui","_units"];
#define iconID 78000
#define scale 0.8
_headgear = ["H_Cap_tan_specops_US"];

if(visibleMap OR {!alive player} OR {dialog}) exitWith {
	500 cutText["","PLAIN"];
};

_ui = GVAR_UINS ["Life_HUD_nameTags",displayNull];
if(isNull _ui) then {
	500 cutRsc["Life_HUD_nameTags","PLAIN"];
	_ui = GVAR_UINS ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];

SUB(_units,[player]);

{
	private "_text";
	_idc = _ui displayCtrl (iconID + _forEachIndex);
	if(!(lineIntersects [eyePos player, eyePos _x, player, _x]) && {!isNil {_x GVAR "realname"}}) then {
		_pos = switch(typeOf _x) do {
			case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
			case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
			default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
		};
		_sPos = worldToScreen _pos;
		_distance = _pos distance player;
			if(count _sPos > 1 && {_distance < 4 }) then {
			_text = switch (true) do {
				case ((headgear _x) in _headgear): {format["<t color='#FFFFFF'></t>"];};
				case (_x in (units grpPlayer) && playerSide == east): {format["<t color='#00FF00'>%1</t>",(_x GVAR ["realname",name _x])];};
				case (_x GVAR "wanted"): {format["<t color='#FAAC58'>%1</t>",_x GVAR ["realname",name _x]]};
				case (!isNil {(_x GVAR "rank")}): {format["     <t size='0.9'> %1 </t> <br /> <img image='%2' size='1.5'></img> %3",
				switch ((_x GVAR "rank")) do {
					case 1: {"Recruit"};
					case 2: {"Private"};
					case 3: {"Private First Class"};
					case 4: {"Specialist"};
					case 5: {"Corporal"};
					case 6: {"Sergeant"};
					case 7: {"Staff Sergeant"};
					case 8: {"Sergeant First Class"};
					case 9: {"Master Sergeant"};
					case 10: {"Sergeant Major"};
					case 11: {"Command Sergeant Major"};
					case 12: {"Second Lieutenant"};
					case 13: {"First Lieutenant"};
					case 14: {"Captain"};
					case 15: {"Major"};
					case 16: {"Colonel"};
					case 17: {"General"};
					case 18: {"Commander"};
					default {"unknown"};
					}
				,switch ((_x GVAR "rank")) do {
					case 1: {"icons\1REC.paa"};
					case 2: {"icons\2PVT.paa"};
					case 3: {"icons\3PFC.paa"};
					case 4: {"icons\4SPC.paa"};
					case 5: {"icons\5CPL.paa"};
					case 6: {"icons\6SGT.paa"};
					case 7: {"icons\7SSG.paa"};
					case 8: {"icons\8SFC.paa"};
					case 9: {"icons\9MSG.paa"};
					case 10: {"icons\10SGM.paa"};
					case 11: {"icons\11CSM.paa"};
					case 12: {"icons\12LT.paa"};
					case 13: {"icons\13LT.paa"};
					case 14: {"icons\14CPT.paa"};
					case 15: {"icons\15MAJ.paa"};
					case 16: {"icons\16COL.paa"};
					case 17: {"icons\17GEN.paa"};
					case 18: {"icons\18COA.paa"};
					default {"\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"};
					},_x GVAR ["realname",name _x]]};
				case (!isNil {(_x GVAR "medicrank")}): {format["     <t size='0.9'> %1 </t> <br /> <img image='%2' size='1.5'></img> %3",
				switch ((_x GVAR "medicrank")) do {
					case 1: {"PJ-Recruit"};
					case 2: {"PJ"};
					case 3: {"PJ-Major"};
					case 4: {"PJ-General"};
					default {"unknown"};
					}
				,switch ((_x GVAR "medicrank")) do {
					case 1: {"icons\medic1.paa"};
					case 2: {"icons\medic2.paa"};
					case 3: {"icons\medic3.paa"};
					case 4: {"icons\medic4.paa"};
					default {"\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"};
					},_x GVAR ["realname",name _x]]};
				default {
					if(!isNil {(group _x) GVAR "gang_name"}) then {
						format["%1<br/><t color='#B6B6B6'>%2</t>",_x GVAR ["realname",name _x],(group _x) GVAR ["gang_name",""]];
					} else {
						_x GVAR ["realname",name _x];
					};
				};
			};

			_idc ctrlSetStructuredText parseText _text;
			_idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
			_idc ctrlSetScale scale;
			_idc ctrlSetFade 0;
			_idc ctrlCommit 0;
			_idc ctrlShow true;
		} else {
			_idc ctrlShow false;
		};
	} else {
		_idc ctrlShow false;
	};
} foreach _units;