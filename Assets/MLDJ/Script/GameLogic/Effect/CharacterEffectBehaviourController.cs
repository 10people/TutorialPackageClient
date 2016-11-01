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

public class CharacterEffectBehaviourController : ObjEffectBehaviourController
{
    #region 变量

    private Obj_Character m_cachedObjCharacter;
    /// <summary>
    /// 绑定在坐骑上的特效列表
    /// </summary>
    private List<int> m_effectBindToMountList = new List<int>();
    /// <summary>
    /// 坐骑有效绑定点列表
    /// </summary>
    private List<string> m_effectBindPointsOnMountList = new List<string>();

    [SerializeField]
    /// <summary>
    /// 绑定在武器上的特效列表
    /// </summary>
    private List<int> m_effectBindToWeaponList = new List<int>(); 
    [SerializeField]
    /// <summary>
    /// 武器有效绑定点列表
    /// </summary>
    private List<string> m_effectBindPointsOnWeaponList = new List<string>(); 
	/// <summary>
	/// 翅膀有效绑定点列表
	/// </summary>
	[SerializeField]
	private List<string> m_effectBindPointsOnFlyWingList = new List<string>(); 

    private ParticleSystemScaleController m_cachedParticleScaler;

    

    #endregion

    #region 属性

    protected override bool DoPlayEffectWhenModelInvisible
    {
        get { return !IsNpcObj; }
    }

    protected override bool EffectHolderVisible
    {
        get
        {
            if (m_cachedObjCharacter == null)
            {
                return false;
            }
            return m_cachedObjCharacter.ModelInViewPort;
        }
    }

    #endregion

    #region 方法


    #region 继承重写
    protected override void InitBindPointData(GameObject go)
    {
        base.InitBindPointData(go);
        m_cachedObjCharacter = m_EffectHolder as Obj_Character;
    }



    protected override void OnAddEffectComplete(AddEffectData data)
    {
        if (data == null || data._effectData == null)
        {
            return;
        }
        base.OnAddEffectComplete(data);
        switch (data._effectData.BindTargetType)
        {
            case  (byte) EEffectBindTargetType.TYPE_MOUNT:
            {
                if (!m_effectBindToMountList.Contains(data._effectData.EffectID))
                {
                    m_effectBindToMountList.Add(data._effectData.EffectID);
                }
                break;
            }
            case (byte)EEffectBindTargetType.TYPE_WEAPON:
            {
                if (!m_effectBindToWeaponList.Contains(data._effectData.EffectID))
                {
                    m_effectBindToWeaponList.Add(data._effectData.EffectID);
                }
                break;
            }
        }
    }

    public override void OnMove()
    {
        base.OnMove();
        if (m_cachedParticleScaler != null)
        {
            m_cachedParticleScaler.SetParticleScaler(1);
        }
    }

    public override void OnIdle()
    {
        base.OnIdle();
        if (m_cachedParticleScaler != null)
        {
            m_cachedParticleScaler.SetParticleScaler(0.3f);
        }   
    }

