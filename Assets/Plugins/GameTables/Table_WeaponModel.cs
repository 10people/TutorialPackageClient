//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_WeaponModel
{ private const string TAB_FILE_DATA = "Tables/WeaponModel.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_RESPATH=2,
ID_SCALE,
ID_BINDPOINTL_PUTON,
ID_LEFTROTX,
ID_LEFTROTY,
ID_LEFTROTZ,
ID_BINDPOINTR_PUTON,
ID_RIGHTROTX,
ID_RIGHTROTY,
ID_RIGHTROTZ,
ID_LWEAPONBINDPOINTPATH,
ID_RWEAPONBINDPOINTPATH,
ID_WEAPONEFFECT01,
ID_WEAPONEFFECT02,
ID_BINDPOINTL_PUTOFF,
ID_LEFTPOSX_PUTOFF,
ID_LEFTPOSY_PUTOFF,
ID_LEFTPOSZ_PUTOFF,
ID_LEFTROTX_PUTOFF,
ID_LEFTROTY_PUTOFF,
ID_LEFTROTZ_PUTOFF,
ID_BINDPOINTR_PUTOFF,
ID_RIGHTPOSX_PUTOFF,
ID_RIGHTPOSY_PUTOFF,
ID_RIGHTPOSZ_PUTOFF,
ID_RIGHTROTX_PUTOFF,
ID_RIGHTROTY_PUTOFF,
ID_RIGHTROTZ_PUTOFF,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_BindPointLPutOff;
 public string BindPointLPutOff { get{ return m_BindPointLPutOff;}}

private string m_BindPointLPutOn;
 public string BindPointLPutOn { get{ return m_BindPointLPutOn;}}

private string m_BindPointRPutOff;
 public string BindPointRPutOff { get{ return m_BindPointRPutOff;}}

private string m_BindPointRPutOn;
 public string BindPointRPutOn { get{ return m_BindPointRPutOn;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_LWeaponBindPointPath;
 public string LWeaponBindPointPath { get{ return m_LWeaponBindPointPath;}}

private float m_LeftPosXPutOff;
 public float LeftPosXPutOff { get{ return m_LeftPosXPutOff;}}

private float m_LeftPosYPutOff;
 public float LeftPosYPutOff { get{ return m_LeftPosYPutOff;}}

private float m_LeftPosZPutOff;
 public float LeftPosZPutOff { get{ return m_LeftPosZPutOff;}}

private float m_LeftRotX;
 public float LeftRotX { get{ return m_LeftRotX;}}

private float m_LeftRotXPutOff;
 public float LeftRotXPutOff { get{ return m_LeftRotXPutOff;}}

private float m_LeftRotY;
 public float LeftRotY { get{ return m_LeftRotY;}}

private float m_LeftRotYPutOff;
 public float LeftRotYPutOff { get{ return m_LeftRotYPutOff;}}

private float m_LeftRotZ;
 public float LeftRotZ { get{ return m_LeftRotZ;}}

private float m_LeftRotZPutOff;
 public float LeftRotZPutOff { get{ return m_LeftRotZPutOff;}}

private string m_RWeaponBindPointPath;
 public string RWeaponBindPointPath { get{ return m_RWeaponBindPointPath;}}

private string m_ResPath;
 public string ResPath { get{ return m_ResPath;}}

private float m_RightPosXPutOff;
 public float RightPosXPutOff { get{ return m_RightPosXPutOff;}}

private float m_RightPosYPutOff;
 public float RightPosYPutOff { get{ return m_RightPosYPutOff;}}

private float m_RightPosZPutOff;
 public float RightPosZPutOff { get{ return m_RightPosZPutOff;}}

private float m_RightRotX;
 public float RightRotX { get{ return m_RightRotX;}}

private float m_RightRotXPutOff;
 public float RightRotXPutOff { get{ return m_RightRotXPutOff;}}

private float m_RightRotY;
 public float RightRotY { get{ return m_RightRotY;}}

private float m_RightRotYPutOff;
 public float RightRotYPutOff { get{ return m_RightRotYPutOff;}}

private float m_RightRotZ;
 public float RightRotZ { get{ return m_RightRotZ;}}

private float m_RightRotZPutOff;
 public float RightRotZPutOff { get{ return m_RightRotZPutOff;}}

private float m_Scale;
 public float Scale { get{ return m_Scale;}}

public int getWeaponEffectCount() { return 2; } 
 private int[] m_WeaponEffect = new int[2];
 public int GetWeaponEffectbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_WeaponEffect[idx];
 return -1;
 }

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
 Tab_WeaponModel _values = new Tab_WeaponModel();
 _values.m_BindPointLPutOff =  valuesList[(int)_ID.ID_BINDPOINTL_PUTOFF] as string;
_values.m_BindPointLPutOn =  valuesList[(int)_ID.ID_BINDPOINTL_PUTON] as string;
_values.m_BindPointRPutOff =  valuesList[(int)_ID.ID_BINDPOINTR_PUTOFF] as string;
_values.m_BindPointRPutOn =  valuesList[(int)_ID.ID_BINDPOINTR_PUTON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LWeaponBindPointPath =  valuesList[(int)_ID.ID_LWEAPONBINDPOINTPATH] as string;
_values.m_LeftPosXPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTPOSX_PUTOFF] as string );
_values.m_LeftPosYPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTPOSY_PUTOFF] as string );
_values.m_LeftPosZPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTPOSZ_PUTOFF] as string );
_values.m_LeftRotX =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTROTX] as string );
_values.m_LeftRotXPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTROTX_PUTOFF] as string );
_values.m_LeftRotY =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTROTY] as string );
_values.m_LeftRotYPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTROTY_PUTOFF] as string );
_values.m_LeftRotZ =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTROTZ] as string );
_values.m_LeftRotZPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_LEFTROTZ_PUTOFF] as string );
_values.m_RWeaponBindPointPath =  valuesList[(int)_ID.ID_RWEAPONBINDPOINTPATH] as string;
_values.m_ResPath =  valuesList[(int)_ID.ID_RESPATH] as string;
_values.m_RightPosXPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTPOSX_PUTOFF] as string );
_values.m_RightPosYPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTPOSY_PUTOFF] as string );
_values.m_RightPosZPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTPOSZ_PUTOFF] as string );
_values.m_RightRotX =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTROTX] as string );
_values.m_RightRotXPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTROTX_PUTOFF] as string );
_values.m_RightRotY =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTROTY] as string );
_values.m_RightRotYPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTROTY_PUTOFF] as string );
_values.m_RightRotZ =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTROTZ] as string );
_values.m_RightRotZPutOff =  Convert.ToSingle(valuesList[(int)_ID.ID_RIGHTROTZ_PUTOFF] as string );
_values.m_Scale =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALE] as string );
_values.m_WeaponEffect [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONEFFECT01] as string);
_values.m_WeaponEffect [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONEFFECT02] as string);

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

