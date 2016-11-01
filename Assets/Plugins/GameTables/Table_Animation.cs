//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Animation
{ private const string TAB_FILE_DATA = "Tables/Animation.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ANIMID,
ID_AINMNAME=2,
ID_LAYER,
ID_WRAPMODE,
ID_PLAYMODE,
ID_QUEUEMODE,
ID_SPEED,
ID_TRANSITTIME,
ID_LOOPTIME,
ID_LOOPOVERANIMID,
ID_ISCANBREAK,
ID_STARTEFFECT01,
ID_ISSTARTEFFECTAUTOEND01,
ID_STARTEFFECT02,
ID_ISSTARTEFFECTAUTOEND02,
ID_STARTEFFECT03,
ID_ISSTARTEFFECTAUTOEND03,
ID_STARTEFFECT04,
ID_ISSTARTEFFECTAUTOEND04,
ID_STARTEFFECT05,
ID_ISSTARTEFFECTAUTOEND05,
ID_ENDEFFECT,
ID_ISCALLEND,
ID_NEXTANIMID,
ID_SOUNDID,
ID_SOUNDBREAKKEEP,
ID_DELAYFRAMESPEED,
ID_DELAYFRAMETIME,
ID_DELAYSPEEDTIME,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_AinmName;
 public string AinmName { get{ return m_AinmName;}}

private int m_AnimID;
 public int AnimID { get{ return m_AnimID;}}

private float m_DelayFrameSpeed;
 public float DelayFrameSpeed { get{ return m_DelayFrameSpeed;}}

private float m_DelayFrameTime;
 public float DelayFrameTime { get{ return m_DelayFrameTime;}}

private float m_DelaySpeedTime;
 public float DelaySpeedTime { get{ return m_DelaySpeedTime;}}

private int m_EndEffect;
 public int EndEffect { get{ return m_EndEffect;}}

private bool m_IsCallEnd;
 public bool IsCallEnd { get{ return m_IsCallEnd;}}

private bool m_IsCanBreak;
 public bool IsCanBreak { get{ return m_IsCanBreak;}}

public int getIsStartEffectAutoEndCount() { return 5; } 
 private bool[] m_IsStartEffectAutoEnd = new bool[5];
 public bool GetIsStartEffectAutoEndbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_IsStartEffectAutoEnd[idx];
 return false;
 }

private byte m_Layer;
 public byte Layer { get{ return m_Layer;}}

private int m_LoopOverAnimId;
 public int LoopOverAnimId { get{ return m_LoopOverAnimId;}}

private int m_LoopTime;
 public int LoopTime { get{ return m_LoopTime;}}

private int m_NextAnimId;
 public int NextAnimId { get{ return m_NextAnimId;}}

private byte m_PlayMode;
 public byte PlayMode { get{ return m_PlayMode;}}

private byte m_QueueMode;
 public byte QueueMode { get{ return m_QueueMode;}}

private float m_SPEED;
 public float SPEED { get{ return m_SPEED;}}

private short m_SoundBreakKeep;
 public short SoundBreakKeep { get{ return m_SoundBreakKeep;}}

private short m_SoundID;
 public short SoundID { get{ return m_SoundID;}}

public int getStartEffectCount() { return 5; } 
 private int[] m_StartEffect = new int[5];
 public int GetStartEffectbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_StartEffect[idx];
 return -1;
 }

private float m_TransitTime;
 public float TransitTime { get{ return m_TransitTime;}}

private byte m_WrapMode;
 public byte WrapMode { get{ return m_WrapMode;}}

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
 Tab_Animation _values = new Tab_Animation();
 _values.m_AinmName =  valuesList[(int)_ID.ID_AINMNAME] as string;
_values.m_AnimID =  Convert.ToInt32(valuesList[(int)_ID.ID_ANIMID] as string);
_values.m_DelayFrameSpeed =  Convert.ToSingle(valuesList[(int)_ID.ID_DELAYFRAMESPEED] as string );
_values.m_DelayFrameTime =  Convert.ToSingle(valuesList[(int)_ID.ID_DELAYFRAMETIME] as string );
_values.m_DelaySpeedTime =  Convert.ToSingle(valuesList[(int)_ID.ID_DELAYSPEEDTIME] as string );
_values.m_EndEffect =  Convert.ToInt32(valuesList[(int)_ID.ID_ENDEFFECT] as string);
_values.m_IsCallEnd =  Convert.ToInt16(valuesList[(int)_ID.ID_ISCALLEND] as string) != 0;
_values.m_IsCanBreak =  Convert.ToInt16(valuesList[(int)_ID.ID_ISCANBREAK] as string) != 0;
_values.m_IsStartEffectAutoEnd [ 0 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_ISSTARTEFFECTAUTOEND01] as string) != 0;
_values.m_IsStartEffectAutoEnd [ 1 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_ISSTARTEFFECTAUTOEND02] as string) != 0;
_values.m_IsStartEffectAutoEnd [ 2 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_ISSTARTEFFECTAUTOEND03] as string) != 0;
_values.m_IsStartEffectAutoEnd [ 3 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_ISSTARTEFFECTAUTOEND04] as string) != 0;
_values.m_IsStartEffectAutoEnd [ 4 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_ISSTARTEFFECTAUTOEND05] as string) != 0;
_values.m_Layer =  Convert.ToByte(valuesList[(int)_ID.ID_LAYER] as string,10);
_values.m_LoopOverAnimId =  Convert.ToInt32(valuesList[(int)_ID.ID_LOOPOVERANIMID] as string);
_values.m_LoopTime =  Convert.ToInt32(valuesList[(int)_ID.ID_LOOPTIME] as string);
_values.m_NextAnimId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTANIMID] as string);
_values.m_PlayMode =  Convert.ToByte(valuesList[(int)_ID.ID_PLAYMODE] as string,10);
_values.m_QueueMode =  Convert.ToByte(valuesList[(int)_ID.ID_QUEUEMODE] as string,10);
_values.m_SPEED =  Convert.ToSingle(valuesList[(int)_ID.ID_SPEED] as string );
_values.m_SoundBreakKeep =  Convert.ToInt16(valuesList[(int)_ID.ID_SOUNDBREAKKEEP] as string);
_values.m_SoundID =  Convert.ToInt16(valuesList[(int)_ID.ID_SOUNDID] as string);
_values.m_StartEffect [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTEFFECT01] as string);
_values.m_StartEffect [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTEFFECT02] as string);
_values.m_StartEffect [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTEFFECT03] as string);
_values.m_StartEffect [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTEFFECT04] as string);
_values.m_StartEffect [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTEFFECT05] as string);
_values.m_TransitTime =  Convert.ToSingle(valuesList[(int)_ID.ID_TRANSITTIME] as string );
_values.m_WrapMode =  Convert.ToByte(valuesList[(int)_ID.ID_WRAPMODE] as string,10);

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

