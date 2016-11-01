/********************************************************************************
 *	文件名：	ProcessInput.cs
 *	全路径：	\Script\Player\ProcessInput.cs
 *	创建人：	李嘉
 *	创建时间：2013-11-05
 *
 *	功能说明： 目前游戏处理输入类
 *	          在Update中进行输入捕捉。
 *	          只处理非UI事件
 *	          之后正式版中如果改为手指输入则将该类替换掉即可
 *	修改记录：
*********************************************************************************/

using Games.Scene;
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using System;
using Games.GlobeDefine;
using Games.Events;
using Games.AI_Logic;

public class ProcessInput : MonoBehaviour
{
    //鼠标按键枚举
    public enum MOUSE_BUTTON
    {
        MOUSE_BUTTON_LEFT,
        MOUSE_BUTTON_RIGHT,
        MOUSE_BUTTON_MIDDLE,
    }

    //摇杆状态
    public enum STICK_STATE
    {
        STICK_STATE_FORWARD,
        STICK_STATE_BACKWARD,
        STICK_STATE_LEFT,
        STICK_STATE_RIGHT,
        STICK_STATE_NUM,
    }

    /// <summary>
    /// 是否接受按键信息
    /// </summary>
    public static bool IsProcessInput = true;

    // 监控动画完成后 N秒内部接受按键信息
    private float m_IntervalTime = 1.0f;
    private float m_CurOverAnimation = 0.0f;

    private bool m_bIsMouseDBClick = false;

    private int m_SceneTouchFingerID = -1;
    public int SceneTouchFingerID
    {
        get { return m_SceneTouchFingerID; }
        set { m_SceneTouchFingerID = value; }
    }

    //private bool m_bPlayerTouchMoving = false;
    ThirdPersonController m_Controller = null;

    private bool m_bPinching = false;

    public void ResetStickState()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (null == m_Controller)
        {
            m_Controller = Singleton<ObjManager>.GetInstance().MainPlayer.GetComponent<ThirdPersonController>();
        }

        if (null == m_Controller)
        {
            return;
        }

        m_Controller.HorizonRaw = m_Controller.VerticalRaw = 0;
        Singleton<ObjManager>.GetInstance().MainPlayer.MoveTarget = null;

        if (Singleton<ObjManager>.GetInstance().MainPlayer.IsCanOperate_Move())
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.StopMove();
        }        
    }

    private static ProcessInput m_Instance = null;
    public static ProcessInput Instance()
    {
        return m_Instance;
    }

