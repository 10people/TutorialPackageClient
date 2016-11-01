//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CabalFellowStar
{ private const string TAB_FILE_DATA = "Tables/CabalFellowStar.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CONSUMENUM=2,
ID_ATTACHATTR01,
ID_ATTACHATTR02,
ID_ATTACHATTR03,
ID_ATTACHATTR04,
ID_ATTACHATTR05,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAttachAttrCount() { return 5; } 
 private int[] m_AttachAttr = new int[5];
 public int GetAttachAttrbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_AttachAttr[idx];
 return -1;
 }

private int m_ConsumeNum;
 public int ConsumeNum { get{ return m_ConsumeNum;}}

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
 Tab_CabalFellowStar _values = new Tab_CabalFellowStar();
 _values.m_AttachAttr [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHATTR01] as string);
_values.m_AttachAttr [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHATTR02] as string);
_values.m_AttachAttr [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHATTR03] as string);
_values.m_AttachAttr [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHATTR04] as string);
_values.m_AttachAttr [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHATTR05] as string);
_values.m_ConsumeNum =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMENUM] as string);
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

