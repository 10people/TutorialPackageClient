//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_VillainGuideNpc
{ private const string TAB_FILE_DATA = "Tables/VillainGuideNpc.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NORMALSCENENUM=2,
ID_NORMALNPCNUM,
ID_NEWNORMALNPCNUM,
ID_SUPERSCENENUM,
ID_SUPERNPCNUM,
ID_NEWSUPERNPCNUM,
ID_NORMALVILLAINNUM,
ID_SUPERVILLAINNUM,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_NewNormalNpcNum;
 public int NewNormalNpcNum { get{ return m_NewNormalNpcNum;}}

private int m_NewSuperNpcNum;
 public int NewSuperNpcNum { get{ return m_NewSuperNpcNum;}}

private int m_NormalNpcNum;
 public int NormalNpcNum { get{ return m_NormalNpcNum;}}

private int m_NormalSceneNum;
 public int NormalSceneNum { get{ return m_NormalSceneNum;}}

private int m_NormalVillainNum;
 public int NormalVillainNum { get{ return m_NormalVillainNum;}}

private int m_SuperNpcNum;
 public int SuperNpcNum { get{ return m_SuperNpcNum;}}

private int m_SuperSceneNum;
 public int SuperSceneNum { get{ return m_SuperSceneNum;}}

private int m_SuperVillainNum;
 public int SuperVillainNum { get{ return m_SuperVillainNum;}}

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
 Tab_VillainGuideNpc _values = new Tab_VillainGuideNpc();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_NewNormalNpcNum =  Convert.ToInt32(valuesList[(int)_ID.ID_NEWNORMALNPCNUM] as string);
_values.m_NewSuperNpcNum =  Convert.ToInt32(valuesList[(int)_ID.ID_NEWSUPERNPCNUM] as string);
_values.m_NormalNpcNum =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALNPCNUM] as string);
_values.m_NormalSceneNum =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALSCENENUM] as string);
_values.m_NormalVillainNum =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALVILLAINNUM] as string);
_values.m_SuperNpcNum =  Convert.ToInt32(valuesList[(int)_ID.ID_SUPERNPCNUM] as string);
_values.m_SuperSceneNum =  Convert.ToInt32(valuesList[(int)_ID.ID_SUPERSCENENUM] as string);
_values.m_SuperVillainNum =  Convert.ToInt32(valuesList[(int)_ID.ID_SUPERVILLAINNUM] as string);

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

