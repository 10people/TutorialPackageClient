//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ClientStoryTable
{ private const string TAB_FILE_DATA = "Tables/ClientStoryTable.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TARGETPOSX=2,
ID_TARGETPOSY,
ID_TARGETPOSZ,
ID_TARGETPOSRADIUS,
ID_CAMERAMOVE,
ID_DIALOGTYPE,
ID_SPEAKERID,
ID_SPRITENAME,
ID_STORY,
ID_NEXTPAGETIME,
ID_SENDMSGONOVER,
ID_PAUSEONOVER,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_CameraMove;
 public int CameraMove { get{ return m_CameraMove;}}

private int m_DialogType;
 public int DialogType { get{ return m_DialogType;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private float m_NextPageTime;
 public float NextPageTime { get{ return m_NextPageTime;}}

private int m_PauseOnOver;
 public int PauseOnOver { get{ return m_PauseOnOver;}}

private int m_SendMsgOnOver;
 public int SendMsgOnOver { get{ return m_SendMsgOnOver;}}

private int m_SpeakerID;
 public int SpeakerID { get{ return m_SpeakerID;}}

private string m_SpriteName;
 public string SpriteName { get{ return m_SpriteName;}}

private string m_Story;
 public string Story { get{ return m_Story;}}

private float m_TargetPosRadius;
 public float TargetPosRadius { get{ return m_TargetPosRadius;}}

private float m_TargetPosX;
 public float TargetPosX { get{ return m_TargetPosX;}}

private float m_TargetPosY;
 public float TargetPosY { get{ return m_TargetPosY;}}

private float m_TargetPosZ;
 public float TargetPosZ { get{ return m_TargetPosZ;}}

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
 Tab_ClientStoryTable _values = new Tab_ClientStoryTable();
 _values.m_CameraMove =  Convert.ToInt32(valuesList[(int)_ID.ID_CAMERAMOVE] as string);
_values.m_DialogType =  Convert.ToInt32(valuesList[(int)_ID.ID_DIALOGTYPE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_NextPageTime =  Convert.ToSingle(valuesList[(int)_ID.ID_NEXTPAGETIME] as string );
_values.m_PauseOnOver =  Convert.ToInt32(valuesList[(int)_ID.ID_PAUSEONOVER] as string);
_values.m_SendMsgOnOver =  Convert.ToInt32(valuesList[(int)_ID.ID_SENDMSGONOVER] as string);
_values.m_SpeakerID =  Convert.ToInt32(valuesList[(int)_ID.ID_SPEAKERID] as string);
_values.m_SpriteName =  valuesList[(int)_ID.ID_SPRITENAME] as string;
_values.m_Story =  valuesList[(int)_ID.ID_STORY] as string;
_values.m_TargetPosRadius =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSRADIUS] as string );
_values.m_TargetPosX =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX] as string );
_values.m_TargetPosY =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSY] as string );
_values.m_TargetPosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSZ] as string );

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

