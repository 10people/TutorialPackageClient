//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_DailyLuckyDrawBonusInfo
{ private const string TAB_FILE_DATA = "Tables/DailyLuckyDrawBonusInfo.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_ISUNIQUE=2,
ID_RAREDEGREE,
ID_BROADCASTITEM,
ID_EXP,
ID_MONEYTYPE,
ID_MONEYCOUNT,
ID_ITEMNUM,
ID_ITEMID1,
ID_ITEMCOUNT1,
ID_ISBIND1,
ID_ITEMID2,
ID_ITEMCOUNT2,
ID_ISBIND2,
ID_ITEMID3,
ID_ITEMCOUNT3,
ID_ISBIND3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BroadCastItem;
 public int BroadCastItem { get{ return m_BroadCastItem;}}

private int m_Exp;
 public int Exp { get{ return m_Exp;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getIsBindCount() { return 3; } 
 private int[] m_IsBind = new int[3];
 public int GetIsBindbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_IsBind[idx];
 return -1;
 }

private int m_IsUnique;
 public int IsUnique { get{ return m_IsUnique;}}

public int getItemCountCount() { return 3; } 
 private int[] m_ItemCount = new int[3];
 public int GetItemCountbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_ItemCount[idx];
 return -1;
 }

public int getItemIDCount() { return 3; } 
 private int[] m_ItemID = new int[3];
 public int GetItemIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_ItemID[idx];
 return -1;
 }

private int m_ItemNum;
 public int ItemNum { get{ return m_ItemNum;}}

private int m_MoneyCount;
 public int MoneyCount { get{ return m_MoneyCount;}}

private int m_MoneyType;
 public int MoneyType { get{ return m_MoneyType;}}

private int m_RareDegree;
 public int RareDegree { get{ return m_RareDegree;}}

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
 Tab_DailyLuckyDrawBonusInfo _values = new Tab_DailyLuckyDrawBonusInfo();
 _values.m_BroadCastItem =  Convert.ToInt32(valuesList[(int)_ID.ID_BROADCASTITEM] as string);
_values.m_Exp =  Convert.ToInt32(valuesList[(int)_ID.ID_EXP] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsBind [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND1] as string);
_values.m_IsBind [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND2] as string);
_values.m_IsBind [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND3] as string);
_values.m_IsUnique =  Convert.ToInt32(valuesList[(int)_ID.ID_ISUNIQUE] as string);
_values.m_ItemCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT1] as string);
_values.m_ItemCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT2] as string);
_values.m_ItemCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT3] as string);
_values.m_ItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID1] as string);
_values.m_ItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID2] as string);
_values.m_ItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID3] as string);
_values.m_ItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM] as string);
_values.m_MoneyCount =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYCOUNT] as string);
_values.m_MoneyType =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE] as string);
_values.m_RareDegree =  Convert.ToInt32(valuesList[(int)_ID.ID_RAREDEGREE] as string);

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

