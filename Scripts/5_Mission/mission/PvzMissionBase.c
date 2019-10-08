#ifdef SERVER
#include "$profile:\\PvZmoD_Spawn_System_Profile\\SpawnDatas\\DynamicSpawnZones.c"
#include "$profile:\\PvZmoD_Spawn_System_Profile\\SpawnDatas\\DynamicSpawnDatas.c"
#endif

class PvzMissionBase
{
	bool init;
	int comptFillZone;
	int comptFillType;

	
	void OnTick(float timeslice)
	{
		if (init == false) /// faire plutôt un call later
		{
			init = true;			
			FillDynamicSpawnVariables();
		}
	}

	
	void FillDynamicSpawnVariables()
	{
		#ifdef SERVER
		Print("Liven FillDynamicSpawnVariables");
		FillDynamicZoneDatas (data_Zone001);
		FillDynamicZoneDatas (data_Zone002);
		FillDynamicZoneDatas (data_Zone003);
		FillDynamicZoneDatas (data_Zone004);
		FillDynamicZoneDatas (data_Zone005);
		FillDynamicZoneDatas (data_Zone006);
		FillDynamicZoneDatas (data_Zone007);
		FillDynamicZoneDatas (data_Zone008);
		FillDynamicZoneDatas (data_Zone009);
		FillDynamicZoneDatas (data_Zone010);
		FillDynamicZoneDatas (data_Zone011);
		FillDynamicZoneDatas (data_Zone012);
		FillDynamicZoneDatas (data_Zone013);
		FillDynamicZoneDatas (data_Zone014);
		FillDynamicZoneDatas (data_Zone015);
		FillDynamicZoneDatas (data_Zone016);
		FillDynamicZoneDatas (data_Zone017);
		FillDynamicZoneDatas (data_Zone018);
		FillDynamicZoneDatas (data_Zone019);
		FillDynamicZoneDatas (data_Zone020);
		FillDynamicZoneDatas (data_Zone021);
		FillDynamicZoneDatas (data_Zone022);
		FillDynamicZoneDatas (data_Zone023);
		FillDynamicZoneDatas (data_Zone024);
		FillDynamicZoneDatas (data_Zone025);
		FillDynamicZoneDatas (data_Zone026);
		FillDynamicZoneDatas (data_Zone027);
		FillDynamicZoneDatas (data_Zone028);
		FillDynamicZoneDatas (data_Zone029);
		FillDynamicZoneDatas (data_Zone030);
		FillDynamicZoneDatas (data_Zone031);
		FillDynamicZoneDatas (data_Zone032);
		FillDynamicZoneDatas (data_Zone033);
		FillDynamicZoneDatas (data_Zone034);
		FillDynamicZoneDatas (data_Zone035);
		FillDynamicZoneDatas (data_Zone036);
		FillDynamicZoneDatas (data_Zone037);
		FillDynamicZoneDatas (data_Zone038);
		FillDynamicZoneDatas (data_Zone039);
		FillDynamicZoneDatas (data_Zone040);
		FillDynamicZoneDatas (data_Zone041);
		FillDynamicZoneDatas (data_Zone042);
		FillDynamicZoneDatas (data_Zone043);
		FillDynamicZoneDatas (data_Zone044);
		FillDynamicZoneDatas (data_Zone045);
		FillDynamicZoneDatas (data_Zone046);
		FillDynamicZoneDatas (data_Zone047);
		FillDynamicZoneDatas (data_Zone048);
		FillDynamicZoneDatas (data_Zone049);
		FillDynamicZoneDatas (data_Zone050);
		FillDynamicZoneDatas (data_Zone051);
		FillDynamicZoneDatas (data_Zone052);
		FillDynamicZoneDatas (data_Zone053);
		FillDynamicZoneDatas (data_Zone054);
		FillDynamicZoneDatas (data_Zone055);
		FillDynamicZoneDatas (data_Zone056);
		FillDynamicZoneDatas (data_Zone057);
		FillDynamicZoneDatas (data_Zone058);
		FillDynamicZoneDatas (data_Zone059);
		FillDynamicZoneDatas (data_Zone060);
		FillDynamicZoneDatas (data_Zone061);
		FillDynamicZoneDatas (data_Zone062);
		FillDynamicZoneDatas (data_Zone063);
		FillDynamicZoneDatas (data_Zone064);
		FillDynamicZoneDatas (data_Zone065);
		FillDynamicZoneDatas (data_Zone066);
		FillDynamicZoneDatas (data_Zone067);
		FillDynamicZoneDatas (data_Zone068);
		FillDynamicZoneDatas (data_Zone069);
		FillDynamicZoneDatas (data_Zone070);
		FillDynamicZoneDatas (data_Zone071);
		FillDynamicZoneDatas (data_Zone072);
		FillDynamicZoneDatas (data_Zone073);
		FillDynamicZoneDatas (data_Zone074);
		FillDynamicZoneDatas (data_Zone075);
		FillDynamicZoneDatas (data_Zone076);
		FillDynamicZoneDatas (data_Zone077);
		FillDynamicZoneDatas (data_Zone078);
		FillDynamicZoneDatas (data_Zone079);
		FillDynamicZoneDatas (data_Zone080);
		FillDynamicZoneDatas (data_Zone081);
		FillDynamicZoneDatas (data_Zone082);
		FillDynamicZoneDatas (data_Zone083);
		FillDynamicZoneDatas (data_Zone084);
		FillDynamicZoneDatas (data_Zone085);
		FillDynamicZoneDatas (data_Zone086);
		FillDynamicZoneDatas (data_Zone087);
		FillDynamicZoneDatas (data_Zone088);
		FillDynamicZoneDatas (data_Zone089);
		FillDynamicZoneDatas (data_Zone090);
		FillDynamicZoneDatas (data_Zone091);
		FillDynamicZoneDatas (data_Zone092);
		FillDynamicZoneDatas (data_Zone093);
		FillDynamicZoneDatas (data_Zone094);
		FillDynamicZoneDatas (data_Zone095);
		FillDynamicZoneDatas (data_Zone096);
		FillDynamicZoneDatas (data_Zone097);
		FillDynamicZoneDatas (data_Zone098);
		FillDynamicZoneDatas (data_Zone099);
		FillDynamicZoneDatas (data_Zone100);
		FillDynamicZoneDatas (data_Zone101);
		FillDynamicZoneDatas (data_Zone102);
		FillDynamicZoneDatas (data_Zone103);
		FillDynamicZoneDatas (data_Zone104);
		FillDynamicZoneDatas (data_Zone105);
		FillDynamicZoneDatas (data_Zone106);
		FillDynamicZoneDatas (data_Zone107);
		FillDynamicZoneDatas (data_Zone108);
		FillDynamicZoneDatas (data_Zone109);
		FillDynamicZoneDatas (data_Zone110);
		FillDynamicZoneDatas (data_Zone111);
		FillDynamicZoneDatas (data_Zone112);
		FillDynamicZoneDatas (data_Zone113);
		FillDynamicZoneDatas (data_Zone114);
		FillDynamicZoneDatas (data_Zone115);
		FillDynamicZoneDatas (data_Zone116);
		FillDynamicZoneDatas (data_Zone117);
		FillDynamicZoneDatas (data_Zone118);
		FillDynamicZoneDatas (data_Zone119);
		FillDynamicZoneDatas (data_Zone120);
		FillDynamicZoneDatas (data_Zone121);
		FillDynamicZoneDatas (data_Zone122);
		FillDynamicZoneDatas (data_Zone123);
		FillDynamicZoneDatas (data_Zone124);
		FillDynamicZoneDatas (data_Zone125);
		FillDynamicZoneDatas (data_Zone126);
		FillDynamicZoneDatas (data_Zone127);
		FillDynamicZoneDatas (data_Zone128);
		FillDynamicZoneDatas (data_Zone129);
		FillDynamicZoneDatas (data_Zone130);
		FillDynamicZoneDatas (data_Zone131);
		FillDynamicZoneDatas (data_Zone132);
		FillDynamicZoneDatas (data_Zone133);
		FillDynamicZoneDatas (data_Zone134);
		FillDynamicZoneDatas (data_Zone135);
		FillDynamicZoneDatas (data_Zone136);
		FillDynamicZoneDatas (data_Zone137);
		FillDynamicZoneDatas (data_Zone138);
		FillDynamicZoneDatas (data_Zone139);
		FillDynamicZoneDatas (data_Zone140);
		FillDynamicZoneDatas (data_Zone141);
		FillDynamicZoneDatas (data_Zone142);
		FillDynamicZoneDatas (data_Zone143);
		FillDynamicZoneDatas (data_Zone144);
		FillDynamicZoneDatas (data_Zone145);
		FillDynamicZoneDatas (data_Zone146);
		FillDynamicZoneDatas (data_Zone147);
		FillDynamicZoneDatas (data_Zone148);
		FillDynamicZoneDatas (data_Zone149);
		FillDynamicZoneDatas (data_Zone150);
		
		FillDynamicTypeDatas (data_Suspended);
		FillDynamicTypeDatas (data_CountrySide);
		FillDynamicTypeDatas (data_SmallTwon);
		FillDynamicTypeDatas (data_AverageTown);
		FillDynamicTypeDatas (data_BigTown);
		FillDynamicTypeDatas (data_Building);
		FillDynamicTypeDatas (data_Industial);
		FillDynamicTypeDatas (data_Military);
		FillDynamicTypeDatas (data_Fog);
		FillDynamicTypeDatas (data_Prison);
		FillDynamicTypeDatas (data_Marines);
		FillDynamicTypeDatas (data_Bridge);
		FillDynamicTypeDatas (data_Config90);
		FillDynamicTypeDatas (data_Config91);
		FillDynamicTypeDatas (data_Config92);
		FillDynamicTypeDatas (data_Config93);
		FillDynamicTypeDatas (data_Config94);
		FillDynamicTypeDatas (data_Config95);
		FillDynamicTypeDatas (data_Config96);
		FillDynamicTypeDatas (data_Config97);
		FillDynamicTypeDatas (data_Config98);
		FillDynamicTypeDatas (data_Config99);
		#endif	
	}
	
