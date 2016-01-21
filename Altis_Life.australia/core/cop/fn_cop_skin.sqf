#include <macro.h>
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (_unit == player) then
{
	if (playerSide == west) then
	{
		switch(true) do
		{
			case (FETCH_CONST(life_coplevel) > 0) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];

			case (FETCH_CONST(life_coplevel) > 1) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];

            case (FETCH_CONST(life_coplevel) > 2) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];

            case (FETCH_CONST(life_coplevel) > 3) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];

			case (FETCH_CONST(life_coplevel) > 4) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];

			case (FETCH_CONST(life_coplevel) > 5) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];

			case (FETCH_CONST(life_coplevel) > 6) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];

			case (FETCH_CONST(life_coplevel) > 7) : {
				player setObjectTextureGlobal [0, "textures\uni\cop\cop.jpg"];
			};
		};
	};
};
