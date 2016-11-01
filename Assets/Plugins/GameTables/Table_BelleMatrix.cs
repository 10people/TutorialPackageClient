//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BelleMatrix
{ private const string TAB_FILE_DATA = "Tables/BelleMatrix.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_ICON,
ID_LAYOUT,
ID_BELLECOUNT,
ID_OPENLEVEL,
ID_ATTRTYPE,
ID_ATTRGAINS_1,
ID_ATTRGAINS_2,
ID_ATTRGAINS_3,
ID_ATTRGAINS_4,
ID_ATTRGAINS_5,
ID_NATUREINDEX_1,
ID_NATUREINDEX_2,
ID_NATUREINDEX_3,
ID_NATUREINDEX_4,
ID_NATUREINDEX_5,
ID_NATUREINDEX_6,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAttrGainsCount() { return 5; } 
 private int[] m_AttrGains = new int[5];
 public int GetAttrGainsbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_AttrGains[idx];
 return -1;
 }

private int m_AttrType;
 public int AttrType { get{ return m_AttrType;}}

private int m_BelleCount;
 public int BelleCount { get{ return m_BelleCount;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Layout;
 public string Layout { get{ return m_Layout;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

public int getNatureIndexCount() { return 6; } 
 private int[] m_NatureIndex = new int[6];
 public int GetNatureIndexbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_NatureIndex[idx];
 return -1;
 }

private int m_OpenLevel;
 public int OpenLevel { get{ return m_OpenLevel;}}

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
 Tab_BelleMatrix _values = new Tab_BelleMatrix();
 _values.m_AttrGains [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRGAINS_1] as string);
_values.m_AttrGains [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRGAINS_2] as string);
_values.m_AttrGains [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRGAINS_3] as string);
_values.m_AttrGains [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRGAINS_4] as string);
_values.m_AttrGains [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRGAINS_5] as string);
_values.m_AttrType =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE] as string);
_values.m_BelleCount =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLECOUNT] as string);
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Layout =  valuesList[(int)_ID.ID_LAYOUT] as string;
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_NatureIndex [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NATUREINDEX_1] as string);
_values.m_NatureIndex [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NATUREINDEX_2] as string);
_values.m_NatureIndex [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NATUREINDEX_3] as string);
_values.m_NatureIndex [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NATUREINDEX_4] as string);
_values.m_NatureIndex [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NATUREINDEX_5] as string);
_values.m_NatureIndex [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NATUREINDEX_6] as string);
_values.m_OpenLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_OPENLEVEL] as string);

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

