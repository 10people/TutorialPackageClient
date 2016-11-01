//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionKillMonster
{ private const string TAB_FILE_DATA = "Tables/MissionKillMonster.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_MONSTERNAME=2,
ID_MONSTERDATAID,
ID_MONSTERCOUNT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_MonsterCount;
 public int MonsterCount { get{ return m_MonsterCount;}}

private int m_MonsterDataID;
 public int MonsterDataID { get{ return m_MonsterDataID;}}

private string m_MonsterName;
 public string MonsterName { get{ return m_MonsterName;}}

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
 Tab_MissionKillMonster _values = new Tab_MissionKillMonster();
 _values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_MonsterCount =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERCOUNT] as string);
_values.m_MonsterDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERDATAID] as string);
_values.m_MonsterName =  valuesList[(int)_ID.ID_MONSTERNAME] as string;

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

