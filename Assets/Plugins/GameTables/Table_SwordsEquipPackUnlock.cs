//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SwordsEquipPackUnlock
{ private const string TAB_FILE_DATA = "Tables/SwordsEquipPackUnlock.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_NEEDLEVEL=2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_NeedLevel;
 public int NeedLevel { get{ return m_NeedLevel;}}

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
 Tab_SwordsEquipPackUnlock _values = new Tab_SwordsEquipPackUnlock();
 _values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_NeedLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDLEVEL] as string);

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

