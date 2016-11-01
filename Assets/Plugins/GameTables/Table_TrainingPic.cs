//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_TrainingPic
{ private const string TAB_FILE_DATA = "Tables/TrainingPic.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_PICNAME=2,
ID_POINTPOSX1,
ID_POINTPOSY1,
ID_POINTPOSX2,
ID_POINTPOSY2,
ID_POINTPOSX3,
ID_POINTPOSY3,
ID_POINTPOSX4,
ID_POINTPOSY4,
ID_POINTPOSX5,
ID_POINTPOSY5,
ID_BRANCHPOINTPOSX,
ID_BRANCHPOINTPOSY,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_BranchPointPosX;
 public float BranchPointPosX { get{ return m_BranchPointPosX;}}

private float m_BranchPointPosY;
 public float BranchPointPosY { get{ return m_BranchPointPosY;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_PicName;
 public string PicName { get{ return m_PicName;}}

public int getPointPosXCount() { return 5; } 
 private float[] m_PointPosX = new float[5];
 public float GetPointPosXbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_PointPosX[idx];
 return 0.0f;
 }

public int getPointPosYCount() { return 5; } 
 private float[] m_PointPosY = new float[5];
 public float GetPointPosYbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_PointPosY[idx];
 return 0.0f;
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
 Tab_TrainingPic _values = new Tab_TrainingPic();
 _values.m_BranchPointPosX =  Convert.ToSingle(valuesList[(int)_ID.ID_BRANCHPOINTPOSX] as string );
_values.m_BranchPointPosY =  Convert.ToSingle(valuesList[(int)_ID.ID_BRANCHPOINTPOSY] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_PicName =  valuesList[(int)_ID.ID_PICNAME] as string;
_values.m_PointPosX [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSX1] as string );
_values.m_PointPosX [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSX2] as string );
_values.m_PointPosX [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSX3] as string );
_values.m_PointPosX [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSX4] as string );
_values.m_PointPosX [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSX5] as string );
_values.m_PointPosY [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSY1] as string );
_values.m_PointPosY [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSY2] as string );
_values.m_PointPosY [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSY3] as string );
_values.m_PointPosY [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSY4] as string );
_values.m_PointPosY [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_POINTPOSY5] as string );

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

