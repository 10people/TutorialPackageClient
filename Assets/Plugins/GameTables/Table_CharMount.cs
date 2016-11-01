//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CharMount
{ private const string TAB_FILE_DATA = "Tables/CharMount.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_MOUNTMODEL=2,
ID_MOVESOUNDID,
ID_STOPSOUNDID,
ID_STARTMOVESOUNDID,
ID_STOPMOVESOUNDID,
ID_BINDPOINT,
ID_FAKEOBJID,
ID_HEADINFOADDHEIGHT0,
ID_HEADINFOADDHEIGHT1,
ID_HEADINFOADDHEIGHT2,
ID_HEADINFOADDHEIGHT3,
ID_HEADINFOADDHEIGHT4,
ID_MOUNTCENTERPOINTPATH,
ID_MOUNTBACKPOINTPATH,
ID_LMOUNTFLANKPOINTPATH,
ID_RMOUNTFLANKPOINTPATH,
ID_MOVEEFFECTID,
ID_SELECTCIRCLESIZE,
ID_EFFECTMOUNTON,
ID_EFFECTMOUNTOFF,
ID_STANDANI_SHAOLIN,
ID_STANDANI_TIANSHAN,
ID_STANDANI_DALI,
ID_STANDANI_XIAOYAO,
ID_STANDANI_GAIBANG,
ID_RUNANI_SHAOLIN,
ID_RUNANI_TIANSHAN,
ID_RUNANI_DALI,
ID_RUNANI_XIAOYAO,
ID_RUNANI_GAIBANG,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_BindPoint;
 public string BindPoint { get{ return m_BindPoint;}}

private short m_EffectMountOff;
 public short EffectMountOff { get{ return m_EffectMountOff;}}

private short m_EffectMountOn;
 public short EffectMountOn { get{ return m_EffectMountOn;}}

private int m_FakeObjID;
 public int FakeObjID { get{ return m_FakeObjID;}}

public int getHeadInfoAddHeightCount() { return 5; } 
 private float[] m_HeadInfoAddHeight = new float[5];
 public float GetHeadInfoAddHeightbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_HeadInfoAddHeight[idx];
 return 0.0f;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_LMountFlankPointPath;
 public string LMountFlankPointPath { get{ return m_LMountFlankPointPath;}}

private string m_MountBackPointPath;
 public string MountBackPointPath { get{ return m_MountBackPointPath;}}

private string m_MountCenterPointPath;
 public string MountCenterPointPath { get{ return m_MountCenterPointPath;}}

private string m_MountModel;
 public string MountModel { get{ return m_MountModel;}}

private short m_MoveEffectId;
 public short MoveEffectId { get{ return m_MoveEffectId;}}

private short m_MoveSoundID;
 public short MoveSoundID { get{ return m_MoveSoundID;}}

private string m_RMountFlankPointPath;
 public string RMountFlankPointPath { get{ return m_RMountFlankPointPath;}}

private int m_RunAniDaLi;
 public int RunAniDaLi { get{ return m_RunAniDaLi;}}

private int m_RunAniGaiBang;
 public int RunAniGaiBang { get{ return m_RunAniGaiBang;}}

private int m_RunAniShaoLin;
 public int RunAniShaoLin { get{ return m_RunAniShaoLin;}}

private int m_RunAniTianShan;
 public int RunAniTianShan { get{ return m_RunAniTianShan;}}

private int m_RunAniXiaoYao;
 public int RunAniXiaoYao { get{ return m_RunAniXiaoYao;}}

private float m_SelectCircleSize;
 public float SelectCircleSize { get{ return m_SelectCircleSize;}}

private int m_StandAniDaLi;
 public int StandAniDaLi { get{ return m_StandAniDaLi;}}

private int m_StandAniGaiBang;
 public int StandAniGaiBang { get{ return m_StandAniGaiBang;}}

private int m_StandAniShaoLin;
 public int StandAniShaoLin { get{ return m_StandAniShaoLin;}}

private int m_StandAniTianShan;
 public int StandAniTianShan { get{ return m_StandAniTianShan;}}

private int m_StandAniXiaoYao;
 public int StandAniXiaoYao { get{ return m_StandAniXiaoYao;}}

private short m_StartMoveSoundID;
 public short StartMoveSoundID { get{ return m_StartMoveSoundID;}}

private short m_StopMoveSoundID;
 public short StopMoveSoundID { get{ return m_StopMoveSoundID;}}

private short m_StopSoundID;
 public short StopSoundID { get{ return m_StopSoundID;}}

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
 Tab_CharMount _values = new Tab_CharMount();
 _values.m_BindPoint =  valuesList[(int)_ID.ID_BINDPOINT] as string;
_values.m_EffectMountOff =  Convert.ToInt16(valuesList[(int)_ID.ID_EFFECTMOUNTOFF] as string);
_values.m_EffectMountOn =  Convert.ToInt16(valuesList[(int)_ID.ID_EFFECTMOUNTON] as string);
_values.m_FakeObjID =  Convert.ToInt32(valuesList[(int)_ID.ID_FAKEOBJID] as string);
_values.m_HeadInfoAddHeight [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_HEADINFOADDHEIGHT0] as string );
_values.m_HeadInfoAddHeight [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_HEADINFOADDHEIGHT1] as string );
_values.m_HeadInfoAddHeight [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_HEADINFOADDHEIGHT2] as string );
_values.m_HeadInfoAddHeight [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_HEADINFOADDHEIGHT3] as string );
_values.m_HeadInfoAddHeight [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_HEADINFOADDHEIGHT4] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LMountFlankPointPath =  valuesList[(int)_ID.ID_LMOUNTFLANKPOINTPATH] as string;
_values.m_MountBackPointPath =  valuesList[(int)_ID.ID_MOUNTBACKPOINTPATH] as string;
_values.m_MountCenterPointPath =  valuesList[(int)_ID.ID_MOUNTCENTERPOINTPATH] as string;
_values.m_MountModel =  valuesList[(int)_ID.ID_MOUNTMODEL] as string;
_values.m_MoveEffectId =  Convert.ToInt16(valuesList[(int)_ID.ID_MOVEEFFECTID] as string);
_values.m_MoveSoundID =  Convert.ToInt16(valuesList[(int)_ID.ID_MOVESOUNDID] as string);
_values.m_RMountFlankPointPath =  valuesList[(int)_ID.ID_RMOUNTFLANKPOINTPATH] as string;
_values.m_RunAniDaLi =  Convert.ToInt32(valuesList[(int)_ID.ID_RUNANI_DALI] as string);
_values.m_RunAniGaiBang =  Convert.ToInt32(valuesList[(int)_ID.ID_RUNANI_GAIBANG] as string);
_values.m_RunAniShaoLin =  Convert.ToInt32(valuesList[(int)_ID.ID_RUNANI_SHAOLIN] as string);
_values.m_RunAniTianShan =  Convert.ToInt32(valuesList[(int)_ID.ID_RUNANI_TIANSHAN] as string);
_values.m_RunAniXiaoYao =  Convert.ToInt32(valuesList[(int)_ID.ID_RUNANI_XIAOYAO] as string);
_values.m_SelectCircleSize =  Convert.ToSingle(valuesList[(int)_ID.ID_SELECTCIRCLESIZE] as string );
_values.m_StandAniDaLi =  Convert.ToInt32(valuesList[(int)_ID.ID_STANDANI_DALI] as string);
_values.m_StandAniGaiBang =  Convert.ToInt32(valuesList[(int)_ID.ID_STANDANI_GAIBANG] as string);
_values.m_StandAniShaoLin =  Convert.ToInt32(valuesList[(int)_ID.ID_STANDANI_SHAOLIN] as string);
_values.m_StandAniTianShan =  Convert.ToInt32(valuesList[(int)_ID.ID_STANDANI_TIANSHAN] as string);
_values.m_StandAniXiaoYao =  Convert.ToInt32(valuesList[(int)_ID.ID_STANDANI_XIAOYAO] as string);
_values.m_StartMoveSoundID =  Convert.ToInt16(valuesList[(int)_ID.ID_STARTMOVESOUNDID] as string);
_values.m_StopMoveSoundID =  Convert.ToInt16(valuesList[(int)_ID.ID_STOPMOVESOUNDID] as string);
_values.m_StopSoundID =  Convert.ToInt16(valuesList[(int)_ID.ID_STOPSOUNDID] as string);

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

