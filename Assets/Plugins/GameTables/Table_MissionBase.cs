//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionBase
{ private const string TAB_FILE_DATA = "Tables/MissionBase.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_LIMITID=2,
ID_BONUSID,
ID_MISSIONTYPE,
ID_LOGICTYPE,
ID_LOGICID,
ID_SCRIPTID,
ID_NEXTMISSIONID,
ID_ACCEPTDATAID,
ID_COMPLETEDATAID,
ID_DALITYMISSIONTABID,
ID_GUILDMISSIONTABID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AcceptDataID;
 public int AcceptDataID { get{ return m_AcceptDataID;}}

private int m_BonusID;
 public int BonusID { get{ return m_BonusID;}}

private int m_CompleteDataID;
 public int CompleteDataID { get{ return m_CompleteDataID;}}

private int m_DalityMissionTabID;
 public int DalityMissionTabID { get{ return m_DalityMissionTabID;}}

private int m_GuildMissionTabID;
 public int GuildMissionTabID { get{ return m_GuildMissionTabID;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_LimitID;
 public int LimitID { get{ return m_LimitID;}}

private int m_LogicID;
 public int LogicID { get{ return m_LogicID;}}

private int m_LogicType;
 public int LogicType { get{ return m_LogicType;}}

private int m_MissionType;
 public int MissionType { get{ return m_MissionType;}}

private int m_NextMissionID;
 public int NextMissionID { get{ return m_NextMissionID;}}

private int m_ScriptID;
 public int ScriptID { get{ return m_ScriptID;}}

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
 Tab_MissionBase _values = new Tab_MissionBase();
 _values.m_AcceptDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_ACCEPTDATAID] as string);
_values.m_BonusID =  Convert.ToInt32(valuesList[(int)_ID.ID_BONUSID] as string);
_values.m_CompleteDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_COMPLETEDATAID] as string);
_values.m_DalityMissionTabID =  Convert.ToInt32(valuesList[(int)_ID.ID_DALITYMISSIONTABID] as string);
_values.m_GuildMissionTabID =  Convert.ToInt32(valuesList[(int)_ID.ID_GUILDMISSIONTABID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LimitID =  Convert.ToInt32(valuesList[(int)_ID.ID_LIMITID] as string);
_values.m_LogicID =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICID] as string);
_values.m_LogicType =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICTYPE] as string);
_values.m_MissionType =  Convert.ToInt32(valuesList[(int)_ID.ID_MISSIONTYPE] as string);
_values.m_NextMissionID =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTMISSIONID] as string);
_values.m_ScriptID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCRIPTID] as string);

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

