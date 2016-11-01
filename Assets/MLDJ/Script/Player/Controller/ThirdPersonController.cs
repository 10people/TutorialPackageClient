/********************************************************************************
 *	文件名：	ThirdPersonController.cs
 *	全路径：	\Script\Player\ThirdPersonController.cs
 *	创建人：	李嘉
 *	创建时间：2013-11-05
 *
 *	功能说明： 第三人称视角移动类
 *	          之后正式版中如果改为手指输入则将该类替换掉即可
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Games.LogicObj;
using Games.AI_Logic;

// Require a character controller to be attached to the same game object
//[RequireComponent(typeof(CharacterController))]
//@script RequireComponent(CharacterController)

public class ThirdPersonController : MonoBehaviour
{
	// The speed when walking
	public float m_fWalkSpeed = 2.0f;
	// The gravity in controlled descent mode
	public float m_fSpeedSmoothing = 10.0f;
	public float m_fRrotateSpeed = 500.0f;
		
	// The camera doesnt start following the target immediately but waits for a split second to avoid too much waving around.
	private float m_fLockCameraTimer = 0.0f;
	
	// The current move direction in x-z
	private Vector3 m_vecMoveDirection = Vector3.zero;
	// The current x-z move speed
	private float m_fMoveSpeed = 0.0f;

    public bool m_IsJoyMoving = false;
	
	// The last collision flags returned from controller.Move
	//private CollisionFlags m_CollisionFlags; 
	
	// Are we moving backwards (This locks the camera to not do a 180 degree spin)
    //private bool m_bMovingBack = false;
	// Is the user pressing any keys?
	private bool m_bIsMoving = false;
	public bool IsMoving
	{
		get { return m_bIsMoving; }
	}
	
	//玩家的输入平移量
	private float m_fVerticalRaw = 0.0f;
	public float VerticalRaw
	{
		get { return m_fVerticalRaw; }
		set { m_fVerticalRaw = value; }
	}
	private float m_fHorizonRaw = 0.0f;
	public float HorizonRaw
	{
		get { return m_fHorizonRaw; }
		set { m_fHorizonRaw = value; }
	}

    //客户端性能优化，将某些组件进行缓存，提高效率
    Transform m_CameraTransform = null;
    Transform m_MainPlayerTransform = null;
    Obj_MainPlayer m_MainPlayer = null;
	
	void Awake ()
    {
        m_vecMoveDirection = transform.TransformDirection(Vector3.forward);
	}
        
	public void UpdateSmoothedMovementDirection()
	{
	    m_IsJoyMoving = false;
        if (null == m_MainPlayer)
        {
            m_MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (null != m_MainPlayer)
            {
                m_MainPlayerTransform = m_MainPlayer.transform;
            }
            else
            {
                return;
            }
        }
        if (null == m_CameraTransform)
        {
            m_CameraTransform = Camera.main.transform;
            if (null == m_CameraTransform)
            {
                return;
            }
        }
        
		m_bIsMoving = Mathf.Abs(m_fHorizonRaw) > 0.1 || Mathf.Abs(m_fVerticalRaw) > 0.1;

	    //如果玩家正在点击移动，则判断是否有输入，如果没有则不进行更新，否则打断
        if (!m_bIsMoving && m_MainPlayer.IsMoving)
		{
			return;
		}

        if (false == m_MainPlayer.IsCanOperate_Move())
        {
            return;
        }
	    
        // Forward vector relative to the camera along the x-z plane	
        Vector3 forward = m_CameraTransform.TransformDirection(Vector3.forward);
        forward.y = 0;
        forward = forward.normalized;

        // Right vector relative to the camera
        // Always orthogonal to the forward vector
        Vector3 right = new Vector3(forward.z, 0, -forward.x);

		// Target direction relative to the camera
		var targetDirection = m_fHorizonRaw * right + m_fVerticalRaw * forward;

		// We store speed and direction seperately,
		// so that when the character stands still we still have a valid forward direction
		// moveDirection is always normalized, and we only update it if there is user input.
		if (targetDirection != Vector3.zero)
		{
			// If we are really slow, just snap to the target direction
            if (m_fMoveSpeed < m_fWalkSpeed * 0.9)
            {
                m_vecMoveDirection = targetDirection.normalized;
            }
            // Otherwise smoothly turn towards it
            else
            {
				m_vecMoveDirection = Vector3.RotateTowards(m_vecMoveDirection, targetDirection, m_fRrotateSpeed * Mathf.Deg2Rad * Time.deltaTime, 1000);
				m_vecMoveDirection = m_vecMoveDirection.normalized;
            }
		}

		// Smooth the speed based on the current target direction
//		float curSmooth = m_fSpeedSmoothing * Time.deltaTime;
		// Choose target speed
		if (m_bIsMoving)
		{
            m_IsJoyMoving = true;

		    m_fMoveSpeed = m_MainPlayer.m_fMoveSpeed;
            Vector3 movement = m_vecMoveDirection * m_fMoveSpeed;
            movement *= Time.deltaTime;

			//移动
            m_MainPlayer.BreakAutoCombatState();
            m_MainPlayer.LeaveTeamFollow();
            Vector3 newPos = m_MainPlayerTransform.localPosition + movement * 10;

            //如果发动摇杆移动操作，清除掉地面点击特效
            GameManager.gameManager.ActiveScene.DeactiveMovingCircle();

            //进行移动操作
            m_MainPlayer.MoveTo(newPos, null, 0.0f);

            // added by mawenbin
            // 挂机自动战斗时设置玩家主动移动
            AI_PlayerCombat aiPlayerCombat = m_MainPlayer.GetComponent<AI_PlayerCombat>();
            if (null != aiPlayerCombat
                && m_MainPlayer.IsOpenAutoCombat
                && m_MainPlayer.AutoComabat)
            {
                aiPlayerCombat.IsPlayerControlMove = true;
            }

			//设置模型方向
            if (m_MainPlayer.SkillCore == null || m_MainPlayer.SkillCore.IsUsingSkill == false) //   播放旋风斩动画时不转向
		    {
				// 有自动寻路代理了，为什么还要自己设置转向？ ，by lizhe 
				if( m_MainPlayer.NavAgent == null )
				{
					m_MainPlayerTransform.rotation = Quaternion.LookRotation(m_vecMoveDirection);
				}
			}
            m_MainPlayer.CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_WALK;
		}
		else
		{
			m_fMoveSpeed = 0.0f;
			if (false == Cutscene.CutsceneActionPlayAnim.m_bIsPlayingMainPlayerAnim)
			{
				m_MainPlayer.CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
			}
		}
	}

    //void Update()
    //{
    //    //计算移动的速度和方向
    //    UpdateSmoothedMovementDirection();
    //}
		
	public float GetLockCameraTimer () 
	{
		return m_fLockCameraTimer;
	}
}
