class PvzPlayerManagement
{
	/// Dans PvzMissionBase à therme
	int NumDynamicZone;
	int QuantityDynamicRatio;
	
	int maxNbrZombieCurrentZone;
	int maxNbrCountrySideZombiesPerPlayer = 10;
	
	int numConfigZombie;	
	///

	int NumDynamicZoneOld = -1;
	int dynamicSpawnTimeTrigger;
	int dynamicSpawnTimeCount;
	int nbDynamicTypeTable;
	
	PlayerBase thePlayerBase;
	vector posPlayer;
	vector posPlayerOld;
	vector ajustedPosPlayer;
	
	int numConfigZombieTab	[151];	
	float coordX_UpLeft 	[151];	
	float coordZ_UpLeft		[151];	
	float coordX_LowerRight [151];	
	float coordZ_LowerRight	[151];	
	int quantityRatio		[151];	
	int maxNbrZeds			[151];	
	
	int timeMini			[22];	
	int timeMaxi			[22];		
	
	void PvzPlayerManagement()
	{		
		GetRPCManager().SendRPC( "PvzMod2", "CopyTheVariables", null, true );
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ManageDynamicZone, 1000, true); 	
	}
	
	void CopyTheVariables( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target )
	{
		if ( type == CallType.Server && GetGame().IsServer() && GetGame().IsMultiplayer() )
		{
			numConfigZombieTab	= m_DynamicSpawnVariables.numConfigZombie;	
			coordX_UpLeft 		= m_DynamicSpawnVariables.coordX_UpLeft;	
			coordZ_UpLeft		= m_DynamicSpawnVariables.coordZ_UpLeft;	
			coordX_LowerRight 	= m_DynamicSpawnVariables.coordX_LowerRight;	
			coordZ_LowerRight	= m_DynamicSpawnVariables.coordZ_LowerRight;	
			quantityRatio		= m_DynamicSpawnVariables.quantityRatio;	
			maxNbrZeds			= m_DynamicSpawnVariables.maxNbrZeds;	
			
			timeMini = m_DynamicSpawnVariables.timeMini;
			timeMaxi = m_DynamicSpawnVariables.timeMaxi;
		}
	}
	
	void ManageDynamicZone()
	{		
		ajustedPosPlayer = AdjustPositionToCheck();
		
		if (ajustedPosPlayer != vector.Zero)
		{
			dynamicSpawnTimeCount++;
			FindTheCurrentDynamicZone();
			ConvertDynamicType();
			
			bool zoneChangeNeedNewTime = CheckChangeZone();		
			bool endTimeReach = CheckEndTime();
			
			if (zoneChangeNeedNewTime || endTimeReach)
				ChooseTime()
			
			if (endTimeReach) 
				SpawnZombies();
		}
		else
		{
			Print ("Liven : Check zone suspended, the player does not move");
		}
	}
	
	vector AdjustPositionToCheck()
	{
		posPlayer = thePlayerBase.GetPosition();
		Print("posPlayer : " + posPlayer.ToString());
		
		vector posPlayerAjusted;
		if (posPlayer != posPlayerOld)
		{
			vector planeVector = { posPlayer[0], 0, posPlayer[2] };
			vector planeVectorOld = { posPlayerOld[0], 0, posPlayerOld[2] };
			vector playerMoveDistance = (planeVector - planeVectorOld).Normalized();	
			posPlayerAjusted = posPlayer + (playerMoveDistance * 100);
		}
		else
		{
			posPlayerAjusted = vector.Zero;
		}	
		Print("posPlayerAjusted : " + posPlayerAjusted.ToString());		
		return posPlayerAjusted;
	}
	
	void FindTheCurrentDynamicZone()
	{
		bool zoneFound = false;
		for ( int i = 1; i <= 151; ++i )
		{
			float distZoneX = (coordX_LowerRight[i] - coordX_UpLeft[i]) * 0.5;
			float distZoneZ = (coordZ_UpLeft[i] 	- coordZ_LowerRight[i]) * 0.5;
			
			float centerZoneX = coordX_UpLeft[i] + distZoneX;
			float centerZoneZ = coordZ_UpLeft[i] - distZoneZ;			

			float num01 = Math.AbsFloat(centerZoneX - posPlayer[0]);
			float num02 = Math.AbsFloat(centerZoneZ - posPlayer[2]);
			
			if (num01 < distZoneX && num02 < distZoneZ)
			{	
				NumDynamicZone = i;
				numConfigZombie = numConfigZombieTab[i];
				QuantityDynamicRatio = quantityRatio[i];
				maxNbrZombieCurrentZone = maxNbrZeds[i];
				zoneFound = true;
				break;			
			}	
		}
		
		if (zoneFound == false)
		{
			NumDynamicZone = 0;
			numConfigZombie = 1;
			maxNbrZombieCurrentZone = maxNbrCountrySideZombiesPerPlayer;		
		}
		Print("NumDynamicZone : " + NumDynamicZone.ToString() + " - numConfigZombie : " + numConfigZombie.ToString());
		
		// for ( int j = 0; j < 151; ++j )
		// {
			// Print ("Liven coordX_LowerRight : " + j.ToString() + " - " + coordX_LowerRight[j].ToString());
		// }
	}
	
	void ConvertDynamicType()
	{
		
		if (numConfigZombie == 1) nbDynamicTypeTable = 1;
		else if (numConfigZombie == 10) nbDynamicTypeTable = 2;
		else if (numConfigZombie == 20) nbDynamicTypeTable = 3;
		else if (numConfigZombie == 30) nbDynamicTypeTable = 4;
		else if (numConfigZombie == 40) nbDynamicTypeTable = 5;
		else if (numConfigZombie == 50) nbDynamicTypeTable = 6;
		else if (numConfigZombie == 60) nbDynamicTypeTable = 7;
		else if (numConfigZombie == 70) nbDynamicTypeTable = 8;
		else if (numConfigZombie == 71) nbDynamicTypeTable = 9;
		else if (numConfigZombie == 72) nbDynamicTypeTable = 10;
		else if (numConfigZombie == 73) nbDynamicTypeTable = 11;
		else if (numConfigZombie == 90) nbDynamicTypeTable = 12;
		else if (numConfigZombie == 91) nbDynamicTypeTable = 13;
		else if (numConfigZombie == 92) nbDynamicTypeTable = 14;
		else if (numConfigZombie == 93) nbDynamicTypeTable = 15;
		else if (numConfigZombie == 94) nbDynamicTypeTable = 16;
		else if (numConfigZombie == 95) nbDynamicTypeTable = 17;
		else if (numConfigZombie == 96) nbDynamicTypeTable = 18;
		else if (numConfigZombie == 97) nbDynamicTypeTable = 19;
		else if (numConfigZombie == 98) nbDynamicTypeTable = 20;
		else if (numConfigZombie == 99) nbDynamicTypeTable = 21;
		else nbDynamicTypeTable = 0;
	}
	
	
	bool CheckChangeZone()
	{
		if (NumDynamicZoneOld != NumDynamicZone)
		{
			NumDynamicZoneOld = NumDynamicZone;
			if (dynamicSpawnTimeCount > timeMaxi[nbDynamicTypeTable])
				return true;
		}
		return false;
	}
	
	bool CheckEndTime()
	{
		if (dynamicSpawnTimeCount >= dynamicSpawnTimeTrigger)
		{
			return true;		
		}
		return false;
	}
	
	void ChooseTime()
	{
		///dynamicSpawnTimeTrigger = Math.RandomIntInclusive (timeMini[nbDynamicTypeTable], timeMaxi[nbDynamicTypeTable]);	
		dynamicSpawnTimeTrigger = Math.RandomIntInclusive (10, 20);	
		dynamicSpawnTimeCount = 0;
		Print("Liven dynamicSpawnTimeTrigger : " + dynamicSpawnTimeTrigger.ToString());
	}
	
	void SpawnZombies()
	{
		Print("Liven SpawnZombies");
		posPlayerOld = posPlayer;
		/// Envoyer informations au seveur : posPlayer, NumDynamicZone (numConfigZombie ? QuantityDynamicRatio ? maxNbrZombieCurrentZone ?)
	}
}

ref PvzPlayerManagement m_PvzPlayerManagement;
ref PvzPlayerManagement GetPvzPlayerManagement()
{
	m_PvzPlayerManagement = new ref PvzPlayerManagement;
	if ( GetGame().IsServer() &&  GetGame().IsMultiplayer() )
	{
		GetRPCManager().AddRPC( "PvzMod2", "CopyTheVariables", m_PvzPlayerManagement, SingeplayerExecutionType.Client );
	}
	return m_PvzPlayerManagement;
}
