//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StarCondition
{ private const string TAB_FILE_DATA = "Tables/StarCondition.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CONDITIONTYPE=2,
ID_PARA1,
ID_PARA2,
ID_PARA3,
ID_PARA4,
ID_PARA5,
ID_PARA6,
ID_PARA7,
ID_PARA8,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ConditionType;
 public int ConditionType { get{ return m_ConditionType;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getParaCount() { return 8; } 
 private int[] m_Para = new int[8];
 public int GetParabyIndex(int idx) {
 if(idx>=0 && idx<8) return m_Para[idx];
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
 Tab_StarCondition _values = new Tab_StarCondition();
 _values.m_ConditionType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONDITIONTYPE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Para [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA1] as string);
_values.m_Para [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA2] as string);
_values.m_Para [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA3] as string);
_values.m_Para [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA4] as string);
_values.m_Para [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA5] as string);
_values.m_Para [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA6] as string);
_values.m_Para [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA7] as string);
_values.m_Para [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARA8] as string);

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

