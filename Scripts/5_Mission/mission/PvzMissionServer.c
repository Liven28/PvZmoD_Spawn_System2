#ifdef SERVER
modded class MissionServer
{
	void MissionServer()
	{	
		m_PvzMissionBase = NULL;
		GetPvzMissionBase();	
	}

	override void TickScheduler(float timeslice)
	{
		super.TickScheduler(timeslice);
		GetPvzMissionBase().OnTick(timeslice);		
	}
};
#endif