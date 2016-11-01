//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_YuanBaoShop
{ private const string TAB_FILE_DATA = "Tables/YuanBaoShop.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TABINDEX=2,
ID_ITEMTYPE,
ID_ITEMID,
ID_NUM,
ID_PRICEWEEK,
ID_SALEWEEK,
ID_PRICEMONTH,
ID_SALEMONTH,
ID_PRICEFOREVER,
ID_SALEFOREVER,
ID_SHOWPRIORITY,
ID_SELLTIMESTART,
ID_SELLTIMEEND,
ID_ISCANPRESENT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsCanPresent;
 public int IsCanPresent { get{ return m_IsCanPresent;}}

private int m_ItemID;
 public int ItemID { get{ return m_ItemID;}}

private int m_ItemType;
 public int ItemType { get{ return m_ItemType;}}

private int m_Num;
 public int Num { get{ return m_Num;}}

private int m_PriceForever;
 public int PriceForever { get{ return m_PriceForever;}}

private int m_PriceMonth;
 public int PriceMonth { get{ return m_PriceMonth;}}

private int m_PriceWeek;
 public int PriceWeek { get{ return m_PriceWeek;}}

private int m_SaleForever;
 public int SaleForever { get{ return m_SaleForever;}}

private int m_SaleMonth;
 public int SaleMonth { get{ return m_SaleMonth;}}

private int m_SaleWeek;
 public int SaleWeek { get{ return m_SaleWeek;}}

private int m_SellTimeEnd;
 public int SellTimeEnd { get{ return m_SellTimeEnd;}}

private int m_SellTimeStart;
 public int SellTimeStart { get{ return m_SellTimeStart;}}

private int m_ShowPriority;
 public int ShowPriority { get{ return m_ShowPriority;}}

private int m_TabIndex;
 public int TabIndex { get{ return m_TabIndex;}}

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
 Tab_YuanBaoShop _values = new Tab_YuanBaoShop();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsCanPresent =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANPRESENT] as string);
_values.m_ItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID] as string);
_values.m_ItemType =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMTYPE] as string);
_values.m_Num =  Convert.ToInt32(valuesList[(int)_ID.ID_NUM] as string);
_values.m_PriceForever =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICEFOREVER] as string);
_values.m_PriceMonth =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICEMONTH] as string);
_values.m_PriceWeek =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICEWEEK] as string);
_values.m_SaleForever =  Convert.ToInt32(valuesList[(int)_ID.ID_SALEFOREVER] as string);
_values.m_SaleMonth =  Convert.ToInt32(valuesList[(int)_ID.ID_SALEMONTH] as string);
_values.m_SaleWeek =  Convert.ToInt32(valuesList[(int)_ID.ID_SALEWEEK] as string);
_values.m_SellTimeEnd =  Convert.ToInt32(valuesList[(int)_ID.ID_SELLTIMEEND] as string);
_values.m_SellTimeStart =  Convert.ToInt32(valuesList[(int)_ID.ID_SELLTIMESTART] as string);
_values.m_ShowPriority =  Convert.ToInt32(valuesList[(int)_ID.ID_SHOWPRIORITY] as string);
_values.m_TabIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_TABINDEX] as string);

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

