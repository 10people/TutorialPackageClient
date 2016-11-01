//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_DropNotify
{ private const string TAB_FILE_DATA = "Tables/DropNotify.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CONTENTTYPE=2,
ID_CONTENT1,
ID_CONTENT2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getContentCount() { return 2; } 
 private string[] m_Content = new string[2];
 public string GetContentbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_Content[idx];
 return "";
 }

private int m_ContentType;
 public int ContentType { get{ return m_ContentType;}}

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
 Tab_DropNotify _values = new Tab_DropNotify();
 _values.m_Content [ 0 ] =  valuesList[(int)_ID.ID_CONTENT1] as string;
_values.m_Content [ 1 ] =  valuesList[(int)_ID.ID_CONTENT2] as string;
_values.m_ContentType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONTENTTYPE] as string);
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

