//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Impact
{ private const string TAB_FILE_DATA = "Tables/Impact.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_IMPACTID,
ID_NAME=2,
ID_ISFOREVER,
ID_MAXOVERLAYCOUNT,
ID_MAXBUFFCOUNT,
ID_ISNEEDNOTICECLIENT,
ID_BUFFICON,
ID_BUFFTYPE,
ID_LOGICID,
ID_DELAYTIME,
ID_EFFECTID,
ID_PLAYTIME,
ID_ISREMOVEEFFECTFADEOUT,
ID_FADEOUTRULE,
ID_MUTEXCOLLECTIONID,
ID_MUTEXPRIORITY,
ID_PARAMVALUE_01,
ID_PARAMVALUE_02,
ID_PARAMVALUE_03,
ID_PARAMVALUE_04,
ID_PARAMVALUE_05,
ID_PARAMVALUE_06,
ID_PARAMVALUE_07,
ID_PARAMVALUE_08,
ID_PARAMVALUE_09,
ID_PARAMVALUE_10,
ID_PARAMVALUE_11,
ID_PARAMVALUE_12,
ID_PARAMVALUE_13,
ID_PARAMVALUE_14,
ID_PARAMVALUE_15,
ID_ISEFFECTTOOBJ,
ID_STARTMOTIONID,
ID_ISFELLOWTALLENT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_BuffIcon;
 public string BuffIcon { get{ return m_BuffIcon;}}

private int m_BuffType;
 public int BuffType { get{ return m_BuffType;}}

private int m_DelayTime;
 public int DelayTime { get{ return m_DelayTime;}}

private int m_EffectId;
 public int EffectId { get{ return m_EffectId;}}

private int m_FadeOutRule;
 public int FadeOutRule { get{ return m_FadeOutRule;}}

private int m_ImpactID;
 public int ImpactID { get{ return m_ImpactID;}}

private int m_IsEffectToObj;
 public int IsEffectToObj { get{ return m_IsEffectToObj;}}

private int m_IsFellowTallent;
 public int IsFellowTallent { get{ return m_IsFellowTallent;}}

private int m_IsForever;
 public int IsForever { get{ return m_IsForever;}}

private int m_IsNeedNoticeClient;
 public int IsNeedNoticeClient { get{ return m_IsNeedNoticeClient;}}

private int m_IsRemoveEffectFadeOut;
 public int IsRemoveEffectFadeOut { get{ return m_IsRemoveEffectFadeOut;}}

private int m_LogicID;
 public int LogicID { get{ return m_LogicID;}}

private int m_MaxBuffCount;
 public int MaxBuffCount { get{ return m_MaxBuffCount;}}

private int m_MaxOverlayCount;
 public int MaxOverlayCount { get{ return m_MaxOverlayCount;}}

private int m_MutexcollectionId;
 public int MutexcollectionId { get{ return m_MutexcollectionId;}}

private int m_Mutexpriority;
 public int Mutexpriority { get{ return m_Mutexpriority;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

public int getParamValueCount() { return 15; } 
 private int[] m_ParamValue = new int[15];
 public int GetParamValuebyIndex(int idx) {
 if(idx>=0 && idx<15) return m_ParamValue[idx];
 return -1;
 }

private int m_PlayTime;
 public int PlayTime { get{ return m_PlayTime;}}

private int m_StartMotionID;
 public int StartMotionID { get{ return m_StartMotionID;}}

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
 Tab_Impact _values = new Tab_Impact();
 _values.m_BuffIcon =  valuesList[(int)_ID.ID_BUFFICON] as string;
_values.m_BuffType =  Convert.ToInt32(valuesList[(int)_ID.ID_BUFFTYPE] as string);
_values.m_DelayTime =  Convert.ToInt32(valuesList[(int)_ID.ID_DELAYTIME] as string);
_values.m_EffectId =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTID] as string);
_values.m_FadeOutRule =  Convert.ToInt32(valuesList[(int)_ID.ID_FADEOUTRULE] as string);
_values.m_ImpactID =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACTID] as string);
_values.m_IsEffectToObj =  Convert.ToInt32(valuesList[(int)_ID.ID_ISEFFECTTOOBJ] as string);
_values.m_IsFellowTallent =  Convert.ToInt32(valuesList[(int)_ID.ID_ISFELLOWTALLENT] as string);
_values.m_IsForever =  Convert.ToInt32(valuesList[(int)_ID.ID_ISFOREVER] as string);
_values.m_IsNeedNoticeClient =  Convert.ToInt32(valuesList[(int)_ID.ID_ISNEEDNOTICECLIENT] as string);
_values.m_IsRemoveEffectFadeOut =  Convert.ToInt32(valuesList[(int)_ID.ID_ISREMOVEEFFECTFADEOUT] as string);
_values.m_LogicID =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICID] as string);
_values.m_MaxBuffCount =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXBUFFCOUNT] as string);
_values.m_MaxOverlayCount =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXOVERLAYCOUNT] as string);
_values.m_MutexcollectionId =  Convert.ToInt32(valuesList[(int)_ID.ID_MUTEXCOLLECTIONID] as string);
_values.m_Mutexpriority =  Convert.ToInt32(valuesList[(int)_ID.ID_MUTEXPRIORITY] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_ParamValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_01] as string);
_values.m_ParamValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_02] as string);
_values.m_ParamValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_03] as string);
_values.m_ParamValue [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_04] as string);
_values.m_ParamValue [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_05] as string);
_values.m_ParamValue [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_06] as string);
_values.m_ParamValue [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_07] as string);
_values.m_ParamValue [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_08] as string);
_values.m_ParamValue [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_09] as string);
_values.m_ParamValue [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_10] as string);
_values.m_ParamValue [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_11] as string);
_values.m_ParamValue [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_12] as string);
_values.m_ParamValue [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_13] as string);
_values.m_ParamValue [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_14] as string);
_values.m_ParamValue [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PARAMVALUE_15] as string);
_values.m_PlayTime =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYTIME] as string);
_values.m_StartMotionID =  Convert.ToInt32(valuesList[(int)_ID.ID_STARTMOTIONID] as string);

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

