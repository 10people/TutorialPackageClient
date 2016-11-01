//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Relation
{ private const string TAB_FILE_DATA = "Tables/Relation.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_RELATION_0=2,
ID_RELATION_1,
ID_RELATION_2,
ID_RELATION_3,
ID_RELATION_4,
ID_RELATION_5,
ID_RELATION_6,
ID_RELATION_7,
ID_RELATION_8,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getRelationCount() { return 9; } 
 private int[] m_Relation = new int[9];
 public int GetRelationbyIndex(int idx) {
 if(idx>=0 && idx<9) return m_Relation[idx];
 return -1;
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
 Tab_Relation _values = new Tab_Relation();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Relation [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_0] as string);
_values.m_Relation [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_1] as string);
_values.m_Relation [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_2] as string);
_values.m_Relation [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_3] as string);
_values.m_Relation [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_4] as string);
_values.m_Relation [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_5] as string);
_values.m_Relation [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_6] as string);
_values.m_Relation [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_7] as string);
_values.m_Relation [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELATION_8] as string);

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