	void FillDynamicZoneDatas(TIntArray data_Zone)
	{
		Print("Liven FillDynamicZoneDatas");
		comptFillZone++;

		// Print("Liven FillDynamicZoneDatas : " + comptFillZone.ToString() + " - " + data_Zone[0].ToString());
		// Print("Liven FillDynamicZoneDatas : " + comptFillZone.ToString() + " - " + data_Zone[1].ToString());
		// Print("Liven FillDynamicZoneDatas : " + comptFillZone.ToString() + " - " + data_Zone[2].ToString());
		// Print("Liven FillDynamicZoneDatas : " + comptFillZone.ToString() + " - " + data_Zone[3].ToString());
		// Print("Liven FillDynamicZoneDatas : " + comptFillZone.ToString() + " - " + data_Zone[4].ToString());
		// Print("Liven FillDynamicZoneDatas : " + comptFillZone.ToString() + " - " + data_Zone[5].ToString());
		// Print("Liven FillDynamicZoneDatas : " + comptFillZone.ToString() + " - " + data_Zone[6].ToString());

		m_DynamicSpawnVariables.numConfigZombie		[comptFillZone] = data_Zone[0];
		m_DynamicSpawnVariables.coordX_UpLeft		[comptFillZone] = data_Zone[1];
		m_DynamicSpawnVariables.coordZ_UpLeft		[comptFillZone] = data_Zone[2];
		m_DynamicSpawnVariables.coordX_LowerRight	[comptFillZone] = data_Zone[3];
		m_DynamicSpawnVariables.coordZ_LowerRight	[comptFillZone] = data_Zone[4];
		m_DynamicSpawnVariables.quantityRatio		[comptFillZone] = data_Zone[5];
		m_DynamicSpawnVariables.maxNbrZeds			[comptFillZone] = data_Zone[6];
				
		// Print("Liven FillDynamicZoneDatas2 : " + comptFillZone.ToString() + " - " + m_DynamicSpawnVariables.numConfigZombie[comptFillZone].ToString());
		// Print("Liven FillDynamicZoneDatas2 : " + comptFillZone.ToString() + " - " + m_DynamicSpawnVariables.coordX_UpLeft[comptFillZone].ToString());
		// Print("Liven FillDynamicZoneDatas2 : " + comptFillZone.ToString() + " - " + m_DynamicSpawnVariables.coordZ_UpLeft[comptFillZone].ToString());
		// Print("Liven FillDynamicZoneDatas2 : " + comptFillZone.ToString() + " - " + m_DynamicSpawnVariables.coordX_LowerRight[comptFillZone].ToString());
		// Print("Liven FillDynamicZoneDatas2 : " + comptFillZone.ToString() + " - " + m_DynamicSpawnVariables.coordZ_LowerRight[comptFillZone].ToString());
		// Print("Liven FillDynamicZoneDatas2 : " + comptFillZone.ToString() + " - " + m_DynamicSpawnVariables.quantityRatio[comptFillZone].ToString());
		// Print("Liven FillDynamicZoneDatas2 : " + comptFillZone.ToString() + " - " + m_DynamicSpawnVariables.maxNbrZeds[comptFillZone].ToString());
	}
	
	void FillDynamicTypeDatas(TIntArray data_Type)
	{
		Print("Liven FillDynamicTypeDatas");		

		m_DynamicSpawnVariables.timeMini		[comptFillType] = data_Type[1];
		m_DynamicSpawnVariables.timeMaxi		[comptFillType] = data_Type[2];
		
		comptFillType++;
	}
}





/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ///

static ref PvzMissionBase m_PvzMissionBase;
static ref PvzMissionBase GetPvzMissionBase()
{
	if ( !m_PvzMissionBase )
	{
		m_PvzMissionBase = new ref PvzMissionBase;
	}
	return m_PvzMissionBase;
}
