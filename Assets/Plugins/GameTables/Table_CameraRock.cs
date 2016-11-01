//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CameraRock
{ private const string TAB_FILE_DATA = "Tables/CameraRock.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ROCKID,
ID_ISCONTINUEDIE=2,
ID_NEEDROCKTIME,
ID_DELAYTIME,
ID_PITCHANIMCURVEID,
ID_YAWANIMCURVEID,
ID_DISTANCEANIMCURVEID,
ID_OFFSETANIMCURVEID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_DelayTime;
 public float DelayTime { get{ return m_DelayTime;}}

private int m_DistanceAnimCurveId;
 public int DistanceAnimCurveId { get{ return m_DistanceAnimCurveId;}}

private bool m_IsContinueDie;
 public bool IsContinueDie { get{ return m_IsContinueDie;}}

private float m_NeedRockTime;
 public float NeedRockTime { get{ return m_NeedRockTime;}}

private int m_OffsetAnimCurveId;
 public int OffsetAnimCurveId { get{ return m_OffsetAnimCurveId;}}

private int m_PitchAnimCurveId;
 public int PitchAnimCurveId { get{ return m_PitchAnimCurveId;}}

private int m_RockID;
 public int RockID { get{ return m_RockID;}}

private int m_YawAnimCurveId;
 public int YawAnimCurveId { get{ return m_YawAnimCurveId;}}

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
 Tab_CameraRock _values = new Tab_CameraRock();
 _values.m_DelayTime =  Convert.ToSingle(valuesList[(int)_ID.ID_DELAYTIME] as string );
_values.m_DistanceAnimCurveId =  Convert.ToInt32(valuesList[(int)_ID.ID_DISTANCEANIMCURVEID] as string);
_values.m_IsContinueDie =  Convert.ToInt16(valuesList[(int)_ID.ID_ISCONTINUEDIE] as string) != 0;
_values.m_NeedRockTime =  Convert.ToSingle(valuesList[(int)_ID.ID_NEEDROCKTIME] as string );
_values.m_OffsetAnimCurveId =  Convert.ToInt32(valuesList[(int)_ID.ID_OFFSETANIMCURVEID] as string);
_values.m_PitchAnimCurveId =  Convert.ToInt32(valuesList[(int)_ID.ID_PITCHANIMCURVEID] as string);
_values.m_RockID =  Convert.ToInt32(valuesList[(int)_ID.ID_ROCKID] as string);
_values.m_YawAnimCurveId =  Convert.ToInt32(valuesList[(int)_ID.ID_YAWANIMCURVEID] as string);

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

