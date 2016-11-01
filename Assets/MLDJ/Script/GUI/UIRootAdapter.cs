/********************************************************************
	created:	2014/02/17
	created:	17:2:2014   9:56
	filename    UIRootAdapter.cs
	author:		王迪
	
	purpose:	绑定在UIROOT上做UI适配
*********************************************************************/
using UnityEngine;
using System.Collections;

public class UIRootAdapter : MonoBehaviour {

	// Use this for initialization
	void OnEnable () {
        UIRoot root = gameObject.GetComponent<UIRoot>();
        if (null != root)
        {
            root.manualHeight = UIRootAdapter.GetLogicHeight();
            
        }
	}

    public static int GetLogicWidth()
    {
        return Screen.width * GetLogicHeight() / Screen.height;
    }

    public static int GetLogicHeight()
    {
		if (Screen.height % 768 == 0 || Mathf.Abs((float)Screen.height / Screen.width - 0.75f) <= 0.1f)
        {
#if UNITY_WP8
            return  768;
#else
            return 800;
#endif
        }
        else
        {
            return 640;
            /*
			if(GameManager.gameManager.RunningSceneName == "Login")
			{
				return 640;
			}
			else if (Screen.width % 1136 == 0)
            {
                return  750;
            }
            else
            {
                return  680;
            }
            */
        }
    }
	
}
