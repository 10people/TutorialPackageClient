//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PvpAward
{ private const string TAB_FILE_DATA = "Tables/PvpAward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_LAST=2,
ID_TOP,
ID_VLUE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Last;
 public int Last { get{ return m_Last;}}

private int m_Top;
 public int Top { get{ return m_Top;}}

private int m_Vlue;
 public int Vlue { get{ return m_Vlue;}}

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
 Tab_PvpAward _values = new Tab_PvpAward();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Last =  Convert.ToInt32(valuesList[(int)_ID.ID_LAST] as string);
_values.m_Top =  Convert.ToInt32(valuesList[(int)_ID.ID_TOP] as string);
_values.m_Vlue =  Convert.ToInt32(valuesList[(int)_ID.ID_VLUE] as string);

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

