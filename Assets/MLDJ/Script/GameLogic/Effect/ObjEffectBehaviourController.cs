#region
/*************************************************************************************
   * filename:          ObjEffectBehaviourController
   * date:              4/17/2015 10:55:30 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System.Collections.Generic;
using Games.GlobeDefine;
using Games.LogicObj;
using Games.Scene;
using Games.SkillModle;
using GCGame;
using GCGame.Table;
using Module.Log;
using UnityEngine;

public class ObjEffectBehaviourController : BaseEffectBehaviourController
{
    #region 变量
    /// <summary>
    /// 持有特效的obj对象
    /// </summary>
    protected Obj m_EffectHolder;

    protected Dictionary<string, GameObject> m_effectBindPointCache = new Dictionary<string, GameObject>(); 
    /// <summary>
    /// npc特效相关的特殊优化处理
    /// </summary>
    protected bool m_IsOk = false;

    #endregion

    #region 属性

    protected override bool IsNpcObj
    {
        get
        {
            if (m_EffectHolder != null && m_EffectHolder.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
            {
                return true;
            }
            return base.IsNpcObj;
        }
    }

    #endregion

    #region 方法

    #region 继承重写

    public virtual GameObject GetBindPointObj(string pointName)
    {
        if (m_effectBindPointCache == null)
        {
            return null;
        }
        if (m_effectBindPointCache.ContainsKey(pointName))
        {
            return m_effectBindPointCache[pointName];
        }
        else
        {
            LogModule.ErrorLog("GetBindPointObj called has no bind point obj {0} ",pointName);
            return null;
        }
    }

    public string GetBindPathByName(int id, string szName)
    {
        Tab_EffectPoint tabEffectPoint = TableManager.GetEffectPointByID(id, 0);
        if (tabEffectPoint == null)
        {
            return "";
        }

        //身体中心点
        switch (szName)
        {
            case GlobeVar.EFFECT_BIND_POINT_HEAD:
                return tabEffectPoint.HeadPointPath;
            case GlobeVar.EFFECT_BIND_POINT_LHAND:
                return tabEffectPoint.LHandPointPath;
            case GlobeVar.EFFECT_BIND_POINT_RHAND:
                return tabEffectPoint.RHandPointPath;
            case GlobeVar.EFFECT_BIND_POINT_LFOOT:
                return tabEffectPoint.LFootPointPath;
            case GlobeVar.EFFECT_BIND_POINT_RFOOT:
                return tabEffectPoint.RFootPointPath;
            case GlobeVar.EFFECT_BIND_POINT_HEADTOP:
                return tabEffectPoint.HeadTopPointPath;
            case GlobeVar.EFFECT_BIND_POINT_LSHOULDER:
                return tabEffectPoint.LShoulderPointPath;
            case GlobeVar.EFFECT_BIND_POINT_RSHOULDER:
                return tabEffectPoint.RShoulderPointPath;
            case GlobeVar.EFFECT_BIND_POINT_RHANDBACK:
                return tabEffectPoint.RHandBackPointPath;
            case GlobeVar.EFFECT_BIND_POINT_LHANDBACK:
                return tabEffectPoint.LHandBackPointPath;
            case GlobeVar.EFFECT_BIND_POINT_TAIL:
                return tabEffectPoint.TailPointPath;
            case GlobeVar.EFFECT_BIND_POINT_ADDONS:
                return tabEffectPoint.AddOnsItem;
            case GlobeVar.EFFECT_BIND_POINT_SPECIALWEAPON:
                return tabEffectPoint.SpecialWeaponPoint;
            default:
                return "";
        }
    }

    protected override void InitBindPointData(GameObject go)
    {
        base.InitBindPointData(go);
        if (go != null)
        {
            m_EffectHolder = go.GetComponent<Obj>();
            if (m_EffectHolder != null && m_EffectHolder.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                Tab_CharModel modelTable = TableManager.GetCharModelByID(m_EffectHolder.ModelID, 0);
                if (modelTable != null && GameManager.gameManager.ActiveScene != null)
                {
                    GameManager.gameManager.ActiveScene.SetMainPlayerCircleSize(modelTable.SelectCircleSize);
                }
            }
        }
    }


    public override void ClearEffect()
    {
        base.ClearEffect();
        FXController[] controllers = null;
        var enumerator = m_effectBindPointCache.GetEnumerator();
        while (enumerator.MoveNext())
        {
            ClearBindPoint(enumerator.Current.Value);
        }
    }

    /// <summary>
    /// 是否包含特效绑定点
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    public override bool IsHaveBindPoint(string name)
    {
        if (m_effectBindPointCache == null)
        {
            return false;
        }
        return m_effectBindPointCache.ContainsKey(name) && m_effectBindPointCache[name]!=null;
    }

    public override void InitBindPointInfo()
    {
        m_effectBindPointCache.Clear();
        base.InitBindPointInfo();
        if (m_EffectHolder != null)
        {
            Tab_CharModel _CharModelInfo = TableManager.GetCharModelByID(m_EffectHolder.ModelID, 0);
            if (_CharModelInfo != null && _CharModelInfo.ModelType != -1)
            {
                Tab_EffectPoint _EffectPointInfo = TableManager.GetEffectPointByID(_CharModelInfo.ModelType, 0);
                if (_EffectPointInfo != null)
                {
                    string path_prefix = ""; // 路径的前缀,用来处理乘骑的情况

                    do
                    {
                        int mountid = -1;
                        if (m_EffectHolder == null)
                            break; // 如果是空,则跳出
                        if (m_EffectHolder.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                        {
                            Obj_OtherPlayer op = m_EffectHolder as Obj_OtherPlayer;
                            if (op == null)
                                break;
                            if (op.MountID > 0 && op.MountObj != null)
                                mountid = op.MountID;
                        }
                        else if (m_EffectHolder.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                        {
                            Obj_MainPlayer mp = m_EffectHolder as Obj_MainPlayer;
                            if (mp == null)
                                break;
                            if (mp.MountID > 0 && mp.MountObj != null)
                                mountid = mp.MountID;
                        }
                        if (mountid == -1)
                            break; // 没有找到相应的乘骑

                        Tab_MountBase MountBase = TableManager.GetMountBaseByID(mountid, 0);
                        if (null == MountBase)
                        {
                            LogModule.DebugLog("MountBase.txt has not Line ID=" + mountid);
                            break;
                        }
                        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
                        if (MountTable == null)
                        {
                            LogModule.DebugLog("CharMount.txt has not Line ID=" + MountBase.ModelID);
                            break;
                        }

                        path_prefix = "Model" + MountTable.BindPoint + "/MountPlayer/";
                    } while (false);


                    //身体中心点
                    Transform effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.CenterPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_CENTER, effectPointBone.gameObject);
                    }
                    //base节点
                    if (m_BaseEffectBindPoint != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_BASE, m_BaseEffectBindPoint.gameObject);
                    }
                    //头节点
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.HeadPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_HEAD, effectPointBone.gameObject);
                    }
                    //左手（左前足）节点
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.LHandPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_LHAND, effectPointBone.gameObject);
                    }
                    //右手（右前足）节点
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.RHandPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_RHAND, effectPointBone.gameObject);
                    }
                    //左脚（左后足）节点
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.LFootPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_LFOOT, effectPointBone.gameObject);
                    }
                    //右脚（右后足）节点
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.RFootPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_RFOOT, effectPointBone.gameObject);
                    }
                    //头顶
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.HeadTopPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_HEADTOP, effectPointBone.gameObject);
                    }
                    //左肩
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.LShoulderPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_LSHOULDER, effectPointBone.gameObject);
                    }
                    //右肩
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.RShoulderPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_RSHOULDER, effectPointBone.gameObject);
                    }
                    //右手手背
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.RHandBackPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_RHANDBACK, effectPointBone.gameObject);
                    }
                    //左手手背
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.LHandBackPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_LHANDBACK, effectPointBone.gameObject);
                    }
                    //尾饰
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.TailPointPath);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_TAIL, effectPointBone.gameObject);
                    }
                    //附加物
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.AddOnsItem);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_ADDONS, effectPointBone.gameObject);
                    }
                    //特殊
                    effectPointBone = m_EffectGameObj.transform.Find(path_prefix + _EffectPointInfo.SpecialWeaponPoint);
                    if (effectPointBone != null)
                    {
                        m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_SPECIALWEAPON, effectPointBone.gameObject);
                    }
                }
            }
        }
    }

    public override void StopEffect(int effectID, bool bStopAll = true)
    {
        base.StopEffect(effectID, bStopAll);
        //材质变色材料停止的时候 置回初始颜色
        if (m_EffectHolder != null)
        {
            Tab_Effect startEffect = TableManager.GetEffectByID(effectID, 0);
            if (null != startEffect)
            {
                if (startEffect.Type == (int)EEffectChangeType.TYPE_CHANGBLUE
                    || startEffect.Type == (int)EEffectChangeType.TYPE_CHANGRED)
                {
                    m_EffectHolder.SetMaterialInitColor();
                }
            }
        }

        foreach (KeyValuePair<string, GameObject> pair in m_effectBindPointCache)
        {
			if( pair.Value == null || pair.Value.transform == null  )
			{
				//Debug.LogError("m_effectBindPointCache 中 特效 是 null ");
				continue ;
			}

            for (int i = 0; i < pair.Value.transform.childCount; i++)
            {
			
                Transform childTransform = pair.Value.transform.GetChild(i);
                if (childTransform)
                {
                    FXController curController = childTransform.GetComponent<FXController>();
                    if (curController)
                    {
                        //处于播放完的隐藏状态 不需要stop
                        if (curController.Remaindelay < 0 &&
                            curController.Remainduration < 0 &&
                            curController.gameObject.activeSelf == false)
                        {
                            continue;
                        }
                        if (curController.EffectID == effectID)
                        {
                            curController.Stop();
                            if (!bStopAll)
                            {
                                return;
                            }
                        }
                    }
                }
            }
        }
    }


    #region 内部调用

    /// <summary>
    /// 不能调用基类方法 完全重写
    /// </summary>
    /// <param name="effectData"></param>
    /// <param name="delPlayEffect"></param>
    /// <param name="param"></param>
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

    protected override void ChangeMaterialColor(int effectChangeType)
    {
        base.ChangeMaterialColor(effectChangeType);
        if (effectChangeType == (int)EEffectChangeType.TYPE_CHANGBLUE)
        {
            if (m_EffectHolder != null)
            {
                m_EffectHolder.SetMaterialColor(GlobeVar.BLUEMATERIAL_R, GlobeVar.BLUEMATERIAL_G, GlobeVar.BLUEMATERIAL_B);
            }
        }
        else if (effectChangeType == (int)EEffectChangeType.TYPE_CHANGRED)
        {
            if (m_EffectHolder != null)
            {
                m_EffectHolder.SetMaterialColor(GlobeVar.REDMATERIAL_R, GlobeVar.REDMATERIAL_G, GlobeVar.REDMATERIAL_B);
            }
        }
    }

    #endregion

    #endregion

    #region protected/private
    /// <summary>
    ///清除某个特效绑定点下的所有粒子
    /// </summary>
    /// <param name="bindPoint"></param>
    protected void ClearBindPoint(GameObject bindPoint)
    {
        if (bindPoint == null)
        {
            return;
        }
        FXController []controllers = bindPoint.GetComponentsInChildren<FXController>();
        for (int i = 0; i < controllers.Length; i++)
        {
            if (controllers[i] != null)
            {
                controllers[i].Stop();
            }
        }
    }

    #endregion

    public bool ChangeColorEffct()
    {
        if (m_EffectCountCache == null)
        {
            return false;
        }
        foreach (KeyValuePair<int, int> pair in m_EffectCountCache)
        {
            if (pair.Value > 0)
            {
                Tab_Effect startEffect = TableManager.GetEffectByID(pair.Key, 0);
                if (null != startEffect)
                {
                    if (startEffect.Type == (int)EEffectChangeType.TYPE_CHANGBLUE)
                    {
                        if (m_EffectHolder != null)
                        {
                            m_EffectHolder.SetMaterialColor(GlobeVar.BLUEMATERIAL_R, GlobeVar.BLUEMATERIAL_G, GlobeVar.BLUEMATERIAL_B);
                        }
                        break;
                    }
                    else if (startEffect.Type == (int)EEffectChangeType.TYPE_CHANGRED)
                    {
                        if (m_EffectHolder != null)
                        {
                            m_EffectHolder.SetMaterialColor(GlobeVar.REDMATERIAL_R, GlobeVar.REDMATERIAL_G, GlobeVar.REDMATERIAL_B);
                        }
                        break;
                    }
                }
            }
        }
        return true;
    }

    /// <summary>
    /// 停止NPC所有特效
    /// </summary>
    public void NPCStopEffect()
    {
        m_IsOk = false;

        if (m_dicEffectCache == null || m_EffectHolder == null) return;
        if (m_EffectHolder.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC) return;

        if (m_EffectHolder != null)
        {
            m_EffectHolder.SetMaterialInitColor();
        }

        int iTag = 0;
        FXController fx;
        foreach (KeyValuePair<int, List<FXController>> keyValuePair in m_dicEffectCache)
        {
            if (keyValuePair.Value == null) continue;
            iTag = keyValuePair.Value.Count;
            int j = 0;
            for (int i = 0; i < iTag; i++)
            {
                if (j >= keyValuePair.Value.Count) break;

                fx = keyValuePair.Value[j] as FXController;
                if (fx != null)
                {
                    if (j == 0 && fx.gameObject.activeSelf)
                    {
                        fx.gameObject.SetActive(false);
                        j++;
                    }
                    else
                    {
                        ResourceManager.DestroyResource(fx.gameObject);
                        keyValuePair.Value[j] = null;
                        keyValuePair.Value.RemoveAt(j);
                    }
                }
            }
        }

    }


    public virtual void OnMountModelOk()
    {
        
    }
    /// <summary>
    /// 下马 
    /// </summary>
    public virtual void OnMountOff(int mountId)
    {
        
    }

    public virtual void OnWeaponEquOk(Tab_WeaponModel tabData)
    {

    }

    public virtual void OnWeaponUnEquOk()
    {

    }

	public virtual void OnFlyWingOk(int id,GameObject obj)
	{
	}
	public virtual void OnCancalFlyWing()
	{
	}
    /// <summary>
    /// 添加模型固有特效
    /// </summary>
    public static void AddCharModelEffects(Obj_Character obj, EEffectBindTargetType type = EEffectBindTargetType.TYPE_CHARACTER)
    {
        if (obj == null)
        {
            LogModule.ErrorLog("AddCharModelEffects called but parameter obj is null!");
            return;
        }
        if (type == EEffectBindTargetType.TYPE_CHARACTER)
        {
            Tab_CharModel table = TableManager.GetCharModelByID(obj.ModelID, 0);
            if (table != null)
            {
                int totalEffectCountOnModel = table.getEffectIdCount();
                int tmpValue;
                for (int i = 0; i < totalEffectCountOnModel; i++)
                {
                    tmpValue = table.GetEffectIdbyIndex(i);
                    if (tmpValue >= 0)
                    {
                        obj.PlayEffect(tmpValue);
                    }
                }
            }
        }
    }

    public virtual void OnMove()
    {

    }

    public virtual void OnIdle()
    {

    }

    public void PlaySkillWarningEffect(int skillExId)
    {
        if (m_BaseEffectBindPoint == null)
        {
            return;
        }
        Tab_SkillEx skillEx = TableManager.GetSkillExByID(skillExId, 0);
        if (skillEx == null || skillEx.getImpactCount() == 0)
        {
            return;
        }
        BaseSkillWarningEffect com;
        SkillWarningEffectStruct data;
        switch (skillEx.RangeEffectType)
        {
            case (int)SKILLRANGEEFFECTTYPE.RECT:
            {
                data.WarnIngShapeType = SKILLRANGEEFFECTTYPE.RECT;
                data.RangeEffectSize01 = skillEx.GetRangeEffectSizebyIndex(0);
                data.RangeEffectSize02 = skillEx.GetRangeEffectSizebyIndex(1);
                data.ShowWarningTime = skillEx.SkillDelayTime/1000f;
                GameObject go = ResourceManager.InstantiateResource(GlobeVar.SKILL_WARNING_EFFECT_RECT) as GameObject;
                if (go == null)
                {
                    return;
                }
                Utils.SetParent(go.transform, m_BaseEffectBindPoint);
                com = go.AddComponent<RectSkillWarningEffect>();
                break;
            }
            default:
            {
                return;
            }
        }
        if (com != null)
        {
            com.InitComponent();
            com.StartFill(data);
        }
    }

    #endregion


}