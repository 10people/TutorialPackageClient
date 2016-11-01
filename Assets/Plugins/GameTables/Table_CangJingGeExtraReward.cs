//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CangJingGeExtraReward
{ private const string TAB_FILE_DATA = "Tables/CangJingGeExtraReward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_COPYSCENETYPE=2,
ID_TIERLIMIT,
ID_ITEMID1,
ID_ISBIND1,
ID_ITEMNUM1,
ID_ITEMID2,
ID_ISBIND2,
ID_ITEMNUM2,
ID_ITEMID3,
ID_ISBIND3,
ID_ITEMNUM3,
ID_ITEMID4,
ID_ISBIND4,
ID_ITEMNUM4,
ID_ITEMID5,
ID_ISBIND5,
ID_ITEMNUM5,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_CopySceneType;
 public int CopySceneType { get{ return m_CopySceneType;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getIsBindCount() { return 5; } 
 private int[] m_IsBind = new int[5];
 public int GetIsBindbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_IsBind[idx];
 return -1;
 }

public int getItemIDCount() { return 5; } 
 private int[] m_ItemID = new int[5];
 public int GetItemIDbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_ItemID[idx];
 return -1;
 }

public int getItemNumCount() { return 5; } 
 private int[] m_ItemNum = new int[5];
 public int GetItemNumbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_ItemNum[idx];
 return -1;
 }

private int m_TierLimit;
 public int TierLimit { get{ return m_TierLimit;}}

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
 Tab_CangJingGeExtraReward _values = new Tab_CangJingGeExtraReward();
 _values.m_CopySceneType =  Convert.ToInt32(valuesList[(int)_ID.ID_COPYSCENETYPE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsBind [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND1] as string);
_values.m_IsBind [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND2] as string);
_values.m_IsBind [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND3] as string);
_values.m_IsBind [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND4] as string);
_values.m_IsBind [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND5] as string);
_values.m_ItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID1] as string);
_values.m_ItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID2] as string);
_values.m_ItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID3] as string);
_values.m_ItemID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID4] as string);
_values.m_ItemID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID5] as string);
_values.m_ItemNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM1] as string);
_values.m_ItemNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM2] as string);
_values.m_ItemNum [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM3] as string);
_values.m_ItemNum [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM4] as string);
_values.m_ItemNum [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM5] as string);
_values.m_TierLimit =  Convert.ToInt32(valuesList[(int)_ID.ID_TIERLIMIT] as string);

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

