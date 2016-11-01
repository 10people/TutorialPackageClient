//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PaoHuanMission
{ private const string TAB_FILE_DATA = "Tables/PaoHuanMission.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_GROUPNUM=2,
ID_MINLEVELLIMIT,
ID_MAXLEVELLIMIT,
ID_MISSIONID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_GroupNum;
 public int GroupNum { get{ return m_GroupNum;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MaxLevelLimit;
 public int MaxLevelLimit { get{ return m_MaxLevelLimit;}}

private int m_MinLevelLimit;
 public int MinLevelLimit { get{ return m_MinLevelLimit;}}

private int m_MissionID;
 public int MissionID { get{ return m_MissionID;}}

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
 Tab_PaoHuanMission _values = new Tab_PaoHuanMission();
 _values.m_GroupNum =  Convert.ToInt32(valuesList[(int)_ID.ID_GROUPNUM] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MaxLevelLimit =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXLEVELLIMIT] as string);
_values.m_MinLevelLimit =  Convert.ToInt32(valuesList[(int)_ID.ID_MINLEVELLIMIT] as string);
_values.m_MissionID =  Convert.ToInt32(valuesList[(int)_ID.ID_MISSIONID] as string);

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