    #region 坐骑相关
    public override void OnMountModelOk()
    {
        base.OnMountModelOk();

        if (m_effectBindPointCache == null || m_EffectGameObj == null)
        {
            LogModule.ErrorLog("OnMountModelOk called but m_effectBindPointCache || m_EffectGameObj is null!");
            return;
        }
        Obj_OtherPlayer player = m_cachedObjCharacter as Obj_OtherPlayer;
        if (player == null)
        {
            LogModule.ErrorLog("OnMountModelOk called but m_cachedObjCharacter is not a Obj_OtherPlayer!");
            return;
        }

        int moundid = -1;
        Tab_MountBase MountBase = TableManager.GetMountBaseByID(player.MountID, 0);
        if (null == MountBase)
        {
            LogModule.DebugLog("MountBase.txt has not Line ID=" + moundid);
            return;
        }
        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
        if (MountTable == null)
        {
            LogModule.DebugLog("CharMount.txt has not Line ID=" + MountBase.ModelID);
            return;
        }
        if (GameManager.gameManager.ActiveScene != null)
        {
            GameManager.gameManager.ActiveScene.SetMainPlayerCircleSizeOnMount(MountTable.SelectCircleSize);
        }
        Transform effectPointBone;
        //索引左翼绑定点
        effectPointBone = m_EffectGameObj.transform.Find(MountTable.LMountFlankPointPath);
        if (effectPointBone != null)
        {
            if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_MOUNT_LFLANK))
            {
                m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_MOUNT_LFLANK] = effectPointBone.gameObject;
            }
            else
            {
                m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_LFLANK, effectPointBone.gameObject);
            }
            m_effectBindPointsOnMountList.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_LFLANK);
        }
        //索引右翼绑定点
        effectPointBone = m_EffectGameObj.transform.Find(MountTable.RMountFlankPointPath);
        if (effectPointBone != null)
        {
            if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_MOUNT_RFLANK))
            {
                m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_MOUNT_RFLANK] = effectPointBone.gameObject;
            }
            else
            {
                m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_RFLANK, effectPointBone.gameObject);
            }
            m_effectBindPointsOnMountList.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_RFLANK);

        }
        //索引尾部绑定点
        effectPointBone = m_EffectGameObj.transform.Find(MountTable.MountBackPointPath);
        if (effectPointBone != null)
        {
            if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_MOUNT_BACK))
            {
                m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_MOUNT_BACK] = effectPointBone.gameObject;
            }
            else
            {
                m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_BACK, effectPointBone.gameObject);
            }
            m_effectBindPointsOnMountList.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_BACK);
        }
        //索引中心点
        effectPointBone = m_EffectGameObj.transform.Find(MountTable.MountCenterPointPath);
        if (effectPointBone != null)
        {
            if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_MOUNT_CENTER))
            {
                m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_MOUNT_CENTER] = effectPointBone.gameObject;
            }
            else
            {
                m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_CENTER, effectPointBone.gameObject);
            }
            m_effectBindPointsOnMountList.Add(GlobeVar.EFFECT_BIND_POINT_MOUNT_CENTER);
        }

        PlayEffect(MountTable.MoveEffectId, OnMountMoveEffectAdd);
    }

    public override void OnMountOff(int mountId)
    {
        base.OnMountOff(mountId);
        ///清除坐骑绑定点下的粒子
        for (int i = 0; i < m_effectBindPointsOnMountList.Count; i++)
        {
            if (m_effectBindPointCache.ContainsKey(m_effectBindPointsOnMountList[i]))
            {
                ClearBindPoint(m_effectBindPointCache[m_effectBindPointsOnMountList[i]]);
            }
        }
        ///清除坐骑相关粒子计数器 和 播放列表
        for (int i = 0; i < m_effectBindToMountList.Count; i++)
        {
            if (m_EffectCountCache.ContainsKey(m_effectBindToMountList[i]))
            {
                m_EffectCountCache.Remove(m_effectBindToMountList[i]);
            }
            if (m_NeedPlayEffectIdCacheList.Contains(m_effectBindToMountList[i]))
            {
                m_NeedPlayEffectIdCacheList.Remove(m_effectBindToMountList[i]);
            }
        }
        m_cachedParticleScaler = null;
        if (GameManager.gameManager.ActiveScene != null)
        {
            GameManager.gameManager.ActiveScene.OnMainPlayerMountOff();
        }
        Tab_MountBase MountBase = TableManager.GetMountBaseByID(mountId, 0);
        if (null == MountBase)
        {
            LogModule.DebugLog("MountBase.txt has not Line ID=" + mountId);
            return;
        }
        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
        if (MountTable == null)
        {
            LogModule.DebugLog("CharMount.txt has not Line ID=" + MountBase.ModelID);
            return;
        }
        PlayEffect(MountTable.EffectMountOff);
		StopEffect (MountTable.MoveEffectId);
    }


    private void OnMountMoveEffectAdd(GameObject go, object parameter)
    {
        if (go == null)
        {
            return;
        }
        m_cachedParticleScaler = go.GetComponent<ParticleSystemScaleController>();
        if (m_cachedParticleScaler != null)
        {
            //m_cachedParticleScaler.SetParticleScaler(1);            
        }
    }

    #endregion
	#region 翅膀相关
	public override void OnFlyWingOk(int id,GameObject flyWingModObj)
	{
		if (flyWingModObj == null)
			return;

		Tab_FlyWingClient flyWingClient = TableManager.GetFlyWingClientByID (id,0);
		if (flyWingClient == null)
			return;

		Obj_OtherPlayer otherPlayer = m_cachedObjCharacter as Obj_OtherPlayer;
		if( otherPlayer != null )
		{
			// 绑点1
			Transform effectPointBoneFirst;
			effectPointBoneFirst = flyWingModObj.transform.Find(flyWingClient.EffectPointNameFirst);
			if( effectPointBoneFirst )
			{
				if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_LFLYWING))
				{
					m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_LFLYWING] = effectPointBoneFirst.gameObject;
				}
				else
				{
					m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_LFLYWING, effectPointBoneFirst.gameObject);
				}
				m_effectBindPointsOnFlyWingList.Add(GlobeVar.EFFECT_BIND_POINT_LFLYWING);
			}
			// 绑点2
			Transform effectPointBoneSecond;
			effectPointBoneSecond = flyWingModObj.transform.Find(flyWingClient.EffectPointNameSecond);
			if( effectPointBoneSecond )
			{
				if (m_effectBindPointCache.ContainsKey(GlobeVar.EFFECT_BIND_POINT_RFLYWING))
				{
					m_effectBindPointCache[GlobeVar.EFFECT_BIND_POINT_RFLYWING] = effectPointBoneSecond.gameObject;
				}
				else
				{
					m_effectBindPointCache.Add(GlobeVar.EFFECT_BIND_POINT_RFLYWING, effectPointBoneSecond.gameObject);
				}
				m_effectBindPointsOnFlyWingList.Add(GlobeVar.EFFECT_BIND_POINT_RFLYWING);
			}

			PlayEffect(flyWingClient.EffectIdFirst);
			PlayEffect(flyWingClient.EffectIdSecond);
            PlayEffect(flyWingClient.EffectIdThrid);
            PlayEffect(flyWingClient.EffectIdFour);
		}
	}
	public override void OnCancalFlyWing()
	{
		//base.OnWeaponUnEquOk();
		for (int i = 0; i < m_effectBindPointsOnFlyWingList.Count; i++)
		{
			if (m_effectBindPointCache.ContainsKey(m_effectBindPointsOnFlyWingList[i]))
			{
				ClearBindPoint(m_effectBindPointCache[m_effectBindPointsOnFlyWingList[i]]);
			}
		}
		m_effectBindPointsOnFlyWingList.Clear();
	}
	
	
	#endregion
	#region 武器相关
	
	public override void OnWeaponEquOk(Tab_WeaponModel tabData)
	{
		OnWeaponUnEquOk();
		if (tabData == null)
		{
			return;
		}
        base.OnWeaponEquOk(tabData);
        Obj_OtherPlayer otherPlayer = m_cachedObjCharacter as Obj_OtherPlayer;
        if (otherPlayer != null && (otherPlayer.LWeaponObject !=null || otherPlayer.RWeaponObject))
        {
            Transform effectPointBone;
            if (otherPlayer.LWeaponObject != null)
            {
                effectPointBone = otherPlayer.LWeaponObject.transform.Find(tabData.LWeaponBindPointPath);
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
                    m_effectBindPointsOnWeaponList.Add(GlobeVar.EFFECT_BIND_POINT_LWEAPON);
                }
            }
            if (otherPlayer.RWeaponObject != null)
            {
                effectPointBone = otherPlayer.RWeaponObject.transform.Find(tabData.RWeaponBindPointPath);
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
                    m_effectBindPointsOnWeaponList.Add(GlobeVar.EFFECT_BIND_POINT_RWEAPON);
                }
            }

            int count = tabData.getWeaponEffectCount();
            int effectId;
            for (int i = 0; i < count; i++)
            {
                effectId = tabData.GetWeaponEffectbyIndex(i);
                if (effectId >=0)
                {
                    PlayEffect(effectId);
                }
            }
        }
    }

    public override void OnWeaponUnEquOk()
    {
        base.OnWeaponUnEquOk();
        for (int i = 0; i < m_effectBindPointsOnWeaponList.Count; i++)
        {
            if (m_effectBindPointCache.ContainsKey(m_effectBindPointsOnWeaponList[i]))
            {
                ClearBindPoint(m_effectBindPointCache[m_effectBindPointsOnWeaponList[i]]);
            }
        }
        m_effectBindPointsOnWeaponList.Clear();
        ///清除坐骑相关粒子计数器 和 播放列表
        for (int i = 0; i < m_effectBindToWeaponList.Count; i++)
        {
            if (m_EffectCountCache.ContainsKey(m_effectBindToWeaponList[i]))
            {
                m_EffectCountCache.Remove(m_effectBindToWeaponList[i]);
            }
            if (m_NeedPlayEffectIdCacheList.Contains(m_effectBindToWeaponList[i]))
            {
                m_NeedPlayEffectIdCacheList.Remove(m_effectBindToWeaponList[i]);
            }
        }
        m_effectBindToWeaponList.Clear();
    }

    #endregion

    #endregion

    #endregion
}