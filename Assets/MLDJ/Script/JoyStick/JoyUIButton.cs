using UnityEngine;
using System.Collections;
using Module.Log;

namespace Engine.JoyUI
{
public class JoyUIButton : MonoBehaviour {
    
#if BOBJOYSTICK
    public string CorrespondingButtonName;//对应的真实的NGUI按钮的名称
    public static JoyUIButton s_currentButton; //当前选中的按钮
    public bool m_bClickOnSelect = false;

    public JoyUIButton Left;
    public JoyUIButton Right;
    public JoyUIButton Up;
    public JoyUIButton Down;
    
    [SerializeField]
    private GameObject m_correspondingButton;//对应的真实的NGUI按钮
    public GameObject CorrespondingButton{
        get
        {
            if(m_correspondingButton == null)
            {
                m_correspondingButton = GameObject.Find(CorrespondingButtonName);
                if (m_correspondingButton == null)
                {
                    LogModule.DebugLog(CorrespondingButtonName + " "+gameObject+" is not found");
                }
            }
            return m_correspondingButton;
        }
        set
        {
            m_correspondingButton = value;
        }
    }

    void OnEnable()
    {
        s_currentButton = this;
    }
    void Update()
    {
        if (CorrespondingButton == null)
        {
            //为了自动加载
        }
    }
    void OnClick()
    {
        CorrespondingButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    }
    void OnHover()
    {
        CorrespondingButton.SendMessage("OnHover", true,SendMessageOptions.DontRequireReceiver);
    }
    
#endif
                                         }
}
