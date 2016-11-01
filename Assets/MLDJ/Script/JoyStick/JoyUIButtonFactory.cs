using UnityEngine;
using System.Collections;
using Engine;
using Module.Log;

namespace Engine.JoyUI
{
	public class JoyUIButtonFactory : MonoSingleton<JoyUIButtonFactory>
	{
	#if BOBJOYSTICK
	
	    public JoyUIButton prefab;
	    private GameObject m_root;
	    public GameObject Root
	    {
	        get
	        {
	            if (m_root == null)
	            {
	                m_root = new GameObject("_JoyUIButtonRoot");
	            }
	            return m_root;
	        }
	    }
	    public JoyUIButton MapUI(GameObject uiObject)
	    {
	        if (uiObject == null)
	        {
	            LogModule.ErrorLog("you are mapping a null object");
	        }
	        JoyUIButton jbtn = GCGame.Utils.BindObjToParent(prefab.gameObject, Root, "_" + uiObject.name).GetComponent<JoyUIButton>();
	        jbtn.CorrespondingButton = uiObject;
	        return jbtn;
	    }
#endif
    }
}
