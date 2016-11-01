//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionDictionary
{ private const string TAB_FILE_DATA = "Tables/MissionDictionary.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_MISSIONNAME=2,
ID_MISSIONDESC,
ID_MISSIONDONEDESC,
ID_FOLLOWTEXT,
ID_TARGETNPCPOSX,
ID_TARGETNPCPOSZ,
ID_TARGETNPCSCENEID,
ID_TARGETNPCDATAID,
ID_ACCEPTENPCPOSX,
ID_ACCEPTENPCPOSZ,
ID_ACCEPTENPCSCENEID,
ID_ACCEPTNPCDATAID,
ID_COMPLETENPCPOSX,
ID_COMPLETENPCPOSZ,
ID_COMPLETENPCSCENEID,
ID_COMPLETENPCDATAID,
ID_ISACCEPTAUTOFINDPATH,
ID_ACCEPTTALKID,
ID_MISSIONICON,
ID_ISDIFFICULT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AcceptNpcDataID;
 public int AcceptNpcDataID { get{ return m_AcceptNpcDataID;}}

private int m_AcceptTalkID;
 public int AcceptTalkID { get{ return m_AcceptTalkID;}}

private float m_AccepteNpcPosX;
 public float AccepteNpcPosX { get{ return m_AccepteNpcPosX;}}

private float m_AccepteNpcPosZ;
 public float AccepteNpcPosZ { get{ return m_AccepteNpcPosZ;}}

private int m_AccepteNpcSceneID;
 public int AccepteNpcSceneID { get{ return m_AccepteNpcSceneID;}}

private int m_CompleteNpcDataID;
 public int CompleteNpcDataID { get{ return m_CompleteNpcDataID;}}

private float m_CompleteNpcPosX;
 public float CompleteNpcPosX { get{ return m_CompleteNpcPosX;}}

private float m_CompleteNpcPosZ;
 public float CompleteNpcPosZ { get{ return m_CompleteNpcPosZ;}}

private int m_CompleteNpcSceneID;
 public int CompleteNpcSceneID { get{ return m_CompleteNpcSceneID;}}

private string m_FollowText;
 public string FollowText { get{ return m_FollowText;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private bool m_IsAcceptAutoFindPath;
 public bool IsAcceptAutoFindPath { get{ return m_IsAcceptAutoFindPath;}}

private bool m_IsDifficult;
 public bool IsDifficult { get{ return m_IsDifficult;}}

private string m_MissionDesc;
 public string MissionDesc { get{ return m_MissionDesc;}}

private string m_MissionDoneDesc;
 public string MissionDoneDesc { get{ return m_MissionDoneDesc;}}

private string m_MissionIcon;
 public string MissionIcon { get{ return m_MissionIcon;}}

private string m_MissionName;
 public string MissionName { get{ return m_MissionName;}}

private int m_TargetNpcDataID;
 public int TargetNpcDataID { get{ return m_TargetNpcDataID;}}

private float m_TargetNpcPosX;
 public float TargetNpcPosX { get{ return m_TargetNpcPosX;}}

private float m_TargetNpcPosZ;
 public float TargetNpcPosZ { get{ return m_TargetNpcPosZ;}}

private int m_TargetNpcSceneID;
 public int TargetNpcSceneID { get{ return m_TargetNpcSceneID;}}

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
 Tab_MissionDictionary _values = new Tab_MissionDictionary();
 _values.m_AcceptNpcDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_ACCEPTNPCDATAID] as string);
_values.m_AcceptTalkID =  Convert.ToInt32(valuesList[(int)_ID.ID_ACCEPTTALKID] as string);
_values.m_AccepteNpcPosX =  Convert.ToSingle(valuesList[(int)_ID.ID_ACCEPTENPCPOSX] as string );
_values.m_AccepteNpcPosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_ACCEPTENPCPOSZ] as string );
_values.m_AccepteNpcSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_ACCEPTENPCSCENEID] as string);
_values.m_CompleteNpcDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_COMPLETENPCDATAID] as string);
_values.m_CompleteNpcPosX =  Convert.ToSingle(valuesList[(int)_ID.ID_COMPLETENPCPOSX] as string );
_values.m_CompleteNpcPosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_COMPLETENPCPOSZ] as string );
_values.m_CompleteNpcSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_COMPLETENPCSCENEID] as string);
_values.m_FollowText =  valuesList[(int)_ID.ID_FOLLOWTEXT] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsAcceptAutoFindPath =  Convert.ToInt16(valuesList[(int)_ID.ID_ISACCEPTAUTOFINDPATH] as string) != 0;
_values.m_IsDifficult =  Convert.ToInt16(valuesList[(int)_ID.ID_ISDIFFICULT] as string) != 0;
_values.m_MissionDesc =  valuesList[(int)_ID.ID_MISSIONDESC] as string;
_values.m_MissionDoneDesc =  valuesList[(int)_ID.ID_MISSIONDONEDESC] as string;
_values.m_MissionIcon =  valuesList[(int)_ID.ID_MISSIONICON] as string;
_values.m_MissionName =  valuesList[(int)_ID.ID_MISSIONNAME] as string;
_values.m_TargetNpcDataID =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETNPCDATAID] as string);
_values.m_TargetNpcPosX =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETNPCPOSX] as string );
_values.m_TargetNpcPosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETNPCPOSZ] as string );
_values.m_TargetNpcSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETNPCSCENEID] as string);

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

