//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SkillEx
{ private const string TAB_FILE_DATA = "Tables/SkillEx.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_SKILLEXID,
ID_BASEID=2,
ID_SKILLDESC,
ID_LEVEL,
ID_COMBATVALUE,
ID_SKILLLOGIC,
ID_LOGICPARAM01,
ID_LOGICPARAM02,
ID_LOGICPARAM03,
ID_LOGICPARAM04,
ID_REFIXTHREAT,
ID_RADIUS,
ID_CDTIMEID,
ID_SKILLDELAYTIME,
ID_SKILLCONTINUETIME,
ID_YINCHANGTIME,
ID_DELTYPE_01,
ID_DELNUM_01,
ID_DELTYPE_02,
ID_DELNUM_02,
ID_GAINSTYPE_01,
ID_GAINSNUM_01,
ID_GAINSTYPE_02,
ID_GAINSNUM_02,
ID_NEXTSKILLID,
ID_IMPACT_01,
ID_IMPACT_2,
ID_IMPACT_03,
ID_IMPACT_04,
ID_IMPACT_05,
ID_IMPACT_06,
ID_SATRTMOTIONID,
ID_ENDMOTIONID,
ID_CAMERAROCKID,
ID_CAMERAROCKRATE,
ID_SCENEEFFECTID,
ID_BULLETEFFECTID_01,
ID_BULLETEFFECTID_02,
ID_BULLETEFFECTID_03,
ID_RANGEEFFECTTYPE,
ID_RANGEEFFECTTARTYPE,
ID_RANGEEFFECTSIZE01,
ID_RANGEEFFECTSIZE02,
ID_NEXTSKILLEFFECTTIME,
ID_NEXTSKILLDISABLEDTIME,
ID_SKILLCACHETIME,
ID_HASRANGEWARNING,
ID_NEXTCONTINUESKILLID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BaseId;
 public int BaseId { get{ return m_BaseId;}}

public int getBulletEffectIDCount() { return 3; } 
 private int[] m_BulletEffectID = new int[3];
 public int GetBulletEffectIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_BulletEffectID[idx];
 return -1;
 }

private int m_CDTimeId;
 public int CDTimeId { get{ return m_CDTimeId;}}

private int m_CameraRockId;
 public int CameraRockId { get{ return m_CameraRockId;}}

private int m_CameraRockRate;
 public int CameraRockRate { get{ return m_CameraRockRate;}}

private int m_CombatValue;
 public int CombatValue { get{ return m_CombatValue;}}

public int getDelNumCount() { return 2; } 
 private int[] m_DelNum = new int[2];
 public int GetDelNumbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_DelNum[idx];
 return -1;
 }

public int getDelTypeCount() { return 2; } 
 private int[] m_DelType = new int[2];
 public int GetDelTypebyIndex(int idx) {
 if(idx>=0 && idx<2) return m_DelType[idx];
 return -1;
 }

private int m_EndMotionId;
 public int EndMotionId { get{ return m_EndMotionId;}}

public int getGainsNumCount() { return 2; } 
 private int[] m_GainsNum = new int[2];
 public int GetGainsNumbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_GainsNum[idx];
 return -1;
 }

public int getGainsTypeCount() { return 2; } 
 private int[] m_GainsType = new int[2];
 public int GetGainsTypebyIndex(int idx) {
 if(idx>=0 && idx<2) return m_GainsType[idx];
 return -1;
 }

private int m_HasRangeWarning;
 public int HasRangeWarning { get{ return m_HasRangeWarning;}}

public int getImpactCount() { return 6; } 
 private int[] m_Impact = new int[6];
 public int GetImpactbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_Impact[idx];
 return -1;
 }

public int getLogicParamCount() { return 4; } 
 private int[] m_LogicParam = new int[4];
 public int GetLogicParambyIndex(int idx) {
 if(idx>=0 && idx<4) return m_LogicParam[idx];
 return -1;
 }

private int m_NextContinueSkillId;
 public int NextContinueSkillId { get{ return m_NextContinueSkillId;}}

private int m_NextSkillDisabledTime;
 public int NextSkillDisabledTime { get{ return m_NextSkillDisabledTime;}}

private int m_NextSkillEffectTime;
 public int NextSkillEffectTime { get{ return m_NextSkillEffectTime;}}

private int m_NextSkillId;
 public int NextSkillId { get{ return m_NextSkillId;}}

private float m_Radius;
 public float Radius { get{ return m_Radius;}}

public int getRangeEffectSizeCount() { return 2; } 
 private float[] m_RangeEffectSize = new float[2];
 public float GetRangeEffectSizebyIndex(int idx) {
 if(idx>=0 && idx<2) return m_RangeEffectSize[idx];
 return 0.0f;
 }

private int m_RangeEffectTarType;
 public int RangeEffectTarType { get{ return m_RangeEffectTarType;}}

private int m_RangeEffectType;
 public int RangeEffectType { get{ return m_RangeEffectType;}}

