//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_EquipAttr
{ private const string TAB_FILE_DATA = "Tables/EquipAttr.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_MODELID=2,
ID_EFFECTID,
ID_COMPONENT,
ID_SETID,
ID_DURABLE,
ID_HP,
ID_HP_PER,
ID_MP,
ID_MP_PER,
ID_PHYSICSATTACK,
ID_PHYSICSATTACK_PER,
ID_MAGICATTACK,
ID_MAGICATTACK_PER,
ID_PHYSICSDEFENCE,
ID_PHYSICSDEFENCE_PER,
ID_MAGICDEFENCE,
ID_MAGICDEFENCE_PER,
ID_ATTACKSPEED,
ID_ATTACKSPEED_PER,
ID_ALLATTACK,
ID_ALLATTACK_PER,
ID_ALLDEFENCE,
ID_ALLDEFENCE_PER,
ID_ADDATTRTYPE1,
ID_ADDATTRVALUE1,
ID_ADDATTRPER1,
ID_ADDATTRTYPE2,
ID_ADDATTRVALUE2,
ID_ADDATTRPER2,
ID_ADDATTRTYPE3,
ID_ADDATTRVALUE3,
ID_ADDATTRPER3,
ID_ADDATTRTYPE4,
ID_ADDATTRVALUE4,
ID_ADDATTRPER4,
ID_ATTRFACTORMIN,
ID_ATTRFACTORMAX,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAddAttrPerCount() { return 4; } 
 private float[] m_AddAttrPer = new float[4];
 public float GetAddAttrPerbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_AddAttrPer[idx];
 return 0.0f;
 }

public int getAddAttrTypeCount() { return 4; } 
 private int[] m_AddAttrType = new int[4];
 public int GetAddAttrTypebyIndex(int idx) {
 if(idx>=0 && idx<4) return m_AddAttrType[idx];
 return -1;
 }

public int getAddAttrValueCount() { return 4; } 
 private float[] m_AddAttrValue = new float[4];
 public float GetAddAttrValuebyIndex(int idx) {
 if(idx>=0 && idx<4) return m_AddAttrValue[idx];
 return 0.0f;
 }

private float m_AllAttack;
 public float AllAttack { get{ return m_AllAttack;}}

private float m_AllAttackPer;
 public float AllAttackPer { get{ return m_AllAttackPer;}}

private float m_AllDefence;
 public float AllDefence { get{ return m_AllDefence;}}

private float m_AllDefencePer;
 public float AllDefencePer { get{ return m_AllDefencePer;}}

private float m_AttackSpeed;
 public float AttackSpeed { get{ return m_AttackSpeed;}}

private float m_AttackSpeedPer;
 public float AttackSpeedPer { get{ return m_AttackSpeedPer;}}

private float m_AttrFactorMax;
 public float AttrFactorMax { get{ return m_AttrFactorMax;}}

private float m_AttrFactorMin;
 public float AttrFactorMin { get{ return m_AttrFactorMin;}}

private int m_Component;
 public int Component { get{ return m_Component;}}

private int m_Durable;
 public int Durable { get{ return m_Durable;}}

private int m_EffectId;
 public int EffectId { get{ return m_EffectId;}}

private float m_HP;
 public float HP { get{ return m_HP;}}

