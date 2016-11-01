/********************************************************************************
 *	文件名：	ThirdPersonCamera.cs
 *	全路径：	\Script\Player\Controller\Camera\ThirdPersonCamera.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-03-26
 *
 *	功能说明：第三人称摄像机
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.LogicObj;
using GCGame.Table;
using Module.Log;

public class ThirdPersonCamera : CameraBase
{
    struct CameraRockInfo
    {
        public void CleanUp()
        {
            m_nCameraRockId = -1;
            m_fRockTime = 0.0f; //震屏已经震了多久
            m_fNeedRockTime = 0.0f; //震屏持续时间
            m_fDelayTime = 0.0f; //震屏延迟时间
            m_bContinueRockDie = false; //主角死亡是否继续震屏
            m_PitchRockOff = new AnimationCurve(); //震屏 摄像机Pitch偏移
            m_YawRockOff = new AnimationCurve(); //震屏 摄像机Yaw偏移
            m_DistanceRockOff = new AnimationCurve();//震屏 摄像机Distance偏移
            m_OffsetYRockOff = new AnimationCurve();//震屏 摄像机OffsetY偏移
			m_RockFinishCallback = null;
        }

        public bool IsValid()
        {
            return (m_nCameraRockId != -1);
        }
        public int m_nCameraRockId;
        public float m_fRockTime; //震屏已经震了多久
        public float m_fNeedRockTime; //震屏持续时间
        public float m_fDelayTime; //震屏延迟时间
        public bool m_bContinueRockDie; //主角死亡是否继续震屏
        public AnimationCurve m_PitchRockOff; //震屏 摄像机Pitch偏移
        public AnimationCurve m_YawRockOff; //震屏 摄像机Yaw偏移
        public AnimationCurve m_DistanceRockOff;//震屏 摄像机Distance偏移
        public AnimationCurve m_OffsetYRockOff;//震屏 摄像机OffsetY偏移

		public Callback m_RockFinishCallback;	// 完成回调
    }
    #region Fields

    /// <summary>
    /// 俯仰角度
    /// </summary>
    private float m_fPitch;
    /// <summary>
    /// 旋转角度
    /// </summary>
    private float m_fYaw;
    /// <summary>
    /// 距离
    /// </summary>
    private float m_fDistance;
    /// <summary>
    /// 目标点偏移
    /// </summary>
    private Vector3 m_TargetOffset;

	/// <summary>
	/// 是否被置脏
	/// </summary>
    private bool m_bDirty = false;

	/// <summary>
	/// 回归默认参数的动态过程计时器
	/// </summary>
	private float m_fRestTimer = 0;
	private float m_fRestTime;
	private float m_fOldPitch;
	private float m_fOldYaw;
	private float m_fOldDistance;
	private float m_fOldTargetPffsetY;

    /// <summary>
    /// 摄像机当前状态
    /// </summary>
    private ICameraState m_State;

    // 各个状态的实例
    public CameraStateInit m_StateInit;
    public CameraStateStareTarget m_StateStareTarget;
    public CameraStateChangeToStareTarget m_StateChangeToStareTarget;
    public CameraStateStarePos m_StateStarePos;
    public CameraStateChangeToStarePos m_StateChangeToStarePos;
    
    // 震屏数据
    private List<CameraRockInfo> m_CameraRockInfoList = new List<CameraRockInfo>();
    private float m_fPitchRock = 0;
    private float m_fYawRock = 0;
    private float m_fDistanceRock = 0;
    private float m_fOffsetRock = 0;

	private List<CameraRockInfo> m_CameraAnimInfoList = new List<CameraRockInfo>();
	private float m_fPitchAnim = 0;
	private float m_fYawAnim = 0;
	private float m_fDistanceAnim = 0;
	private float m_fOffsetAnim = 0;
	#endregion
    #region Properties

    /// <summary>
    /// 震动修正后的Pitch
    /// </summary>
    public float Pitch
    {
        get { return Mathf.Clamp(m_fPitch + m_fPitchRock, CameraDefine.m_fCameraPitchMin, CameraDefine.m_fCameraPitchMax) + m_fPitchAnim; }
    }

    /// <summary>
    /// 震动修正后的Yaw
    /// </summary>
    public float Yaw
    {
		get { return m_fYaw + m_fYawRock + m_fYawAnim; }
    }

    /// <summary>
    /// 震动修正后的Distance
    /// </summary>
    public float Distance
    {
		get { return Mathf.Clamp(m_fDistance + m_fDistanceRock, CameraDefine.m_fCameraDistanceMin, CameraDefine.m_fCameraDistanceMax) + m_fDistanceAnim; }
    }

    /// <summary>
    /// 震动修正后的Offset
    /// </summary>
    public Vector3 TargetOffset
    {
        get { return m_TargetOffset + new Vector3(0, m_fOffsetRock + m_fOffsetAnim, 0); }
    }

    public bool Dirty
    {
        get { return m_bDirty; }
    }
    #endregion
    #region Methods

    public override void Init()
    {
        base.Init();

        m_bDirty = true;
        m_fYaw = CameraDefine.m_fCameraYawDefault;
        m_fPitch = CameraDefine.m_fCameraPitchDefault;
        m_fDistance = CameraDefine.m_fCameraDistanceDefault;
        m_TargetOffset = CameraDefine.m_CameraTargetOffset;

        // 初始化状态
        m_StateInit = new CameraStateInit(this);
        m_StateStareTarget = new CameraStateStareTarget(this);
        m_StateChangeToStareTarget = new CameraStateChangeToStareTarget(this);
        m_StateStarePos = new CameraStateStarePos(this);
        m_StateChangeToStarePos = new CameraStateChangeToStarePos(this);

        m_State = m_StateInit;
        //LookTarget(Singleton<ObjManager>.GetInstance().MainPlayer, null, 0);
    }

    public override void Clear()
    {
        base.Clear();
    }

    public override void Update(float deltaTime)
    {
        base.Update(deltaTime);

		if (m_fRestTimer > 0)
		{
			m_fRestTimer -= deltaTime;
			if (m_fRestTimer < 0)
			{
				m_fRestTimer = 0;
			}
			float t = m_fRestTimer / m_fRestTime;
			m_fPitch = iTween.Easing(CameraDefine.m_fCameraPitchDefault, m_fOldPitch, t, iTween.EaseType.easeOutQuad);
			m_fYaw = iTween.Easing(CameraDefine.m_fCameraYawDefault, m_fOldYaw, t, iTween.EaseType.easeOutQuad);
			m_fDistance = iTween.Easing(CameraDefine.m_fCameraDistanceDefault, m_fOldDistance, t, iTween.EaseType.easeOutQuad);
			m_TargetOffset.y = iTween.Easing(CameraDefine.m_CameraTargetOffset.y, m_fOldTargetPffsetY, t, iTween.EaseType.easeOutQuad);
			m_bDirty = true;
		}

        // 处理震动
        ApplyRock();

		// 摄像机动画
		ApplyAnim();

        // 摄像机旋转
        Vector3 cameraEuler = new Vector3(Pitch, Yaw, 0);
        CameraManager.Instance.MainCameraTrans.rotation = Quaternion.Euler(cameraEuler);

        if (m_State == null) return;
        m_State.UpdateCamera();

        Vector3 cameraPos = m_State.CameraPos;
        //Vector3 starePos = m_State.StarePos;
        //Vector3 cameraDir = starePos - cameraPos;



        // 不用判断，调用前判断了
        //if (CameraManager.Instance.MainCameraTrans == null) return;

		if (Singleton<CameraManager>.Instance.IsDuangCamera == true)
			CameraManager.Instance.MainCameraTrans.position = Vector3.Lerp (CameraManager.Instance.MainCameraTrans.position, cameraPos, Time.deltaTime * 8.0f);
		else
			CameraManager.Instance.MainCameraTrans.position = cameraPos;
			

			//CameraManager.Instance.MainCameraTrans.rotation = Quaternion.LookRotation(new Vector3(cameraDir.x, cameraDir.y, cameraDir.z));
    }

    /// <summary>
    /// 设置状态，只能是继承自ICameraState的类调用
    /// </summary>
    /// <param name="newState"></param>
    public void SetState(ICameraState newState)
    {
        m_State = newState;
    }

    // 三个参数外部更新
    public void UpdatePitch(float deltaPitch)
    {
        if (deltaPitch != 0)
        {
            m_fPitch += deltaPitch;
            if (m_fPitch > CameraDefine.m_fCameraPitchMax)
            {
                m_fPitch = CameraDefine.m_fCameraPitchMax;
            }
            if (m_fPitch < CameraDefine.m_fCameraPitchMin)
            {
                m_fPitch = CameraDefine.m_fCameraPitchMin;
            }
            m_bDirty = true;
        }        
    }

    public void UpdateYaw(float deltaYaw)
    {
        if (deltaYaw != 0)
        {
            m_fYaw += deltaYaw;
            if (m_fYaw > 360f)
            {
                m_fYaw -= 360f;
            }
            if (m_fYaw < 0)
            {
                m_fYaw += 360f;
            }
            m_bDirty = true;
        }
    }

    public void UpdateDistance(float deltaDistance)
    {
        if (deltaDistance != 0)
        {
            deltaDistance *= 0.5f;
            deltaDistance = Mathf.Clamp(deltaDistance, -CameraDefine.m_fCameraDistanceChangeMaxSpeed, CameraDefine.m_fCameraDistanceChangeMaxSpeed);
            m_fDistance += deltaDistance;
            if (m_fDistance > CameraDefine.m_fCameraDistanceMax)
            {
                m_fDistance = CameraDefine.m_fCameraDistanceMax;
            }
            if (m_fDistance < CameraDefine.m_fCameraDistanceMin)
            {
                m_fDistance = CameraDefine.m_fCameraDistanceMin;
            }
            // 根据distance计算pitch
			m_fPitch = (m_fDistance - CameraDefine.m_fCameraDistanceDefault) / (CameraDefine.m_fCameraDistanceDefault - CameraDefine.m_fCameraDistanceMin)
				* (CameraDefine.m_fCameraPitchDefault - CameraDefine.m_fCameraPitchMin) + CameraDefine.m_fCameraPitchDefault;
			if (m_fPitch > CameraDefine.m_fCameraPitchMax)
			{
				m_fPitch = CameraDefine.m_fCameraPitchMax;
			}
			if (m_fPitch < CameraDefine.m_fCameraPitchMin)
			{
				m_fPitch = CameraDefine.m_fCameraPitchMin;
			}
            LogModule.DebugLog(m_fDistance.ToString());
            m_bDirty = true;
        }  
    }

	public void ResetToDefault(float time)
	{
		if (time <= 0)
		{
			m_bDirty = true;
			m_fYaw = CameraDefine.m_fCameraYawDefault;
			m_fPitch = CameraDefine.m_fCameraPitchDefault;
			m_fDistance = CameraDefine.m_fCameraDistanceDefault;
			m_TargetOffset = CameraDefine.m_CameraTargetOffset;
		}
		else
		{
			m_fRestTime = time;
			m_fRestTimer = time;
			m_fOldPitch = m_fPitch;
			m_fOldYaw = m_fYaw;
			m_fOldDistance = m_fDistance;
			m_fOldTargetPffsetY = m_TargetOffset.y;
		}
	}

    /// <summary>
    /// 让摄像机看向某个固定位置，fDuration为0则不做移动动画
    /// </summary>
    /// <param name="targetPos"></param>
    /// <param name="onCameraMoveDone">当移动动画结束时的回调，fDuration为0时不会调用</param>
    /// <param name="fDuration">移动动画时长</param>
    public void LookPos(Vector3 targetPos, CameraDefine.CameraMoveDoneCallback onCameraMoveDone = null, float fDuration = CameraDefine.m_fDefaultCameraMoveTime)
    {
        m_State.LookPos(targetPos, onCameraMoveDone, fDuration);
    }

    /// <summary>
    /// 让摄像机看向某个Obj，fDuration为0则不做移动动画
    /// </summary>
    /// <param name="target"></param>
    /// <param name="onCameraMoveDone">当移动动画结束时的回调，fDuration为0时不会调用</param>
    /// <param name="fDuration">移动动画时长</param>
    public void LookTarget(Obj target, CameraDefine.CameraMoveDoneCallback onCameraMoveDone = null, float fDuration = CameraDefine.m_fDefaultCameraMoveTime)
    {
        m_State.LookTarget(target, onCameraMoveDone, fDuration);
    }

	/// <summary>
	/// Starts the camera animation.
	/// </summary>
	/// <returns>The camera animation.</returns>
	/// <param name="nAnimId">N animation identifier.</param>
	/// <param name="finishCallback">Finish callback.</param>
	public float StartCameraAnim(int nAnimId, Callback finishCallback = null)
	{
		Tab_CameraRock _cameraRock = TableManager.GetCameraRockByID(nAnimId, 0);
		if (_cameraRock == null)
		{
			return 0;
		}
		CameraRockInfo _tmpInfo = new CameraRockInfo();
		_tmpInfo.CleanUp();
		//初始化数据
		_tmpInfo.m_nCameraRockId = nAnimId;
		_tmpInfo.m_fNeedRockTime = _cameraRock.NeedRockTime;
		_tmpInfo.m_fDelayTime = _cameraRock.DelayTime;
		//位置动画曲线
		_tmpInfo.m_PitchRockOff = InitRockOff(_cameraRock.PitchAnimCurveId);
		_tmpInfo.m_YawRockOff = InitRockOff(_cameraRock.YawAnimCurveId);
		_tmpInfo.m_DistanceRockOff = InitRockOff(_cameraRock.DistanceAnimCurveId);
		_tmpInfo.m_OffsetYRockOff = InitRockOff(_cameraRock.OffsetAnimCurveId);
		_tmpInfo.m_bContinueRockDie = _cameraRock.IsContinueDie;
		
		_tmpInfo.m_RockFinishCallback = finishCallback;
		
		m_CameraAnimInfoList.Add(_tmpInfo);
		
		return _cameraRock.NeedRockTime + _cameraRock.DelayTime;
	}
	
	/// <summary>
	/// 外部调用摄像机震屏的接口
	/// </summary>
	/// <returns>总时长</returns>
	/// <param name="nRockId">N rock identifier.</param>
	public float InitCameraRock(int nRockId, Callback finishCallback = null)
    {
        Tab_CameraRock _cameraRock = TableManager.GetCameraRockByID(nRockId, 0);
        if (_cameraRock == null)
        {
            return 0;
        }
        CameraRockInfo _tmpInfo = new CameraRockInfo();
        _tmpInfo.CleanUp();
        //初始化数据
        _tmpInfo.m_nCameraRockId = nRockId;
        _tmpInfo.m_fNeedRockTime = _cameraRock.NeedRockTime;
        _tmpInfo.m_fDelayTime = _cameraRock.DelayTime;
        //位置动画曲线
        _tmpInfo.m_PitchRockOff = InitRockOff(_cameraRock.PitchAnimCurveId);
        _tmpInfo.m_YawRockOff = InitRockOff(_cameraRock.YawAnimCurveId);
        _tmpInfo.m_DistanceRockOff = InitRockOff(_cameraRock.DistanceAnimCurveId);
        _tmpInfo.m_OffsetYRockOff = InitRockOff(_cameraRock.OffsetAnimCurveId);
        _tmpInfo.m_bContinueRockDie = _cameraRock.IsContinueDie;

		_tmpInfo.m_RockFinishCallback = finishCallback;

        m_CameraRockInfoList.Add(_tmpInfo);

		return _cameraRock.NeedRockTime + _cameraRock.DelayTime;
    }

    /// <summary>
    /// 是否正在进行ID为nRockId的震屏
    /// </summary>
    /// <param name="nRockId"></param>
    /// <returns></returns>
    public bool IsHaveRockInfoById(int nRockId)
    {
        if (nRockId == -1)
        {
            return false;
        }
        for (int i = 0; i < m_CameraRockInfoList.Count; i++)
        {
            if (m_CameraRockInfoList[i].m_nCameraRockId == nRockId)
            {
                return true;
            }
        }
        return false;
    }

	public bool IsPlayingAnim (int nAnimId)
	{
		if (nAnimId == -1)
		{
			return false;
		}
		for (int i = 0; i < m_CameraAnimInfoList.Count; i++)
		{
			if (m_CameraAnimInfoList[i].m_nCameraRockId == nAnimId)
			{
				return true;
			}
		}
		return false;
	}
	
	/// <summary>
	/// 停止ID为nRockId的震屏
	/// </summary>
	/// <param name="nRockId"></param>
    public void CleanUpRockInfoById(int nRockId)
    {
        for (int i = 0; i < m_CameraRockInfoList.Count; i++)
        {
            CameraRockInfo _tmpRockInfo = m_CameraRockInfoList[i];
            if (_tmpRockInfo.m_nCameraRockId == nRockId)
            {
				if (null != _tmpRockInfo.m_RockFinishCallback)
				{
					_tmpRockInfo.m_RockFinishCallback.Invoke();
				}
                _tmpRockInfo.CleanUp();
                m_CameraRockInfoList[i] = _tmpRockInfo;
            }
        }
    }

	/// <summary>
	/// Stops the camera animation.
	/// </summary>
	/// <param name="nAnimId">N animation identifier.</param>
	public void StopCameraAnim(int nAnimId)
	{
		for (int i = 0; i < m_CameraAnimInfoList.Count; i++)
		{
			CameraRockInfo _tmpRockInfo = m_CameraAnimInfoList[i];
			if (_tmpRockInfo.m_nCameraRockId == nAnimId)
			{
				if (null != _tmpRockInfo.m_RockFinishCallback)
				{
					_tmpRockInfo.m_RockFinishCallback.Invoke();
				}
				_tmpRockInfo.CleanUp();
				m_CameraAnimInfoList[i] = _tmpRockInfo;
			}
		}
	}
	
	/// <summary>
	/// 反序列化AnimationCurve表
	/// </summary>
	/// <param name="nCurverId"></param>
    /// <returns></returns>
    protected AnimationCurve InitRockOff(int nCurverId)
    {
        AnimationCurve RockCurve = new AnimationCurve();
        if (nCurverId != -1)
        {
            List<Tab_AnimationCurve> _curveList = TableManager.GetAnimationCurveByID(nCurverId);
            if (_curveList.Count > 0)
            {
                Keyframe[] XCurverKeyframes = new Keyframe[_curveList.Count];
                for (int i = 0; i < _curveList.Count; i++)
                {
                    XCurverKeyframes[i].time = _curveList[i].Time;
                    XCurverKeyframes[i].value = _curveList[i].Value;
                    XCurverKeyframes[i].inTangent = _curveList[i].InTangent;
                    XCurverKeyframes[i].outTangent = _curveList[i].OutTangent;
                    XCurverKeyframes[i].tangentMode = _curveList[i].TangentMode;
                }
                RockCurve = new AnimationCurve(XCurverKeyframes);
                RockCurve.preWrapMode = (WrapMode)_curveList[0].PreWrapMode;
                RockCurve.postWrapMode = (WrapMode)_curveList[0].PostWrapMode;
            }
        }
        return RockCurve;
    }

    /// <summary>
    /// 有震动需求的情况下差值取样震动值
    /// </summary>
    private void ApplyRock()
    {
        //有震屏需求 摄像机抖动
        if (m_CameraRockInfoList.Count > 0)
        {
            Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (mainPlayer == null) return;

            bool IsRocking = false;
            for (int i = m_CameraRockInfoList.Count - 1; i >= 0; i--)
            {
                if (m_CameraRockInfoList[i].IsValid() == false)
                {
                    m_CameraRockInfoList.RemoveAt(i);
                    continue;
                }
                //struct 先拷贝出一份出来 修改完后 记得再赋值更新
                CameraRockInfo _TmpInfo = m_CameraRockInfoList[i];
                //死了就不震了
                if (_TmpInfo.m_bContinueRockDie == false && mainPlayer.IsDie())
                {
					if (null != _TmpInfo.m_RockFinishCallback)
					{
						_TmpInfo.m_RockFinishCallback.Invoke();
					}
                    _TmpInfo.CleanUp();
                }
                else
                {
                    if (_TmpInfo.m_fDelayTime > 0)
                    {
                        _TmpInfo.m_fDelayTime -= Time.deltaTime;
                    }
                    else
                    {
                        if (_TmpInfo.m_fDelayTime <= 0)
                        {
                            if (_TmpInfo.m_fRockTime - _TmpInfo.m_fNeedRockTime >= 0)
                            {
								if (null != _TmpInfo.m_RockFinishCallback)
								{
									_TmpInfo.m_RockFinishCallback.Invoke();
								}
                                //震完了 清理数据
                                _TmpInfo.CleanUp();
                            }
                            else
                            {
                                _TmpInfo.m_fRockTime += Time.deltaTime;
                                m_fPitchRock = m_CameraRockInfoList[i].m_PitchRockOff.Evaluate(m_CameraRockInfoList[i].m_fRockTime);
                                m_fYawRock = m_CameraRockInfoList[i].m_YawRockOff.Evaluate(m_CameraRockInfoList[i].m_fRockTime);
                                m_fDistanceRock = m_CameraRockInfoList[i].m_DistanceRockOff.Evaluate(m_CameraRockInfoList[i].m_fRockTime);
                                m_fOffsetRock = m_CameraRockInfoList[i].m_OffsetYRockOff.Evaluate(m_CameraRockInfoList[i].m_fRockTime);
                                IsRocking = true;
                            }
                        }
                    }
                }
                //重新赋值更新
                m_CameraRockInfoList[i] = _TmpInfo;
                if (IsRocking)
                {
                    break;
                }
            }
            if (IsRocking == false)
            {
                m_fPitchRock = 0;
                m_fYawRock = 0;
                m_fDistanceRock = 0;
                m_fOffsetRock = 0;
            }
        }
        else
        {
            m_fPitchRock = 0;
            m_fYawRock = 0;
            m_fDistanceRock = 0;
            m_fOffsetRock = 0;
        }
    }

	/// <summary>
	/// Applies the animation.
	/// </summary>
	private void ApplyAnim() 
	{
		//有震屏需求 摄像机抖动
		if (m_CameraAnimInfoList.Count > 0)
		{
			Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
			if (mainPlayer == null) return;
			
			bool IsRocking = false;
			for (int i = m_CameraAnimInfoList.Count - 1; i >= 0; i--)
			{
				if (m_CameraAnimInfoList[i].IsValid() == false)
				{
					m_CameraAnimInfoList.RemoveAt(i);
					continue;
				}
				//struct 先拷贝出一份出来 修改完后 记得再赋值更新
				CameraRockInfo _TmpInfo = m_CameraAnimInfoList[i];
				//死了就不震了
				if (_TmpInfo.m_bContinueRockDie == false && mainPlayer.IsDie())
				{
					if (null != _TmpInfo.m_RockFinishCallback)
					{
						_TmpInfo.m_RockFinishCallback.Invoke();
					}
					_TmpInfo.CleanUp();
				}
				else
				{
					if (_TmpInfo.m_fDelayTime > 0)
					{
						_TmpInfo.m_fDelayTime -= Time.deltaTime;
					}
					else
					{
						if (_TmpInfo.m_fDelayTime <= 0)
						{
							if (_TmpInfo.m_fRockTime - _TmpInfo.m_fNeedRockTime >= 0)
							{
								if (null != _TmpInfo.m_RockFinishCallback)
								{
									_TmpInfo.m_RockFinishCallback.Invoke();
								}
								//震完了 清理数据
								_TmpInfo.CleanUp();
							}
							else
							{
								_TmpInfo.m_fRockTime += Time.deltaTime;
								m_fPitchAnim = m_CameraAnimInfoList[i].m_PitchRockOff.Evaluate(m_CameraAnimInfoList[i].m_fRockTime);
								m_fYawAnim = m_CameraAnimInfoList[i].m_YawRockOff.Evaluate(m_CameraAnimInfoList[i].m_fRockTime);
								m_fDistanceAnim = m_CameraAnimInfoList[i].m_DistanceRockOff.Evaluate(m_CameraAnimInfoList[i].m_fRockTime);
								m_fOffsetAnim = m_CameraAnimInfoList[i].m_OffsetYRockOff.Evaluate(m_CameraAnimInfoList[i].m_fRockTime);
								IsRocking = true;
							}
						}
					}
				}
				//重新赋值更新
				m_CameraAnimInfoList[i] = _TmpInfo;
				if (IsRocking)
				{
					break;
				}
			}
			if (IsRocking == false)
			{
				m_fPitchAnim = 0;
				m_fYawAnim = 0;
				m_fDistanceAnim = 0;
				m_fOffsetAnim = 0;
			}
		}
		else
		{
			m_fPitchAnim = 0;
			m_fYawAnim = 0;
			m_fDistanceAnim = 0;
			m_fOffsetAnim = 0;
		}
	}
	
	#endregion
}
