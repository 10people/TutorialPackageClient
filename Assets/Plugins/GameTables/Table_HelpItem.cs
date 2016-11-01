//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_HelpItem
{ private const string TAB_FILE_DATA = "Tables/HelpItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_HELPNAME=2,
ID_RECOMTITLE1,
ID_RECOMICON1,
ID_RECOMSTAR1,
ID_RECOMDESC1,
ID_RECOMTITLE2,
ID_RECOMICON2,
ID_RECOMSTAR2,
ID_RECOMDESC2,
ID_RECOMTITLE3,
ID_RECOMICON3,
ID_RECOMSTAR3,
ID_RECOMDESC3,
ID_RECOMTITLE4,
ID_RECOMICON4,
ID_RECOMSTAR4,
ID_RECOMDESC4,
ID_RECOMTITLE5,
ID_RECOMICON5,
ID_RECOMSTAR5,
ID_RECOMDESC5,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_HelpName;
 public string HelpName { get{ return m_HelpName;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getRecomDescCount() { return 5; } 
 private string[] m_RecomDesc = new string[5];
 public string GetRecomDescbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_RecomDesc[idx];
 return "";
 }

public int getRecomIconCount() { return 5; } 
 private string[] m_RecomIcon = new string[5];
 public string GetRecomIconbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_RecomIcon[idx];
 return "";
 }

public int getRecomStarCount() { return 5; } 
 private int[] m_RecomStar = new int[5];
 public int GetRecomStarbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_RecomStar[idx];
 return -1;
 }

public int getRecomTitleCount() { return 5; } 
 private string[] m_RecomTitle = new string[5];
 public string GetRecomTitlebyIndex(int idx) {
 if(idx>=0 && idx<5) return m_RecomTitle[idx];
 return "";
 }

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
 Tab_HelpItem _values = new Tab_HelpItem();
 _values.m_HelpName =  valuesList[(int)_ID.ID_HELPNAME] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_RecomDesc [ 0 ] =  valuesList[(int)_ID.ID_RECOMDESC1] as string;
_values.m_RecomDesc [ 1 ] =  valuesList[(int)_ID.ID_RECOMDESC2] as string;
_values.m_RecomDesc [ 2 ] =  valuesList[(int)_ID.ID_RECOMDESC3] as string;
_values.m_RecomDesc [ 3 ] =  valuesList[(int)_ID.ID_RECOMDESC4] as string;
_values.m_RecomDesc [ 4 ] =  valuesList[(int)_ID.ID_RECOMDESC5] as string;
_values.m_RecomIcon [ 0 ] =  valuesList[(int)_ID.ID_RECOMICON1] as string;
_values.m_RecomIcon [ 1 ] =  valuesList[(int)_ID.ID_RECOMICON2] as string;
_values.m_RecomIcon [ 2 ] =  valuesList[(int)_ID.ID_RECOMICON3] as string;
_values.m_RecomIcon [ 3 ] =  valuesList[(int)_ID.ID_RECOMICON4] as string;
_values.m_RecomIcon [ 4 ] =  valuesList[(int)_ID.ID_RECOMICON5] as string;
_values.m_RecomStar [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RECOMSTAR1] as string);
_values.m_RecomStar [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RECOMSTAR2] as string);
_values.m_RecomStar [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RECOMSTAR3] as string);
_values.m_RecomStar [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RECOMSTAR4] as string);
_values.m_RecomStar [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RECOMSTAR5] as string);
_values.m_RecomTitle [ 0 ] =  valuesList[(int)_ID.ID_RECOMTITLE1] as string;
_values.m_RecomTitle [ 1 ] =  valuesList[(int)_ID.ID_RECOMTITLE2] as string;
_values.m_RecomTitle [ 2 ] =  valuesList[(int)_ID.ID_RECOMTITLE3] as string;
_values.m_RecomTitle [ 3 ] =  valuesList[(int)_ID.ID_RECOMTITLE4] as string;
_values.m_RecomTitle [ 4 ] =  valuesList[(int)_ID.ID_RECOMTITLE5] as string;

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

