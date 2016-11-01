//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GuildPaoShang
{ private const string TAB_FILE_DATA = "Tables/GuildPaoShang.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TOTALPAOSHANGTIME=2,
ID_ALLOCATETIMESONCE,
ID_MEMMAXTIMESONEDAY,
ID_WEALTHFACTOR,
ID_TOTALCOINREFIXFACTOR,
ID_MINCOINREFIXFACTOR,
ID_ROBCOINREFIXFACTOR,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AllocateTimesOnce;
 public int AllocateTimesOnce { get{ return m_AllocateTimesOnce;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MemMaxTimesOneDay;
 public int MemMaxTimesOneDay { get{ return m_MemMaxTimesOneDay;}}

private float m_MinCoinRefixFactor;
 public float MinCoinRefixFactor { get{ return m_MinCoinRefixFactor;}}

private float m_RobCoinRefixFactor;
 public float RobCoinRefixFactor { get{ return m_RobCoinRefixFactor;}}

private float m_TotalCoinRefixFactor;
 public float TotalCoinRefixFactor { get{ return m_TotalCoinRefixFactor;}}

private int m_TotalPaoShangTime;
 public int TotalPaoShangTime { get{ return m_TotalPaoShangTime;}}

private float m_WealthFactor;
 public float WealthFactor { get{ return m_WealthFactor;}}

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
 Tab_GuildPaoShang _values = new Tab_GuildPaoShang();
 _values.m_AllocateTimesOnce =  Convert.ToInt32(valuesList[(int)_ID.ID_ALLOCATETIMESONCE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MemMaxTimesOneDay =  Convert.ToInt32(valuesList[(int)_ID.ID_MEMMAXTIMESONEDAY] as string);
_values.m_MinCoinRefixFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_MINCOINREFIXFACTOR] as string );
_values.m_RobCoinRefixFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_ROBCOINREFIXFACTOR] as string );
_values.m_TotalCoinRefixFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_TOTALCOINREFIXFACTOR] as string );
_values.m_TotalPaoShangTime =  Convert.ToInt32(valuesList[(int)_ID.ID_TOTALPAOSHANGTIME] as string);
_values.m_WealthFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_WEALTHFACTOR] as string );

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

