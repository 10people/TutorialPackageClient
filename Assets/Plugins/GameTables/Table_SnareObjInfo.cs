//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SnareObjInfo
{ private const string TAB_FILE_DATA = "Tables/SnareObjInfo.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CHARMODELID=2,
ID_STEALTHLEV,
ID_ISOWNERCANSEE,
ID_ISACTIVATECANSEE,
ID_ISDELOWNERLEAVE,
ID_ALIVEEFFECTID1,
ID_ALIVEEFFECTID2,
ID_ALIVEEFFECTID3,
ID_ALIVESOUNDID1,
ID_ALIVESOUNDID2,
ID_ALIVESOUNDID3,
ID_ACTIVATEEFFECTID,
ID_ACTIVATESOUND,
ID_DEADEFFECTID,
ID_DEADSOUND,
ID_LIFETIME,
ID_DELAYTIME,
ID_ACTIVATEMODEL,
ID_ACTIVATERADIUS,
ID_TARGETTYPE,
ID_BUFFINDEX1,
ID_BUFFINDEX2,
ID_BUFFINDEX3,
ID_BUFFINDEX4,
ID_BUFFINDEX5,
ID_BUFFINDEX6,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ActivateEffectId;
 public int ActivateEffectId { get{ return m_ActivateEffectId;}}

private int m_ActivateModel;
 public int ActivateModel { get{ return m_ActivateModel;}}

private int m_ActivateRadius;
 public int ActivateRadius { get{ return m_ActivateRadius;}}

private int m_ActivateSound;
 public int ActivateSound { get{ return m_ActivateSound;}}

public int getAliveEffectIdCount() { return 3; } 
 private int[] m_AliveEffectId = new int[3];
 public int GetAliveEffectIdbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AliveEffectId[idx];
 return -1;
 }

public int getAliveSoundIdCount() { return 3; } 
 private int[] m_AliveSoundId = new int[3];
 public int GetAliveSoundIdbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AliveSoundId[idx];
 return -1;
 }

public int getBUffIndexCount() { return 6; } 
 private int[] m_BUffIndex = new int[6];
 public int GetBUffIndexbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_BUffIndex[idx];
 return -1;
 }

private int m_CharModelId;
 public int CharModelId { get{ return m_CharModelId;}}

private int m_DeadEffectId;
 public int DeadEffectId { get{ return m_DeadEffectId;}}

private int m_DeadSound;
 public int DeadSound { get{ return m_DeadSound;}}

private int m_DelayTime;
 public int DelayTime { get{ return m_DelayTime;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsActivateCanSee;
 public int IsActivateCanSee { get{ return m_IsActivateCanSee;}}

private int m_IsDelOwnerLeave;
 public int IsDelOwnerLeave { get{ return m_IsDelOwnerLeave;}}

private int m_IsOwnerCanSee;
 public int IsOwnerCanSee { get{ return m_IsOwnerCanSee;}}

private int m_LifeTime;
 public int LifeTime { get{ return m_LifeTime;}}

private int m_StealthLev;
 public int StealthLev { get{ return m_StealthLev;}}

private int m_TargetType;
 public int TargetType { get{ return m_TargetType;}}

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
 Tab_SnareObjInfo _values = new Tab_SnareObjInfo();
 _values.m_ActivateEffectId =  Convert.ToInt32(valuesList[(int)_ID.ID_ACTIVATEEFFECTID] as string);
_values.m_ActivateModel =  Convert.ToInt32(valuesList[(int)_ID.ID_ACTIVATEMODEL] as string);
_values.m_ActivateRadius =  Convert.ToInt32(valuesList[(int)_ID.ID_ACTIVATERADIUS] as string);
_values.m_ActivateSound =  Convert.ToInt32(valuesList[(int)_ID.ID_ACTIVATESOUND] as string);
_values.m_AliveEffectId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ALIVEEFFECTID1] as string);
_values.m_AliveEffectId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ALIVEEFFECTID2] as string);
_values.m_AliveEffectId [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ALIVEEFFECTID3] as string);
_values.m_AliveSoundId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ALIVESOUNDID1] as string);
_values.m_AliveSoundId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ALIVESOUNDID2] as string);
_values.m_AliveSoundId [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ALIVESOUNDID3] as string);
_values.m_BUffIndex [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFINDEX1] as string);
_values.m_BUffIndex [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFINDEX2] as string);
_values.m_BUffIndex [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFINDEX3] as string);
_values.m_BUffIndex [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFINDEX4] as string);
_values.m_BUffIndex [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFINDEX5] as string);
_values.m_BUffIndex [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFINDEX6] as string);
_values.m_CharModelId =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID] as string);
_values.m_DeadEffectId =  Convert.ToInt32(valuesList[(int)_ID.ID_DEADEFFECTID] as string);
_values.m_DeadSound =  Convert.ToInt32(valuesList[(int)_ID.ID_DEADSOUND] as string);
_values.m_DelayTime =  Convert.ToInt32(valuesList[(int)_ID.ID_DELAYTIME] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsActivateCanSee =  Convert.ToInt32(valuesList[(int)_ID.ID_ISACTIVATECANSEE] as string);
_values.m_IsDelOwnerLeave =  Convert.ToInt32(valuesList[(int)_ID.ID_ISDELOWNERLEAVE] as string);
_values.m_IsOwnerCanSee =  Convert.ToInt32(valuesList[(int)_ID.ID_ISOWNERCANSEE] as string);
_values.m_LifeTime =  Convert.ToInt32(valuesList[(int)_ID.ID_LIFETIME] as string);
_values.m_StealthLev =  Convert.ToInt32(valuesList[(int)_ID.ID_STEALTHLEV] as string);
_values.m_TargetType =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE] as string);

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

