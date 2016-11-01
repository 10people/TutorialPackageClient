#region
/*************************************************************************************
   * filename:          CharacterEffectBehaviourController
   * date:              4/17/2015 11:00:33 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System.Collections.Generic;
using Games.GlobeDefine;
using Games.LogicObj;
using GCGame.Table;
using Module.Log;
using UnityEngine;
using Games.ObjAnimModule;

public class FakeObjEffectBehaviourController : BaseEffectBehaviourController
{
    private Dictionary<string, GameObject> m_effectBindPointCache = new Dictionary<string, GameObject>(); 

    public void OnLoadWeaponOK(Tab_WeaponModel tabData)
    {
        ObjAnimModel objAnim = gameObject.GetComponent<ObjAnimModel>();
        if (objAnim == null)
        {
            return;
        }

        Transform effectPointBone;
        if (objAnim.LWeaponObject != null)
        {
            effectPointBone = objAnim.LWeaponObject.transform.Find(tabData.LWeaponBindPointPath);
            if (effectPointBone != null)
            {
                if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_LWEAPON))
                {
                    m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_LWEAPON] = effectPointBone.gameObject;
                }
                else
                {
                    m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_LWEAPON, effectPointBone.gameObject);
                }
            }
        }
        if (objAnim.RWeaponObject != null)
        {
            effectPointBone = objAnim.RWeaponObject.transform.Find(tabData.RWeaponBindPointPath);
            if (effectPointBone != null)
            {
                if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_RWEAPON))
                {
                    m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_RWEAPON] = effectPointBone.gameObject;
                }
                else
                {
                    m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_RWEAPON, effectPointBone.gameObject);
                }
            }
        }

        int count = tabData.getWeaponEffectCount();
        int effectId;
        for (int i = 0; i < count; i++)
        {
            effectId = tabData.GetWeaponEffectbyIndex(i);
            if (effectId >= 0)
            {
                PlayEffect(effectId);
            }
        }
    }

    protected override void LoadEffect(Tab_Effect effectData, PlayEffectDelegate delPlayEffect, object param)
    {
        if (effectData == null)
        {
            return;
        }
        if (m_effectBindPointCache == null)
        {
            return;
        }

        GameObject effectParentObj = null;
        if (m_effectBindPointCache.ContainsKey(effectData.ParentName) && m_effectBindPointCache[effectData.ParentName] != null)
        {
            effectParentObj = m_effectBindPointCache[effectData.ParentName];
        }
        if (effectParentObj != null)
        {
            AddEffect(effectParentObj, effectData, delPlayEffect, param);
        }
        else
        {
            if (m_BaseEffectBindPoint != null)
            {
                AddEffect(m_BaseEffectBindPoint.gameObject, effectData, delPlayEffect, param);
            }
            else
            {
                LogModule.ErrorLog("find bind point failed!, id {0} bindPoint {1}", effectData.EffectID, effectData.ParentName);
            }
        }
    }

    // 单独加个翅膀~~~
    public  void OnFlyWingOk(int id, GameObject flyWingModObj)
    {
        if (flyWingModObj == null)
            return;

        Tab_FlyWingClient flyWingClient = TableManager.GetFlyWingClientByID(id, 0);
        if (flyWingClient == null)
            return;

        //Obj_OtherPlayer otherPlayer = m_cachedObjCharacter as Obj_OtherPlayer;
        //if (otherPlayer != null)
        {
            // 绑点1
            Transform effectPointBoneFirst;
            effectPointBoneFirst = flyWingModObj.transform.Find(flyWingClient.EffectPointNameFirst);
            if (effectPointBoneFirst)
            {
                if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_LFLYWING))
                {
                    m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_LFLYWING] = effectPointBoneFirst.gameObject;
                }
                else
                {
                    m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_LFLYWING, effectPointBoneFirst.gameObject);
                }
            }
            // 绑点2
            Transform effectPointBoneSecond;
            effectPointBoneSecond = flyWingModObj.transform.Find(flyWingClient.EffectPointNameSecond);
            if (effectPointBoneSecond)
            {
                if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_RFLYWING))
                {
                    m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_RFLYWING] = effectPointBoneSecond.gameObject;
                }
                else
                {
                    m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_RFLYWING, effectPointBoneSecond.gameObject);
                }
            }

            PlayEffect(flyWingClient.EffectIdFirst);
            PlayEffect(flyWingClient.EffectIdSecond);
            PlayEffect(flyWingClient.EffectIdThrid);
            PlayEffect(flyWingClient.EffectIdFour);
        }
    }
}