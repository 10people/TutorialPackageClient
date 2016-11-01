//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_UIPath
{ private const string TAB_FILE_DATA = "Tables/UIPath.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_PATH=2,
ID_PARAM,
ID_LV,
ID_USER_COMMONFLAG,
ID_TIPS,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Param;
 public string Param { get{ return m_Param;}}

private string m_Path;
 public string Path { get{ return m_Path;}}

private int m_Tips;
 public int Tips { get{ return m_Tips;}}

private int m_USERCOMMONFLAG;
 public int USERCOMMONFLAG { get{ return m_USERCOMMONFLAG;}}

private int m_Lv;
 public int Lv { get{ return m_Lv;}}

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
 Tab_UIPath _values = new Tab_UIPath();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Param =  valuesList[(int)_ID.ID_PARAM] as string;
_values.m_Path =  valuesList[(int)_ID.ID_PATH] as string;
_values.m_Tips =  Convert.ToInt32(valuesList[(int)_ID.ID_TIPS] as string);
_values.m_USERCOMMONFLAG =  Convert.ToInt32(valuesList[(int)_ID.ID_USER_COMMONFLAG] as string);
_values.m_Lv =  Convert.ToInt32(valuesList[(int)_ID.ID_LV] as string);

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

