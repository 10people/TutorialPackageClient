using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace Engine.JoyUI
{
	public class BobJoyUIController : MonoSingleton<BobJoyUIController>
    {
#if BOBJOYSTICK
        private BobJoyUINavigator m_current;
	    private List<BobJoyUINavigator> m_list = new List<BobJoyUINavigator>();
	    public void SetCurrent(BobJoyUINavigator ui)
	    {
	        if (ui == null)
	        {
	            for (int i = 0; i < m_list.Count; ++i)
	            {
	                BobJoyUINavigator _item = m_list[i];
	                if (!_item.gameObject.activeInHierarchy) continue;
	                m_current = _item;
	                return;
	            }
	        }
	        m_current = ui;
	    }
	    public void AddUI(BobJoyUINavigator ui)
	    {
	        if (!m_list.Contains(ui))
	        {
	            m_list.Add(ui);
	        }
	    }
        public void RemoveUI(BobJoyUINavigator ui)
        {
            m_list.Remove(ui);
        }
	
	    void Update()
	    {
            if (m_current == null || !m_current.gameObject.activeInHierarchy)
	        {
	            SetCurrent(null);
	        }
            if (m_current == null || !m_current.gameObject.activeInHierarchy)
            {
                return;
            }
	        if (JoyControllerLogic.DPad_leftDown 
#if UNITY_EDITOR
                ||Input.GetKeyDown(KeyCode.LeftArrow)
#endif
                )
	        {
	            m_current.MoveLeft();
	        }
            if (JoyControllerLogic.DPad_rightDown
#if UNITY_EDITOR
                || Input.GetKeyDown(KeyCode.RightArrow)
#endif
                    )
	        {
	            m_current.MoveRight();
	        }
            if (JoyControllerLogic.DPad_upDown                
#if UNITY_EDITOR
            || Input.GetKeyDown(KeyCode.UpArrow)
#endif
                )
	        {
	            m_current.MoveUp();
	        }
            if (JoyControllerLogic.DPad_downDown
#if UNITY_EDITOR
            || (Input.GetKeyDown(KeyCode.DownArrow))
#endif
                )
	        {
	            m_current.MoveDown();
	        }
	    }
#endif

	}
}

