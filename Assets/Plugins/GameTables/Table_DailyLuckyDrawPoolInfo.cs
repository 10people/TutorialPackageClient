//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_DailyLuckyDrawPoolInfo
{ private const string TAB_FILE_DATA = "Tables/DailyLuckyDrawPoolInfo.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BONUSNUM=2,
ID_BONUS1,
ID_RATE1,
ID_BONUS2,
ID_RATE2,
ID_BONUS3,
ID_RATE3,
ID_BONUS4,
ID_RATE4,
ID_BONUS5,
ID_RATE5,
ID_BONUS6,
ID_RATE6,
ID_BONUS7,
ID_RATE7,
ID_BONUS8,
ID_RATE8,
ID_BONUS9,
ID_RATE9,
ID_BONUS10,
ID_RATE10,
ID_BONUS11,
ID_RATE11,
ID_BONUS12,
ID_RATE12,
ID_BONUS13,
ID_RATE13,
ID_BONUS14,
ID_RATE14,
ID_BONUS15,
ID_RATE15,
ID_BONUS16,
ID_RATE16,
ID_BONUS17,
ID_RATE17,
ID_BONUS18,
ID_RATE18,
ID_BONUS19,
ID_RATE19,
ID_BONUS20,
ID_RATE20,
ID_BONUS21,
ID_RATE21,
ID_BONUS22,
ID_RATE22,
ID_BONUS23,
ID_RATE23,
ID_BONUS24,
ID_RATE24,
ID_BONUS25,
ID_RATE25,
ID_BONUS26,
ID_RATE26,
ID_BONUS27,
ID_RATE27,
ID_BONUS28,
ID_RATE28,
ID_BONUS29,
ID_RATE29,
ID_BONUS30,
ID_RATE30,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getBonusCount() { return 30; } 
 private int[] m_Bonus = new int[30];
 public int GetBonusbyIndex(int idx) {
 if(idx>=0 && idx<30) return m_Bonus[idx];
 return -1;
 }

private int m_BonusNum;
 public int BonusNum { get{ return m_BonusNum;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getRateCount() { return 30; } 
 private float[] m_Rate = new float[30];
 public float GetRatebyIndex(int idx) {
 if(idx>=0 && idx<30) return m_Rate[idx];
 return 0.0f;
 }

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
 Tab_DailyLuckyDrawPoolInfo _values = new Tab_DailyLuckyDrawPoolInfo();
 _values.m_Bonus [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS1] as string);
_values.m_Bonus [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS2] as string);
_values.m_Bonus [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS3] as string);
_values.m_Bonus [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS4] as string);
_values.m_Bonus [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS5] as string);
_values.m_Bonus [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS6] as string);
_values.m_Bonus [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS7] as string);
_values.m_Bonus [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS8] as string);
_values.m_Bonus [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS9] as string);
_values.m_Bonus [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS10] as string);
_values.m_Bonus [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS11] as string);
_values.m_Bonus [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS12] as string);
_values.m_Bonus [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS13] as string);
_values.m_Bonus [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS14] as string);
_values.m_Bonus [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS15] as string);
_values.m_Bonus [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS16] as string);
_values.m_Bonus [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS17] as string);
_values.m_Bonus [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS18] as string);
_values.m_Bonus [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS19] as string);
_values.m_Bonus [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS20] as string);
_values.m_Bonus [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS21] as string);
_values.m_Bonus [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS22] as string);
_values.m_Bonus [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS23] as string);
_values.m_Bonus [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS24] as string);
_values.m_Bonus [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS25] as string);
_values.m_Bonus [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS26] as string);
_values.m_Bonus [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS27] as string);
_values.m_Bonus [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS28] as string);
_values.m_Bonus [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS29] as string);
_values.m_Bonus [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUS30] as string);
_values.m_BonusNum =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUSNUM] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Rate [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE1] as string );
_values.m_Rate [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE2] as string );
_values.m_Rate [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE3] as string );
_values.m_Rate [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE4] as string );
_values.m_Rate [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE5] as string );
_values.m_Rate [ 5 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE6] as string );
_values.m_Rate [ 6 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE7] as string );
_values.m_Rate [ 7 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE8] as string );
_values.m_Rate [ 8 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE9] as string );
_values.m_Rate [ 9 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE10] as string );
_values.m_Rate [ 10 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE11] as string );
_values.m_Rate [ 11 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE12] as string );
_values.m_Rate [ 12 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE13] as string );
_values.m_Rate [ 13 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE14] as string );
_values.m_Rate [ 14 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE15] as string );
_values.m_Rate [ 15 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE16] as string );
_values.m_Rate [ 16 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE17] as string );
_values.m_Rate [ 17 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE18] as string );
_values.m_Rate [ 18 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE19] as string );
_values.m_Rate [ 19 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE20] as string );
_values.m_Rate [ 20 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE21] as string );
_values.m_Rate [ 21 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE22] as string );
_values.m_Rate [ 22 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE23] as string );
_values.m_Rate [ 23 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE24] as string );
_values.m_Rate [ 24 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE25] as string );
_values.m_Rate [ 25 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE26] as string );
_values.m_Rate [ 26 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE27] as string );
_values.m_Rate [ 27 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE28] as string );
_values.m_Rate [ 28 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE29] as string );
_values.m_Rate [ 29 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RATE30] as string );

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

