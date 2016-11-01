//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SevenDaysReward
{ private const string TAB_FILE_DATA = "Tables/SevenDaysReward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_DAY=2,
ID_INDEX,
ID_NAME,
ID_DESCRIPTION,
ID_LINKUI,
ID_LOGICID,
ID_LOGICPARAM1,
ID_LOGICPARAM2,
ID_LOGICPARAM3,
ID_OPCOUNT,
ID_MONEY,
ID_YUANBAO,
ID_ITEMID_1,
ID_ITEMCOUNT_1,
ID_ITEMISBIND_1,
ID_ITEMID_2,
ID_ITEMCOUNT_2,
ID_ITEMISBIND_2,
ID_ITEMID_3,
ID_ITEMCOUNT_3,
ID_ITEMISBIND_3,
ID_ITEMID_4,
ID_ITEMCOUNT_4,
ID_ITEMISBIND_4,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Day;
 public int Day { get{ return m_Day;}}

private string m_Description;
 public string Description { get{ return m_Description;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

public int getItemCountCount() { return 4; } 
 private int[] m_ItemCount = new int[4];
 public int GetItemCountbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemCount[idx];
 return -1;
 }

public int getItemIDCount() { return 4; } 
 private int[] m_ItemID = new int[4];
 public int GetItemIDbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemID[idx];
 return -1;
 }

public int getItemIsBindCount() { return 4; } 
 private int[] m_ItemIsBind = new int[4];
 public int GetItemIsBindbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemIsBind[idx];
 return -1;
 }

private string m_LinkUI;
 public string LinkUI { get{ return m_LinkUI;}}

private int m_LogicId;
 public int LogicId { get{ return m_LogicId;}}

public int getLogicParamCount() { return 3; } 
 private int[] m_LogicParam = new int[3];
 public int GetLogicParambyIndex(int idx) {
 if(idx>=0 && idx<3) return m_LogicParam[idx];
 return -1;
 }

private int m_Money;
 public int Money { get{ return m_Money;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_OpCount;
 public int OpCount { get{ return m_OpCount;}}

private int m_Yuanbao;
 public int Yuanbao { get{ return m_Yuanbao;}}

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
 Tab_SevenDaysReward _values = new Tab_SevenDaysReward();
 _values.m_Day =  Convert.ToInt32(valuesList[(int)_ID.ID_DAY] as string);
_values.m_Description =  valuesList[(int)_ID.ID_DESCRIPTION] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_ItemCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_1] as string);
_values.m_ItemCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_2] as string);
_values.m_ItemCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_3] as string);
_values.m_ItemCount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT_4] as string);
_values.m_ItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID_1] as string);
_values.m_ItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID_2] as string);
_values.m_ItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID_3] as string);
_values.m_ItemID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID_4] as string);
_values.m_ItemIsBind [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_1] as string);
_values.m_ItemIsBind [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_2] as string);
_values.m_ItemIsBind [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_3] as string);
_values.m_ItemIsBind [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND_4] as string);
_values.m_LinkUI =  valuesList[(int)_ID.ID_LINKUI] as string;
_values.m_LogicId =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICID] as string);
_values.m_LogicParam [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICPARAM1] as string);
_values.m_LogicParam [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICPARAM2] as string);
_values.m_LogicParam [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICPARAM3] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_OpCount =  Convert.ToInt32(valuesList[(int)_ID.ID_OPCOUNT] as string);
_values.m_Yuanbao =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAO] as string);

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

