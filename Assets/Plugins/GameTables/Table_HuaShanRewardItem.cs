//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_HuaShanRewardItem
{ private const string TAB_FILE_DATA = "Tables/HuaShanRewardItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_TITLEID=2,
ID_ZHANJI,
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
ID_ITEMID6,
ID_ISBIND6,
ID_ITEMNUM6,
ID_ITEMID7,
ID_ISBIND7,
ID_ITEMNUM7,
ID_ITEMID8,
ID_ISBIND8,
ID_ITEMNUM8,
ID_ITEMID9,
ID_ISBIND9,
ID_ITEMNUM9,
ID_ITEMID10,
ID_ISBIND10,
ID_ITEMNUM10,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Index;
 public int Index { get{ return m_Index;}}

public int getIsBindCount() { return 10; } 
 private int[] m_IsBind = new int[10];
 public int GetIsBindbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_IsBind[idx];
 return -1;
 }

public int getItemIDCount() { return 10; } 
 private int[] m_ItemID = new int[10];
 public int GetItemIDbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_ItemID[idx];
 return -1;
 }

public int getItemNumCount() { return 10; } 
 private int[] m_ItemNum = new int[10];
 public int GetItemNumbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_ItemNum[idx];
 return -1;
 }

private int m_TitleID;
 public int TitleID { get{ return m_TitleID;}}

private int m_ZhanJi;
 public int ZhanJi { get{ return m_ZhanJi;}}

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
 Tab_HuaShanRewardItem _values = new Tab_HuaShanRewardItem();
 _values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_IsBind [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND1] as string);
_values.m_IsBind [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND2] as string);
_values.m_IsBind [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND3] as string);
_values.m_IsBind [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND4] as string);
_values.m_IsBind [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND5] as string);
_values.m_IsBind [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND6] as string);
_values.m_IsBind [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND7] as string);
_values.m_IsBind [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND8] as string);
_values.m_IsBind [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND9] as string);
_values.m_IsBind [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND10] as string);
_values.m_ItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID1] as string);
_values.m_ItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID2] as string);
_values.m_ItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID3] as string);
_values.m_ItemID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID4] as string);
_values.m_ItemID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID5] as string);
_values.m_ItemID [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID6] as string);
_values.m_ItemID [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID7] as string);
_values.m_ItemID [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID8] as string);
_values.m_ItemID [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID9] as string);
_values.m_ItemID [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID10] as string);
_values.m_ItemNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM1] as string);
_values.m_ItemNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM2] as string);
_values.m_ItemNum [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM3] as string);
_values.m_ItemNum [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM4] as string);
_values.m_ItemNum [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM5] as string);
_values.m_ItemNum [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM6] as string);
_values.m_ItemNum [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM7] as string);
_values.m_ItemNum [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM8] as string);
_values.m_ItemNum [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM9] as string);
_values.m_ItemNum [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM10] as string);
_values.m_TitleID =  Convert.ToInt32(valuesList[(int)_ID.ID_TITLEID] as string);
_values.m_ZhanJi =  Convert.ToInt32(valuesList[(int)_ID.ID_ZHANJI] as string);

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

