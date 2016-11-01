using UnityEngine;
using System.Collections;
using Engine;

namespace Engine.JoyUI
{
	public class MouseSimulator : MonoSingleton<MouseSimulator> {
	#if BOBJOYSTICK
	    private bool m_mouseEnable;
	    public bool MouseEnable
	    {
	        get
	        {
	            return m_mouseEnable;
	        }
	        set
	        {
	            m_mouseEnable = value;
	            EnableMouse(m_mouseEnable);
	        }
	    }
	
	    /// <summary>
	    /// 设置鼠标打开或关闭
	    /// </summary>
	    /// <param name="_enable"></param>
	    private void EnableMouse(bool _enable)
	    {
	        if (_enable == false)
	        {
	            _Touched = null;
	        }
	        else
	        {
	            resetEnableTime();
	        }
	        _trans.gameObject.SetActive(_enable);
	        //if(JoyStickCursor.Instance!= null && JoyStickCursor.Instance.m_selectedItem != null){
	        //    SetMousePos(JoyStickCursor.Instance.m_selectedItem.transform.position);
	        //}
	    }
	    public void SetMousePos(Vector3 pos)
	    {
	        pos.z = _trans.position.z;
	        _trans.position = pos;
	    }
	    public Transform _trans;
	    public Transform _Touched;
        private GameObject m_selectedObject;
        public GameObject SelectedObject
        {
            get
            {
                return m_selectedObject;
            }
            set
            {
                UICamera.selectedObject = value;
                //if (m_selectedObject != null)
                //{
                //    m_selectedObject.SendMessage("OnSelect", false, SendMessageOptions.DontRequireReceiver);
                //}
                //m_selectedObject = value;
                //m_selectedObject.SendMessage("OnSelect", true, SendMessageOptions.DontRequireReceiver);
            }
        }
	    public float Speed;
	    private float initSpeed;
	    private float EnableTime = 0;
	    public void resetEnableTime()
	    {
	        EnableTime = Time.time;
	    }
	    protected void Awake()
	    {
	        base.Awake();
	        initSpeed = Speed;
	        DontDestroyOnLoad(gameObject);
	        MouseEnable = false;
	        resetEnableTime();
	    }
		// Use this for initialization
		void Start () {
		}
		// Update is called once per frame
	    void Update()
	    {	
	        if (Engine.OSC.AbstractController.Instance != null)
	        {
	            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_START))
	            {
	                MouseEnable = !MouseEnable;
	            }
	        }
	        if (!MouseEnable)
	        {
	            return;
	        }
	        if (null == UICamera.mainCamera)
	        {
	            return;
	        }
	
	        Speed -= 400*Time.deltaTime;
	        if (Mathf.Abs(Speed) >= 2 * Mathf.Abs(initSpeed))
	        {
	            Speed = 2 * initSpeed;
	        }
	        Vector2 deltapos = Engine.OSC.AbstractController.Instance.DeltaPos;
	        float deltaX = deltapos.x * Speed * Time.deltaTime;
	        float deltaY = deltapos.y * Speed * Time.deltaTime;
	        if (Mathf.Abs(deltaX) + Mathf.Abs(deltaY) <= 0.001f)
	        {//若不摇动手柄则置为初始速度
	            Speed = initSpeed;
	        }
	        _trans.localPosition -= new Vector3(deltaX, deltaY, 0);
	        Vector2 _cursorPos = UICamera.mainCamera.WorldToScreenPoint(_trans.position);
	        if (!UICamera.mainCamera.pixelRect.Contains(_cursorPos))
	        {//若超出边界
	            _trans.localPosition += new Vector3(deltaX, deltaY, 0);
	            _cursorPos = UICamera.mainCamera.WorldToScreenPoint(_trans.position);
	        }
	
            //if (JoyControllerLogic.DPad_leftDown)
            //{
            //    Engine.JoyUI.JoyUIConnector.Instance.MoveToLeft();
            //   // _trans.position = Engine.JoyUI.JoyUIConnector.Instance.m_current.Item.transform.position;
            //}
            //if (JoyControllerLogic.DPad_rightDown)
            //{
            //    Engine.JoyUI.JoyUIConnector.Instance.MoveToRight();
            //    //_trans.position = Engine.JoyUI.JoyUIConnector.Instance.m_current.Item.transform.position;
            //}
            //if (JoyControllerLogic.DPad_upDown)
            //{
            //    Engine.JoyUI.JoyUIConnector.Instance.MoveToUp();
            //    //_trans.position = Engine.JoyUI.JoyUIConnector.Instance.m_current.Item.transform.position;
            //}
            //if (JoyControllerLogic.DPad_downDown)
            //{
            //    Engine.JoyUI.JoyUIConnector.Instance.MoveToDown();
            //    //_trans.position = Engine.JoyUI.JoyUIConnector.Instance.m_current.Item.transform.position;
            //}
	
	
	        RaycastHit hitinfo;
	        Debug.DrawRay(_trans.position, UICamera.mainCamera.transform.forward);
	        if (UICamera.Raycast(_cursorPos, out hitinfo))
	        {
	            if (_Touched != hitinfo.collider.transform)
	            {
	                if (_Touched != null)
                    {
	                    _Touched.SendMessage("OnHover", false, SendMessageOptions.DontRequireReceiver);
	                }
	                _Touched = hitinfo.collider.transform;
	                _Touched.SendMessage("OnHover", true, SendMessageOptions.DontRequireReceiver);
	                Vibration.Vibrate(50);            
	            }
	        }
	        else
	        {
	            if (_Touched != null)
	            {
	                _Touched.SendMessage("OnHover", false, SendMessageOptions.DontRequireReceiver);
	            }
	        }
	        if (_Touched != null)
	        {
	            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
                {
                    _Touched.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
                    _Touched.SendMessage("OnPress", true, SendMessageOptions.DontRequireReceiver);
                    SelectedObject = _Touched.gameObject;
	            }
                if (Engine.OSC.AbstractController.Instance.GetKeyUp(JoyControllerLogic.BTN_A))
                {
                    _Touched.SendMessage("OnPress", false, SendMessageOptions.DontRequireReceiver);
                    //_Touched.SendMessage("OnSelect", false, SendMessageOptions.DontRequireReceiver);
                }
	        }
		}
	#endif
	}
}
