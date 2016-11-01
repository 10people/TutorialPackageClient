#region
/*************************************************************************************
   * filename:          BaseEffectBehaviourController
   * date:              4/17/2015 10:52:37 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System.Collections.Generic;
using GameRes;
using Games.GlobeDefine;
using Games.LogicObj;
using GCGame;
using GCGame.Table;
using Module.Log;
using UnityEngine;

public abstract class BaseEffectBehaviourController : MonoBehaviour
{
    #region 变量
    /// <summary> 
    /// 通用基础绑定点 EffectPoint
    /// </summary>
    protected Transform m_BaseEffectBindPoint;

    /// <summary>
    /// 缓存特效持有者的 go 的trans
    /// </summary>
    protected Transform m_EffectGameObjTrans;
    /// <summary>
    /// 特效持有者的 go
    /// </summary>
    protected GameObject m_EffectGameObj;
    /// <summary>
    /// 缓存脚本依附物体的trans
    /// </summary>
    protected Transform m_CachedTrans;
    /// <summary>
    /// 是否初始化过
    /// </summary>
    private bool m_hasInited = false;
    /// <summary>
    /// 缓存同一个特效的数量
    /// </summary>
    protected Dictionary<int,int> m_EffectCountCache =new Dictionary<int, int>();
    /// <summary>
    /// 缓存等待播放的特效列表
    /// </summary>
    protected List<int> m_NeedPlayEffectIdCacheList = new List<int>();
    /// <summary>
    /// 保存当前持有者存在但是未激活的粒子
    /// </summary>
    protected Dictionary<int, List<FXController>> m_dicEffectCache = new Dictionary<int, List<FXController>>();

    #endregion

    #region 属性

    public int EffectCountCacheCount
    {
        get
        {
            if (m_EffectCountCache == null)
            {
                return 0;
            }
            return m_EffectCountCache.Count;
        }
    }

    /// <summary>
    /// 设置了 取消技能特效 时 判断当前特效持有者是否需要继续显示特效
    /// </summary>
	//==== 这个 标记位置永远返回false 啊 。。 尼玛啊 。。为什么 这么写啊 。。。。。 先 不用 这个 标记位置了 by lizhe
    protected virtual bool IsCanHideEffectObj
    {
        get { return false; }
    }

    /// <summary>
    /// 特效持有者 是否可见 不可见 则直接不生成特效
    /// </summary>
    protected virtual bool EffectHolderVisible
    {
        get { return true; }
    }
    /// <summary>
    /// 模型不可见时 特效是否播放非持续性的特效
    /// </summary>
    protected virtual bool DoPlayEffectWhenModelInvisible
    {
        get { return true; }
    }
    /// <summary>
    /// 是否是npc
    /// </summary>
    protected virtual bool IsNpcObj
    {
        get { return false; }
    }

    #endregion

    #region 方法

    protected virtual void Awake()
    {
        m_CachedTrans = transform;
    }

    #region 公开接口

    public void EffectDestroyed(int effectID)
    {
        //m_fxCache.Remove(effectID);
        OnEffectOver(effectID);
    }

    public void EffectDeactive(FXController curController)
    {
        if (m_dicEffectCache.ContainsKey(curController.EffectID) && null != m_dicEffectCache[curController.EffectID])
        {
            m_dicEffectCache[curController.EffectID].Add(curController);
        }
        else
        {
            m_dicEffectCache.Add(curController.EffectID, new List<FXController>());
            m_dicEffectCache[curController.EffectID].Add(curController);
        }

        OnEffectOver(curController.EffectID);
    }

    public virtual bool IsHaveBindPoint(string name)
    {
        if (name == GlobeVar.EFFECT_BIND_POINT_BASE && m_BaseEffectBindPoint!=null)
        {
            return true;
        }
        return false;
    }

    public void InitEffect(GameObject effGameObj)
    {
        if (effGameObj == null)
        {
            LogModule.ErrorLog("InitEffect called but parameter effGameObj is null!");
            return;
        }
        m_hasInited = true;
        m_EffectGameObj = effGameObj;
        m_EffectGameObjTrans = effGameObj.transform;

        m_dicEffectCache.Clear();
        m_EffectCountCache.Clear();
        //暂时解决变身时 模型重新加载 重新屌用这个函数 导致 播放列表 被清空 然后没有播放到变身特效 
        //m_NeedPlayEffectIdCacheList.Clear();
        InitBindPointData(effGameObj);
        InitBindPointInfo();
    }

    public virtual void ClearEffect()
    {
        if (m_BaseEffectBindPoint!=null)
        {
            FXController[] controllers = m_BaseEffectBindPoint.GetComponentsInChildren<FXController>();
            for (int i = 0; i < controllers.Length; i++)
            {
                if (controllers[i] != null)
                {
                    controllers[i].Stop();
                }
            }
        }
    }
    public virtual void InitBindPointInfo()
    {
        if(m_EffectGameObjTrans !=null)
        {
            m_BaseEffectBindPoint = m_EffectGameObjTrans.Find(GlobeVar.EFFECT_BIND_POINT_BASE);
        }
    }


    public void PlayEffect(int effectID, PlayEffectDelegate delPlayEffect = null, object param = null)
    {
        if (!m_hasInited)
        {
            
        }
        Tab_Effect EffectInfo = TableManager.GetEffectByID(effectID, 0);
        if (EffectInfo == null)
        {
            if (null != delPlayEffect)
            {
                delPlayEffect(null, param);
            }
            return;
        }
        if (!DoPlayEffectWhenModelInvisible && !EffectHolderVisible && EffectInfo.Duration > 0)
        {
            return;
        }
        //设置了 取消技能特效 且满足条件
        if (EffectInfo.IsCanHide && !PlayerPreferenceData.SystemSkillEffectEnable ) //&& IsCanHideEffectObj)  这个 永远 返回 false ....
        {
            return;
        }
        ///特效持有者对象为空时 不处理 回调null
        if (m_EffectGameObj == null)
        {
            LogModule.WarningLog("effect can not play before init");
            if (null != delPlayEffect)
            {
                delPlayEffect(null, param);
            }
            return;
        }
        //加个数量限制
        //如果表格配置为-1则不限制，此时不用判断数量
        if (EffectInfo.MaxOwnNum >= 0 && GetEffectCountById(effectID) >= EffectInfo.MaxOwnNum)
        {
            return;
        }

        LoadEffect(EffectInfo, delPlayEffect,param);

		// 高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!
		// 要开始挖坑了！！！	坑////////坑////////坑////////坑////////坑////////坑/////
		// 高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!
//		if (GlobeVar.PLAYERLEVELUPEFFECTID == effectID)
//		{
//			UIManager.HideAllUIWhenLevelUp();
//		}
    }

    public virtual void StopEffect(int effectID, bool bStopAll = true)
    {
        if (m_NeedPlayEffectIdCacheList.Contains(effectID))
        {
            m_NeedPlayEffectIdCacheList.Remove(effectID);
        }
    }
    /// <summary>
    /// 获得当前持有者正在播放的某个特效的个数
    /// </summary>
    /// <param name="effectID"></param>
    /// <returns></returns>
    public int GetEffectCountById(int effectID)
    {
        if (m_EffectCountCache == null)
        {
            return 0;
        }
        if (!m_EffectCountCache.ContainsKey(effectID))
        {
            return 0;
        }
        return m_EffectCountCache[effectID];
    }

    #endregion

    #region 内部调用

    protected virtual void ChangeMaterialColor(int effectChangeType)
    {
        return;
    }

    protected virtual void OnAddEffectComplete(AddEffectData data)
    {
        return;
    }

    protected abstract void LoadEffect(Tab_Effect effectData, PlayEffectDelegate delPlayEffect, object param);

    /// <summary>
    /// 
    /// </summary>
    /// <param name="parentObj"></param>
    /// <param name="effectData"></param>
    /// <param name="delPlayEffect"></param>
    /// <param name="param"></param>
    protected void AddEffect(GameObject parentObj, Tab_Effect effectData, PlayEffectDelegate delPlayEffect,
        object param)
    {
        if (null == effectData)
        {
            LogModule.ErrorLog("effectData is null");
            if (null != delPlayEffect) delPlayEffect(null, param);
            return;
        }
        ChangeMaterialColor(effectData.Type);

        //已经存在 数量加1
        if (m_EffectCountCache.ContainsKey(effectData.EffectID))
        {
            m_EffectCountCache[effectData.EffectID] = m_EffectCountCache[effectData.EffectID] + 1;
        }
        //不存在 添加进去 数量为1
        else
        {
            m_EffectCountCache.Add(effectData.EffectID, 1);
        }

        if (effectData.IsOnlyDeactive && m_dicEffectCache.ContainsKey(effectData.EffectID) && m_dicEffectCache[effectData.EffectID].Count > 0)
        {
            FXController curFXController = m_dicEffectCache[effectData.EffectID][0];
            m_dicEffectCache[effectData.EffectID].RemoveAt(0);
            if (curFXController)
            {
                //区域特效单独处理 
                if (effectData.Type==(int)EEffectChangeType.TYPE_TARGETAREA)
                {
                    Games.SkillModle.SkillCore.SkillTargetData targetData = param as Games.SkillModle.SkillCore.SkillTargetData;
                    if (targetData != null )
                    {
                        if (targetData._hasSet)
                        {
                            curFXController.ChangePositionForAreaEffect(GetTargetAreaPos(targetData, curFXController.GetPosition()));
                        }
                        else
                        {
                            curFXController.ResetAreaEffect();
                        }
                        
                    }
                }
                curFXController.Play(this);
            }
             
			if (null != delPlayEffect) delPlayEffect(curFXController.m_FirstChild, param);
            return;
        }

        AddEffectData curData = new AddEffectData(parentObj, effectData, delPlayEffect, param);
        m_NeedPlayEffectIdCacheList.Add(effectData.EffectID);
        //凑活的方式 如果 该粒子没有在
        GameObject resObj = ResourceManager.LoadResource(effectData.Path) as GameObject;
        if (null != resObj)
        {
            LoadEffectComplete(new LoadedObjData() { LoadedObj = resObj }, curData);
            return;
        }

        BundleManager.LoadEffectInQueue(effectData.EffectID, LoadEffectComplete, curData);
    }
    /// <summary>
    /// 计算由 目标位置确定的区域特效 位置
    /// </summary>
    /// <param name="targetData">目标位置数据</param>
    /// <param name="effectPos">特效计算前的位置-释放者特效绑点的位置</param>
    /// <returns></returns>
    protected Vector3 GetTargetAreaPos(Games.SkillModle.SkillCore.SkillTargetData targetData,Vector3 effectPos)
    {
        Vector3 res = effectPos;
        if (targetData != null)
        {
            res.x = targetData._targetPos.x;
            res.z = targetData._targetPos.z;
        }
        return res;
    }

    protected void LoadEffectComplete(LoadedObjData resObj, LoadCompleteCallBackParameter parameter)
    {
        AddEffectData param1 = null;
        //if (parameter != null)
        {
            param1 = parameter.Parameter1 as AddEffectData;
        }
        LoadEffectComplete(resObj, param1);
    }

    protected void LoadEffectComplete(LoadedObjData resObj, AddEffectData parameter1)
    {
        AddEffectData curData = parameter1;
        if (curData == null)
        {
            return;
        }
        Object loadedObj = resObj.LoadedObj ;
        if (loadedObj == null)
        {
            LogModule.ErrorLog("add effect error:");
            if (null != curData._delPlayEffect) curData._delPlayEffect(null, curData._param);
            return;
        }
        if (null == curData._effectData)
        {
            LogModule.ErrorLog("effectData is null");
            if (null != curData._delPlayEffect) curData._delPlayEffect(null, curData._param);
            return;
        }
        if (null == curData._parentObj)
        {
            LogModule.DebugLog("curData._parentObj is null");
            if (null != curData._delPlayEffect) curData._delPlayEffect(null, curData._param);
            return;
        }
        if (!m_NeedPlayEffectIdCacheList.Contains(curData._effectData.EffectID))
        {
            if (null != curData._delPlayEffect) curData._delPlayEffect(null, curData._param);
            return;
        }

        GameObject effectObj = GameObject.Instantiate(loadedObj) as GameObject;
        if (null == effectObj)
        {
            if (null != curData._delPlayEffect) curData._delPlayEffect(null, curData._param);
            return;
        }

        GameObject fxController = ResourceManager.InstantiateResource("Prefab/Effect/FXController") as GameObject;
        
        if (null == fxController)
        {
            GameObject.Destroy(effectObj);
            LogModule.ErrorLog("can't find prefab fxcontroller in Prefab/Effect/FXController");
            return;
        }
        FXController controllerComponent = fxController.GetComponent<FXController>();
        if (controllerComponent == null)
        {
            LogModule.ErrorLog("can not find fxcontroller on gameobject");
            GameObject.Destroy(fxController);
            GameObject.Destroy(effectObj);
            if (null != curData._delPlayEffect) curData._delPlayEffect(null, curData._param);
            return;
        }
        controllerComponent.m_Path = resObj.Url;
        ResourcesManager.Instance.AddCachedRef(controllerComponent.m_Path, EResourceType.Effect);
        m_NeedPlayEffectIdCacheList.Remove(curData._effectData.EffectID);
        effectObj.SetActive(false);

        if (null != curData._parentObj)
        {
            Utils.SetParent(fxController.transform, curData._parentObj.transform);
        }
        Utils.SetParent(effectObj.transform, fxController.transform);
        effectObj.transform.localPosition = new Vector3(curData._effectData.X, curData._effectData.Y,
            curData._effectData.Z);
        effectObj.transform.localRotation =
            Quaternion.Euler(curData._effectData.RotationX, curData._effectData.RotationY,
                curData._effectData.RotationZ);
        if (curData._effectData.Type == (int)EEffectChangeType.TYPE_TARGETAREA)
        {
            //add 由目标位置确定的区域特效
            Games.SkillModle.SkillCore.SkillTargetData targetData = curData._param as Games.SkillModle.SkillCore.SkillTargetData;
            if (targetData != null && targetData._hasSet)
            {
                Vector3 cacPos = effectObj.transform.position;
                cacPos = GetTargetAreaPos(targetData, cacPos);
                effectObj.transform.position = cacPos;
            }
        }

        controllerComponent.OnlyDeactivate = curData._effectData.IsOnlyDeactive;
        controllerComponent.Delay = curData._effectData.DelayTime;
        controllerComponent.Duration = curData._effectData.Duration;
        controllerComponent.EffectGameObj = m_EffectGameObj;
        controllerComponent.IsFellowOwner = curData._effectData.IsFellowOwner;
        controllerComponent.EffectID = curData._effectData.EffectID;
        controllerComponent.Play(this);

        //进行一些特效的额外索引
        OnAddEffectComplete(curData);

        if (null != curData._delPlayEffect) curData._delPlayEffect(effectObj, curData._param);
    }

    protected void OnEffectOver(int effectID)
    {
        //特效停止 数量减1
        if (m_EffectCountCache.ContainsKey(effectID))
        {
            m_EffectCountCache[effectID] = m_EffectCountCache[effectID] - 1;
            if (m_EffectCountCache[effectID] <= 0)
            {
                m_EffectCountCache.Remove(effectID);
            }
        }

		// 高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!
		// 要开始挖坑了！！！	坑////////坑////////坑////////坑////////坑////////坑/////
		// 高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!高能预警!!
//		if (GlobeVar.PLAYERLEVELUPEFFECTID == effectID)
//		{
//			UIManager.ShowAllUIWhenLevelUp();
//		}
    }

    protected virtual void InitBindPointData(GameObject go)
    {
        
    }

    #endregion

    #endregion
}