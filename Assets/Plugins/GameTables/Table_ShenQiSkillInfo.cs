//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ShenQiSkillInfo
{ private const string TAB_FILE_DATA = "Tables/ShenQiSkillInfo.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_SHENQISKILLEXID,
ID_NEEDITEMID=2,
ID_NEEDITEMNUM,
ID_NEXTSKILLID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_NeedItemId;
 public int NeedItemId { get{ return m_NeedItemId;}}

private int m_NeedItemNum;
 public int NeedItemNum { get{ return m_NeedItemNum;}}

private int m_NextSkillId;
 public int NextSkillId { get{ return m_NextSkillId;}}

private int m_ShenQiSkillExId;
 public int ShenQiSkillExId { get{ return m_ShenQiSkillExId;}}

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
 Tab_ShenQiSkillInfo _values = new Tab_ShenQiSkillInfo();
 _values.m_NeedItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDITEMID] as string);
_values.m_NeedItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDITEMNUM] as string);
_values.m_NextSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLID] as string);
_values.m_ShenQiSkillExId =  Convert.ToInt32(valuesList[(int)_ID.ID_SHENQISKILLEXID] as string);

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

