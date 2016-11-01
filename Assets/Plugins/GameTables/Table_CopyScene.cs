//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CopyScene
{ private const string TAB_FILE_DATA = "Tables/CopyScene.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_DESCINFO,
ID_SCRIPTID,
ID_PLAYERSDEMANDMIN,
ID_PLAYERSDEMANDMAX,
ID_WAITTIME,
ID_HEARTBEATTIME,
ID_RULE1,
ID_RULE2,
ID_RULE3,
ID_RULETEAM1,
ID_RULETEAM2,
ID_RULETEAM3,
ID_EXISTTIME,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_DescInfo;
 public string DescInfo { get{ return m_DescInfo;}}

private int m_ExistTime;
 public int ExistTime { get{ return m_ExistTime;}}

private int m_HeartbeatTime;
 public int HeartbeatTime { get{ return m_HeartbeatTime;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_PlayersDemandMax;
 public int PlayersDemandMax { get{ return m_PlayersDemandMax;}}

private int m_PlayersDemandMin;
 public int PlayersDemandMin { get{ return m_PlayersDemandMin;}}

public int getRuleCount() { return 3; } 
 private int[] m_Rule = new int[3];
 public int GetRulebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_Rule[idx];
 return -1;
 }

public int getRuleTeamCount() { return 3; } 
 private int[] m_RuleTeam = new int[3];
 public int GetRuleTeambyIndex(int idx) {
 if(idx>=0 && idx<3) return m_RuleTeam[idx];
 return -1;
 }

private int m_ScriptID;
 public int ScriptID { get{ return m_ScriptID;}}

private int m_WaitTime;
 public int WaitTime { get{ return m_WaitTime;}}

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
 Tab_CopyScene _values = new Tab_CopyScene();
 _values.m_DescInfo =  valuesList[(int)_ID.ID_DESCINFO] as string;
_values.m_ExistTime =  Convert.ToInt32(valuesList[(int)_ID.ID_EXISTTIME] as string);
_values.m_HeartbeatTime =  Convert.ToInt32(valuesList[(int)_ID.ID_HEARTBEATTIME] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_PlayersDemandMax =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYERSDEMANDMAX] as string);
_values.m_PlayersDemandMin =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYERSDEMANDMIN] as string);
_values.m_Rule [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RULE1] as string);
_values.m_Rule [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RULE2] as string);
_values.m_Rule [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RULE3] as string);
_values.m_RuleTeam [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RULETEAM1] as string);
_values.m_RuleTeam [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RULETEAM2] as string);
_values.m_RuleTeam [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RULETEAM3] as string);
_values.m_ScriptID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCRIPTID] as string);
_values.m_WaitTime =  Convert.ToInt32(valuesList[(int)_ID.ID_WAITTIME] as string);

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

