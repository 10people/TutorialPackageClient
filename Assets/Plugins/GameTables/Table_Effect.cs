//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Effect
{ private const string TAB_FILE_DATA = "Tables/Effect.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_EFFECTID,
ID_PATH=2,
ID_DELAYTIME,
ID_ISONLYDEACTIVE,
ID_TYPE,
ID_PARENTNAME,
ID_ISFELLOWOWNER,
ID_MAXOWNNUM,
ID_ISCANHIDE,
ID_X,
ID_Y,
ID_Z,
ID_ROTATIONX,
ID_ROTATIONY,
ID_ROTATIONZ,
ID_DURATION,
ID_BINDTARGETTYPE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private byte m_BindTargetType;
 public byte BindTargetType { get{ return m_BindTargetType;}}

private float m_DelayTime;
 public float DelayTime { get{ return m_DelayTime;}}

private float m_Duration;
 public float Duration { get{ return m_Duration;}}

private int m_EffectID;
 public int EffectID { get{ return m_EffectID;}}

private bool m_IsCanHide;
 public bool IsCanHide { get{ return m_IsCanHide;}}

private bool m_IsFellowOwner;
 public bool IsFellowOwner { get{ return m_IsFellowOwner;}}

private bool m_IsOnlyDeactive;
 public bool IsOnlyDeactive { get{ return m_IsOnlyDeactive;}}

private int m_MaxOwnNum;
 public int MaxOwnNum { get{ return m_MaxOwnNum;}}

private string m_ParentName;
 public string ParentName { get{ return m_ParentName;}}

private string m_Path;
 public string Path { get{ return m_Path;}}

private float m_RotationX;
 public float RotationX { get{ return m_RotationX;}}

private float m_RotationY;
 public float RotationY { get{ return m_RotationY;}}

private float m_RotationZ;
 public float RotationZ { get{ return m_RotationZ;}}

private byte m_Type;
 public byte Type { get{ return m_Type;}}

private float m_X;
 public float X { get{ return m_X;}}

private float m_Y;
 public float Y { get{ return m_Y;}}

private float m_Z;
 public float Z { get{ return m_Z;}}

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
 Tab_Effect _values = new Tab_Effect();
 _values.m_BindTargetType =  Convert.ToByte(valuesList[(int)_ID.ID_BINDTARGETTYPE] as string,10);
_values.m_DelayTime =  Convert.ToSingle(valuesList[(int)_ID.ID_DELAYTIME] as string );
_values.m_Duration =  Convert.ToSingle(valuesList[(int)_ID.ID_DURATION] as string );
_values.m_EffectID =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTID] as string);
_values.m_IsCanHide =  Convert.ToInt16(valuesList[(int)_ID.ID_ISCANHIDE] as string) != 0;
_values.m_IsFellowOwner =  Convert.ToInt16(valuesList[(int)_ID.ID_ISFELLOWOWNER] as string) != 0;
_values.m_IsOnlyDeactive =  Convert.ToInt16(valuesList[(int)_ID.ID_ISONLYDEACTIVE] as string) != 0;
_values.m_MaxOwnNum =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXOWNNUM] as string);
_values.m_ParentName =  valuesList[(int)_ID.ID_PARENTNAME] as string;
_values.m_Path =  valuesList[(int)_ID.ID_PATH] as string;
_values.m_RotationX =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTATIONX] as string );
_values.m_RotationY =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTATIONY] as string );
_values.m_RotationZ =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTATIONZ] as string );
_values.m_Type =  Convert.ToByte(valuesList[(int)_ID.ID_TYPE] as string,10);
_values.m_X =  Convert.ToSingle(valuesList[(int)_ID.ID_X] as string );
_values.m_Y =  Convert.ToSingle(valuesList[(int)_ID.ID_Y] as string );
_values.m_Z =  Convert.ToSingle(valuesList[(int)_ID.ID_Z] as string );

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

