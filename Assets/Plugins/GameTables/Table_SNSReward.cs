//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SNSReward
{ private const string TAB_FILE_DATA = "Tables/SNSReward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_TARGETTYPE=2,
ID_REWARDTYPE,
ID_ITEMDATAID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_ItemDataId;
 public int ItemDataId { get{ return m_ItemDataId;}}

private int m_RewardType;
 public int RewardType { get{ return m_RewardType;}}

private int m_TargetType;
 public int TargetType { get{ return m_TargetType;}}

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
 Tab_SNSReward _values = new Tab_SNSReward();
 _values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_ItemDataId =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID] as string);
_values.m_RewardType =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDTYPE] as string);
_values.m_TargetType =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE] as string);

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

