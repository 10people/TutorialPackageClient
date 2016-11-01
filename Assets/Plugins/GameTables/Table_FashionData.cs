//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_FashionData
{ private const string TAB_FILE_DATA = "Tables/FashionData.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_ICON,
ID_ISSALE,
ID_PRICEWEEK,
ID_PRICEMONTH,
ID_PRICEFOREVER,
ID_ITEMVISUALID,
ID_SORTID,
ID_FASHIONSOURCE,
ID_DESCDICID,
ID_FASHIONTYPE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_DescDicId;
 public string DescDicId { get{ return m_DescDicId;}}

private string m_FashionSource;
 public string FashionSource { get{ return m_FashionSource;}}

private int m_FashionType;
 public int FashionType { get{ return m_FashionType;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsSale;
 public int IsSale { get{ return m_IsSale;}}

private int m_ItemVisualID;
 public int ItemVisualID { get{ return m_ItemVisualID;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_PriceForever;
 public int PriceForever { get{ return m_PriceForever;}}

private int m_PriceMonth;
 public int PriceMonth { get{ return m_PriceMonth;}}

private int m_PriceWeek;
 public int PriceWeek { get{ return m_PriceWeek;}}

private int m_SortID;
 public int SortID { get{ return m_SortID;}}

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
 Tab_FashionData _values = new Tab_FashionData();
 _values.m_DescDicId =  valuesList[(int)_ID.ID_DESCDICID] as string;
_values.m_FashionSource =  valuesList[(int)_ID.ID_FASHIONSOURCE] as string;
_values.m_FashionType =  Convert.ToInt32(valuesList[(int)_ID.ID_FASHIONTYPE] as string);
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsSale =  Convert.ToInt32(valuesList[(int)_ID.ID_ISSALE] as string);
_values.m_ItemVisualID =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMVISUALID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_PriceForever =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICEFOREVER] as string);
_values.m_PriceMonth =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICEMONTH] as string);
_values.m_PriceWeek =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICEWEEK] as string);
_values.m_SortID =  Convert.ToInt32(valuesList[(int)_ID.ID_SORTID] as string);

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

