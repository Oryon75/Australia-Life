private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_Pos","_rndmrk","_mrkstring"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; 
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; 
_action = [_this,2] call BIS_fnc_param;
_cops = (west countSide playableUnits);

if(_cops < 1) exitWith { hint "You can't rob this cashier, there aren't enough police online!"; };

if(side _robber == west) exitWith { hint "What do you think you're doing?"; };
if(side _robber == independent) exitWith { hint "Don't you have bigger fish to fry?"; };
if(_robber distance _shop > 5) exitWith { hint "You need to be within 5m of the cash cashier to rob it!"; };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!"; };

if !(_kassa) then { _kassa = 1000; };
if (_rip) exitWith { hint "Robbery already in progress!"; };
if (currentWeapon _robber == "") exitWith { hint "You do not threaten me! Get out of here!"; };

if !(alive _robber) exitWith {};
if (_kassa == 0) exitWith { hint "There is no cash!"; };

_rip = true;
_kassa = 30000 + round(random 10000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 85) then { player say3D "bad_boys"; hint "The cashier hit the silent alarm, police have been alerted!"; [[1,format["ALARM SOUNDED! - Robbery in progress by: %1", _shop]],"life_fnc_broadcast",west,false] spawn life_fnc_MP; };
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in Progress, stay within 5m (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
	_Pos = position player; 
	
   _rndmrk = random(1000);
   _mrkstring = format ["wrgMarker%1", _rndmrk];
   _marker = createMarker [_mrkstring, _Pos]; 
   _marker setMarkerColor "ColorRed";
   _marker setMarkerText "!ATTENTION! Robbery in Progress !ATTENTION!";
   _marker setMarkerType "mil_warning";
   
	
	_RiH = createMarker ["robMarker", _Pos];
	"robMarker" setMarkerColor "ColorRed";
	"robMarker" setMarkerType "Empty";
	"robMarker" setMarkerShape "ELLIPSE";
	"robMarker" setMarkerSize [100,100];
	"robMarker" setMarkerAlpha 0.2;
	
	
   [[1,format["ALARM: Robbery in progress by: %1", _shop]],"life_fnc_broadcast",true,false] spawn life_fnc_MP; 

   while{true} do
   {
      uiSleep 2.00;
      _cP = _cP + 0.01;
      _progress progressSetPosition _cP;
      _pgText ctrlSetText format["Robbery in Progress, stay within 5m (%1%2)...",round(_cP * 100),"%"];
	  
      if(_cP >= 1 OR !alive _robber) exitWith {};
      if(_robber distance _shop > 8.1) exitWith { };
	  if((_robber getVariable["restrained",false])) exitWith {};
	  if((_robber getVariable["ziptied",false])) exitWith {};
	  if(life_istazed) exitWith {} ;
	  if(life_interrupted) exitWith {};
   };
   
   if!(alive _robber) exitWith { deleteMarker _marker;deleteMarker _RiH; _rip = false; _shop switchMove ""; 5 cutText ["","PLAIN"];};
   if(_robber distance _shop > 8.1) exitWith { deleteMarker _marker;deleteMarker _RiH; _shop switchMove ""; hint "You moved away from the cashier - it has been locked!"; 5 cutText ["","PLAIN"]; _rip = false; [[getPlayerUID _robber,name _robber,"211A"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP; };
   if(_robber getVariable "restrained") exitWith { deleteMarker _marker;deleteMarker _RiH; _rip = false; _shop switchMove ""; hint "You were arrested!"; 5 cutText ["","PLAIN"];};
   if(life_istazed) exitWith { deleteMarker _marker;deleteMarker _RiH; _rip = false; _shop switchMove ""; hint "You were tazed!"; 5 cutText ["","PLAIN"];};
   
   5 cutText ["","PLAIN"];
   titleText[format["You have stolen $%1, now get away before the cops arrive!",[_kassa] call life_fnc_numberText],"PLAIN"];
   deleteMarker _marker; 
   life_cash = life_cash + _kassa;

   _rip = false;
   life_global_useAtm = false;
   uiSleep (30 + random(180));
   life_global_useAtm = true;
   [[getPlayerUID _robber,name _robber,"211"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
};
uiSleep 100;
deleteMarker _RiH;
uiSleep 500;
_action = _shop addAction["Rob Cashier",life_fnc_robShops];	
_shop switchMove "";