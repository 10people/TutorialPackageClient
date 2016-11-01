//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MountBase
{ private const string TAB_FILE_DATA = "Tables/MountBase.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_MOUNTICON,
ID_MOUNTDESC,
ID_MOUNTSOURCE,
ID_MODELID,
ID_SPEED,
ID_BUFFID,
ID_ISSHOWINUI,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BuffID;
 public int BuffID { get{ return m_BuffID;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsShowInUI;
 public int IsShowInUI { get{ return m_IsShowInUI;}}

private int m_ModelID;
 public int ModelID { get{ return m_ModelID;}}

private string m_MountDesc;
 public string MountDesc { get{ return m_MountDesc;}}

private string m_MountIcon;
 public string MountIcon { get{ return m_MountIcon;}}

private string m_MountSource;
 public string MountSource { get{ return m_MountSource;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_Speed;
 public int Speed { get{ return m_Speed;}}

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
 Tab_MountBase _values = new Tab_MountBase();
 _values.m_BuffID =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsShowInUI =  Convert.ToInt32(valuesList[(int)_ID.ID_ISSHOWINUI] as string);
_values.m_ModelID =  Convert.ToInt32(valuesList[(int)_ID.ID_MODELID] as string);
_values.m_MountDesc =  valuesList[(int)_ID.ID_MOUNTDESC] as string;
_values.m_MountIcon =  valuesList[(int)_ID.ID_MOUNTICON] as string;
_values.m_MountSource =  valuesList[(int)_ID.ID_MOUNTSOURCE] as string;
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_Speed =  Convert.ToInt32(valuesList[(int)_ID.ID_SPEED] as string);

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

