using UnityEngine;
using System.Collections;

public class LoadingBackTexAdapt : MonoBehaviour {

    public UITexture m_backGroundRoot;
    public UITexture m_forGroundRoot;
	// Use this for initialization
	

	public void AdaptiveUI()
	{
        int ManualWidth = Screen.width;
        int ManualHeight = Screen.height;

       m_backGroundRoot.width = ManualWidth;
       m_backGroundRoot.height = ManualHeight;

       int oldWidth = m_forGroundRoot.width;
       m_forGroundRoot.width = oldWidth * m_backGroundRoot.width / 1140;

       int dec = m_forGroundRoot.width - oldWidth;

       m_forGroundRoot.transform.localPosition = new Vector3(m_forGroundRoot.transform.localPosition.x - (oldWidth * dec) / (2 * 1140) - 20, m_forGroundRoot.transform.localPosition.y, m_forGroundRoot.transform.localPosition.z);

	}
}
