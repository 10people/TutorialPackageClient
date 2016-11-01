//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GuildWealthItemMake
{ private const string TAB_FILE_DATA = "Tables/GuildWealthItemMake.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_GUILDLEVEL=2,
ID_ITEMDATAID,
ID_WEALTHCOST,
ID_ITEMOUTNUM,
ID_MAXHOLDNUM,
ID_DESCDICT,
ID_INFODICT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_DescDict;
 public int DescDict { get{ return m_DescDict;}}

private int m_GuildLevel;
 public int GuildLevel { get{ return m_GuildLevel;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_InfoDict;
 public int InfoDict { get{ return m_InfoDict;}}

private int m_ItemDataId;
 public int ItemDataId { get{ return m_ItemDataId;}}

private int m_ItemOutNum;
 public int ItemOutNum { get{ return m_ItemOutNum;}}

private int m_MaxHoldNum;
 public int MaxHoldNum { get{ return m_MaxHoldNum;}}

private int m_WealthCost;
 public int WealthCost { get{ return m_WealthCost;}}

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
 Tab_GuildWealthItemMake _values = new Tab_GuildWealthItemMake();
 _values.m_DescDict =  Convert.ToInt32(valuesList[(int)_ID.ID_DESCDICT] as string);
_values.m_GuildLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_GUILDLEVEL] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_InfoDict =  Convert.ToInt32(valuesList[(int)_ID.ID_INFODICT] as string);
_values.m_ItemDataId =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID] as string);
_values.m_ItemOutNum =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMOUTNUM] as string);
_values.m_MaxHoldNum =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXHOLDNUM] as string);
_values.m_WealthCost =  Convert.ToInt32(valuesList[(int)_ID.ID_WEALTHCOST] as string);

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

