fn_snow = {
	while {true} do
	{
		_obj = vehicle player;
		_pos = if (_obj == player) then
		{
			(getPosASL _obj)
		}
		else
		{
			_res = getPosASL _obj;
			_res set [2, ((_res select 2) + 2)];
			_res
		};

		if (count (lineIntersectsObjs [_pos, [(_pos select 0), (_pos select 1), ((_pos select 2) + 20)]]) == 0) then
		{
			if (count (player getVariable ["SURF_Snow", []]) == 0) then
			{
				_snow1 = "#particleSource" createVehicleLocal (getPos _obj);
				_snow1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1, 0, 1, 0], "", "Billboard", 1, 10, [0, 0, 0], [0, 0, -10], 10, 1, 0, 1, [0.12, 0.12], [[1, 1, 1, 0.5], [1, 1, 1, 0.5]], [0, 1], 0.25, 1, "", "", _obj];
				_snow1 setParticleRandom [0, [25, 25, 18], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
				_snow1 setParticleCircle [0.0, [0, 0, 0]];
				_snow1 setDropInterval 0.003;

				_snow2 = "#particleSource" createVehicleLocal (getPos _obj);
				_snow2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1, 0, 1, 0], "", "Billboard", 1, 10, [0, 0, 0], [0, 0, -10], 10, 1, 0, 1, [0.12, 0.12], [[1, 1, 1, 0.5], [1, 1, 1, 0.5]], [0, 1], 0.25, 1, "", "", _obj];
				_snow2 setParticleRandom [0, [25, 25, 18], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
				_snow2 setParticleCircle [0.0, [0, 0, 0]];
				_snow2 setDropInterval 0.003;

				player setVariable ["SURF_Snow", [_snow1, _snow2]];
			};
		}
		else
		{
			if (count (player getVariable ["SURF_Snow", []]) == 2) then
			{
				{
					deleteVehicle _x;
				} forEach (player getVariable ["SURF_Snow", []]);

				player setVariable ["SURF_Snow", []];
			};
		};
		sleep 0.1;
	};	
};