private float m_HPPer;
 public float HPPer { get{ return m_HPPer;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private float m_MP;
 public float MP { get{ return m_MP;}}

private float m_MPPer;
 public float MPPer { get{ return m_MPPer;}}

private float m_MagicAttack;
 public float MagicAttack { get{ return m_MagicAttack;}}

private float m_MagicAttackPer;
 public float MagicAttackPer { get{ return m_MagicAttackPer;}}

private float m_MagicDefence;
 public float MagicDefence { get{ return m_MagicDefence;}}

private float m_MagicDefencePer;
 public float MagicDefencePer { get{ return m_MagicDefencePer;}}

private int m_ModelId;
 public int ModelId { get{ return m_ModelId;}}

private float m_PhysicsAttack;
 public float PhysicsAttack { get{ return m_PhysicsAttack;}}

private float m_PhysicsAttackPer;
 public float PhysicsAttackPer { get{ return m_PhysicsAttackPer;}}

private float m_PhysicsDefence;
 public float PhysicsDefence { get{ return m_PhysicsDefence;}}

private float m_PhysicsDefencePer;
 public float PhysicsDefencePer { get{ return m_PhysicsDefencePer;}}

private int m_SetId;
 public int SetId { get{ return m_SetId;}}

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
 Tab_EquipAttr _values = new Tab_EquipAttr();
 _values.m_AddAttrPer [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRPER1] as string );
_values.m_AddAttrPer [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRPER2] as string );
_values.m_AddAttrPer [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRPER3] as string );
_values.m_AddAttrPer [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRPER4] as string );
_values.m_AddAttrType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRTYPE1] as string);
_values.m_AddAttrType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRTYPE2] as string);
_values.m_AddAttrType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRTYPE3] as string);
_values.m_AddAttrType [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRTYPE4] as string);
_values.m_AddAttrValue [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRVALUE1] as string );
_values.m_AddAttrValue [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRVALUE2] as string );
_values.m_AddAttrValue [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRVALUE3] as string );
_values.m_AddAttrValue [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRVALUE4] as string );
_values.m_AllAttack =  Convert.ToSingle(valuesList[(int)_ID.ID_ALLATTACK] as string );
_values.m_AllAttackPer =  Convert.ToSingle(valuesList[(int)_ID.ID_ALLATTACK_PER] as string );
_values.m_AllDefence =  Convert.ToSingle(valuesList[(int)_ID.ID_ALLDEFENCE] as string );
_values.m_AllDefencePer =  Convert.ToSingle(valuesList[(int)_ID.ID_ALLDEFENCE_PER] as string );
_values.m_AttackSpeed =  Convert.ToSingle(valuesList[(int)_ID.ID_ATTACKSPEED] as string );
_values.m_AttackSpeedPer =  Convert.ToSingle(valuesList[(int)_ID.ID_ATTACKSPEED_PER] as string );
_values.m_AttrFactorMax =  Convert.ToSingle(valuesList[(int)_ID.ID_ATTRFACTORMAX] as string );
_values.m_AttrFactorMin =  Convert.ToSingle(valuesList[(int)_ID.ID_ATTRFACTORMIN] as string );
_values.m_Component =  Convert.ToInt32(valuesList[(int)_ID.ID_COMPONENT] as string);
_values.m_Durable =  Convert.ToInt32(valuesList[(int)_ID.ID_DURABLE] as string);
_values.m_EffectId =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTID] as string);
_values.m_HP =  Convert.ToSingle(valuesList[(int)_ID.ID_HP] as string );
_values.m_HPPer =  Convert.ToSingle(valuesList[(int)_ID.ID_HP_PER] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MP =  Convert.ToSingle(valuesList[(int)_ID.ID_MP] as string );
_values.m_MPPer =  Convert.ToSingle(valuesList[(int)_ID.ID_MP_PER] as string );
_values.m_MagicAttack =  Convert.ToSingle(valuesList[(int)_ID.ID_MAGICATTACK] as string );
_values.m_MagicAttackPer =  Convert.ToSingle(valuesList[(int)_ID.ID_MAGICATTACK_PER] as string );
_values.m_MagicDefence =  Convert.ToSingle(valuesList[(int)_ID.ID_MAGICDEFENCE] as string );
_values.m_MagicDefencePer =  Convert.ToSingle(valuesList[(int)_ID.ID_MAGICDEFENCE_PER] as string );
_values.m_ModelId =  Convert.ToInt32(valuesList[(int)_ID.ID_MODELID] as string);
_values.m_PhysicsAttack =  Convert.ToSingle(valuesList[(int)_ID.ID_PHYSICSATTACK] as string );
_values.m_PhysicsAttackPer =  Convert.ToSingle(valuesList[(int)_ID.ID_PHYSICSATTACK_PER] as string );
_values.m_PhysicsDefence =  Convert.ToSingle(valuesList[(int)_ID.ID_PHYSICSDEFENCE] as string );
_values.m_PhysicsDefencePer =  Convert.ToSingle(valuesList[(int)_ID.ID_PHYSICSDEFENCE_PER] as string );
_values.m_SetId =  Convert.ToInt32(valuesList[(int)_ID.ID_SETID] as string);

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

