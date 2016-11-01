//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GuildMissionGuild
{ private const string TAB_FILE_DATA = "Tables/GuildMissionGuild.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CANASSIGNTIME=2,
ID_CANACCEPTTIMESONCE,
ID_CONSUMEWEALTH,
ID_MEMMAXTIMESONEDAY,
ID_MEMMISROUNDNUMONCE,
ID_MEMCONSUMEBANGGONG,
ID_AWARDFACTOR,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_AwardFactor;
 public float AwardFactor { get{ return m_AwardFactor;}}

private int m_CanAcceptTimesOnce;
 public int CanAcceptTimesOnce { get{ return m_CanAcceptTimesOnce;}}

private int m_CanAssignTime;
 public int CanAssignTime { get{ return m_CanAssignTime;}}

private int m_ConsumeWealth;
 public int ConsumeWealth { get{ return m_ConsumeWealth;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MemConsumeBangGong;
 public int MemConsumeBangGong { get{ return m_MemConsumeBangGong;}}

private int m_MemMaxTimesOneDay;
 public int MemMaxTimesOneDay { get{ return m_MemMaxTimesOneDay;}}

private int m_MemMisRoundNumOnce;
 public int MemMisRoundNumOnce { get{ return m_MemMisRoundNumOnce;}}

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
 Tab_GuildMissionGuild _values = new Tab_GuildMissionGuild();
 _values.m_AwardFactor =  Convert.ToSingle(valuesList[(int)_ID.ID_AWARDFACTOR] as string );
_values.m_CanAcceptTimesOnce =  Convert.ToInt32(valuesList[(int)_ID.ID_CANACCEPTTIMESONCE] as string);
_values.m_CanAssignTime =  Convert.ToInt32(valuesList[(int)_ID.ID_CANASSIGNTIME] as string);
_values.m_ConsumeWealth =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMEWEALTH] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MemConsumeBangGong =  Convert.ToInt32(valuesList[(int)_ID.ID_MEMCONSUMEBANGGONG] as string);
_values.m_MemMaxTimesOneDay =  Convert.ToInt32(valuesList[(int)_ID.ID_MEMMAXTIMESONEDAY] as string);
_values.m_MemMisRoundNumOnce =  Convert.ToInt32(valuesList[(int)_ID.ID_MEMMISROUNDNUMONCE] as string);

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

