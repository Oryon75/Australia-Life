/*
	File: fn_eatFood.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main handling system for eating food.
	*Needs to be revised and made more modular and more indept effects*
*/
private["_food","_val","_sum"];
_food = [_this,0,"",[""]] call BIS_fnc_param;
if(_food == "") exitWith {};

if([false,_food,1] call life_fnc_handleInv) then {
	switch (_food) do
	{
		case "apple": {_val = 10};
		case "turtle_soup": {_val = 40};
		case "donuts": {_val = 30};
		case "tbacon": {_val = 40};
		case "peach": {_val = 10};
		case "rabbitgrilled": {_val = 40};
		case "salemagrilled": {_val = 40};
		case "ornategrilled": {_val = 40};
		case "mackerelgrilled": {_val = 40};
		case "tunagrilled": {_val = 40};
		case "mulletfried": {_val = 40};
		case "catsharkfried": {_val = 40};
		case "henfried": {_val = 40};
		case "roostergrilled": {_val = 40};
		case "sheepgrilled": {_val = 40};
		case "goatgrilled": {_val = 40};
	};

	_sum = life_hunger + _val;
	if(_sum > 100) then {_sum = 100; player setFatigue 1; hint "You have over eaten, you are now feeling fatigued.";};
	life_hunger = _sum;
};