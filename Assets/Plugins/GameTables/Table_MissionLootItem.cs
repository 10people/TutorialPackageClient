//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionLootItem
{ private const string TAB_FILE_DATA = "Tables/MissionLootItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_ITEMDATAID=2,
ID_ITEMCOUNT,
ID_NPCDATEID,
ID_ITEMDROPRATE,
ID_ISDELMISSIONITEM,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsDelMissionItem;
 public int IsDelMissionItem { get{ return m_IsDelMissionItem;}}

private int m_ItemCount;
 public int ItemCount { get{ return m_ItemCount;}}

private int m_ItemDataID;
 public int ItemDataID { get{ return m_ItemDataID;}}

private int m_ItemDropRate;
 public int ItemDropRate { get{ return m_ItemDropRate;}}

private int m_NpcDateID;
 public int NpcDateID { get{ return m_NpcDateID;}}

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
 Tab_MissionLootItem _values = new Tab_MissionLootItem();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsDelMissionItem =  Convert.ToInt32(valuesList[(int)_ID.ID_ISDELMISSIONITEM] as string);
_values.m_ItemCount =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT] as string);
_values.m_ItemDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID] as string);
_values.m_ItemDropRate =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDROPRATE] as string);
_values.m_NpcDateID =  Convert.ToInt32(valuesList[(int)_ID.ID_NPCDATEID] as string);

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

