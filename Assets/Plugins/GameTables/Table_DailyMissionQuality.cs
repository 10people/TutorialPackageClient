//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_DailyMissionQuality
{ private const string TAB_FILE_DATA = "Tables/DailyMissionQuality.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_INITRATE=2,
ID_TIMERANDOMRATE,
ID_RANDOMRATE,
ID_AWARDFACTOR,
ID_LEVELFACTOR1,
ID_LEVELFACTOR2,
ID_LEVELFACTOR3,
ID_LEVELFACTOR4,
ID_LEVELFACTOR5,
ID_LEVELFACTOR6,
ID_LEVELFACTOR7,
ID_LEVELFACTOR8,
ID_LEVELFACTOR9,
ID_LEVELFACTOR10,
ID_LEVELFACTOR11,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_AwardFactor;
 public float AwardFactor { get{ return m_AwardFactor;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_InitRate;
 public int InitRate { get{ return m_InitRate;}}

public int getLevelFactorCount() { return 11; } 
 private float[] m_LevelFactor = new float[11];
 public float GetLevelFactorbyIndex(int idx) {
 if(idx>=0 && idx<11) return m_LevelFactor[idx];
 return 0.0f;
 }

private int m_RandomRate;
 public int RandomRate { get{ return m_RandomRate;}}

private int m_TimeRandomRate;
 public int TimeRandomRate { get{ return m_TimeRandomRate;}}

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
 Tab_DailyMissionQuality _values = new Tab_DailyMissionQuality();
 _values.m_AwardFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_AWARDFACTOR] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_InitRate =  Convert.ToInt32(valuesList[(int)_ID.ID_INITRATE] as string);
_values.m_LevelFactor [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR1] as string );
_values.m_LevelFactor [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR2] as string );
_values.m_LevelFactor [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR3] as string );
_values.m_LevelFactor [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR4] as string );
_values.m_LevelFactor [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR5] as string );
_values.m_LevelFactor [ 5 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR6] as string );
_values.m_LevelFactor [ 6 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR7] as string );
_values.m_LevelFactor [ 7 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR8] as string );
_values.m_LevelFactor [ 8 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR9] as string );
_values.m_LevelFactor [ 9 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR10] as string );
_values.m_LevelFactor [ 10 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_LEVELFACTOR11] as string );
_values.m_RandomRate =  Convert.ToInt32(valuesList[(int)_ID.ID_RANDOMRATE] as string);
_values.m_TimeRandomRate =  Convert.ToInt32(valuesList[(int)_ID.ID_TIMERANDOMRATE] as string);

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

