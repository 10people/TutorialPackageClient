//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ShenQiInfo
{ private const string TAB_FILE_DATA = "Tables/ShenQiInfo.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_MAXATTRNUM=2,
ID_INITSKILLEXID,
ID_MAXSKILLLEV,
ID_ATTRRANDINDEX,
ID_SHENQIEFFCTID,
ID_SHENQIREFIXPER,
ID_COINCOSTMONEY,
ID_COINCOSTITEMID,
ID_COINCOSTITEMNUM,
ID_COINCOSTQUALITYINDEX,
ID_YBCOSTMONEY,
ID_YBCOSTITEMID,
ID_YBCOSTITEMNUM,
ID_YBCOSTQUALITYINDEX,
ID_EXPCOSTNUM,
ID_EXPCOSTITEMID,
ID_EXPCOSTITEMNUM,
ID_EXPCOSTQUALITYINDEX,
ID_LOCKNEEDITEMID,
ID_LOCKNEEDITEMNUM,
ID_ATTRMAXVALUE1,
ID_ATTRMAXVALUE2,
ID_ATTRMAXVALUE3,
ID_ATTRMAXVALUE4,
ID_ATTRMAXVALUE5,
ID_ATTRMAXVALUE6,
ID_ATTRMAXVALUE7,
ID_ATTRMAXVALUE8,
ID_ATTRMAXVALUE9,
ID_ATTRMAXVALUE10,
ID_ATTRMAXVALUE11,
ID_ATTRMAXVALUE12,
ID_ATTRMAXVALUE13,
ID_ATTRMAXVALUE14,
ID_ATTRMAXVALUE15,
ID_ATTRMAXVALUE16,
ID_ATTRMAXVALUE17,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAttrMaxValueCount() { return 17; } 
 private int[] m_AttrMaxValue = new int[17];
 public int GetAttrMaxValuebyIndex(int idx) {
 if(idx>=0 && idx<17) return m_AttrMaxValue[idx];
 return -1;
 }

private int m_AttrRandIndex;
 public int AttrRandIndex { get{ return m_AttrRandIndex;}}

private int m_CoinCostItemId;
 public int CoinCostItemId { get{ return m_CoinCostItemId;}}

private int m_CoinCostItemNum;
 public int CoinCostItemNum { get{ return m_CoinCostItemNum;}}

private int m_CoinCostMoney;
 public int CoinCostMoney { get{ return m_CoinCostMoney;}}

private int m_CoinCostQualityIndex;
 public int CoinCostQualityIndex { get{ return m_CoinCostQualityIndex;}}

private int m_ExpCostItemId;
 public int ExpCostItemId { get{ return m_ExpCostItemId;}}

private int m_ExpCostItemNum;
 public int ExpCostItemNum { get{ return m_ExpCostItemNum;}}

private int m_ExpCostNum;
 public int ExpCostNum { get{ return m_ExpCostNum;}}

private int m_ExpCostQualityIndex;
 public int ExpCostQualityIndex { get{ return m_ExpCostQualityIndex;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_InitSkillExId;
 public int InitSkillExId { get{ return m_InitSkillExId;}}

private int m_LockNeedItemId;
 public int LockNeedItemId { get{ return m_LockNeedItemId;}}

private int m_LockNeedItemNum;
 public int LockNeedItemNum { get{ return m_LockNeedItemNum;}}

private int m_MaxAttrNum;
 public int MaxAttrNum { get{ return m_MaxAttrNum;}}

private int m_MaxSkillLev;
 public int MaxSkillLev { get{ return m_MaxSkillLev;}}

private int m_ShenQiEffctId;
 public int ShenQiEffctId { get{ return m_ShenQiEffctId;}}

private float m_ShenQiRefixPer;
 public float ShenQiRefixPer { get{ return m_ShenQiRefixPer;}}

private int m_YBCostItemId;
 public int YBCostItemId { get{ return m_YBCostItemId;}}

private int m_YBCostItemNum;
 public int YBCostItemNum { get{ return m_YBCostItemNum;}}

private int m_YBCostMoney;
 public int YBCostMoney { get{ return m_YBCostMoney;}}

private int m_YBCostQualityIndex;
 public int YBCostQualityIndex { get{ return m_YBCostQualityIndex;}}

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
 Tab_ShenQiInfo _values = new Tab_ShenQiInfo();
 _values.m_AttrMaxValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE1] as string);
_values.m_AttrMaxValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE2] as string);
_values.m_AttrMaxValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE3] as string);
_values.m_AttrMaxValue [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE4] as string);
_values.m_AttrMaxValue [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE5] as string);
_values.m_AttrMaxValue [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE6] as string);
_values.m_AttrMaxValue [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE7] as string);
_values.m_AttrMaxValue [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE8] as string);
_values.m_AttrMaxValue [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE9] as string);
_values.m_AttrMaxValue [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE10] as string);
_values.m_AttrMaxValue [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE11] as string);
_values.m_AttrMaxValue [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE12] as string);
_values.m_AttrMaxValue [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE13] as string);
_values.m_AttrMaxValue [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE14] as string);
_values.m_AttrMaxValue [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE15] as string);
_values.m_AttrMaxValue [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE16] as string);
_values.m_AttrMaxValue [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRMAXVALUE17] as string);
_values.m_AttrRandIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRRANDINDEX] as string);
_values.m_CoinCostItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_COINCOSTITEMID] as string);
_values.m_CoinCostItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_COINCOSTITEMNUM] as string);
_values.m_CoinCostMoney =  Convert.ToInt32(valuesList[(int)_ID.ID_COINCOSTMONEY] as string);
_values.m_CoinCostQualityIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_COINCOSTQUALITYINDEX] as string);
_values.m_ExpCostItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPCOSTITEMID] as string);
_values.m_ExpCostItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPCOSTITEMNUM] as string);
_values.m_ExpCostNum =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPCOSTNUM] as string);
_values.m_ExpCostQualityIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPCOSTQUALITYINDEX] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_InitSkillExId =  Convert.ToInt32(valuesList[(int)_ID.ID_INITSKILLEXID] as string);
_values.m_LockNeedItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_LOCKNEEDITEMID] as string);
_values.m_LockNeedItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_LOCKNEEDITEMNUM] as string);
_values.m_MaxAttrNum =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXATTRNUM] as string);
_values.m_MaxSkillLev =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXSKILLLEV] as string);
_values.m_ShenQiEffctId =  Convert.ToInt32(valuesList[(int)_ID.ID_SHENQIEFFCTID] as string);
_values.m_ShenQiRefixPer =  Convert.ToSingle(valuesList[(int)_ID.ID_SHENQIREFIXPER] as string );
_values.m_YBCostItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_YBCOSTITEMID] as string);
_values.m_YBCostItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_YBCOSTITEMNUM] as string);
_values.m_YBCostMoney =  Convert.ToInt32(valuesList[(int)_ID.ID_YBCOSTMONEY] as string);
_values.m_YBCostQualityIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_YBCOSTQUALITYINDEX] as string);

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

