//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CommonItem
{ private const string TAB_FILE_DATA = "Tables/CommonItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_ICON,
ID_TIPS,
ID_CLASSID,
ID_SUBCLASSID,
ID_THIRDCLASSID,
ID_QUALITY,
ID_MINLEVELREQUIRE,
ID_MAXLEVELREQUIRE,
ID_CANUSE,
ID_BINDTYPE,
ID_CANSELL,
ID_SELLPRICE,
ID_SELLMONEYTYPE,
ID_MAXSTACKSIZE,
ID_PROFESSIONREQUIRE,
ID_SORTID,
ID_COMPOUNDTYPE,
ID_COMPONDLEVEL,
ID_MAXSTORAGECOUNT,
ID_HYPERLINKCOLOR,
ID_SOUNDID,
ID_EXISTTIME,
ID_DROPICON,
ID_DROPSCALING,
ID_DROPEFFECTID,
ID_CANTHROW,
ID_EXP,
ID_ISCANCONSIGN,
ID_ISCANCANGKU,
ID_ISCANQIANKUNDAI,
ID_ISCANBATCHUSE,
ID_ISNEEDADDREMIND,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindType;
 public int BindType { get{ return m_BindType;}}

private int m_CanSell;
 public int CanSell { get{ return m_CanSell;}}

private int m_CanThrow;
 public int CanThrow { get{ return m_CanThrow;}}

private int m_CanUse;
 public int CanUse { get{ return m_CanUse;}}

private int m_ClassID;
 public int ClassID { get{ return m_ClassID;}}

private int m_CompondLevel;
 public int CompondLevel { get{ return m_CompondLevel;}}

private int m_CompoundType;
 public int CompoundType { get{ return m_CompoundType;}}

private int m_DropEffectId;
 public int DropEffectId { get{ return m_DropEffectId;}}

private string m_DropIcon;
 public string DropIcon { get{ return m_DropIcon;}}

private float m_DropScaling;
 public float DropScaling { get{ return m_DropScaling;}}

private int m_ExistTime;
 public int ExistTime { get{ return m_ExistTime;}}

private int m_Exp;
 public int Exp { get{ return m_Exp;}}

private int m_HyperLinkColor;
 public int HyperLinkColor { get{ return m_HyperLinkColor;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsCanBatchUse;
 public int IsCanBatchUse { get{ return m_IsCanBatchUse;}}

private int m_IsCanCangKu;
 public int IsCanCangKu { get{ return m_IsCanCangKu;}}

private int m_IsCanConsign;
 public int IsCanConsign { get{ return m_IsCanConsign;}}

private int m_IsCanQianKunDai;
 public int IsCanQianKunDai { get{ return m_IsCanQianKunDai;}}

private int m_IsNeedAddRemind;
 public int IsNeedAddRemind { get{ return m_IsNeedAddRemind;}}

private int m_MaxLevelRequire;
 public int MaxLevelRequire { get{ return m_MaxLevelRequire;}}

private int m_MaxStackSize;
 public int MaxStackSize { get{ return m_MaxStackSize;}}

private int m_MaxStorageCount;
 public int MaxStorageCount { get{ return m_MaxStorageCount;}}

private int m_MinLevelRequire;
 public int MinLevelRequire { get{ return m_MinLevelRequire;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_ProfessionRequire;
 public int ProfessionRequire { get{ return m_ProfessionRequire;}}

private int m_Quality;
 public int Quality { get{ return m_Quality;}}

private int m_SellMoneyType;
 public int SellMoneyType { get{ return m_SellMoneyType;}}

private int m_SellPrice;
 public int SellPrice { get{ return m_SellPrice;}}

private int m_SortId;
 public int SortId { get{ return m_SortId;}}

private int m_SoundID;
 public int SoundID { get{ return m_SoundID;}}

private int m_SubClassID;
 public int SubClassID { get{ return m_SubClassID;}}

private int m_ThirdClassID;
 public int ThirdClassID { get{ return m_ThirdClassID;}}

private string m_Tips;
 public string Tips { get{ return m_Tips;}}

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
 Tab_CommonItem _values = new Tab_CommonItem();
 _values.m_BindType =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDTYPE] as string);
_values.m_CanSell =  Convert.ToInt32(valuesList[(int)_ID.ID_CANSELL] as string);
_values.m_CanThrow =  Convert.ToInt32(valuesList[(int)_ID.ID_CANTHROW] as string);
_values.m_CanUse =  Convert.ToInt32(valuesList[(int)_ID.ID_CANUSE] as string);
_values.m_ClassID =  Convert.ToInt32(valuesList[(int)_ID.ID_CLASSID] as string);
_values.m_CompondLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_COMPONDLEVEL] as string);
_values.m_CompoundType =  Convert.ToInt32(valuesList[(int)_ID.ID_COMPOUNDTYPE] as string);
_values.m_DropEffectId =  Convert.ToInt32(valuesList[(int)_ID.ID_DROPEFFECTID] as string);
_values.m_DropIcon =  valuesList[(int)_ID.ID_DROPICON] as string;
_values.m_DropScaling =  Convert.ToSingle(valuesList[(int)_ID.ID_DROPSCALING] as string );
_values.m_ExistTime =  Convert.ToInt32(valuesList[(int)_ID.ID_EXISTTIME] as string);
_values.m_Exp =  Convert.ToInt32(valuesList[(int)_ID.ID_EXP] as string);
_values.m_HyperLinkColor =  Convert.ToInt32(valuesList[(int)_ID.ID_HYPERLINKCOLOR] as string);
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsCanBatchUse =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANBATCHUSE] as string);
_values.m_IsCanCangKu =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANCANGKU] as string);
_values.m_IsCanConsign =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANCONSIGN] as string);
_values.m_IsCanQianKunDai =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANQIANKUNDAI] as string);
_values.m_IsNeedAddRemind =  Convert.ToInt32(valuesList[(int)_ID.ID_ISNEEDADDREMIND] as string);
_values.m_MaxLevelRequire =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXLEVELREQUIRE] as string);
_values.m_MaxStackSize =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXSTACKSIZE] as string);
_values.m_MaxStorageCount =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXSTORAGECOUNT] as string);
_values.m_MinLevelRequire =  Convert.ToInt32(valuesList[(int)_ID.ID_MINLEVELREQUIRE] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_ProfessionRequire =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONREQUIRE] as string);
_values.m_Quality =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITY] as string);
_values.m_SellMoneyType =  Convert.ToInt32(valuesList[(int)_ID.ID_SELLMONEYTYPE] as string);
_values.m_SellPrice =  Convert.ToInt32(valuesList[(int)_ID.ID_SELLPRICE] as string);
_values.m_SortId =  Convert.ToInt32(valuesList[(int)_ID.ID_SORTID] as string);
_values.m_SoundID =  Convert.ToInt32(valuesList[(int)_ID.ID_SOUNDID] as string);
_values.m_SubClassID =  Convert.ToInt32(valuesList[(int)_ID.ID_SUBCLASSID] as string);
_values.m_ThirdClassID =  Convert.ToInt32(valuesList[(int)_ID.ID_THIRDCLASSID] as string);
_values.m_Tips =  valuesList[(int)_ID.ID_TIPS] as string;

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

