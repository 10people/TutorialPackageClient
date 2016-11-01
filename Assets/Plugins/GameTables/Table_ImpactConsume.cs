//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ImpactConsume
{ private const string TAB_FILE_DATA = "Tables/ImpactConsume.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_IMPACTID,
ID_CONSUMEZHENQI=2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ConsumeZhenQi;
 public int ConsumeZhenQi { get{ return m_ConsumeZhenQi;}}

private int m_ImpactID;
 public int ImpactID { get{ return m_ImpactID;}}

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
 Tab_ImpactConsume _values = new Tab_ImpactConsume();
 _values.m_ConsumeZhenQi =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMEZHENQI] as string);
_values.m_ImpactID =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACTID] as string);

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

