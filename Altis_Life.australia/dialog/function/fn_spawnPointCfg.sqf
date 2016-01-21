/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Perth","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","Sydney","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_as","Alice Springs","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_air","Air HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_dar","Darwin","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_sup","Supermax","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case civilian:	{						
		if(license_civ_rebel && playerSide == civilian) then {
			_return = [
				["reb_spawn_1","Perth","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["reb_spawn_2","Sydney","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["reb_spawn_3","Alice Springs","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["reb_spawn_4","Darwin","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		
		if(!license_civ_rebel && playerSide == civilian) then {
			_return = [
				["reb_spawn_1","Perth","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["reb_spawn_2","Sydney","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["reb_spawn_3","central","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["reb_spawn_4","north","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};

		if((getPlayerUID player) in ["76561198060294593"])then {
			_return = [
				["Stokes_Spawn","StokesMagee's Krib","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};

		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Kavala Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Athira Regional","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Pygros Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;