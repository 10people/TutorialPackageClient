//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ProfessionConmmon
{ private const string TAB_FILE_DATA = "Tables/ProfessionConmmon.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CHANGEMODELID_1=2,
ID_CHANGEMODELID_2,
ID_ANIMID_1_1,
ID_ANIMID_1_2,
ID_ANIMID_2_1,
ID_ANIMID_2_2,
ID_WEAPONMODELID_1,
ID_WEAPONMODELID_2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAnimID1Count() { return 2; } 
 private int[] m_AnimID1 = new int[2];
 public int GetAnimID1byIndex(int idx) {
 if(idx>=0 && idx<2) return m_AnimID1[idx];
 return -1;
 }

public int getAnimID2Count() { return 2; } 
 private int[] m_AnimID2 = new int[2];
 public int GetAnimID2byIndex(int idx) {
 if(idx>=0 && idx<2) return m_AnimID2[idx];
 return -1;
 }

public int getChangeModelIDCount() { return 2; } 
 private int[] m_ChangeModelID = new int[2];
 public int GetChangeModelIDbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_ChangeModelID[idx];
 return -1;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getWeaponModelIDCount() { return 2; } 
 private int[] m_WeaponModelID = new int[2];
 public int GetWeaponModelIDbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_WeaponModelID[idx];
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
 Tab_ProfessionConmmon _values = new Tab_ProfessionConmmon();
 _values.m_AnimID1 [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ANIMID_1_1] as string);
_values.m_AnimID1 [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ANIMID_1_2] as string);
_values.m_AnimID2 [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ANIMID_2_1] as string);
_values.m_AnimID2 [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ANIMID_2_2] as string);
_values.m_ChangeModelID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CHANGEMODELID_1] as string);
_values.m_ChangeModelID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CHANGEMODELID_2] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_WeaponModelID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONMODELID_1] as string);
_values.m_WeaponModelID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONMODELID_2] as string);

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

