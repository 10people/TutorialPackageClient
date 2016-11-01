//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CollectItem
{ private const string TAB_FILE_DATA = "Tables/CollectItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_SCENEID,
ID_INDEX=2,
ID_CHARMODELID,
ID_POSX,
ID_POSY,
ID_POSZ,
ID_ROTX,
ID_ROTY,
ID_ROTZ,
ID_RADIUS,
ID_COUNT,
ID_ISAUTOLIFE,
ID_AUTOLIFETIME,
ID_BORNMONSTER,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private short m_AutoLifeTime;
 public short AutoLifeTime { get{ return m_AutoLifeTime;}}

private int m_BornMonster;
 public int BornMonster { get{ return m_BornMonster;}}

private int m_CharModelID;
 public int CharModelID { get{ return m_CharModelID;}}

private int m_Count;
 public int Count { get{ return m_Count;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

private bool m_IsAutoLife;
 public bool IsAutoLife { get{ return m_IsAutoLife;}}

private float m_PosX;
 public float PosX { get{ return m_PosX;}}

private float m_PosY;
 public float PosY { get{ return m_PosY;}}

private float m_PosZ;
 public float PosZ { get{ return m_PosZ;}}

private float m_Radius;
 public float Radius { get{ return m_Radius;}}

private float m_RotX;
 public float RotX { get{ return m_RotX;}}

private float m_RotY;
 public float RotY { get{ return m_RotY;}}

private float m_RotZ;
 public float RotZ { get{ return m_RotZ;}}

private short m_SceneID;
 public short SceneID { get{ return m_SceneID;}}

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
 Tab_CollectItem _values = new Tab_CollectItem();
 _values.m_AutoLifeTime =  Convert.ToInt16(valuesList[(int)_ID.ID_AUTOLIFETIME] as string);
_values.m_BornMonster =  Convert.ToInt32(valuesList[(int)_ID.ID_BORNMONSTER] as string);
_values.m_CharModelID =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID] as string);
_values.m_Count =  Convert.ToInt32(valuesList[(int)_ID.ID_COUNT] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_IsAutoLife =  Convert.ToInt16(valuesList[(int)_ID.ID_ISAUTOLIFE] as string) != 0;
_values.m_PosX =  Convert.ToSingle(valuesList[(int)_ID.ID_POSX] as string );
_values.m_PosY =  Convert.ToSingle(valuesList[(int)_ID.ID_POSY] as string );
_values.m_PosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_POSZ] as string );
_values.m_Radius =  Convert.ToSingle(valuesList[(int)_ID.ID_RADIUS] as string );
_values.m_RotX =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTX] as string );
_values.m_RotY =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTY] as string );
_values.m_RotZ =  Convert.ToSingle(valuesList[(int)_ID.ID_ROTZ] as string );
_values.m_SceneID =  Convert.ToInt16(valuesList[(int)_ID.ID_SCENEID] as string);

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

