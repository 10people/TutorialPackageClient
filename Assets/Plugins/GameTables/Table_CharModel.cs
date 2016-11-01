//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CharModel
{ private const string TAB_FILE_DATA = "Tables/CharModel.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_TITLE,
ID_RESPATH,
ID_ANIMPATH,
ID_HEADPIC,
ID_NPCSPRITENAME,
ID_HEADINFOHEIGHT,
ID_SCALE,
ID_DEADSOUND01,
ID_DEADSOUND02,
ID_DEADSOUND03,
ID_MODELTYPE,
ID_EFFECTID01,
ID_EFFECTID02,
ID_EFFECTID03,
ID_EFFECTID04,
ID_EFFECTID05,
ID_SELECTCIRCLESIZE,
ID_BORNEFFECT1,
ID_BORNEFFECT2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_AnimPath;
 public string AnimPath { get{ return m_AnimPath;}}

public int getBornEffectCount() { return 2; } 
 private short[] m_BornEffect = new short[2];
 public short GetBornEffectbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_BornEffect[idx];
 return -1;
 }

public int getDeadSoundCount() { return 3; } 
 private short[] m_DeadSound = new short[3];
 public short GetDeadSoundbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_DeadSound[idx];
 return -1;
 }

public int getEffectIdCount() { return 5; } 
 private short[] m_EffectId = new short[5];
 public short GetEffectIdbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_EffectId[idx];
 return -1;
 }

private float m_HeadInfoHeight;
 public float HeadInfoHeight { get{ return m_HeadInfoHeight;}}

private string m_HeadPic;
 public string HeadPic { get{ return m_HeadPic;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_ModelType;
 public int ModelType { get{ return m_ModelType;}}

private string m_NPCSpriteName;
 public string NPCSpriteName { get{ return m_NPCSpriteName;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private string m_ResPath;
 public string ResPath { get{ return m_ResPath;}}

private float m_Scale;
 public float Scale { get{ return m_Scale;}}

private float m_SelectCircleSize;
 public float SelectCircleSize { get{ return m_SelectCircleSize;}}

private string m_Title;
 public string Title { get{ return m_Title;}}

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
 Tab_CharModel _values = new Tab_CharModel();
 _values.m_AnimPath =  valuesList[(int)_ID.ID_ANIMPATH] as string;
_values.m_BornEffect [ 0 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_BORNEFFECT1] as string);
_values.m_BornEffect [ 1 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_BORNEFFECT2] as string);
_values.m_DeadSound [ 0 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_DEADSOUND01] as string);
_values.m_DeadSound [ 1 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_DEADSOUND02] as string);
_values.m_DeadSound [ 2 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_DEADSOUND03] as string);
_values.m_EffectId [ 0 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_EFFECTID01] as string);
_values.m_EffectId [ 1 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_EFFECTID02] as string);
_values.m_EffectId [ 2 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_EFFECTID03] as string);
_values.m_EffectId [ 3 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_EFFECTID04] as string);
_values.m_EffectId [ 4 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_EFFECTID05] as string);
_values.m_HeadInfoHeight =  Convert.ToSingle(valuesList[(int)_ID.ID_HEADINFOHEIGHT] as string );
_values.m_HeadPic =  valuesList[(int)_ID.ID_HEADPIC] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ModelType =  Convert.ToInt32(valuesList[(int)_ID.ID_MODELTYPE] as string);
_values.m_NPCSpriteName =  valuesList[(int)_ID.ID_NPCSPRITENAME] as string;
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_ResPath =  valuesList[(int)_ID.ID_RESPATH] as string;
_values.m_Scale =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALE] as string );
_values.m_SelectCircleSize =  Convert.ToSingle(valuesList[(int)_ID.ID_SELECTCIRCLESIZE] as string );
_values.m_Title =  valuesList[(int)_ID.ID_TITLE] as string;

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

