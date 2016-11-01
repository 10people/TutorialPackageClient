//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GuildMissionAward
{ private const string TAB_FILE_DATA = "Tables/GuildMissionAward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_MONEYFACTOR=2,
ID_EXPFACTOR,
ID_MONEYQUALITYFACTOR0,
ID_MONEYQUALITYFACTOR1,
ID_MONEYQUALITYFACTOR2,
ID_MONEYQUALITYFACTOR3,
ID_MONEYQUALITYFACTOR4,
ID_EXPQUALITYFACTOR0,
ID_EXPQUALITYFACTOR1,
ID_EXPQUALITYFACTOR2,
ID_EXPQUALITYFACTOR3,
ID_EXPQUALITYFACTOR4,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_ExpFactor;
 public float ExpFactor { get{ return m_ExpFactor;}}

public int getExpQualityFactorCount() { return 5; } 
 private float[] m_ExpQualityFactor = new float[5];
 public float GetExpQualityFactorbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_ExpQualityFactor[idx];
 return 0.0f;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

private float m_MoneyFactor;
 public float MoneyFactor { get{ return m_MoneyFactor;}}

public int getMoneyQualityFactorCount() { return 5; } 
 private float[] m_MoneyQualityFactor = new float[5];
 public float GetMoneyQualityFactorbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_MoneyQualityFactor[idx];
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
 Tab_GuildMissionAward _values = new Tab_GuildMissionAward();
 _values.m_ExpFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_EXPFACTOR] as string );
_values.m_ExpQualityFactor [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_EXPQUALITYFACTOR0] as string );
_values.m_ExpQualityFactor [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_EXPQUALITYFACTOR1] as string );
_values.m_ExpQualityFactor [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_EXPQUALITYFACTOR2] as string );
_values.m_ExpQualityFactor [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_EXPQUALITYFACTOR3] as string );
_values.m_ExpQualityFactor [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_EXPQUALITYFACTOR4] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MoneyFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_MONEYFACTOR] as string );
_values.m_MoneyQualityFactor [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONEYQUALITYFACTOR0] as string );
_values.m_MoneyQualityFactor [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONEYQUALITYFACTOR1] as string );
_values.m_MoneyQualityFactor [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONEYQUALITYFACTOR2] as string );
_values.m_MoneyQualityFactor [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONEYQUALITYFACTOR3] as string );
_values.m_MoneyQualityFactor [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONEYQUALITYFACTOR4] as string );

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

