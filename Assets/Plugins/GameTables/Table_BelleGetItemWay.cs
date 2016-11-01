//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BelleGetItemWay
{ private const string TAB_FILE_DATA = "Tables/BelleGetItemWay.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_WAYTYPE=2,
ID_WAYDESCDICTID,
ID_WAYVALUE,
ID_WAYICON,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_WayDescDictId;
 public int WayDescDictId { get{ return m_WayDescDictId;}}

private string m_WayIcon;
 public string WayIcon { get{ return m_WayIcon;}}

private int m_WayType;
 public int WayType { get{ return m_WayType;}}

private string m_WayValue;
 public string WayValue { get{ return m_WayValue;}}

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
 Tab_BelleGetItemWay _values = new Tab_BelleGetItemWay();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_WayDescDictId =  Convert.ToInt32(valuesList[(int)_ID.ID_WAYDESCDICTID] as string);
_values.m_WayIcon =  valuesList[(int)_ID.ID_WAYICON] as string;
_values.m_WayType =  Convert.ToInt32(valuesList[(int)_ID.ID_WAYTYPE] as string);
_values.m_WayValue =  valuesList[(int)_ID.ID_WAYVALUE] as string;

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

