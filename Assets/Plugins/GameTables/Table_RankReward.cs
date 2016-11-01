//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_RankReward
{ private const string TAB_FILE_DATA = "Tables/RankReward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_RANKTYPE=2,
ID_POSMIN,
ID_POSMAX,
ID_STARTTIME,
ID_ENDTIME,
ID_TITLEID,
ID_MONEY,
ID_BINDYUANBAO,
ID_REPUTATION,
ID_REWARDDESC,
ID_REWARDITEMID1,
ID_REWARDITEMCOUNT1,
ID_REWARDITEMID2,
ID_REWARDITEMCOUNT2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanBao;
 public int BindYuanBao { get{ return m_BindYuanBao;}}

private int m_EndTime;
 public int EndTime { get{ return m_EndTime;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

private int m_PosMax;
 public int PosMax { get{ return m_PosMax;}}

private int m_PosMin;
 public int PosMin { get{ return m_PosMin;}}

private int m_RankType;
 public int RankType { get{ return m_RankType;}}

private int m_Reputation;
 public int Reputation { get{ return m_Reputation;}}

private int m_RewardDesc;
 public int RewardDesc { get{ return m_RewardDesc;}}

public int getRewardItemCountCount() { return 2; } 
 private int[] m_RewardItemCount = new int[2];
 public int GetRewardItemCountbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_RewardItemCount[idx];
 return -1;
 }

public int getRewardItemIDCount() { return 2; } 
 private int[] m_RewardItemID = new int[2];
 public int GetRewardItemIDbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_RewardItemID[idx];
 return -1;
 }

private int m_StartTime;
 public int StartTime { get{ return m_StartTime;}}

private int m_TitleId;
 public int TitleId { get{ return m_TitleId;}}

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
 Tab_RankReward _values = new Tab_RankReward();
 _values.m_BindYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_EndTime =  Convert.ToInt32(valuesList[(int)_ID.ID_ENDTIME] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_PosMax =  Convert.ToInt32(valuesList[(int)_ID.ID_POSMAX] as string);
_values.m_PosMin =  Convert.ToInt32(valuesList[(int)_ID.ID_POSMIN] as string);
_values.m_RankType =  Convert.ToInt32(valuesList[(int)_ID.ID_RANKTYPE] as string);
_values.m_Reputation =  Convert.ToInt32(valuesList[(int)_ID.ID_REPUTATION] as string);
_values.m_RewardDesc =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDDESC] as string);
_values.m_RewardItemCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMCOUNT1] as string);
_values.m_RewardItemCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMCOUNT2] as string);
_values.m_RewardItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMID1] as string);
_values.m_RewardItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMID2] as string);
_values.m_StartTime =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTTIME] as string);
_values.m_TitleId =  Convert.ToInt32(valuesList[(int)_ID.ID_TITLEID] as string);

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

