using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Module.Log;

namespace Engine.JoyUI
{
	public class BobJoyUINavigator : MonoBehaviour {
#if BOBJOYSTICK
	    public delegate void delOnChanged(BobJoyUIItem last, BobJoyUIItem cur);
	    public delOnChanged OnUIChanged;
	
	    private List<BobJoyUIItem> m_list = new List<BobJoyUIItem>();
	    private BobJoyUIItem m_current = null;
	    public BobJoyUIItem Current
	    {
	        get { return m_current; }
	    }

        public static BobJoyUINavigator FindOrAddUINav(GameObject go)
        {
            BobJoyUINavigator uinav = go.GetComponent<BobJoyUINavigator>();
            if (uinav == null)
            {
                uinav = go.AddComponent<BobJoyUINavigator>();
            }
            return uinav;
        }
        public static void CollectUIItems(GameObject go, List<GameObject> uiItemObjs)
        {
            BobJoyUINavigator joyUINav;
            joyUINav = Engine.JoyUI.BobJoyUINavigator.FindOrAddUINav(go);
            for (int i = 0; i < uiItemObjs.Count; i++)
            {
                joyUINav.AddItem(uiItemObjs[i].AddComponent<BobJoyUIItem>());
            }
            joyUINav.MoveUp();
        }
	    public void AddItem(BobJoyUIItem item)
	    {
	        if (m_list.Contains(item))
	        {
	            LogModule.DebugLog(string.Format("{0} has already been added",item.name));
	            return;
	        }
	        m_list.Add(item);
            item.SetUINav(this);
	    }
	    public void RemoveItem(BobJoyUIItem item)
	    {
	        m_list.Remove(item);
	    }
	    public void ClearItems()
	    {
	        m_list.Clear();
	    }
	
	    public BobJoyUIItem MoveUp()
	    {
	        return SetCurrent(Get(Vector3.up));
	    }
	    public BobJoyUIItem MoveDown()
	    {
	        return SetCurrent(Get(Vector3.down));
	    }
	    public BobJoyUIItem MoveLeft()
	    {
	        return SetCurrent(Get(Vector3.left));
	    }
	    public BobJoyUIItem MoveRight()
	    {
	        return SetCurrent(Get(Vector3.right));
	    }
	
	
	    void Start()
	    {
            BobJoyUIController.Instance.AddUI(this);
	    }
	    void OnEnable()
	    {
            BobJoyUIController.Instance.SetCurrent(this);
	    }
        void OnDestroy()
        {
            if (BobJoyUIController.Instance != null)
            {
                BobJoyUIController.Instance.RemoveUI(this);
            }
            else
            {
                LogModule.DebugLog(string.Format("{0} is removed after joyuicontroller is destroyed",name));
            }
        }
	    //获取对应方向上的邻居
	    private BobJoyUIItem Get(Vector2 direction)
	    {
	        if (m_current == null || m_current.gameObject.activeInHierarchy == false)
	        {
	            return null;           
	        }
	        Transform _curTrans = m_current.transform;
	        Vector3 _localDir = _curTrans.TransformDirection(direction);
	        Vector3 _curCenter = m_current.Center;
	        float _min = float.MaxValue;
	        BobJoyUIItem _next = null;
	        for (int i = 0; i < m_list.Count; ++i)
	        {
	            BobJoyUIItem _item = m_list[i];
	            if (_item == m_current) continue;
	            if (_item.gameObject.activeInHierarchy == false) continue;
	
	            //如果大于45度，则排除
	            Vector3 _dir = _item.Center - _curCenter;
	            float dot = Vector3.Dot(_localDir.normalized, _dir.normalized);
	            if (dot < 0.707f) continue;
	
	            float _sqrMag = _dir.sqrMagnitude;
	            if (_sqrMag > _min) continue;
	            _next = _item;
	            _min = _sqrMag;
	        }
	        return _next;
	    }
	    //设置当前项目
	    private BobJoyUIItem SetCurrent(BobJoyUIItem item)
	    {
	        BobJoyUIItem _last = m_current;
	        if (m_list.Contains(item) && item.gameObject.activeInHierarchy == true)
	        {
	            m_current = item;
	            NotifyUIChange(_last);
	            return m_current;
	        }
	
	        if(item != null)
	        {
	            if (!m_list.Contains(item))
	            {
	                LogModule.DebugLog(string.Format("{0} is not in the list {1}", item.name, this.name));
	            }
	            if (item.gameObject.activeInHierarchy == false)
	            {
	                LogModule.DebugLog(string.Format("{0} is not active",item.name));
	            }
	        }
	
	        for (int i = 0; i < m_list.Count; ++i)
	        {
	            BobJoyUIItem _item = m_list[i];
	            if (_item.gameObject.activeInHierarchy == false) continue;
	            m_current = _item;
	            break;
	        }
	        NotifyUIChange(_last);
	        return m_current;
	    }
	
	    private void NotifyUIChange(BobJoyUIItem _last)
	    {
	        Vector3 offset = m_current.GetOffSetToFit();
	        UIPanel curPanel = UIPanel.Find(m_current.transform, false);
	
	        if (curPanel.GetComponent<UIDraggablePanel>() == null || offset.sqrMagnitude < 0.001f)
	        {//ui项目所在Panel不可以拖拽 所以直接移动到ui所在位置
	            FitCursor();
	            return;
	        }
            SpringPanel sp = SpringPanel.Begin(curPanel.gameObject, curPanel.gameObject.transform.localPosition + offset, 100);
            sp.onFinished = FitCursor;
            if (OnUIChanged != null)
            {
                OnUIChanged(_last, m_current);
            }
	    }
	    private void FitCursor()
	    {
	        MouseSimulator.Instance.SetMousePos(m_current.AbsoluteCenter);
	    }
#endif

                                                   }
}