//    private GameObject m_SceneObject;

    void Awake()
    {
        IsProcessInput = true;
        m_Instance = this;
//        m_SceneObject = GameObject.Find("Scene");

        // 把手势响应放在这个地方更合适
        gameObject.AddComponent<PinchRecognizer>();
        m_bPinching = false;
    }
    // Use this for initialization
    //void Start()
    //{
    //}
    

    // Update is called once per frame
    void Update()
    {
#if UNITY_EDITOR
        if (!IsProcessInput && (Input.GetMouseButton((int)MOUSE_BUTTON.MOUSE_BUTTON_LEFT)))
        {
            if (JtddAnimationManager.Instance != null)
            {
                if (JtddAnimationManager.Instance.IsAnimation)
                {
                    ProcessInput.IsProcessInput = false;
                    JtddAnimationManager.Instance.OverAnimation();
                    m_CurOverAnimation = Time.time;
                    return;
                }
            }
        }
#else
        if (!IsProcessInput) 
        {
            if (Input.touchCount > 0)
            {
                if (JtddAnimationManager.Instance != null)
                {
                    if (JtddAnimationManager.Instance.IsAnimation)
                    {
                        ProcessInput.IsProcessInput = false;
                        JtddAnimationManager.Instance.OverAnimation();
                        m_CurOverAnimation = Time.time;
                    }
                }
            }
            return;
        }
#endif

        //监控动画完成后 N秒内部接受按键信息
        if (m_CurOverAnimation > 0)
        {
            if (Time.time - m_CurOverAnimation <= m_IntervalTime)
            {
                return;
            }

            m_CurOverAnimation = 0.0f;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer && !Singleton<ObjManager>.Instance.MainPlayer.IsInModelStory
            && !Singleton<ObjManager>.Instance.MainPlayer.QingGongState && !Singleton<ObjManager>.Instance.MainPlayer.IsFirstUseCrash)
        {
            //鼠标按键更新
            //首先处理鼠标按下
            //当鼠标按下未处理的话，才去处理鼠标点击
            if (Input.touchCount <= 0)
            {
                if (false == UpdateButtonStay(false))
                {
                    UpdateButton(false);
                }

                //更新鼠标双击状态
                UpdateMouseDBClick();
            }
            else
            {
                for (int i = 0; i < Input.touchCount; i++)
                {
                    // 如果是摇杆的fingerID 即按住摇杆划出了摇杆范围 直接continue
                    if (JoyStickLogic.Instance() != null)
                    {
                        if (Input.GetTouch(i).fingerId == JoyStickLogic.Instance().FingerID)
                        {
                            continue;
                        }
                    }

                    if (false == UpdateButtonStay(true, i))
                    {
                        UpdateButton(true, i);
                    }
                }
            }
        }
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    //处理鼠标按住
    //返回true表示本次update中不会再去更新鼠标点击
    bool UpdateButtonStay(bool isTouch, int nTouchIndex = -1)
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return false;
        }

        
        //鼠标左键按住
        if ((!isTouch && Input.GetMouseButton((int)MOUSE_BUTTON.MOUSE_BUTTON_LEFT)) ||
            isTouch)
        {
            //由于目前只有点击移动操作，所以在摇杆工作的时候这里不更新
            if (null == m_Controller)
            {
                m_Controller = Singleton<ObjManager>.GetInstance().MainPlayer.GetComponent<ThirdPersonController>();
            }

            if (null == m_Controller || true == m_Controller.IsMoving)
            {
                m_SceneTouchFingerID = -1;
                return false;
            }

            // 如果点击的是UI 则不处理其他鼠标消息 只对UI作出响应
            Vector3 posPressed;
            if (!isTouch)
            {
                posPressed = Input.mousePosition;
                return AnalyseMousePos_Stay(posPressed);
            }
            else
            {
                Touch touch = Input.GetTouch(nTouchIndex);
                posPressed = touch.position;
                return AnalyseTouchPos_Stay(posPressed, touch);
            }

        }

        return false;
    }

    bool AnalyseMousePos_Stay(Vector3 posPressed)
    {
        if (null != UICamera.mainCamera)
        {
            Ray nUIRay = UICamera.mainCamera.ScreenPointToRay(posPressed);
            RaycastHit nHit;
            
            if (Physics.Raycast(nUIRay, out nHit))
            {
                if (nHit.collider.gameObject.CompareTag("SubUI") || nHit.collider.gameObject.CompareTag("UI"))
                {
                    GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_UI);
                    Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);
                    return true;
                }
            }
        }
        
        if (!UIManager.IsSubUIShow() && PlayerPreferenceData.SystemScreenMove == 1)
        {
            Ray ray = Camera.main.ScreenPointToRay(posPressed);
            RaycastHit hit;

            if (Physics.Raycast(ray.origin, ray.direction, out hit, 100f, 
                ActiveScene.MoveLayerMask.value | 1 << LayerMask.NameToLayer("LogicObj")))
            {
                if (hit.collider.gameObject.layer == LayerMask.NameToLayer("MoveLayer"))
                {
                    Vector3 tagPoint = hit.point;
                    //可能点击地形非正常行走面，通过高度差进行判断，当发现高度差过大的时候，则认为非法
                    if (Math.Abs(tagPoint.y - Singleton<ObjManager>.GetInstance().MainPlayer.gameObject.transform.position.y) > 5)
                    {
                        //return false;
                        tagPoint.y = Singleton<ObjManager>.GetInstance().MainPlayer.gameObject.transform.position.y;
                    }

                    if (null != Singleton<ObjManager>.GetInstance().MainPlayer &&
                        Singleton<ObjManager>.GetInstance().MainPlayer.IsCanOperate_Move())
                    {
                        Singleton<ObjManager>.GetInstance().MainPlayer.BreakAutoCombatState();
                        Singleton<ObjManager>.GetInstance().MainPlayer.LeaveTeamFollow();
                        Singleton<ObjManager>.GetInstance().MainPlayer.MoveTo(tagPoint, null, 0.5f);
                        GameManager.gameManager.ActiveScene.ActiveMovingCircle(tagPoint);
                        Singleton<ObjManager>.GetInstance().MainPlayer.HasSendpos = false;

                        // added by mawenbin
                        // 挂机自动战斗时玩家主动点击地面移动
                        AI_PlayerCombat aiPlayerCombat = Singleton<ObjManager>.GetInstance().MainPlayer.GetComponent<AI_PlayerCombat>();
                        if (null != aiPlayerCombat 
                            && Singleton<ObjManager>.GetInstance().MainPlayer.IsOpenAutoCombat
                            && Singleton<ObjManager>.GetInstance().MainPlayer.AutoComabat)
                        {
                            aiPlayerCombat.IsPlayerControlMove = true;
                        }
                    }
                    else
                    {
                        if (Singleton<ObjManager>.GetInstance().MainPlayer.HasSendpos == false)
                        {
                            Singleton<ObjManager>.GetInstance().MainPlayer.HasSendpos = true;
                            Singleton<ObjManager>.GetInstance().MainPlayer.SynCleanCacheSkillToServer();
                            Singleton<ObjManager>.GetInstance().MainPlayer.LastForceSynPosTime = Time.time; 
                        }
                    }

                    GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_SCENE);
                    Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);

                    return true;
                }
            }
        }
        return false;
    }

    bool AnalyseTouchPos_Stay(Vector3 posPressed, Touch touch)
    { 
        if ((m_SceneTouchFingerID == -1) ||
           (m_SceneTouchFingerID != -1 && touch.fingerId == m_SceneTouchFingerID))
        {

            if (null != UICamera.mainCamera)
            {
                Ray nUIRay = UICamera.mainCamera.ScreenPointToRay(posPressed);
                RaycastHit nHit;
                if (Physics.Raycast(nUIRay, out nHit))
                {
                    if (nHit.collider.gameObject.CompareTag("SubUI") || nHit.collider.gameObject.CompareTag("UI"))
                    {
                        GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_UI);
                        Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);
                        ReleaseTouch();
                        return true;
                    }
                }
            }

			Obj_MainPlayer curPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (null == curPlayer)
                return false;

            //if (curPlayer.CameraController != null && curPlayer.CameraController.IsPinching())
            //{
            //    return true;
            //}
            if (m_bPinching) return true;

            if (!UIManager.IsSubUIShow() && PlayerPreferenceData.SystemScreenMove == 1)
            {
                if (curPlayer.IsCanOperate_Move())
                {
                    Ray ray = Camera.main.ScreenPointToRay(posPressed);
                    RaycastHit hit;

                    if (Physics.Raycast(ray.origin, ray.direction, out hit, 100f,
                        ActiveScene.MoveLayerMask.value | 1 << LayerMask.NameToLayer("LogicObj")))
                    {
                        if (hit.collider.gameObject.layer == LayerMask.NameToLayer("MoveLayer"))
                        {
                            if (touch.phase != TouchPhase.Ended)
                            {
                                //可能点击地形非正常行走面，通过高度差进行判断，当发现高度差过大的时候，则认为非法
                                if (Math.Abs(hit.point.y - curPlayer.ObjTransform.position.y) > 5)
                                {
                                    ReleaseTouch();
                                    return false;
                                }

                                curPlayer.BreakAutoCombatState();
                                curPlayer.LeaveTeamFollow();
                                curPlayer.MoveTo(hit.point, null, 0.5f);

                                if (null != GameManager.gameManager.ActiveScene)
                                {
                                    GameManager.gameManager.ActiveScene.ActiveMovingCircle(hit.point);
                                }

                                if (m_SceneTouchFingerID == -1)
                                {
                                    m_SceneTouchFingerID = touch.fingerId;
                                    //m_bPlayerTouchMoving = true;
                                }
                            }
                            else if (m_SceneTouchFingerID == touch.fingerId)
                            {
                                ReleaseTouch();
                            }

                            GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_SCENE);
                            Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);

                            return true;
                        }
                    }
                    curPlayer.HasSendpos = false;
                }
                else
                {
                    if (!curPlayer.HasSendpos)
                    {
                        curPlayer.HasSendpos = true;
                        curPlayer.SynCleanCacheSkillToServer();
                        curPlayer.LastForceSynPosTime = Time.time;
                    }
                }
            }
        }
        return false;
    }

    //更新鼠标按钮
    void UpdateButton(bool isTouch, int nTouchIndex = -1)
    {
        //鼠标左键按下
        if ((!isTouch && Input.GetMouseButtonDown((int)MOUSE_BUTTON.MOUSE_BUTTON_LEFT)) ||
            isTouch )
        {
            Vector3 posPressed;
            if (!isTouch)
            {
                posPressed = Input.mousePosition;
                AnalyseMousePos_Click(posPressed);
            }
            else
            {
                Touch touch = Input.GetTouch(nTouchIndex);
                posPressed = touch.position;
                AnalyseTouchPos_Click(posPressed, touch);
            }

            return;
        }
    }

    void AnalyseMousePos_Click(Vector3 posPressed)
    {
        if (null != UICamera.mainCamera)
        {
            Ray nUIRay = UICamera.mainCamera.ScreenPointToRay(posPressed);
            RaycastHit nHit;
            if (Physics.Raycast(nUIRay, out nHit))
            {
                if (nHit.collider.gameObject.CompareTag("SubUI") || nHit.collider.gameObject.CompareTag("UI"))
                {
                    return;
                }
            }
        }

        if (!UIManager.IsSubUIShow())
        {
            Ray ray = Camera.main.ScreenPointToRay(posPressed);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                // 客户单物品 点击拾取
                if (hit.collider.gameObject.CompareTag("CollectItem"))
                {
                    Singleton<CollectItem>.GetInstance().RemoveItem(hit.collider.gameObject);
                    GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_OBJECT);
                    Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);
                    return;
                }

                Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (null == _mainPlayer)
                    return;

                //Obj点击操作,单击点选目标，双击移动过去
                Obj_Character npcScript = hit.collider.gameObject.GetComponent<Obj_Character>();
                if (npcScript)
                {
                    if (m_bIsMouseDBClick || Reputation.IsEnemy(npcScript))
                    {
                        if (_mainPlayer.IsCanOperate_Move())
                        {
                            _mainPlayer.BreakAutoCombatState();
                            _mainPlayer.LeaveTeamFollow();
                            _mainPlayer.MoveTo(hit.collider.gameObject.transform.position, hit.collider.gameObject, 1.0f);
                            _mainPlayer.FaceTo(hit.collider.transform.position);
                            _mainPlayer.OnSelectTarget(hit.collider.gameObject);
                            _mainPlayer.HasSendpos = false;
                        }
                        else
                        {
                            if (!_mainPlayer.HasSendpos)
                            {
                                _mainPlayer.HasSendpos = true;
                                _mainPlayer.SynCleanCacheSkillToServer();
                                _mainPlayer.LastForceSynPosTime = Time.time;
                            }
                        }
                    }
                    else
                    {
                        //选择目标
                        _mainPlayer.OnSelectTarget(hit.collider.gameObject);
                    }

                    GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_OBJECT);
                    Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);
                }

                Obj_Mount mountScript = hit.collider.gameObject.GetComponent<Obj_Mount>();
                if (null != mountScript)
                {
                    if (mountScript.PlayerObj == null)
                    {
                        return;
                    }
                    //Obj_Character Obj_Char = mountScript.PlayerObj.gameObject.GetComponent<Obj_Character>();
                    //if (Obj_Char == null)
                    //{
                    //    return;
                    //}
                    if (m_bIsMouseDBClick || Reputation.IsEnemy(mountScript.PlayerObj))
                    {
                        //npcScript.FaceTo(Singleton<ObjManager>.GetInstance().MainPlayer.transform.position);
                        if (_mainPlayer.IsCanOperate_Move())
                        {
                            _mainPlayer.BreakAutoCombatState();
                            _mainPlayer.LeaveTeamFollow();
                            _mainPlayer.MoveTo(mountScript.PlayerObj.gameObject.transform.position, hit.collider.gameObject, 1.0f);
                            _mainPlayer.FaceTo(mountScript.PlayerObj.ObjTransform.position);
                            _mainPlayer.OnSelectTarget(mountScript.PlayerObj.gameObject);
                            _mainPlayer.HasSendpos = false;
                        }
                        else
                        {
                            if (!_mainPlayer.HasSendpos)
                            {
                                _mainPlayer.HasSendpos = true;
                                _mainPlayer.SynCleanCacheSkillToServer();
                                _mainPlayer.LastForceSynPosTime = Time.time;
                            }
                        }
                    }
                    else
                    {
                        //选择目标
                        _mainPlayer.OnSelectTarget(mountScript.PlayerObj.gameObject);
                    }
                }
                
            }
        }
        return;
    }

    void AnalyseTouchPos_Click(Vector3 posPressed, Touch touch)
    {
        if ((m_SceneTouchFingerID == -1) ||
           (m_SceneTouchFingerID != -1 && touch.fingerId == m_SceneTouchFingerID))
        {
            if (!UIManager.IsSubUIShow())
            {
                Ray ray = Camera.main.ScreenPointToRay(posPressed);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit))
                {
                    if (touch.phase != TouchPhase.Ended)
                    {
                        //if (null != PlayerFrameLogic.Instance() && !PlayerFrameLogic.Instance().Fold)
                        //{
                            //PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject.GetComponent<UIPlayTween>().Play(false);
                            //PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
                        //}

                        // 客户单物品 点击拾取
                        if (hit.collider.gameObject.CompareTag("CollectItem"))
                        {
                            Singleton<CollectItem>.GetInstance().RemoveItem(hit.collider.gameObject);
                            GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_OBJECT);
                            Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);
                            return;
                        }

                        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                        if (null == _mainPlayer)
                            return;

                        //Obj点击操作,单击点选目标，双击移动过去
                        Obj_Character npcScript = hit.collider.gameObject.GetComponent<Obj_Character>();
                        if (npcScript)
                        {
                            if (m_bIsMouseDBClick || Reputation.IsEnemy(npcScript))
                            {
                                //npcScript.FaceTo(Singleton<ObjManager>.GetInstance().MainPlayer.transform.position);
                                if (_mainPlayer.IsCanOperate_Move())
                                {
                                    _mainPlayer.BreakAutoCombatState();
                                    _mainPlayer.LeaveTeamFollow();
                                    _mainPlayer.MoveTo(hit.collider.gameObject.transform.position, hit.collider.gameObject, 1.0f);
                                    _mainPlayer.FaceTo(hit.collider.transform.position);
                                    _mainPlayer.OnSelectTarget(hit.collider.gameObject);
                                    _mainPlayer.HasSendpos = false;
                                }
                                else
                                {
                                    if (!_mainPlayer.HasSendpos)
                                    {
                                        _mainPlayer.HasSendpos = true;
                                        _mainPlayer.SynCleanCacheSkillToServer();
                                        _mainPlayer.LastForceSynPosTime = Time.time;
                                    }
                                }
                            }
                            else
                            {
                                //选择目标
                                _mainPlayer.OnSelectTarget(hit.collider.gameObject);
                            }

                            GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_OBJECT);
                            Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);
                        }
                    }                   
                }
            }
        }
        return;
    }

    void UpdateMouseDBClick()
    {
        Event mouseEvent = Event.current;
        if (null == mouseEvent)
        {
            return;
        }

        if (mouseEvent.isMouse && mouseEvent.type == EventType.MouseDown && mouseEvent.clickCount == 2)
        {
            m_bIsMouseDBClick = true;
        }
        else
        {
            m_bIsMouseDBClick = false;
        }
    }

    public void ReleaseTouch()
    {
        if (m_SceneTouchFingerID != -1)
        {
            m_SceneTouchFingerID = -1;
            //m_bPlayerTouchMoving = false;
        }        
    }

    private void OnPinch(PinchGesture gesture)
    {
        if (JoyStickLogic.Instance() != null && JoyStickLogic.Instance().FingerID != -1)
        {
            return;
        }
		if(gesture.Phase == ContinuousGesturePhase.Started)
		{
            Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            if (null != mainPlayer)
            {
                if (Singleton<ObjManager>.GetInstance().MainPlayer.IsCanOperate_Move())
                {
                    Singleton<ObjManager>.GetInstance().MainPlayer.StopMove();
                }
            }
            m_bPinching = true;
		}
        else if (gesture.Phase == ContinuousGesturePhase.Updated)
        {
			if (Cutscene.CutsceneManager.Instance.IsPlayingCutscene == false)
			{
            	CameraManager.Instance.UpdateDistance(gesture.Delta);
			}
        }
        else
        {
            m_bPinching = false;
        }
    }
}
