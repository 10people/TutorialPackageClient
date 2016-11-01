//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MasterShop
{ private const string TAB_FILE_DATA = "Tables/MasterShop.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_ITEMID=2,
ID_MAXCHANGENUM,
ID_PRICE,
ID_CONSUMITEMID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ConsumItemID;
 public int ConsumItemID { get{ return m_ConsumItemID;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_ItemID;
 public int ItemID { get{ return m_ItemID;}}

private int m_MaxChangeNum;
 public int MaxChangeNum { get{ return m_MaxChangeNum;}}

private int m_Price;
 public int Price { get{ return m_Price;}}

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
 Tab_MasterShop _values = new Tab_MasterShop();
 _values.m_ConsumItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMITEMID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID] as string);
_values.m_MaxChangeNum =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXCHANGENUM] as string);
_values.m_Price =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE] as string);

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

