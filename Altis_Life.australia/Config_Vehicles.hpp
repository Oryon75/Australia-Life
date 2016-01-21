class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" }, 
			{ "Jonzie_Viper", 105000, "driver" }, 
			{ "Jonzie_Mini_Cooper_R_spec", 42000, "driver" },
			{ "Jonzie_VE", 55000, "driver", },
			{ "Jonzie_Ute", 65000, "driver" },
			{ "Jonzie_Ceed", 15000, "driver" },
			{ "Jonzie_Corolla", 7500, "driver" },
			{ "Jonzie_Escalade", 81000, "driver" },
			{ "Jonzie_Datsun_510", 12500, "driver" },
			{ "Jonzie_Datsun_Z432", 25000, "driver" },
			{ "Jonzie_Galant", 32000, "driver" },
			{ "Jonzie_Quattroporte", 140000, "driver" },
			{ "Jonzie_Transit", 44000, "driver" },
			{ "Jonzie_30CSL", 19500, "driver" },
			{ "A3L_Atom", 125000, "driver",  },
			{ "A3L_Citreon_DS3_white", 19500, "driver" },
			{ "A3L_Citreon_DS3_Black", 19500, "driver" },
			{ "A3L_Citreon_DS3_DarkBlue", 19500, "driver" },
			{ "A3L_Ford_Raptor_Black", 54000, "driver" },
			{ "A3L_Ford_Raptor_Red", 54000, "driver" },
			{ "A3L_Ford_Raptor_Orange", 54000, "driver" },
			{ "A3L_GMC_Van_White", 6500, "driver" },
			{ "A3L_GMC_Van_Grey", 6500, "driver" },
			{ "A3L_Jeep_Cherokee_Black", 42000, "driver" },
			{ "A3L_A3L_Jeep_Cherokee_BlackMatte", 42000, "driver" },
			{ "A3L_A3L_Jeep_Cherokee_DarkBlue", 42000, "driver" },
			{ "A3L_A3L_Jeep_Cherokee_White", 42000, "driver" },
			{ "A3L_A3L_Jeep_Cherokee_Red", 42000, "driver" },
			{ "A3L_Lincoln_Red", 21500, "driver" },
			{ "A3L_Lincoln_Black", 21500, "driver" },
			{ "A3L_Lincoln_Pink", 21500, "driver" },
			{ "A3L_Lincoln_Purple", 21500, "driver" },
			{ "A3L_Subaru_WRX_DarkBlue", 32000, "driver" },
			{ "A3L_Challenger", 51000, "driver" },
			{ "A3L_ChallengerBlack", 51000, "driver" },
			{ "A3L_ChargerBlack", 39000, "driver" },
			{ "A3L_ChargerRed", 39000, "driver" },
			{ "A3L_Citreon_C4_Red", 17500, "driver" },
			{ "A3L_Citreon_C4_Yello", 17500, "driver" },
			{ "A3L_EvoXDarkGreen", 19500, "driver" },
			{ "A3L_EvoXrally_blue", 29000, "driver" },
			{ "A3L_EvoXrally_red", 29000, "driver" },
			{ "A3L_F350_Black", 72000, "driver" },
			{ "A3L_Ferrari_458red", 275000, "driver" },
			{ "A3L_Ferrari_458black", 275000, "driver" },
			{ "A3L_GrandCaravanBlk", 21500, "driver" },
			{ "A3L_Jeep", 29900, "driver" },
			{ "A3L_JeepredTan", 29900, "driver" },
			{ "A3L_RegalBuick", 27659, "driver" },
			{ "A3L_TahoeBlue", 45500, "driver" },
			{ "A3L_TaurusRed", 36250, "driver" },
			{ "A3L_VolvoS60Red", 32750, "driver" },
			{ "A3L_AMXRed", 31000, "driver" },
			{ "A3L_RX7_Red", 19500, "driver" },
			{ "A3L_FordKaBlack", 12000, "driver" },
			{ "Jonzie_STI", 45000, "driver" }
			
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "Jonzie_Ambulance", 10000, "" },
			{ "DAG_TaurusPD2", 7500, "" },
			{ "dezkit_b206_ems", 45000, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 75000, "mAir" }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "max_moneytruck", 125000, "trucking" },
			{ "Jonzie_Superliner", 100000, "trucking" },
			{ "Jonzie_Curtain", 125000, "trucking" },
			{ "Jonzie_Curtain_Roadtrain", 125000, "trucking" },
			{ "Jonzie_Tow_Truck", 65000, "trucking" },
			{ "Jonzie_Flat_Bed", 35000, "trucking" },
			{ "Jonzie_Tanker_Truck", 35000, "trucking" },
			{ "Jonzie_Box_Truck", 35000, "trucking" }
		};
	};

	class bm_car {
		side = "civ";
		vehicles[] = {
			{ "HMMWV_m1035", 45000, "" },
			{ "HMMWV_M1151_M2",250000, "" },
			{ "HMMWV_M1151_AGS_ACR", 750000, "" },
			{ "Cha_BRDM2_TK", 3250000, "" },
			{ "Cha_BRDM2_HQ_SLA", 1500000, "" },
			{ "Cha_BRDM2_ATGM_DDR", 9500000, "" },
			{ "Cha_BTR60_TK", 3250000, "" },
			
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "A3L_TaurusFPBLBCSO", 5000, ""},
			{ "A3L_CVPIFPBLBCSO", 5000, ""},
			{ "A3L_CVPIFPBCSO", 30000, "", { "life_coplevel", 4 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "FIR_F14D_VF103", 11000000, "pilot" },
			{ "FIR_F14D_VF101", 11000000, "pilot" },
			{ "FIR_F15C", 11000000, "pilot" },
			{ "FIR_F15E", 11000000, "pilot" },
			{ "FIR_F16C", 9000000, "pilot" },
			{ "FIR_F16C_ag_arctic", 9000000, "pilot" },
			{ "globemaster_c17_edwards", 35000000, "pilot" },
			{ "bwi_a3_t6a_1", 1500000, "pilot" },
			{ "bwi_a3_at6b", 3500000, "pilot" },
			{ "DEGA_Apache_AH64D_Block_II_USA", 2500000, "pilot" },
			{ "dezkit_b206_hs", 750000, "pilot" },
			{ "dezkit_b206_fl", 750000, "pilot" },
			{ "dezkit_b206x_armed", 1750000, "pilot" },
			{ "sab_cz_An2", 225000, "pilot" },
			{ "sab_sea_An2", 275000, "pilot" },
			{ "Cha_C130_USMC_1", 5500000, "pilot" },
			{ "UH1H", 2250000, "pilot" },
			{ "UH60M_MEV", 1250000, "pilot" },
			{ "EC635_Unarmed", 850000, "pilot" },
			{ "EC635", 3225000, "pilot" },
			{ "sab_camel", 85000, "pilot" },
			{ "sab_camel_blu_pro", 950000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 225000, "pilot" }
		};
	};
	class bm_air {
		side = "civ";
		vehicles[] = {
			{ "FIR_F14D_VF103", 11000000, "pilot" },
			{ "FIR_F14D_VF101", 11000000, "pilot" },
			{ "FIR_F15C", 11000000, "pilot" },
			{ "FIR_F15E", 11000000, "pilot" },
			{ "FIR_F16C", 9000000, "pilot" },
			{ "FIR_F16C_ag_arctic", 9000000, "pilot" },
			{ "DEGA_Apache_AH64D_Block_II_USA", 2500000, "pilot" },
			{ "dezkit_b206x_armed", 1750000, "pilot" },
			{ "Cha_C130_USMC_1", 5500000, "pilot" },
			
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "fbi_light_heli", 75000, "cAir" },
			{ "fbi_heavy_heli", 200000, "cAir", { "life_coplevel", 3 } }
		};
	};

	class cop_airhq {
		side = "cop";
		vehicles[] = {
			{ "police_light_heli", 75000, "cAir" },
			{ "police_heavy_heli", 200000, "cAir", { "life_coplevel", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

class CfgVehicles {
	class Default {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};
	class Jonzie_Viper {
        vItemSpace = 25;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 52500, 0, 0, 0 };
        insurance = 10500;
        chopShop = 26250;
	};
	class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 45;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 21000, 0, 0, 0 };
        insurance = 5500;
        chopShop = 10500;
	};
	class Jonzie_VE {
        vItemSpace = 35;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 27500, 0, 0, 0 };
        insurance = 5500;
        chopShop = 13500;
	};
	class Jonzie_UTE {
        vItemSpace = 45;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 27500, 0, 0, 0 };
        insurance = 10500;
        chopShop = 13500;
	};
	class Jonzie_Ceed {
        vItemSpace = 40;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 7500, 0, 0, 0 };
        insurance = 1500;
        chopShop = 3250;
	};
	class Jonzie_Corolloa {
        vItemSpace = 55;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 700;
        chopShop = 1750;
	};
	class Jonzie_Escalade {
        vItemSpace = 75;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 40500, 0, 0, 0 };
        insurance = 8100;
        chopShop = 20250;
	};
	class Jonzie_Datsun_510 {
        vItemSpace = 50;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 6250, 0, 0, 0 };
        insurance = 1250;
        chopShop = 3125;
	};
	class Jonzie_Galant {
        vItemSpace = 65;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 16000, 0, 0, 0 };
        insurance = 3200;
        chopShop = 8000;
	};
	class Jonzie_Quattroporte {
        vItemSpace = 75;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 70000, 0, 0, 0 };
        insurance = 14000;
        chopShop = 35000;
	};
	class Jonzie_Datsun_z432 {
        vItemSpace = 25;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 12500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 6125;
	};
	class Jonzie_Raptor {
        vItemSpace = 150;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 32500, 0, 0, 0 };
        insurance = 6500;
        chopShop = 16125;
	};
	class Jonzie_Transit {
        vItemSpace = 125;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 8250, 0, 0, 0 };
        insurance = 1900;
        chopShop = 4125;
	};
	class Jonzie_30CSL {
        vItemSpace = 55;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 40500, 0, 0, 0 };
        insurance = 8100;
        chopShop = 20250;
	};
	class Jonzie_STI {
        vItemSpace = 40;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 22500, 0, 0, 0 };
        insurance = 4400;
        chopShop = 11250;
	};
	class FIR_F14D_VF103 {
        vItemSpace = 25;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 6000000, 0, 0, 0 };
        insurance = 600000;
        chopShop = 300000;
	};
	class FIR_F14D_VF101 {
        vItemSpace = 25;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 6000000, 0, 0, 0 };
        insurance = 600000;
        chopShop = 300000;
	};
	class FIR_F15C {
        vItemSpace = 25;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 6000000, 0, 0, 0 };
        insurance = 600000;
        chopShop = 300000;
	};
	class FIR_F15E {
        vItemSpace = 25;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 6000000, 0, 0, 0 };
        insurance = 600000;
        chopShop = 300000;
	};
	class FIR_F16C {
        vItemSpace = 25;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 6000000, 0, 0, 0 };
        insurance = 600000;
        chopShop = 300000;
	};
	class FIR_F16C_ag_arctic {
        vItemSpace = 25;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 6000000, 0, 0, 0 };
        insurance = 600000;
        chopShop = 300000;
	};
	class globemaster_c17_edwards {
        vItemSpace = 2500;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 15000000, 0, 0, 0 };
        insurance = 3500000;
        chopShop = 7000000;
	};
	class dezkit_b206_ha {
        vItemSpace = 125;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 325000, 0, 0, 0 };
        insurance = 75000;
        chopShop = 160000;
	};
	class dezkit_b206_fl {
        vItemSpace = 125;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 325000, 0, 0, 0 };
        insurance = 75000;
        chopShop = 160000;
	};
	class dezkit_b206x_armed {
        vItemSpace = 25;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 900000, 0, 0, 0 };
        insurance = 175000;
        chopShop = 450000;
	};
	class sab_cz_An2 {
        vItemSpace = 500;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 110000, 0, 0, 0 };
        insurance = 22500;
        chopShop = 55000;
	};
	class sab_sea_An2 {
        vItemSpace = 500;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 110000, 0, 0, 0 };
        insurance = 22500;
        chopShop = 55000;
	};
	class Cha_C130_USMC_1 {
        vItemSpace = 500;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 2250000, 0, 0, 0 };
        insurance = 550000;
        chopShop = 1110000;
	};
	class B_Heli_Transport_03_unarmed_green_F {
		vItemSpace = 500;
        storageFee[] = { 100000, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
	};

	class I_Truck_02_medical_F {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };
		class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {};
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {};
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {};

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 100;
        storageFee[] = { 5000, 0, 22000, 0 };
		garageSell[] = { 125000, 0, 35000, 0 };
        insurance = 22500;
        chopShop = 67000;
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
    };
};