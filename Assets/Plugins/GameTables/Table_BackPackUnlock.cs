//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BackPackUnlock
{ private const string TAB_FILE_DATA = "Tables/BackPackUnlock.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_CONSUMETYPE=2,
ID_CONSUMESUBTYPE,
ID_CONSUMENUM,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ConsumeNum;
 public int ConsumeNum { get{ return m_ConsumeNum;}}

private int m_ConsumeSubType;
 public int ConsumeSubType { get{ return m_ConsumeSubType;}}

private int m_ConsumeType;
 public int ConsumeType { get{ return m_ConsumeType;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

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
 Tab_BackPackUnlock _values = new Tab_BackPackUnlock();
 _values.m_ConsumeNum =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMENUM] as string);
_values.m_ConsumeSubType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMESUBTYPE] as string);
_values.m_ConsumeType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMETYPE] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);

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

