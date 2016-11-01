//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PaoHuanBonus
{ private const string TAB_FILE_DATA = "Tables/PaoHuanBonus.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_MINLEVELLIMIT=2,
ID_MAXLEVELLIMIT,
ID_ITEMID1,
ID_ITEMID2,
ID_ITEMID3,
ID_ITEMID4,
ID_ITEMID5,
ID_ITEMID6,
ID_ITEMID7,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getItemIDCount() { return 7; } 
 private int[] m_ItemID = new int[7];
 public int GetItemIDbyIndex(int idx) {
 if(idx>=0 && idx<7) return m_ItemID[idx];
 return -1;
 }

private int m_MaxLevelLimit;
 public int MaxLevelLimit { get{ return m_MaxLevelLimit;}}

private int m_MinLevelLimit;
 public int MinLevelLimit { get{ return m_MinLevelLimit;}}

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
 Tab_PaoHuanBonus _values = new Tab_PaoHuanBonus();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID1] as string);
_values.m_ItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID2] as string);
_values.m_ItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID3] as string);
_values.m_ItemID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID4] as string);
_values.m_ItemID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID5] as string);
_values.m_ItemID [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID6] as string);
_values.m_ItemID [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID7] as string);
_values.m_MaxLevelLimit =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXLEVELLIMIT] as string);
_values.m_MinLevelLimit =  Convert.ToInt32(valuesList[(int)_ID.ID_MINLEVELLIMIT] as string);

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

