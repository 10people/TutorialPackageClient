//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PublicConfig
{ private const string TAB_FILE_DATA = "Tables/PublicConfig.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_KEY=2,
ID_INTVALUE,
ID_STRINGVALUE,
ID_FLOATVALUE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_FloatValue;
 public float FloatValue { get{ return m_FloatValue;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IntValue;
 public int IntValue { get{ return m_IntValue;}}

private string m_Key;
 public string Key { get{ return m_Key;}}

private string m_StringValue;
 public string StringValue { get{ return m_StringValue;}}

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
 Tab_PublicConfig _values = new Tab_PublicConfig();
 _values.m_FloatValue =  Convert.ToSingle(valuesList[(int)_ID.ID_FLOATVALUE] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IntValue =  Convert.ToInt32(valuesList[(int)_ID.ID_INTVALUE] as string);
_values.m_Key =  valuesList[(int)_ID.ID_KEY] as string;
_values.m_StringValue =  valuesList[(int)_ID.ID_STRINGVALUE] as string;

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

