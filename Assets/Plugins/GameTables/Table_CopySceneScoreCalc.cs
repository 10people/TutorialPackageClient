//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CopySceneScoreCalc
{ private const string TAB_FILE_DATA = "Tables/CopySceneScoreCalc.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_HITPOINTPER=2,
ID_PASSTIMEPER,
ID_DEADTIMESPER,
ID_KFACTOR,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_DeadTimesPer;
 public int DeadTimesPer { get{ return m_DeadTimesPer;}}

private int m_HitPointPer;
 public int HitPointPer { get{ return m_HitPointPer;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_KFactor;
 public int KFactor { get{ return m_KFactor;}}

private int m_PassTimePer;
 public int PassTimePer { get{ return m_PassTimePer;}}

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
 Tab_CopySceneScoreCalc _values = new Tab_CopySceneScoreCalc();
 _values.m_DeadTimesPer =  Convert.ToInt32(valuesList[(int)_ID.ID_DEADTIMESPER] as string);
_values.m_HitPointPer =  Convert.ToInt32(valuesList[(int)_ID.ID_HITPOINTPER] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_KFactor =  Convert.ToInt32(valuesList[(int)_ID.ID_KFACTOR] as string);
_values.m_PassTimePer =  Convert.ToInt32(valuesList[(int)_ID.ID_PASSTIMEPER] as string);

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

