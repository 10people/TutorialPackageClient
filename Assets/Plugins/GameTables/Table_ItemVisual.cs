//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ItemVisual
{ private const string TAB_FILE_DATA = "Tables/ItemVisual.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CHARMODELID_SHAOLIN=2,
ID_CHARMODELID_TIANSHAN,
ID_CHARMODELID_DALI,
ID_CHARMODELID_XIAOYAO,
ID_CHARMODELID_GAIBANG,
ID_WEAPONMODELID_SHAOLIN,
ID_WEAPONMODELID_TIANSHAN,
ID_WEAPONMODELID_DALI,
ID_WEAPONMODELID_XIAOYAO,
ID_WEAPONMODELID_GAIBANG,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_CharModelIDDaLi;
 public int CharModelIDDaLi { get{ return m_CharModelIDDaLi;}}

private int m_CharModelIDGaiBang;
 public int CharModelIDGaiBang { get{ return m_CharModelIDGaiBang;}}

private int m_CharModelIDShaoLin;
 public int CharModelIDShaoLin { get{ return m_CharModelIDShaoLin;}}

private int m_CharModelIDTianShan;
 public int CharModelIDTianShan { get{ return m_CharModelIDTianShan;}}

private int m_CharModelIDXiaoYao;
 public int CharModelIDXiaoYao { get{ return m_CharModelIDXiaoYao;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_WeaponModelIDDaLi;
 public int WeaponModelIDDaLi { get{ return m_WeaponModelIDDaLi;}}

private int m_WeaponModelIDGaiBang;
 public int WeaponModelIDGaiBang { get{ return m_WeaponModelIDGaiBang;}}

private int m_WeaponModelIDShaoLin;
 public int WeaponModelIDShaoLin { get{ return m_WeaponModelIDShaoLin;}}

private int m_WeaponModelIDTianShan;
 public int WeaponModelIDTianShan { get{ return m_WeaponModelIDTianShan;}}

private int m_WeaponModelIDXiaoYao;
 public int WeaponModelIDXiaoYao { get{ return m_WeaponModelIDXiaoYao;}}

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
 Tab_ItemVisual _values = new Tab_ItemVisual();
 _values.m_CharModelIDDaLi =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID_DALI] as string);
_values.m_CharModelIDGaiBang =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID_GAIBANG] as string);
_values.m_CharModelIDShaoLin =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID_SHAOLIN] as string);
_values.m_CharModelIDTianShan =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID_TIANSHAN] as string);
_values.m_CharModelIDXiaoYao =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID_XIAOYAO] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_WeaponModelIDDaLi =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONMODELID_DALI] as string);
_values.m_WeaponModelIDGaiBang =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONMODELID_GAIBANG] as string);
_values.m_WeaponModelIDShaoLin =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONMODELID_SHAOLIN] as string);
_values.m_WeaponModelIDTianShan =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONMODELID_TIANSHAN] as string);
_values.m_WeaponModelIDXiaoYao =  Convert.ToInt32(valuesList[(int)_ID.ID_WEAPONMODELID_XIAOYAO] as string);

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

