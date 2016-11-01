//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_HuaShanReward
{ private const string TAB_FILE_DATA = "Tables/HuaShanReward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_LEVELMAX1=2,
ID_REWARDID1,
ID_LEVELMAX2,
ID_REWARDID2,
ID_LEVELMAX3,
ID_REWARDID3,
ID_LEVELMAX4,
ID_REWARDID4,
ID_LEVELMAX5,
ID_REWARDID5,
ID_LEVELMAX6,
ID_REWARDID6,
ID_LEVELMAX7,
ID_REWARDID7,
ID_LEVELMAX8,
ID_REWARDID8,
ID_REPUTATION,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Index;
 public int Index { get{ return m_Index;}}

public int getLevelMaxCount() { return 8; } 
 private int[] m_LevelMax = new int[8];
 public int GetLevelMaxbyIndex(int idx) {
 if(idx>=0 && idx<8) return m_LevelMax[idx];
 return -1;
 }

private int m_Reputation;
 public int Reputation { get{ return m_Reputation;}}

public int getRewardIdCount() { return 8; } 
 private int[] m_RewardId = new int[8];
 public int GetRewardIdbyIndex(int idx) {
 if(idx>=0 && idx<8) return m_RewardId[idx];
 return -1;
 }

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
 Tab_HuaShanReward _values = new Tab_HuaShanReward();
 _values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_LevelMax [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX1] as string);
_values.m_LevelMax [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX2] as string);
_values.m_LevelMax [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX3] as string);
_values.m_LevelMax [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX4] as string);
_values.m_LevelMax [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX5] as string);
_values.m_LevelMax [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX6] as string);
_values.m_LevelMax [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX7] as string);
_values.m_LevelMax [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELMAX8] as string);
_values.m_Reputation =  Convert.ToInt32(valuesList[(int)_ID.ID_REPUTATION] as string);
_values.m_RewardId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID1] as string);
_values.m_RewardId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID2] as string);
_values.m_RewardId [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID3] as string);
_values.m_RewardId [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID4] as string);
_values.m_RewardId [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID5] as string);
_values.m_RewardId [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID6] as string);
_values.m_RewardId [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID7] as string);
_values.m_RewardId [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDID8] as string);

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

