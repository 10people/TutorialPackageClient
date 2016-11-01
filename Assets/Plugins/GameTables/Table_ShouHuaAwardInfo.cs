//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ShouHuaAwardInfo
{ private const string TAB_FILE_DATA = "Tables/ShouHuaAwardInfo.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_RANKPOSHIGH=2,
ID_RANKPOSLOW,
ID_ITEMDATAID0,
ID_ITEMCOUNT0,
ID_ITEMDATAID1,
ID_ITEMCOUNT1,
ID_ITEMDATAID2,
ID_ITEMCOUNT2,
ID_ITEMDATAID3,
ID_ITEMCOUNT3,
ID_ITEMDATAID4,
ID_ITEMCOUNT4,
ID_ITEMDATAID5,
ID_ITEMCOUNT5,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getItemCountCount() { return 6; } 
 private int[] m_ItemCount = new int[6];
 public int GetItemCountbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_ItemCount[idx];
 return -1;
 }

public int getItemDataIDCount() { return 6; } 
 private int[] m_ItemDataID = new int[6];
 public int GetItemDataIDbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_ItemDataID[idx];
 return -1;
 }

private int m_RankPosHigh;
 public int RankPosHigh { get{ return m_RankPosHigh;}}

private int m_RankPosLow;
 public int RankPosLow { get{ return m_RankPosLow;}}

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
 Tab_ShouHuaAwardInfo _values = new Tab_ShouHuaAwardInfo();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT0] as string);
_values.m_ItemCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT1] as string);
_values.m_ItemCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT2] as string);
_values.m_ItemCount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT3] as string);
_values.m_ItemCount [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT4] as string);
_values.m_ItemCount [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT5] as string);
_values.m_ItemDataID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID0] as string);
_values.m_ItemDataID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID1] as string);
_values.m_ItemDataID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID2] as string);
_values.m_ItemDataID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID3] as string);
_values.m_ItemDataID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID4] as string);
_values.m_ItemDataID [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID5] as string);
_values.m_RankPosHigh =  Convert.ToInt32(valuesList[(int)_ID.ID_RANKPOSHIGH] as string);
_values.m_RankPosLow =  Convert.ToInt32(valuesList[(int)_ID.ID_RANKPOSLOW] as string);

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

