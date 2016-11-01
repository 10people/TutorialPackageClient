//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BelleAddition
{ private const string TAB_FILE_DATA = "Tables/BelleAddition.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BELLECOUNT=2,
ID_BELLEID,
ID_ADDITIONVALUE_1,
ID_ADDITIONVALUE_2,
ID_ADDITIONVALUE_3,
ID_ADDITIONVALUE_4,
ID_ADDITIONVALUE_5,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAdditionValueCount() { return 5; } 
 private int[] m_AdditionValue = new int[5];
 public int GetAdditionValuebyIndex(int idx) {
 if(idx>=0 && idx<5) return m_AdditionValue[idx];
 return -1;
 }

private int m_BelleCount;
 public int BelleCount { get{ return m_BelleCount;}}

private int m_BelleID;
 public int BelleID { get{ return m_BelleID;}}

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
 Tab_BelleAddition _values = new Tab_BelleAddition();
 _values.m_AdditionValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDITIONVALUE_1] as string);
_values.m_AdditionValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDITIONVALUE_2] as string);
_values.m_AdditionValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDITIONVALUE_3] as string);
_values.m_AdditionValue [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDITIONVALUE_4] as string);
_values.m_AdditionValue [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDITIONVALUE_5] as string);
_values.m_BelleCount =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLECOUNT] as string);
_values.m_BelleID =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLEID] as string);
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

