//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PvpShop
{ private const string TAB_FILE_DATA = "Tables/PvpShop.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_BLOCK=2,
ID_ITEMID,
ID_MONEYTYPE,
ID_MONEYCOUNT,
ID_ITEMCOUNT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Block;
 public int Block { get{ return m_Block;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_ItemCount;
 public int ItemCount { get{ return m_ItemCount;}}

private int m_ItemId;
 public int ItemId { get{ return m_ItemId;}}

private int m_MoneyCount;
 public int MoneyCount { get{ return m_MoneyCount;}}

private int m_MoneyType;
 public int MoneyType { get{ return m_MoneyType;}}

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
 Tab_PvpShop _values = new Tab_PvpShop();
 _values.m_Block =  Convert.ToInt32(valuesList[(int)_ID.ID_BLOCK] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_ItemCount =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT] as string);
_values.m_ItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID] as string);
_values.m_MoneyCount =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYCOUNT] as string);
_values.m_MoneyType =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE] as string);

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

