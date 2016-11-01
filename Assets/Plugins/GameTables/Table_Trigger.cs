//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Trigger
{ private const string TAB_FILE_DATA = "Tables/Trigger.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_POSX=2,
ID_POSY,
ID_POSZ,
ID_ROTX,
ID_ROTY,
ID_ROTZ,
ID_SCALEX,
ID_SCALEY,
ID_SCALEZ,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private float m_PosX;
 public float PosX { get{ return m_PosX;}}

private float m_PosY;
 public float PosY { get{ return m_PosY;}}

private float m_PosZ;
 public float PosZ { get{ return m_PosZ;}}

private float m_RotX;
 public float RotX { get{ return m_RotX;}}

private float m_RotY;
 public float RotY { get{ return m_RotY;}}

private float m_RotZ;
 public float RotZ { get{ return m_RotZ;}}

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
 Tab_Trigger _values = new Tab_Trigger();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_PosX =  Convert.ToSingle(valuesList[(int)_ID.ID_POSX] as string );
_values.m_PosY =  Convert.ToSingle(valuesList[(int)_ID.ID_POSY] as string );
_values.m_PosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_POSZ] as string );
_values.m_RotX =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTX] as string );
_values.m_RotY =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTY] as string );
_values.m_RotZ =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTZ] as string );
_values.m_ScaleX =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALEX] as string );
_values.m_ScaleY =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALEY] as string );
_values.m_ScaleZ =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALEZ] as string );

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

