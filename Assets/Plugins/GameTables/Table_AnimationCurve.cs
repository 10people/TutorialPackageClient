//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_AnimationCurve
{ private const string TAB_FILE_DATA = "Tables/AnimationCurve.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ANIMCURVEID,
ID_KEYFRAMESINDEX=2,
ID_TIME,
ID_VALUE,
ID_INTANGENT,
ID_OUTTANGENT,
ID_TANGENTMODE,
ID_PREWRAPMODE,
ID_POSTWRAPMODE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AnimCurveId;
 public int AnimCurveId { get{ return m_AnimCurveId;}}

private int m_KeyframesIndex;
 public int KeyframesIndex { get{ return m_KeyframesIndex;}}

private float m_Time;
 public float Time { get{ return m_Time;}}

private float m_Value;
 public float Value { get{ return m_Value;}}

private float m_InTangent;
 public float InTangent { get{ return m_InTangent;}}

private float m_OutTangent;
 public float OutTangent { get{ return m_OutTangent;}}

private int m_PostWrapMode;
 public int PostWrapMode { get{ return m_PostWrapMode;}}

private int m_PreWrapMode;
 public int PreWrapMode { get{ return m_PreWrapMode;}}

private int m_TangentMode;
 public int TangentMode { get{ return m_TangentMode;}}

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
 Tab_AnimationCurve _values = new Tab_AnimationCurve();
 _values.m_AnimCurveId =  Convert.ToInt32(valuesList[(int)_ID.ID_ANIMCURVEID] as string);
_values.m_KeyframesIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_KEYFRAMESINDEX] as string);
_values.m_Time =  Convert.ToSingle(valuesList[(int)_ID.ID_TIME] as string );
_values.m_Value =  Convert.ToSingle(valuesList[(int)_ID.ID_VALUE] as string );
_values.m_InTangent =  Convert.ToSingle(valuesList[(int)_ID.ID_INTANGENT] as string );
_values.m_OutTangent =  Convert.ToSingle(valuesList[(int)_ID.ID_OUTTANGENT] as string );
_values.m_PostWrapMode =  Convert.ToInt32(valuesList[(int)_ID.ID_POSTWRAPMODE] as string);
_values.m_PreWrapMode =  Convert.ToInt32(valuesList[(int)_ID.ID_PREWRAPMODE] as string);
_values.m_TangentMode =  Convert.ToInt32(valuesList[(int)_ID.ID_TANGENTMODE] as string);

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