private int m_RefixThreat;
 public int RefixThreat { get{ return m_RefixThreat;}}

private int m_SatrtMotionId;
 public int SatrtMotionId { get{ return m_SatrtMotionId;}}

private int m_SceneEffectId;
 public int SceneEffectId { get{ return m_SceneEffectId;}}

private int m_SkillCacheTime;
 public int SkillCacheTime { get{ return m_SkillCacheTime;}}

private int m_SkillContinueTime;
 public int SkillContinueTime { get{ return m_SkillContinueTime;}}

private int m_SkillDelayTime;
 public int SkillDelayTime { get{ return m_SkillDelayTime;}}

private string m_SkillDesc;
 public string SkillDesc { get{ return m_SkillDesc;}}

private int m_SkillExID;
 public int SkillExID { get{ return m_SkillExID;}}

private int m_SkillLogic;
 public int SkillLogic { get{ return m_SkillLogic;}}

private int m_YinChangTime;
 public int YinChangTime { get{ return m_YinChangTime;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

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
 Tab_SkillEx _values = new Tab_SkillEx();
 _values.m_BaseId =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEID] as string);
_values.m_BulletEffectID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BULLETEFFECTID_01] as string);
_values.m_BulletEffectID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BULLETEFFECTID_02] as string);
_values.m_BulletEffectID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BULLETEFFECTID_03] as string);
_values.m_CDTimeId =  Convert.ToInt32(valuesList[(int)_ID.ID_CDTIMEID] as string);
_values.m_CameraRockId =  Convert.ToInt32(valuesList[(int)_ID.ID_CAMERAROCKID] as string);
_values.m_CameraRockRate =  Convert.ToInt32(valuesList[(int)_ID.ID_CAMERAROCKRATE] as string);
_values.m_CombatValue =  Convert.ToInt32(valuesList[(int)_ID.ID_COMBATVALUE] as string);
_values.m_DelNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DELNUM_01] as string);
_values.m_DelNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DELNUM_02] as string);
_values.m_DelType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DELTYPE_01] as string);
_values.m_DelType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DELTYPE_02] as string);
_values.m_EndMotionId =  Convert.ToInt32(valuesList[(int)_ID.ID_ENDMOTIONID] as string);
_values.m_GainsNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GAINSNUM_01] as string);
_values.m_GainsNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GAINSNUM_02] as string);
_values.m_GainsType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GAINSTYPE_01] as string);
_values.m_GainsType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GAINSTYPE_02] as string);
_values.m_HasRangeWarning =  Convert.ToInt32(valuesList[(int)_ID.ID_HASRANGEWARNING] as string);
_values.m_Impact [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACT_01] as string);
_values.m_Impact [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACT_2] as string);
_values.m_Impact [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACT_03] as string);
_values.m_Impact [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACT_04] as string);
_values.m_Impact [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACT_05] as string);
_values.m_Impact [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACT_06] as string);
_values.m_LogicParam [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICPARAM01] as string);
_values.m_LogicParam [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICPARAM02] as string);
_values.m_LogicParam [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICPARAM03] as string);
_values.m_LogicParam [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICPARAM04] as string);
_values.m_NextContinueSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTCONTINUESKILLID] as string);
_values.m_NextSkillDisabledTime =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLDISABLEDTIME] as string);
_values.m_NextSkillEffectTime =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLEFFECTTIME] as string);
_values.m_NextSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLID] as string);
_values.m_Radius =  Convert.ToSingle(valuesList[(int)_ID.ID_RADIUS] as string );
_values.m_RangeEffectSize [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RANGEEFFECTSIZE01] as string );
_values.m_RangeEffectSize [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_RANGEEFFECTSIZE02] as string );
_values.m_RangeEffectTarType =  Convert.ToInt32(valuesList[(int)_ID.ID_RANGEEFFECTTARTYPE] as string);
_values.m_RangeEffectType =  Convert.ToInt32(valuesList[(int)_ID.ID_RANGEEFFECTTYPE] as string);
_values.m_RefixThreat =  Convert.ToInt32(valuesList[(int)_ID.ID_REFIXTHREAT] as string);
_values.m_SatrtMotionId =  Convert.ToInt32(valuesList[(int)_ID.ID_SATRTMOTIONID] as string);
_values.m_SceneEffectId =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEEFFECTID] as string);
_values.m_SkillCacheTime =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLCACHETIME] as string);
_values.m_SkillContinueTime =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLCONTINUETIME] as string);
_values.m_SkillDelayTime =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLDELAYTIME] as string);
_values.m_SkillDesc =  valuesList[(int)_ID.ID_SKILLDESC] as string;
_values.m_SkillExID =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLEXID] as string);
_values.m_SkillLogic =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLLOGIC] as string);
_values.m_YinChangTime =  Convert.ToInt32(valuesList[(int)_ID.ID_YINCHANGTIME] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);

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

