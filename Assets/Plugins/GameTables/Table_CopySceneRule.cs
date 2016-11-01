//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CopySceneRule
{ private const string TAB_FILE_DATA = "Tables/CopySceneRule.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_STAMINA=2,
ID_LEVEL,
ID_BATTLE,
ID_NUMBER,
ID_STARTTIME,
ID_ENDTIME,
ID_EXP,
ID_PETEXP,
ID_MONEY,
ID_GUIDCONTRIBUTE,
ID_MASTERCONTRIBUTE,
ID_SCORE1,
ID_REWARDID1,
ID_SCORE2,
ID_REWARDID2,
ID_SCORE3,
ID_REWARDID3,
ID_SCORE4,
ID_REWARDID4,
ID_SCORE5,
ID_REWARDID5,
ID_SWEEPREWARDID,
ID_SCORECALCID,
ID_EXISTTIME,
ID_BUYBACK1,
ID_BUYBACK2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Battle;
 public int Battle { get{ return m_Battle;}}

public int getBuybackCount() { return 2; } 
 private int[] m_Buyback = new int[2];
 public int GetBuybackbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_Buyback[idx];
 return -1;
 }

private int m_EndTime;
 public int EndTime { get{ return m_EndTime;}}

private int m_ExistTime;
 public int ExistTime { get{ return m_ExistTime;}}

private int m_Exp;
 public int Exp { get{ return m_Exp;}}

private int m_GuidContribute;
 public int GuidContribute { get{ return m_GuidContribute;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MasterContribute;
 public int MasterContribute { get{ return m_MasterContribute;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

private int m_Number;
 public int Number { get{ return m_Number;}}

private int m_PetExp;
 public int PetExp { get{ return m_PetExp;}}

public int getRewardIDCount() { return 5; } 
 private int[] m_RewardID = new int[5];
 public int GetRewardIDbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_RewardID[idx];
 return -1;
 }

public int getScoreCount() { return 5; } 
 private int[] m_Score = new int[5];
 public int GetScorebyIndex(int idx) {
 if(idx>=0 && idx<5) return m_Score[idx];
 return -1;
 }

private int m_ScoreCalcID;
 public int ScoreCalcID { get{ return m_ScoreCalcID;}}

private int m_Stamina;
 public int Stamina { get{ return m_Stamina;}}

private int m_StartTime;
 public int StartTime { get{ return m_StartTime;}}

private int m_SweepRewardID;
 public int SweepRewardID { get{ return m_SweepRewardID;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

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
 Tab_CopySceneRule _values = new Tab_CopySceneRule();
 _values.m_Battle =  Convert.ToInt32(valuesList[(int)_ID.ID_BATTLE] as string);
_values.m_Buyback [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYBACK1] as string);
_values.m_Buyback [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYBACK2] as string);
_values.m_EndTime =  Convert.ToInt32(valuesList[(int)_ID.ID_ENDTIME] as string);
_values.m_ExistTime =  Convert.ToInt32(valuesList[(int)_ID.ID_EXISTTIME] as string);
_values.m_Exp =  Convert.ToInt32(valuesList[(int)_ID.ID_EXP] as string);
_values.m_GuidContribute =  Convert.ToInt32(valuesList[(int)_ID.ID_GUIDCONTRIBUTE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MasterContribute =  Convert.ToInt32(valuesList[(int)_ID.ID_MASTERCONTRIBUTE] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_Number =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMBER] as string);
_values.m_PetExp =  Convert.ToInt32(valuesList[(int)_ID.ID_PETEXP] as string);
_values.m_RewardID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID1] as string);
_values.m_RewardID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID2] as string);
_values.m_RewardID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID3] as string);
_values.m_RewardID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID4] as string);
_values.m_RewardID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID5] as string);
_values.m_Score [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCORE1] as string);
_values.m_Score [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCORE2] as string);
_values.m_Score [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCORE3] as string);
_values.m_Score [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCORE4] as string);
_values.m_Score [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCORE5] as string);
_values.m_ScoreCalcID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCORECALCID] as string);
_values.m_Stamina =  Convert.ToInt32(valuesList[(int)_ID.ID_STAMINA] as string);
_values.m_StartTime =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTTIME] as string);
_values.m_SweepRewardID =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPREWARDID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);

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

