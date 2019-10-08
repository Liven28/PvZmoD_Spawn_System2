class CfgPatches
{
	class LIVEN_PvZmoD_Spawn_System2
	{
		units[]={
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"JM_CF_Scripts",
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class PvZmoD_Spawn_System2
	{
		
		dir = "PvZmoD_Spawn_System2";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "PvZmoD_Spawn_System2";
		credits = "0";
		author = "Liven";
		authorID = "0"; 
		version = ""; 
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"LIVEN/PvZmoD_Spawn_System2/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"LIVEN/PvZmoD_Spawn_System2/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"LIVEN/PvZmoD_Spawn_System2/Scripts/5_Mission"};
			};
		};
	};
};

