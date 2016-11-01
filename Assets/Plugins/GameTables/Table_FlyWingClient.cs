//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_FlyWingClient
{ private const string TAB_FILE_DATA = "Tables/FlyWingClient.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_EFFECTIDFIRST=2,
ID_EFFECTIDSECOND,
ID_EFFECTIDTHRID,
ID_EFFECTIDFOUR,
ID_EFFECTPOINTNAMEFIRST,
ID_EFFECTPOINTNAMESECOND,
ID_MODENAME,
ID_ANGLE_X,
ID_ANGLE_Y,
ID_ANGLE_Z,
ID_SCALE_X,
ID_SCALE_Y,
ID_SCALE_Z,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_AngleX;
 public float AngleX { get{ return m_AngleX;}}

private float m_AngleY;
 public float AngleY { get{ return m_AngleY;}}

private float m_AngleZ;
 public float AngleZ { get{ return m_AngleZ;}}

private int m_EffectIdFirst;
 public int EffectIdFirst { get{ return m_EffectIdFirst;}}

private int m_EffectIdFour;
 public int EffectIdFour { get{ return m_EffectIdFour;}}

private int m_EffectIdSecond;
 public int EffectIdSecond { get{ return m_EffectIdSecond;}}

private int m_EffectIdThrid;
 public int EffectIdThrid { get{ return m_EffectIdThrid;}}

private string m_EffectPointNameFirst;
 public string EffectPointNameFirst { get{ return m_EffectPointNameFirst;}}

private string m_EffectPointNameSecond;
 public string EffectPointNameSecond { get{ return m_EffectPointNameSecond;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_ModeName;
 public string ModeName { get{ return m_ModeName;}}

private float m_ScaleX;
 public float ScaleX { get{ return m_ScaleX;}}

private float m_ScaleY;
 public float ScaleY { get{ return m_ScaleY;}}

private float m_ScaleZ;
 public float ScaleZ { get{ return m_ScaleZ;}}

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
 Tab_FlyWingClient _values = new Tab_FlyWingClient();
 _values.m_AngleX =  Convert.ToSingle(valuesList[(int)_ID.ID_ANGLE_X] as string );
_values.m_AngleY =  Convert.ToSingle(valuesList[(int)_ID.ID_ANGLE_Y] as string );
_values.m_AngleZ =  Convert.ToSingle(valuesList[(int)_ID.ID_ANGLE_Z] as string );
_values.m_EffectIdFirst =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTIDFIRST] as string);
_values.m_EffectIdFour =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTIDFOUR] as string);
_values.m_EffectIdSecond =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTIDSECOND] as string);
_values.m_EffectIdThrid =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTIDTHRID] as string);
_values.m_EffectPointNameFirst =  valuesList[(int)_ID.ID_EFFECTPOINTNAMEFIRST] as string;
_values.m_EffectPointNameSecond =  valuesList[(int)_ID.ID_EFFECTPOINTNAMESECOND] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ModeName =  valuesList[(int)_ID.ID_MODENAME] as string;
_values.m_ScaleX =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALE_X] as string );
_values.m_ScaleY =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALE_Y] as string );
_values.m_ScaleZ =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALE_Z] as string );

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

