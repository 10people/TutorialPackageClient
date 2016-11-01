//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionEnterArea
{ private const string TAB_FILE_DATA = "Tables/MissionEnterArea.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TARGETSCENEID1=2,
ID_TARGETPOSX1,
ID_TARGETPOSY1,
ID_TARGETPOSRADIUS1,
ID_PLAYCUTSCENEID1,
ID_TARGETSCENEID2,
ID_TARGETPOSX2,
ID_TARGETPOSY2,
ID_TARGETPOSRADIUS2,
ID_PLAYCUTSCENEID2,
ID_TARGETSCENEID3,
ID_TARGETPOSX3,
ID_TARGETPOSY3,
ID_TARGETPOSRADIUS3,
ID_PLAYCUTSCENEID3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getPlayCutsceneIDCount() { return 3; } 
 private int[] m_PlayCutsceneID = new int[3];
 public int GetPlayCutsceneIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_PlayCutsceneID[idx];
 return -1;
 }

public int getTargetPosRadiusCount() { return 3; } 
 private int[] m_TargetPosRadius = new int[3];
 public int GetTargetPosRadiusbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TargetPosRadius[idx];
 return -1;
 }

public int getTargetPosXCount() { return 3; } 
 private float[] m_TargetPosX = new float[3];
 public float GetTargetPosXbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TargetPosX[idx];
 return 0.0f;
 }

public int getTargetPosYCount() { return 3; } 
 private float[] m_TargetPosY = new float[3];
 public float GetTargetPosYbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TargetPosY[idx];
 return 0.0f;
 }

public int getTargetSceneIDCount() { return 3; } 
 private int[] m_TargetSceneID = new int[3];
 public int GetTargetSceneIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TargetSceneID[idx];
 return -1;
 }

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
 Tab_MissionEnterArea _values = new Tab_MissionEnterArea();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_PlayCutsceneID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYCUTSCENEID1] as string);
_values.m_PlayCutsceneID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYCUTSCENEID2] as string);
_values.m_PlayCutsceneID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYCUTSCENEID3] as string);
_values.m_TargetPosRadius [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETPOSRADIUS1] as string);
_values.m_TargetPosRadius [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETPOSRADIUS2] as string);
_values.m_TargetPosRadius [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETPOSRADIUS3] as string);
_values.m_TargetPosX [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX1] as string );
_values.m_TargetPosX [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX2] as string );
_values.m_TargetPosX [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX3] as string );
_values.m_TargetPosY [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSY1] as string );
_values.m_TargetPosY [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSY2] as string );
_values.m_TargetPosY [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSY3] as string );
_values.m_TargetSceneID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETSCENEID1] as string);
_values.m_TargetSceneID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETSCENEID2] as string);
_values.m_TargetSceneID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETSCENEID3] as string);

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

