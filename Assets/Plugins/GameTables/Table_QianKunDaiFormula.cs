//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_QianKunDaiFormula
{ private const string TAB_FILE_DATA = "Tables/QianKunDaiFormula.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_TYPE,
ID_PRODUCTSTART,
ID_PRODUCTEND,
ID_MONEY,
ID_STUFFID1,
ID_STUFFCOUNT1,
ID_STUFFID2,
ID_STUFFCOUNT2,
ID_STUFFID3,
ID_STUFFCOUNT3,
ID_STUFFID4,
ID_STUFFCOUNT4,
ID_STUFFID5,
ID_STUFFCOUNT5,
ID_STUFFID6,
ID_STUFFCOUNT6,
ID_FILTERTYPE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_FilterType;
 public int FilterType { get{ return m_FilterType;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_ProductEnd;
 public int ProductEnd { get{ return m_ProductEnd;}}

private int m_ProductStart;
 public int ProductStart { get{ return m_ProductStart;}}

public int getStuffCountCount() { return 6; } 
 private int[] m_StuffCount = new int[6];
 public int GetStuffCountbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_StuffCount[idx];
 return -1;
 }

public int getStuffIDCount() { return 6; } 
 private int[] m_StuffID = new int[6];
 public int GetStuffIDbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_StuffID[idx];
 return -1;
 }

private int m_Type;
 public int Type { get{ return m_Type;}}

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
 Tab_QianKunDaiFormula _values = new Tab_QianKunDaiFormula();
 _values.m_FilterType =  Convert.ToInt32(valuesList[(int)_ID.ID_FILTERTYPE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_ProductEnd =  Convert.ToInt32(valuesList[(int)_ID.ID_PRODUCTEND] as string);
_values.m_ProductStart =  Convert.ToInt32(valuesList[(int)_ID.ID_PRODUCTSTART] as string);
_values.m_StuffCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT1] as string);
_values.m_StuffCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT2] as string);
_values.m_StuffCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT3] as string);
_values.m_StuffCount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT4] as string);
_values.m_StuffCount [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT5] as string);
_values.m_StuffCount [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT6] as string);
_values.m_StuffID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID1] as string);
_values.m_StuffID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID2] as string);
_values.m_StuffID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID3] as string);
_values.m_StuffID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID4] as string);
_values.m_StuffID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID5] as string);
_values.m_StuffID [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID6] as string);
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);

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

