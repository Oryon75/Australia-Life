disableSerialization;
_display = findDisplay 5980;

_Pcard1 = _display displayCtrl 5992;
_Pcard2 = _display displayCtrl 5993;
_Pcard3 = _display displayCtrl 5994;
_Pcard4 = _display displayCtrl 5997;
_Dcard1 = _display displayCtrl 5990;
_Dcard2 = _display displayCtrl 5991;
_Dcard3 = _display displayCtrl 5995;
_Dcard4 = _display displayCtrl 5996;
_TOTALTXT = _display displayCtrl 6007;
_bet5KTEXT = _display displayCtrl 6003;
_bet10KTEXT = _display displayCtrl 6004;
_bet25KTEXT = _display displayCtrl 6005;
_bet50KTEXT = _display displayCtrl 6006;
_betamt = 0;

if( (ctrlText _bet5KText) != "" ) then
{
	_betamt = 5000;
}
else
{
	if( (ctrlText _bet10KText) != "" ) then
	{
		_betamt = 10000;
	}
	else
	{
		if( (ctrlText _bet25KText) != "" ) then
		{
			_betamt = 25000;
		}
		else
		{
			_betamt = 50000;
		};
	};
};

_bet1 = _display displayCtrl 5984;
_bet2 = _display displayCtrl 5985;
_bet3 = _display displayCtrl 5986;
_bet4 = _display displayCtrl 5987;
_Stay = _display displayCtrl 5982;
_Hit = _display displayCtrl 5983;
_winnings = _display displayCtrl 6001;
_bet1 ctrlEnable false;
_bet2 ctrlEnable false;
_bet3 ctrlEnable false;
_bet4 ctrlEnable false;
_Hit ctrlEnable false;
_Stay ctrlEnable false;

_P1T = ctrlText _Pcard1;
_P2T = ctrlText _Pcard2;
_P3T = ctrlText _Pcard3;
_P4T = ctrlText _Pcard4;
_D1T = ctrlText _Dcard1;

_gameover = false;
_totalPlayer = 0;
_totalDealer = 0;
_totalDealer2 = 0;
_totalDealer3 = 0;
_totalDealer4 = 0;
_totalPlayer = ctrlText _TOTALTXT;
_totalPlayer = parseNumber _totalPlayer;
_totalDealer = 0;
_win = 0;


_number = ceil(random 11);
_number = _number + 2;

if ( _number == 11 OR _number == 12 ) then
{
	_number = 10;

}
else 
{
	if( _number == 13 ) then
	{
		_number = 10;
	};

};

_Dcard2 ctrlSetText format["%1",_number];

if( _D1T == "ACE" ) then 
{
	if( _number == 10 ) then 
	{
		_totalDealer = 21;
	}
	else
	{
		_totalDealer = 11 + _number;
	};
}
else
{
	_totalDealer = _number + (parseNumber _D1T);
};

if( _totalDealer > _totalPlayer ) then 
{	
	_gameover = true;
}
else
{
	if( _totalDealer == _totalPlayer ) then 
	{
		//tied the dealer
		_win = 3;
		_gameover = true;
	}
	else 
	{
		_gameover = false;
	
	};
	
};

if( !_gameover ) then 
{
	_number = ceil(random 11);
	_number = _number + 2;

	if ( _number == 11 OR _number == 12 ) then
	{
		_number = 10;
		_Dcard3 ctrlSetText  format["%1",_number];

	}
	else 
	{
		if( _number == 13 ) then
		{
			_Dcard3 ctrlSetText "ACE";
		}
		else
		{
			_Dcard3 ctrlSetText  format["%1",_number];
		};
		
	};

	
	
	if( _number == 13 ) then 
	{
		_totalTemp = _totalDealer + 11;
		_totalTemp2 = _totalDealer + 1;
		
		if( _totalTemp == 21 OR _totalTemp2 == 21 ) then 
		{
				_gameover = true;			
		}
		else
		{
			if( _totalTemp > 21 AND _totalTemp2 > 21 ) then 
			{
				_gameover = true;
				//dealer bust
				_win = 4;
			};

		};
		
		if( !_gameover ) then 
		{
			if( _totalTemp > _totalPlayer ) then 
			{
				if( _totalTemp < 21 ) then 
				{
					_gameover = true;
				};
			}
			else
			{
				if( _totalTemp2 > _totalPlayer ) then 
				{
					if( _totalTemp2 < 21 ) then 
					{
						_gameover = true;
					};
				};
			
			};
		
		};
	}
	else
	{
		
		_totalDealer = _totalDealer + _number;
		//dealer goes over
		if( _totalDealer > 21 ) then 
		{
			_gameover = true;
			_win = 4;
			hintSilent "Dealer Bust!";
		}
		else
		{
			//dealer has more
			if( _totalDealer > _totalPlayer ) then 
			{		
				_gameover = true;
				hintSilent "Dealer Wins!";
			}
			else 
			{
				if( _totalDealer == _totalPlayer ) then 
				{
					_gameover = true;
					_win = 3;
				}
				else
				{
					_gameover = false;
				};		
			};			
		};	
	};
};


if( !_gameover && (_win != 3)) then 
{
	_win = 2;
};



if( _win == 1 OR _win == 2) then 
{
	_cash = round((_betamt * 1.5 ));
	life_cash = life_cash + _cash;
	_winnings ctrlSetText  format["%1",_cash];
};
if( _win == 3 OR _win == 4) then 
{
	_cash = round((_betamt * 1.2 ));
	life_cash = life_cash + _cash;
	_winnings ctrlSetText  format["%1",_cash];
};
if( _win == 0) then 
{
	_winnings ctrlSetText "You lose. Dealer Wins.";	
};

_bet1 ctrlEnable true;
_bet2 ctrlEnable true;
_bet3 ctrlEnable true;
_bet4 ctrlEnable true;
_bet5KTEXT  ctrlSetText "BET";
_bet10KTEXT ctrlSetText "BET";
_bet25KTEXT ctrlSetText "BET";
_bet50KTEXT ctrlSetText "BET";
