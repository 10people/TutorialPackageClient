//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StoryCopyScene
{ private const string TAB_FILE_DATA = "Tables/StoryCopyScene.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BELONGTOCHAPTERID=2,
ID_LEVELNAME,
ID_LEVELINFO,
ID_SCENECLASSID,
ID_OBSTACLESID,
ID_PREMISSION,
ID_CHECKMISSION,
ID_TIMESPERDAY,
ID_SCRIPTID,
ID_STARCONDITION1,
ID_STARCONDITION2,
ID_STARCONDITION3,
ID_STARREWARD1,
ID_STARREWARD2,
ID_STARREWARD3,
ID_STARDESCRIB1,
ID_STARDESCRIB2,
ID_STARDESCRIB3,
ID_PASSREWARD,
ID_SWEEPREWARD,
ID_LEVELTEXTURE,
ID_COMBATVALUE,
ID_EXISTTIME,
ID_BUYBACK1,
ID_BUYBACK2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BelongToChapterID;
 public int BelongToChapterID { get{ return m_BelongToChapterID;}}

public int getBuybackCount() { return 2; } 
 private int[] m_Buyback = new int[2];
 public int GetBuybackbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_Buyback[idx];
 return -1;
 }

private int m_CheckMission;
 public int CheckMission { get{ return m_CheckMission;}}

private int m_CombatValue;
 public int CombatValue { get{ return m_CombatValue;}}

private int m_ExistTime;
 public int ExistTime { get{ return m_ExistTime;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_LevelInfo;
 public string LevelInfo { get{ return m_LevelInfo;}}

private string m_LevelName;
 public string LevelName { get{ return m_LevelName;}}

private string m_LevelTexture;
 public string LevelTexture { get{ return m_LevelTexture;}}

private string m_ObstaclesID;
 public string ObstaclesID { get{ return m_ObstaclesID;}}

private int m_PassReward;
 public int PassReward { get{ return m_PassReward;}}

private int m_PreMission;
 public int PreMission { get{ return m_PreMission;}}

private int m_SceneClassID;
 public int SceneClassID { get{ return m_SceneClassID;}}

private int m_ScriptID;
 public int ScriptID { get{ return m_ScriptID;}}

public int getStarConditionCount() { return 3; } 
 private int[] m_StarCondition = new int[3];
 public int GetStarConditionbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_StarCondition[idx];
 return -1;
 }

public int getStarDescribCount() { return 3; } 
 private int[] m_StarDescrib = new int[3];
 public int GetStarDescribbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_StarDescrib[idx];
 return -1;
 }

public int getStarRewardCount() { return 3; } 
 private int[] m_StarReward = new int[3];
 public int GetStarRewardbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_StarReward[idx];
 return -1;
 }

private int m_SweepReward;
 public int SweepReward { get{ return m_SweepReward;}}

private int m_TimesPerDay;
 public int TimesPerDay { get{ return m_TimesPerDay;}}

public static bool LoadTable(Dictionary<int, List<object> > _tab)
 {
 if(!TableManager.ReaderPList(GetInstanceFile(),SerializableTable,_tab))
 {
 throw TableException.ErrorReader("Load File{0} Fail!!!",GetInstanceFile());
 }
 return true;
 }
 public static void SerializableTable(string[] valuesList,int skey,Dictionary<int, List<object> > _hash)
 {
 if ((int)_ID.MAX_RECORD!=valuesList.Length)
 {
 throw TableException.ErrorReader("Load {0} error as CodeSize:{1} not Equal DataSize:{2}", GetInstanceFile(),_ID.MAX_RECORD,valuesList.Length);
 }
 Tab_StoryCopyScene _values = new Tab_StoryCopyScene();
 _values.m_BelongToChapterID =  Convert.ToInt32(valuesList[(int)_ID.ID_BELONGTOCHAPTERID] as string);
_values.m_Buyback [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYBACK1] as string);
_values.m_Buyback [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYBACK2] as string);
_values.m_CheckMission =  Convert.ToInt32(valuesList[(int)_ID.ID_CHECKMISSION] as string);
_values.m_CombatValue =  Convert.ToInt32(valuesList[(int)_ID.ID_COMBATVALUE] as string);
_values.m_ExistTime =  Convert.ToInt32(valuesList[(int)_ID.ID_EXISTTIME] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LevelInfo =  valuesList[(int)_ID.ID_LEVELINFO] as string;
_values.m_LevelName =  valuesList[(int)_ID.ID_LEVELNAME] as string;
_values.m_LevelTexture =  valuesList[(int)_ID.ID_LEVELTEXTURE] as string;
_values.m_ObstaclesID =  valuesList[(int)_ID.ID_OBSTACLESID] as string;
_values.m_PassReward =  Convert.ToInt32(valuesList[(int)_ID.ID_PASSREWARD] as string);
_values.m_PreMission =  Convert.ToInt32(valuesList[(int)_ID.ID_PREMISSION] as string);
_values.m_SceneClassID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENECLASSID] as string);
_values.m_ScriptID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCRIPTID] as string);
_values.m_StarCondition [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARCONDITION1] as string);
_values.m_StarCondition [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARCONDITION2] as string);
_values.m_StarCondition [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARCONDITION3] as string);
_values.m_StarDescrib [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARDESCRIB1] as string);
_values.m_StarDescrib [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARDESCRIB2] as string);
_values.m_StarDescrib [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARDESCRIB3] as string);
_values.m_StarReward [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARREWARD1] as string);
_values.m_StarReward [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARREWARD2] as string);
_values.m_StarReward [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARREWARD3] as string);
_values.m_SweepReward =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPREWARD] as string);
_values.m_TimesPerDay =  Convert.ToInt32(valuesList[(int)_ID.ID_TIMESPERDAY] as string);

 if (_hash.ContainsKey(skey))
 {
 List< object> tList =_hash[skey];
 tList.Add(_values);
 }
 else
 {
 List<object> tList = new List<object>();
 tList.Add(_values); 
 _hash.Add(skey, (List<object>)tList);
 }
 }


}
}

