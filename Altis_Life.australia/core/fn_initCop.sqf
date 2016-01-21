#include <macro.h>
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Cop Initialization file.
*/
private["_end"];
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;
if(life_blacklisted) exitWith
{
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(!(str(player) in [""])) then {
	if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};

player setVariable ["copLevel",1,true];
player setVariable["rank",(FETCH_CONST(life_coplevel)),true];

[] spawn
{
	private["_texture"];
	while {true} do
	{
		waitUntil{uniform player == "U_Rangemaster"};
		_texture =
		switch (FETCH_CONST(life_coplevel)) do
		{
			case 0: {"textures\uni\cop\cop.jpg"};
			case 1: {"textures\uni\cop\cop.jpg"};
			case 2: {"textures\uni\cop\cop.jpg"};
			case 3: {"textures\uni\cop\cop.jpg"};
			case 4: {"textures\uni\cop\cop.jpg"};
			case 5: {"textures\uni\cop\cop.jpg"};
			case 6: {"textures\uni\cop\cop.jpg"};
			case 7: {"textures\uni\cop\cop.jpg"};
		};
		player setObjectTextureGlobal [0,_texture];
		waitUntil{uniform player != "U_Rangemaster"};
	};
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.