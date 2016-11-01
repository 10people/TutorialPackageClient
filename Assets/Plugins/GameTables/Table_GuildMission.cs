//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GuildMission
{ private const string TAB_FILE_DATA = "Tables/GuildMission.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_TYPE,
ID_MINILEVEL,
ID_MAXLEVEL,
ID_WEIGHT,
ID_MISSIONID,
ID_AWARDMONEY,
ID_AWARDEXP,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AwardExp;
 public int AwardExp { get{ return m_AwardExp;}}

private int m_AwardMoney;
 public int AwardMoney { get{ return m_AwardMoney;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MaxLevel;
 public int MaxLevel { get{ return m_MaxLevel;}}

private int m_MiniLevel;
 public int MiniLevel { get{ return m_MiniLevel;}}

private int m_MissionID;
 public int MissionID { get{ return m_MissionID;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_Type;
 public int Type { get{ return m_Type;}}

private int m_Weight;
 public int Weight { get{ return m_Weight;}}

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
 Tab_GuildMission _values = new Tab_GuildMission();
 _values.m_AwardExp =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDEXP] as string);
_values.m_AwardMoney =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDMONEY] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MaxLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXLEVEL] as string);
_values.m_MiniLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_MINILEVEL] as string);
_values.m_MissionID =  Convert.ToInt32(valuesList[(int)_ID.ID_MISSIONID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);
_values.m_Weight =  Convert.ToInt32(valuesList[(int)_ID.ID_WEIGHT] as string);

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

