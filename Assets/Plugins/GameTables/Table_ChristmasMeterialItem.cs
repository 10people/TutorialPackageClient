//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ChristmasMeterialItem
{ private const string TAB_FILE_DATA = "Tables/ChristmasMeterialItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CHRISTMASTREEEXP=2,
ID_REWARDDECORATION,
ID_REWARDCOIN,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ChristmasTreeExp;
 public int ChristmasTreeExp { get{ return m_ChristmasTreeExp;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_RewardCoin;
 public int RewardCoin { get{ return m_RewardCoin;}}

private int m_RewardDecoration;
 public int RewardDecoration { get{ return m_RewardDecoration;}}

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
 Tab_ChristmasMeterialItem _values = new Tab_ChristmasMeterialItem();
 _values.m_ChristmasTreeExp =  Convert.ToInt32(valuesList[(int)_ID.ID_CHRISTMASTREEEXP] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_RewardCoin =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDCOIN] as string);
_values.m_RewardDecoration =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDDECORATION] as string);

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

