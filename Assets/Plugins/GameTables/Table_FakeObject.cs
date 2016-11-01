//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_FakeObject
{ private const string TAB_FILE_DATA = "Tables/FakeObject.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_FAKEOBJMODEL=2,
ID_ANIMPATH,
ID_XOFFSET,
ID_YOFFSET,
ID_ZOFFSET,
ID_XROTATION,
ID_YROTATION,
ID_ZROTATION,
ID_ISPLAYER,
ID_EFFECT,
ID_BONE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_AnimPath;
 public string AnimPath { get{ return m_AnimPath;}}

private string m_Bone;
 public string Bone { get{ return m_Bone;}}

private int m_Effect;
 public int Effect { get{ return m_Effect;}}

private string m_FakeObjModel;
 public string FakeObjModel { get{ return m_FakeObjModel;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsPlayer;
 public int IsPlayer { get{ return m_IsPlayer;}}

private float m_XOffSet;
 public float XOffSet { get{ return m_XOffSet;}}

private float m_XRotation;
 public float XRotation { get{ return m_XRotation;}}

private float m_YOffSet;
 public float YOffSet { get{ return m_YOffSet;}}

private float m_YRotation;
 public float YRotation { get{ return m_YRotation;}}

private float m_ZOffset;
 public float ZOffset { get{ return m_ZOffset;}}

private float m_ZRotation;
 public float ZRotation { get{ return m_ZRotation;}}

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
 Tab_FakeObject _values = new Tab_FakeObject();
 _values.m_AnimPath =  valuesList[(int)_ID.ID_ANIMPATH] as string;
_values.m_Bone =  valuesList[(int)_ID.ID_BONE] as string;
_values.m_Effect =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECT] as string);
_values.m_FakeObjModel =  valuesList[(int)_ID.ID_FAKEOBJMODEL] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsPlayer =  Convert.ToInt32(valuesList[(int)_ID.ID_ISPLAYER] as string);
_values.m_XOffSet =  Convert.ToSingle(valuesList[(int)_ID.ID_XOFFSET] as string );
_values.m_XRotation =  Convert.ToSingle(valuesList[(int)_ID.ID_XROTATION] as string );
_values.m_YOffSet =  Convert.ToSingle(valuesList[(int)_ID.ID_YOFFSET] as string );
_values.m_YRotation =  Convert.ToSingle(valuesList[(int)_ID.ID_YROTATION] as string );
_values.m_ZOffset =  Convert.ToSingle(valuesList[(int)_ID.ID_ZOFFSET] as string );
_values.m_ZRotation =  Convert.ToSingle(valuesList[(int)_ID.ID_ZROTATION] as string );

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

