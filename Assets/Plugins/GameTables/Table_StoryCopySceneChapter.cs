//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StoryCopySceneChapter
{ private const string TAB_FILE_DATA = "Tables/StoryCopySceneChapter.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CHAPTERNAME=2,
ID_CHAPTERINFO,
ID_AWARDSTARNUM1,
ID_AWARD1,
ID_AWARDSTARNUM2,
ID_AWARD2,
ID_AWARDSTARNUM3,
ID_AWARD3,
ID_AWARDSTARNUM4,
ID_AWARD4,
ID_LEVELAWARD1,
ID_LEVELAWARD2,
ID_LEVELAWARD3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAwardCount() { return 4; } 
 private int[] m_Award = new int[4];
 public int GetAwardbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_Award[idx];
 return -1;
 }

public int getAwardStarNumCount() { return 4; } 
 private int[] m_AwardStarNum = new int[4];
 public int GetAwardStarNumbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_AwardStarNum[idx];
 return -1;
 }

private string m_ChapterInfo;
 public string ChapterInfo { get{ return m_ChapterInfo;}}

private string m_ChapterName;
 public string ChapterName { get{ return m_ChapterName;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getLevelAwardCount() { return 3; } 
 private int[] m_LevelAward = new int[3];
 public int GetLevelAwardbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_LevelAward[idx];
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
 Tab_StoryCopySceneChapter _values = new Tab_StoryCopySceneChapter();
 _values.m_Award [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARD1] as string);
_values.m_Award [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARD2] as string);
_values.m_Award [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARD3] as string);
_values.m_Award [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARD4] as string);
_values.m_AwardStarNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDSTARNUM1] as string);
_values.m_AwardStarNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDSTARNUM2] as string);
_values.m_AwardStarNum [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDSTARNUM3] as string);
_values.m_AwardStarNum [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDSTARNUM4] as string);
_values.m_ChapterInfo =  valuesList[(int)_ID.ID_CHAPTERINFO] as string;
_values.m_ChapterName =  valuesList[(int)_ID.ID_CHAPTERNAME] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LevelAward [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELAWARD1] as string);
_values.m_LevelAward [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELAWARD2] as string);
_values.m_LevelAward [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELAWARD3] as string);

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

