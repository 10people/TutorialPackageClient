//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StoryTable
{ private const string TAB_FILE_DATA = "Tables/StoryTable.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SCRIPTID=2,
ID_MISSIONID,
ID_CLIENTSTORYID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ClientStoryID;
 public int ClientStoryID { get{ return m_ClientStoryID;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MissionID;
 public int MissionID { get{ return m_MissionID;}}

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
 Tab_StoryTable _values = new Tab_StoryTable();
 _values.m_ClientStoryID =  Convert.ToInt32(valuesList[(int)_ID.ID_CLIENTSTORYID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MissionID =  Convert.ToInt32(valuesList[(int)_ID.ID_MISSIONID] as string);
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

