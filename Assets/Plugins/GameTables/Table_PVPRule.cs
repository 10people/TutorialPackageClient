//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PVPRule
{ private const string TAB_FILE_DATA = "Tables/PVPRule.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_PROTECTLEVEL=2,
ID_PKRECOVER,
ID_ISINCPKVALUE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsIncPKValue;
 public int IsIncPKValue { get{ return m_IsIncPKValue;}}

private int m_PKRecover;
 public int PKRecover { get{ return m_PKRecover;}}

private int m_ProtectLevel;
 public int ProtectLevel { get{ return m_ProtectLevel;}}

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
 Tab_PVPRule _values = new Tab_PVPRule();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsIncPKValue =  Convert.ToInt32(valuesList[(int)_ID.ID_ISINCPKVALUE] as string);
_values.m_PKRecover =  Convert.ToInt32(valuesList[(int)_ID.ID_PKRECOVER] as string);
_values.m_ProtectLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_PROTECTLEVEL] as string);

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

