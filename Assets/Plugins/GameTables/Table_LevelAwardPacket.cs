//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_LevelAwardPacket
{ private const string TAB_FILE_DATA = "Tables/LevelAwardPacket.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TYPE=2,
ID_CONDITION,
ID_MONEY,
ID_BINDYUANBAO,
ID_ITEMDATAID_1,
ID_ITEMISBIND_1,
ID_ITEMCOUNT_1,
ID_ITEMDATAID_2,
ID_ITEMISBIND_2,
ID_ITEMCOUNT_2,
ID_ITEMDATAID_3,
ID_ITEMISBIND_3,
ID_ITEMCOUNT_3,
ID_ITEMDATAID_4,
ID_ITEMISBIND_4,
ID_ITEMCOUNT_4,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanbao;
 public int BindYuanbao { get{ return m_BindYuanbao;}}

private int m_Condition;
 public int Condition { get{ return m_Condition;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getItemCountCount() { return 4; } 
 private int[] m_ItemCount = new int[4];
 public int GetItemCountbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemCount[idx];
 return -1;
 }

public int getItemDataIDCount() { return 4; } 
 private int[] m_ItemDataID = new int[4];
 public int GetItemDataIDbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemDataID[idx];
 return -1;
 }

public int getItemIsBindCount() { return 4; } 
 private int[] m_ItemIsBind = new int[4];
 public int GetItemIsBindbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemIsBind[idx];
 return -1;
 }

private int m_Money;
 public int Money { get{ return m_Money;}}

private int m_Type;
 public int Type { get{ return m_Type;}}

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
 Tab_LevelAwardPacket _values = new Tab_LevelAwardPacket();
 _values.m_BindYuanbao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_Condition =  Convert.ToInt32(valuesList[(int)_ID.ID_CONDITION] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_1] as string);
_values.m_ItemCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_2] as string);
_values.m_ItemCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_3] as string);
_values.m_ItemCount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_4] as string);
_values.m_ItemDataID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID_1] as string);
_values.m_ItemDataID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID_2] as string);
_values.m_ItemDataID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID_3] as string);
_values.m_ItemDataID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID_4] as string);
_values.m_ItemIsBind [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_1] as string);
_values.m_ItemIsBind [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_2] as string);
_values.m_ItemIsBind [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_3] as string);
_values.m_ItemIsBind [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_4] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);

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

