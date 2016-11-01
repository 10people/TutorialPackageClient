//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionUseItem
{ private const string TAB_FILE_DATA = "Tables/MissionUseItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_ITEMID=2,
ID_TARGETSCENEID,
ID_POSCNT,
ID_TARGETPOSX1,
ID_TARGETPOSY1,
ID_TARGETRADIUS1,
ID_TARGETPOSX2,
ID_TARGETPOSY2,
ID_TARGETRADIUS2,
ID_TARGETPOSX3,
ID_TARGETPOSY3,
ID_TARGETRADIUS3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_ItemID;
 public int ItemID { get{ return m_ItemID;}}

private int m_PosCnt;
 public int PosCnt { get{ return m_PosCnt;}}

public int getTargetPosXCount() { return 3; } 
 private float[] m_TargetPosX = new float[3];
 public float GetTargetPosXbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TargetPosX[idx];
 return 0.0f;
 }

public int getTargetPosYCount() { return 3; } 
 private float[] m_TargetPosY = new float[3];
 public float GetTargetPosYbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TargetPosY[idx];
 return 0.0f;
 }

public int getTargetRadiusCount() { return 3; } 
 private int[] m_TargetRadius = new int[3];
 public int GetTargetRadiusbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TargetRadius[idx];
 return -1;
 }

private int m_TargetSceneID;
 public int TargetSceneID { get{ return m_TargetSceneID;}}

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
 Tab_MissionUseItem _values = new Tab_MissionUseItem();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID] as string);
_values.m_PosCnt =  Convert.ToInt32(valuesList[(int)_ID.ID_POSCNT] as string);
_values.m_TargetPosX [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX1] as string );
_values.m_TargetPosX [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX2] as string );
_values.m_TargetPosX [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX3] as string );
_values.m_TargetPosY [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSY1] as string );
_values.m_TargetPosY [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSY2] as string );
_values.m_TargetPosY [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSY3] as string );
_values.m_TargetRadius [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETRADIUS1] as string);
_values.m_TargetRadius [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETRADIUS2] as string);
_values.m_TargetRadius [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETRADIUS3] as string);
_values.m_TargetSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETSCENEID] as string);

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

