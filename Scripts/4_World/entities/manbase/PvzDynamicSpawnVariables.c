class DynamicSpawnVariables
{
	static const int NBR_DYNAMIC_ZONES = 151; // Nbr réel +1 car 0 non utilisé
	
	static int numConfigZombie		[NBR_DYNAMIC_ZONES];	
	static float coordX_UpLeft 		[NBR_DYNAMIC_ZONES];	
	static float coordZ_UpLeft		[NBR_DYNAMIC_ZONES];	
	static float coordX_LowerRight 	[NBR_DYNAMIC_ZONES];	
	static float coordZ_LowerRight	[NBR_DYNAMIC_ZONES];	
	static int quantityRatio		[NBR_DYNAMIC_ZONES];	
	static int maxNbrZeds			[NBR_DYNAMIC_ZONES];	
	
	
	static const int NBR_DYNAMIC_TYPE = 22;
	
	static int timeMini			[NBR_DYNAMIC_TYPE];	
	static int timeMaxi			[NBR_DYNAMIC_TYPE];		
}


static ref DynamicSpawnVariables m_DynamicSpawnVariables;
static ref DynamicSpawnVariables GetDynamicSpawnVariables()
{
	if ( !m_DynamicSpawnVariables )
		m_DynamicSpawnVariables = new ref DynamicSpawnVariables;
	return m_DynamicSpawnVariables;
}