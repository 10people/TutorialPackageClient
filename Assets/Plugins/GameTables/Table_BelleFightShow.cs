//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BelleFightShow
{ private const string TAB_FILE_DATA = "Tables/BelleFightShow.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_COMBATFORCE=2,
ID_EFFECTID,
ID_EFFECT3DID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_CombatForce;
 public int CombatForce { get{ return m_CombatForce;}}

private int m_Effect3dId;
 public int Effect3dId { get{ return m_Effect3dId;}}

private int m_EffectId;
 public int EffectId { get{ return m_EffectId;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

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
 Tab_BelleFightShow _values = new Tab_BelleFightShow();
 _values.m_CombatForce =  Convert.ToInt32(valuesList[(int)_ID.ID_COMBATFORCE] as string);
_values.m_Effect3dId =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECT3DID] as string);
_values.m_EffectId =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);

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

