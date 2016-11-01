//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_NpcOptionDialog
{ private const string TAB_FILE_DATA = "Tables/NpcOptionDialog.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CENTERTEXT=2,
ID_OPTION1TEXT,
ID_OPTION2TEXT,
ID_OPTION1NEXTDIALOG,
ID_OPTION2NEXTDIALOG,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_CenterText;
 public string CenterText { get{ return m_CenterText;}}

private short m_Id;
 public short Id { get{ return m_Id;}}

private short m_Option1NextDialog;
 public short Option1NextDialog { get{ return m_Option1NextDialog;}}

private string m_Option1Text;
 public string Option1Text { get{ return m_Option1Text;}}

private short m_Option2NextDialog;
 public short Option2NextDialog { get{ return m_Option2NextDialog;}}

private string m_Option2Text;
 public string Option2Text { get{ return m_Option2Text;}}

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
 Tab_NpcOptionDialog _values = new Tab_NpcOptionDialog();
 _values.m_CenterText =  valuesList[(int)_ID.ID_CENTERTEXT] as string;
_values.m_Id =  Convert.ToInt16(valuesList[(int)_ID.ID_ID] as string);
_values.m_Option1NextDialog =  Convert.ToInt16(valuesList[(int)_ID.ID_OPTION1NEXTDIALOG] as string);
_values.m_Option1Text =  valuesList[(int)_ID.ID_OPTION1TEXT] as string;
_values.m_Option2NextDialog =  Convert.ToInt16(valuesList[(int)_ID.ID_OPTION2NEXTDIALOG] as string);
_values.m_Option2Text =  valuesList[(int)_ID.ID_OPTION2TEXT] as string;

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

