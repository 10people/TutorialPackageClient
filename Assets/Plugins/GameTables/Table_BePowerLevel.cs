//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BePowerLevel
{ private const string TAB_FILE_DATA = "Tables/BePowerLevel.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TYPE=2,
ID_LEVEL1,
ID_VALUE1,
ID_LEVEL2,
ID_VALUE2,
ID_LEVEL3,
ID_VALUE3,
ID_LEVEL4,
ID_VALUE4,
ID_LEVEL5,
ID_VALUE5,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getLevelCount() { return 5; } 
 private int[] m_Level = new int[5];
 public int GetLevelbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_Level[idx];
 return -1;
 }

private int m_Type;
 public int Type { get{ return m_Type;}}

public int getValueCount() { return 5; } 
 private int[] m_Value = new int[5];
 public int GetValuebyIndex(int idx) {
 if(idx>=0 && idx<5) return m_Value[idx];
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
 Tab_BePowerLevel _values = new Tab_BePowerLevel();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL1] as string);
_values.m_Level [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL2] as string);
_values.m_Level [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL3] as string);
_values.m_Level [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL4] as string);
_values.m_Level [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL5] as string);
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);
_values.m_Value [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VALUE1] as string);
_values.m_Value [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VALUE2] as string);
_values.m_Value [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VALUE3] as string);
_values.m_Value [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VALUE4] as string);
_values.m_Value [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VALUE5] as string);

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

