//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BelleCloseLevel
{ private const string TAB_FILE_DATA = "Tables/BelleCloseLevel.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_BELLEID=2,
ID_CLOSELEVEL,
ID_CLOSEMAXVALUE,
ID_ADDATTRVALUE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AddAttrValue;
 public int AddAttrValue { get{ return m_AddAttrValue;}}

private int m_BelleId;
 public int BelleId { get{ return m_BelleId;}}

private int m_CloseLevel;
 public int CloseLevel { get{ return m_CloseLevel;}}

private int m_CloseMaxValue;
 public int CloseMaxValue { get{ return m_CloseMaxValue;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

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
 Tab_BelleCloseLevel _values = new Tab_BelleCloseLevel();
 _values.m_AddAttrValue =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRVALUE] as string);
_values.m_BelleId =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLEID] as string);
_values.m_CloseLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_CLOSELEVEL] as string);
_values.m_CloseMaxValue =  Convert.ToInt32(valuesList[(int)_ID.ID_CLOSEMAXVALUE] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);

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

