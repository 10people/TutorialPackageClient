using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Module.Log;
namespace Engine.JoyUI
{
#if BOBJOYSTICK
    public class UILocation
    {
        private GameObject m_uiItem;
        public GameObject Item
        {
            get { return m_uiItem; }
        }
        //左下角为原点
        private Vector2 m_uiLocation;
        public UnityEngine.Vector2 Location
        {
            get { return m_uiLocation; }
        }
        public UILocation Right;
        public UILocation Left;
        public UILocation Up;
        public UILocation Down;

        public UILocation(GameObject widget, Vector2 location)
        {
            m_uiItem = widget;
            m_uiLocation = location;
        }
        public override string ToString()
        {
            return m_uiItem.name + " " + m_uiLocation.ToString();
        }
    }
    public class UILocationXYComparer : IComparer<UILocation>
    {
        public int Compare(UILocation x, UILocation y)
        {
            if (x.Location.x < y.Location.x)
            {
                return -1;
            }
            if (x.Location.x > y.Location.x)
            {
                return 1;
            }
            if (x.Location.y > y.Location.y)
            {
                return -1;
            }
            if (x.Location.y < y.Location.y)
            {
                return 1;
            }
            return 0;
        }
    }
    public class UILocationYXComparer : IComparer<UILocation>
    {
        public int Compare(UILocation x, UILocation y)
        {
            if (x.Location.y > y.Location.y)
            {
                return -1;
            }
            if (x.Location.y < y.Location.y)
            {
                return 1;
            }
            if (x.Location.x < y.Location.x)
            {
                return -1;
            }
            if (x.Location.x > y.Location.x)
            {
                return 1;
            }
            return 0;
        }
    }
    public class JoyUIConnector : MonoSingleton<JoyUIConnector>
    {
        private UILocationXYComparer xycomparer = new UILocationXYComparer();
        private UILocationYXComparer yxcomparer = new UILocationYXComparer();

        [SerializeField]
        private List<GameObject> uiItems = new List<GameObject>();
        private List<UILocation> uiLocations = new List<UILocation>();

        private UILocation m_current = null;
        public Engine.JoyUI.UILocation Current
        {
            get { return m_current; }
        }
        public void MoveToRight()
        {
            if (m_current == null)
            {
                return;
            }

            if (m_current.Right != null)
            {
                m_current = m_current.Right;
                //UpdateMousePos();
            }
        }
        public void MoveToLeft()
        {
            if (m_current == null)
            {
                return;
            }

            if (m_current.Left != null)
            {
                m_current = m_current.Left;
                //UpdateMousePos();
            }
        }
        public void MoveToUp()
        {
            if (m_current == null)
            {
                return;
            }

            if (m_current.Up != null)
            {
                m_current = m_current.Up;
                //UpdateMousePos();
            }
        }
        public void MoveToDown()
        {
            if (m_current == null)
            {
                return;
            }

            if (m_current.Down != null)
            {
                m_current = m_current.Down;
                //UpdateMousePos();
            }
        }
        public void AddGUIItems(List<GameObject> itemlist)
        {
            for (int i = 0; i < itemlist.Count; i++)
            {
                Bounds widgetBounds = NGUIMath.CalculateRelativeWidgetBounds(UIPanel.Find(itemlist[i].transform).transform, itemlist[i].transform);
                if (uiItems.Contains(itemlist[i]))
                {
                    continue;
                }
                //else if (widgetBounds.size.x < 3 || widgetBounds.size.y < 3)
                //{
                //    continue;
                //}
                else
                {
                    uiItems.Add(itemlist[i]);
                }
            }
        }
        public void RemoveGUIItems(List<GameObject> itemlist)
        {
            for (int i = 0; i < itemlist.Count; i++)
            {
                if (!uiItems.Contains(itemlist[i]))
                {
                    continue;
                }
                else
                {
                    uiItems.Remove(itemlist[i]);
                }
            }
        }
        public void ClearGUIItems()
        {
            uiItems.Clear(); 
            uiLocations.Clear();
            m_current = null;

        }
        public void RebuildGUISet()
        {
            RemoveInactiveItems();
            Vector2 minsize = new Vector2(Screen.width, Screen.height);
            for (int i = 0; i < uiItems.Count; i++)
            {
                Bounds _bound = GetUIScreenBounds(uiItems[i].transform);

                Vector2 _localSize = _bound.size;
                if (minsize.x > _localSize.x)
                {
                    minsize.x = _localSize.x;
                }
                if (minsize.y > _localSize.y)
                {
                    minsize.y = _localSize.y;
                }
            }
            //LogModule.DebugLog("minsize " + minsize);
            uiLocations.Clear();
            Camera _temp = null;
            if (UICamera.mainCamera != null)
            {
                _temp = UICamera.mainCamera;
            }
            for (int i = 0; i < uiItems.Count; i++)
            {//使用最小的按钮大小分割空间，然后确定每个按钮的位置
                //思考：会出现这样分割的按钮仍然被判定为同一位置的情况吗？
                Vector2 location = new Vector2();
                Vector2 uiposition = _temp.WorldToScreenPoint(uiItems[i].transform.position);
                //LogModule.DebugLog(uiItems[i].name + " " + uiposition);
                location.x = Mathf.Floor(uiposition.x / minsize.x);
                location.y = Mathf.Floor(uiposition.y / minsize.y);
                uiLocations.Add(new UILocation(uiItems[i], location));
            }

            uiLocations.Sort(yxcomparer);
            string haha = "";
            for (int i = 0; i < uiLocations.Count - 1; i++)
            {
                uiLocations[i].Right = uiLocations[i + 1];
                uiLocations[i + 1].Left = uiLocations[i];
                haha += (uiLocations[i].ToString());
            }
            uiLocations.Sort(xycomparer);
            //LogModule.DebugLog(haha);
            haha = "";
            for (int i = 0; i < uiLocations.Count - 1; i++)
            {
                uiLocations[i].Down = uiLocations[i + 1];
                uiLocations[i + 1].Up = uiLocations[i];
                haha += (uiLocations[i].ToString());
            }
            if (uiLocations.Count > 0)
            {
                m_current = uiLocations[0];
                //if (MouseSimulator.Instance != null)
                //{
                //    MouseSimulator.Instance._trans.position = m_current.Item.transform.position;
                //}
            }
            //LogModule.DebugLog(haha);
        }

        void RemoveInactiveItems()
        {
            for (int i = uiItems.Count - 1; i >= 0; i--)
            {
                if (!uiItems[i].gameObject.activeInHierarchy)
                {
                    uiItems.RemoveAt(i);
                }
            }
        }
        //void UpdateMousePos()
        //{
        //    LogModule.DebugLog(m_current.Item.GetComponentInChildren<UIWidget>().isVisible);
        //    if (MouseSimulator.Instance != null)
        //    {
        //        MouseSimulator.Instance._trans.position = m_current.Item.transform.position;
        //    }
        //}
        Bounds BoundsWorldToScreen(Bounds bounds)
        {
            Vector3 max = UICamera.mainCamera.WorldToScreenPoint(bounds.max);
            Vector3 min = UICamera.mainCamera.WorldToScreenPoint(bounds.min);
            Bounds b = new Bounds(min, Vector3.zero);
            b.Encapsulate(max);
            return b;
        }

        Bounds GetUIScreenBounds(Transform trans)
        {
            return BoundsWorldToScreen(NGUIMath.CalculateAbsoluteWidgetBounds(trans));
        }
    }
#endif
}
