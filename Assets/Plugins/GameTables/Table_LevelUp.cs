//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_LevelUp
{ private const string TAB_FILE_DATA = "Tables/LevelUp.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_EXPNEED=2,
ID_FELLOWEXPNEED,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ExpNeed;
 public int ExpNeed { get{ return m_ExpNeed;}}

private int m_FellowExpNeed;
 public int FellowExpNeed { get{ return m_FellowExpNeed;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

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
 Tab_LevelUp _values = new Tab_LevelUp();
 _values.m_ExpNeed =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEED] as string);
_values.m_FellowExpNeed =  Convert.ToInt32(valuesList[(int)_ID.ID_FELLOWEXPNEED] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);

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

