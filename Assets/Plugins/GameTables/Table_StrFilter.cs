//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StrFilter
{ private const string TAB_FILE_DATA = "Tables/StrFilter.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SZSTRING=2,
ID_TYPE_1,
ID_TYPE_2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_SzString;
 public string SzString { get{ return m_SzString;}}

public int getTypeCount() { return 2; } 
 private bool[] m_Type = new bool[2];
 public bool GetTypebyIndex(int idx) {
 if(idx>=0 && idx<2) return m_Type[idx];
 return false;
 }

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
 Tab_StrFilter _values = new Tab_StrFilter();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_SzString =  valuesList[(int)_ID.ID_SZSTRING] as string;
_values.m_Type [ 0 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_TYPE_1] as string) != 0;
_values.m_Type [ 1 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_TYPE_2] as string) != 0;

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

