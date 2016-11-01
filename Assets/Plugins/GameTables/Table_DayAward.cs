//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_DayAward
{ private const string TAB_FILE_DATA = "Tables/DayAward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_DESCNAME=2,
ID_EXP,
ID_MONEY,
ID_BINDYUANBAO,
ID_ITEMDATAID,
ID_ITEMISBIND,
ID_ITEMCOUNT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanbao;
 public int BindYuanbao { get{ return m_BindYuanbao;}}

private string m_DescName;
 public string DescName { get{ return m_DescName;}}

private int m_Exp;
 public int Exp { get{ return m_Exp;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_ItemCount;
 public int ItemCount { get{ return m_ItemCount;}}

private int m_ItemDataID;
 public int ItemDataID { get{ return m_ItemDataID;}}

private int m_ItemIsBind;
 public int ItemIsBind { get{ return m_ItemIsBind;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

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
 Tab_DayAward _values = new Tab_DayAward();
 _values.m_BindYuanbao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_DescName =  valuesList[(int)_ID.ID_DESCNAME] as string;
_values.m_Exp =  Convert.ToInt32(valuesList[(int)_ID.ID_EXP] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemCount =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT] as string);
_values.m_ItemDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID] as string);
_values.m_ItemIsBind =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMISBIND] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);

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

