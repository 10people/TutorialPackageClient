//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StoryCopySceneFlow
{ private const string TAB_FILE_DATA = "Tables/StoryCopySceneFlow.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SECTIONNUM=2,
ID_STARTPOSX1,
ID_STARTPOSZ1,
ID_STARTDIR1,
ID_TRIGGER1,
ID_GUIDEPOSEX1,
ID_GUIDEPOSEZ1,
ID_ENEMYNPCBORNDELAY1,
ID_DYNAMICOBSTACLEOPEN1,
ID_DYNAMICOBSTACLECLOSE1,
ID_STARTCUTSCENEID1,
ID_FINISHCUTSCENEID1,
ID_STARTPOSX2,
ID_STARTPOSZ2,
ID_STARTDIR2,
ID_TRIGGER2,
ID_GUIDEPOSEX2,
ID_GUIDEPOSEZ2,
ID_ENEMYNPCBORNDELAY2,
ID_DYNAMICOBSTACLEOPEN2,
ID_DYNAMICOBSTACLECLOSE2,
ID_STARTCUTSCENEID2,
ID_FINISHCUTSCENEID2,
ID_STARTPOSX3,
ID_STARTPOSZ3,
ID_STARTDIR3,
ID_TRIGGER3,
ID_GUIDEPOSEX3,
ID_GUIDEPOSEZ3,
ID_ENEMYNPCBORNDELAY3,
ID_DYNAMICOBSTACLEOPEN3,
ID_DYNAMICOBSTACLECLOSE3,
ID_STARTCUTSCENEID3,
ID_FINISHCUTSCENEID3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getDynamicObstacleCloseCount() { return 3; } 
 private int[] m_DynamicObstacleClose = new int[3];
 public int GetDynamicObstacleClosebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_DynamicObstacleClose[idx];
 return -1;
 }

public int getDynamicObstacleOpenCount() { return 3; } 
 private int[] m_DynamicObstacleOpen = new int[3];
 public int GetDynamicObstacleOpenbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_DynamicObstacleOpen[idx];
 return -1;
 }

public int getEnemyNPCBornDelayCount() { return 3; } 
 private int[] m_EnemyNPCBornDelay = new int[3];
 public int GetEnemyNPCBornDelaybyIndex(int idx) {
 if(idx>=0 && idx<3) return m_EnemyNPCBornDelay[idx];
 return -1;
 }

public int getFinishCutSceneIDCount() { return 3; } 
 private int[] m_FinishCutSceneID = new int[3];
 public int GetFinishCutSceneIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_FinishCutSceneID[idx];
 return -1;
 }

public int getGuidePoseXCount() { return 3; } 
 private float[] m_GuidePoseX = new float[3];
 public float GetGuidePoseXbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_GuidePoseX[idx];
 return 0.0f;
 }

public int getGuidePoseZCount() { return 3; } 
 private float[] m_GuidePoseZ = new float[3];
 public float GetGuidePoseZbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_GuidePoseZ[idx];
 return 0.0f;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_SectionNum;
 public int SectionNum { get{ return m_SectionNum;}}

public int getStartCutSceneIDCount() { return 3; } 
 private int[] m_StartCutSceneID = new int[3];
 public int GetStartCutSceneIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_StartCutSceneID[idx];
 return -1;
 }

public int getStartDirCount() { return 3; } 
 private float[] m_StartDir = new float[3];
 public float GetStartDirbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_StartDir[idx];
 return 0.0f;
 }

public int getStartPosXCount() { return 3; } 
 private float[] m_StartPosX = new float[3];
 public float GetStartPosXbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_StartPosX[idx];
 return 0.0f;
 }

public int getStartPosZCount() { return 3; } 
 private float[] m_StartPosZ = new float[3];
 public float GetStartPosZbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_StartPosZ[idx];
 return 0.0f;
 }

public int getTriggerCount() { return 3; } 
 private int[] m_Trigger = new int[3];
 public int GetTriggerbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_Trigger[idx];
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
 Tab_StoryCopySceneFlow _values = new Tab_StoryCopySceneFlow();
 _values.m_DynamicObstacleClose [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DYNAMICOBSTACLECLOSE1] as string);
_values.m_DynamicObstacleClose [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DYNAMICOBSTACLECLOSE2] as string);
_values.m_DynamicObstacleClose [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DYNAMICOBSTACLECLOSE3] as string);
_values.m_DynamicObstacleOpen [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DYNAMICOBSTACLEOPEN1] as string);
_values.m_DynamicObstacleOpen [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DYNAMICOBSTACLEOPEN2] as string);
_values.m_DynamicObstacleOpen [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DYNAMICOBSTACLEOPEN3] as string);
_values.m_EnemyNPCBornDelay [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ENEMYNPCBORNDELAY1] as string);
_values.m_EnemyNPCBornDelay [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ENEMYNPCBORNDELAY2] as string);
_values.m_EnemyNPCBornDelay [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ENEMYNPCBORNDELAY3] as string);
_values.m_FinishCutSceneID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_FINISHCUTSCENEID1] as string);
_values.m_FinishCutSceneID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_FINISHCUTSCENEID2] as string);
_values.m_FinishCutSceneID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_FINISHCUTSCENEID3] as string);
_values.m_GuidePoseX [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_GUIDEPOSEX1] as string );
_values.m_GuidePoseX [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_GUIDEPOSEX2] as string );
_values.m_GuidePoseX [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_GUIDEPOSEX3] as string );
_values.m_GuidePoseZ [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_GUIDEPOSEZ1] as string );
_values.m_GuidePoseZ [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_GUIDEPOSEZ2] as string );
_values.m_GuidePoseZ [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_GUIDEPOSEZ3] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_SectionNum =  Convert.ToInt32(valuesList[(int)_ID.ID_SECTIONNUM] as string);
_values.m_StartCutSceneID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTCUTSCENEID1] as string);
_values.m_StartCutSceneID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTCUTSCENEID2] as string);
_values.m_StartCutSceneID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTCUTSCENEID3] as string);
_values.m_StartDir [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTDIR1] as string );
_values.m_StartDir [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTDIR2] as string );
_values.m_StartDir [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTDIR3] as string );
_values.m_StartPosX [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTPOSX1] as string );
_values.m_StartPosX [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTPOSX2] as string );
_values.m_StartPosX [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTPOSX3] as string );
_values.m_StartPosZ [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTPOSZ1] as string );
_values.m_StartPosZ [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTPOSZ2] as string );
_values.m_StartPosZ [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_STARTPOSZ3] as string );
_values.m_Trigger [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TRIGGER1] as string);
_values.m_Trigger [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TRIGGER2] as string);
_values.m_Trigger [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TRIGGER3] as string);

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

