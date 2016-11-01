//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Sounds
{ private const string TAB_FILE_DATA = "Tables/Sounds.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_FULLPATHNAME,
ID_PANLEVEL,
ID_VOLUME,
ID_MINDISTANCE,
ID_SPREAD,
ID_ISLOOP,
ID_DELAY,
ID_FADEINTIME,
ID_FADEOUTTIME,
ID_CURMAXPLAYINGCOUNT,
ID_PRIORITY,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private short m_CurMaxPlayingCount;
 public short CurMaxPlayingCount { get{ return m_CurMaxPlayingCount;}}

private float m_Delay;
 public float Delay { get{ return m_Delay;}}

private float m_FadeInTime;
 public float FadeInTime { get{ return m_FadeInTime;}}

private float m_FadeOutTime;
 public float FadeOutTime { get{ return m_FadeOutTime;}}

private string m_FullPathName;
 public string FullPathName { get{ return m_FullPathName;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private bool m_IsLoop;
 public bool IsLoop { get{ return m_IsLoop;}}

private float m_MinDistance;
 public float MinDistance { get{ return m_MinDistance;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private float m_PanLevel;
 public float PanLevel { get{ return m_PanLevel;}}

private short m_Priority;
 public short Priority { get{ return m_Priority;}}

private float m_Spread;
 public float Spread { get{ return m_Spread;}}

private float m_Volume;
 public float Volume { get{ return m_Volume;}}

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
 Tab_Sounds _values = new Tab_Sounds();
 _values.m_CurMaxPlayingCount =  Convert.ToInt16(valuesList[(int)_ID.ID_CURMAXPLAYINGCOUNT] as string);
_values.m_Delay =  Convert.ToSingle(valuesList[(int)_ID.ID_DELAY] as string );
_values.m_FadeInTime =  Convert.ToSingle(valuesList[(int)_ID.ID_FADEINTIME] as string );
_values.m_FadeOutTime =  Convert.ToSingle(valuesList[(int)_ID.ID_FADEOUTTIME] as string );
_values.m_FullPathName =  valuesList[(int)_ID.ID_FULLPATHNAME] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsLoop =  Convert.ToInt16(valuesList[(int)_ID.ID_ISLOOP] as string) != 0;
_values.m_MinDistance =  Convert.ToSingle(valuesList[(int)_ID.ID_MINDISTANCE] as string );
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_PanLevel =  Convert.ToSingle(valuesList[(int)_ID.ID_PANLEVEL] as string );
_values.m_Priority =  Convert.ToInt16(valuesList[(int)_ID.ID_PRIORITY] as string);
_values.m_Spread =  Convert.ToSingle(valuesList[(int)_ID.ID_SPREAD] as string );
_values.m_Volume =  Convert.ToSingle(valuesList[(int)_ID.ID_VOLUME] as string );

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

