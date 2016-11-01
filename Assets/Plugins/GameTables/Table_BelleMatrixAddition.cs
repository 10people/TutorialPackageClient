//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BelleMatrixAddition
{ private const string TAB_FILE_DATA = "Tables/BelleMatrixAddition.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BELLENATRUE=2,
ID_MATRIXINDEXNATURE,
ID_ATTRTYPE,
ID_ATTRGAINS,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AttrGains;
 public int AttrGains { get{ return m_AttrGains;}}

private int m_AttrType;
 public int AttrType { get{ return m_AttrType;}}

private int m_BelleNatrue;
 public int BelleNatrue { get{ return m_BelleNatrue;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MatrixIndexNature;
 public int MatrixIndexNature { get{ return m_MatrixIndexNature;}}

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
 Tab_BelleMatrixAddition _values = new Tab_BelleMatrixAddition();
 _values.m_AttrGains =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRGAINS] as string);
_values.m_AttrType =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE] as string);
_values.m_BelleNatrue =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLENATRUE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MatrixIndexNature =  Convert.ToInt32(valuesList[(int)_ID.ID_MATRIXINDEXNATURE] as string);

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

