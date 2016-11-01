//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SevenDaysLogicType
{ private const string TAB_FILE_DATA = "Tables/SevenDaysLogicType.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_LOGICTYPE=2,
ID_PARAMDESC1,
ID_PARAMTYPE1,
ID_PARAMDESC2,
ID_PARAMTYPE2,
ID_PARAMDESC3,
ID_PARAMTYPE3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_LogicType;
 public int LogicType { get{ return m_LogicType;}}

public int getParamDescCount() { return 3; } 
 private string[] m_ParamDesc = new string[3];
 public string GetParamDescbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_ParamDesc[idx];
 return "";
 }

public int getParamTypeCount() { return 3; } 
 private int[] m_ParamType = new int[3];
 public int GetParamTypebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_ParamType[idx];
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
 Tab_SevenDaysLogicType _values = new Tab_SevenDaysLogicType();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LogicType =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICTYPE] as string);
_values.m_ParamDesc [ 0 ] =  valuesList[(int)_ID.ID_PARAMDESC1] as string;
_values.m_ParamDesc [ 1 ] =  valuesList[(int)_ID.ID_PARAMDESC2] as string;
_values.m_ParamDesc [ 2 ] =  valuesList[(int)_ID.ID_PARAMDESC3] as string;
_values.m_ParamType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMTYPE1] as string);
_values.m_ParamType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMTYPE2] as string);
_values.m_ParamType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMTYPE3] as string);

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

