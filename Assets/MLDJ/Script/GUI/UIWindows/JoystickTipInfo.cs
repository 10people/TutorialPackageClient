using System.Collections.Generic;
using Module.Log;
using UnityEngine;
using System.Collections;

class JoystickTipInfo : MonoBehaviour
{


    private void OnEnable()
    {
        //TODO 添加手柄状态，主要是那两个按键的退出
    }

    public static void ShowTip()
    {
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.JOYSTICKTIPINFO_UI);
        UIInfo.JoyStickTipInfo.uiType = UIPathData.UIType.TYPE_TIP;
        UIManager.ShowUI(UIInfo.JoyStickTipInfo);
#endif
    }

    void Update()
    {
#if BOBJOYSTICK
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(Engine.JoyUI.JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(Engine.JoyUI.JoyControllerLogic.BTN_B))
        {
            CloseJoyStickTipInfo();
            Destroy(this);
            if (LoginUpdateInfo.m_IsShow)
            {
                LoginUpdateInfo.OpenUI(true);
            }
        }
        
#endif
    }

    private void CloseJoyStickTipInfo()
    {
        UIManager.CloseUI(UIInfo.JoyStickTipInfo);
#if BOBJOYSTICK
        if (LoginUpdateInfo.m_IsShow)
        {
            LoginUpdateInfo.OpenUI(true);
        }
#endif

    }
    

}

