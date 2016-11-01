//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GoldMoneyShop
{ private const string TAB_FILE_DATA = "Tables/GoldMoneyShop.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_STARTTIME=2,
ID_ENDTIME,
ID_ITEMID,
ID_STACKSIZE,
ID_MAXBUYCOUNT,
ID_PRICE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_EndTime;
 public int EndTime { get{ return m_EndTime;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_ItemID;
 public int ItemID { get{ return m_ItemID;}}

private int m_MaxBuyCount;
 public int MaxBuyCount { get{ return m_MaxBuyCount;}}

private int m_Price;
 public int Price { get{ return m_Price;}}

private int m_StackSize;
 public int StackSize { get{ return m_StackSize;}}

private int m_StartTime;
 public int StartTime { get{ return m_StartTime;}}

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
 Tab_GoldMoneyShop _values = new Tab_GoldMoneyShop();
 _values.m_EndTime =  Convert.ToInt32(valuesList[(int)_ID.ID_ENDTIME] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID] as string);
_values.m_MaxBuyCount =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXBUYCOUNT] as string);
_values.m_Price =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE] as string);
_values.m_StackSize =  Convert.ToInt32(valuesList[(int)_ID.ID_STACKSIZE] as string);
_values.m_StartTime =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTTIME] as string);

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

