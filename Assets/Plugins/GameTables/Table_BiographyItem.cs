//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BiographyItem
{ private const string TAB_FILE_DATA = "Tables/BiographyItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CONTENT=2,
ID_NAME,
ID_SPRITEICONNAME,
ID_BEGINLEVEL,
ID_ENDLEVEL,
ID_ADDBACKHEIGH,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AddBackHeigh;
 public int AddBackHeigh { get{ return m_AddBackHeigh;}}

private int m_BeginLevel;
 public int BeginLevel { get{ return m_BeginLevel;}}

private string m_Content;
 public string Content { get{ return m_Content;}}

private int m_EndLevel;
 public int EndLevel { get{ return m_EndLevel;}}

private string m_Id;
 public string Id { get{ return m_Id;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private string m_SpriteIconName;
 public string SpriteIconName { get{ return m_SpriteIconName;}}

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
 Tab_BiographyItem _values = new Tab_BiographyItem();
 _values.m_AddBackHeigh =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDBACKHEIGH] as string);
_values.m_BeginLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_BEGINLEVEL] as string);
_values.m_Content =  valuesList[(int)_ID.ID_CONTENT] as string;
_values.m_EndLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_ENDLEVEL] as string);
_values.m_Id =  valuesList[(int)_ID.ID_ID] as string;
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_SpriteIconName =  valuesList[(int)_ID.ID_SPRITEICONNAME] as string;

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

