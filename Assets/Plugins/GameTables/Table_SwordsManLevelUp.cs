//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SwordsManLevelUp
{ private const string TAB_FILE_DATA = "Tables/SwordsManLevelUp.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_EXPNEEDLV1=2,
ID_EXPNEEDLV2,
ID_EXPNEEDLV3,
ID_EXPNEEDLV4,
ID_EXPNEEDLV5,
ID_EXPNEEDLV6,
ID_EXPNEEDLV7,
ID_EXPNEEDLV8,
ID_EXPNEEDLV9,
ID_EXPNEEDLV10,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getExpNeedLvCount() { return 10; } 
 private int[] m_ExpNeedLv = new int[10];
 public int GetExpNeedLvbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_ExpNeedLv[idx];
 return -1;
 }

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
 Tab_SwordsManLevelUp _values = new Tab_SwordsManLevelUp();
 _values.m_ExpNeedLv [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV1] as string);
_values.m_ExpNeedLv [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV2] as string);
_values.m_ExpNeedLv [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV3] as string);
_values.m_ExpNeedLv [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV4] as string);
_values.m_ExpNeedLv [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV5] as string);
_values.m_ExpNeedLv [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV6] as string);
_values.m_ExpNeedLv [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV7] as string);
_values.m_ExpNeedLv [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV8] as string);
_values.m_ExpNeedLv [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV9] as string);
_values.m_ExpNeedLv [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEEDLV10] as string);
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

