#if BOBJOYSTICK
using UnityEngine;
using System.Collections;
using Module.Log;

namespace Engine.JoyUI
{

	public class NewJoyUIDraggablePanel : MonoBehaviour
	{
        public delegate void delChangeFinished(GameObject currentItem);
        public delegate void delLeftClicked(GameObject currentItem);
        public delegate void delRightClicked(GameObject currentItem);
        public delegate void delUpClicked(GameObject currentItem);
        public delegate void delDownClicked(GameObject currentItem);

        public delChangeFinished OnChangeFinished;
        public delLeftClicked OnLeftClicked;
        public delRightClicked OnRightClicked;
        public delUpClicked OnUpClicked;
        public delDownClicked OnDownClicked;
	    private UIDraggablePanel m_panel;
	    private Engine.JoyUI.JoyUIConnector m_uiConnector;
	    private System.Collections.Generic.List<UIDragPanelContents> draggableContentList;
	    int m_index = 0;
        public Vector3 Scale
        {
            get
            {
                return m_panel.scale;
            }
        }
		// Use this for initialization
		void OnEnable () {
            LogModule.ErrorLog("starting " + name);
	        m_panel = GetComponent<UIDraggablePanel>();
            m_uiConnector = Engine.JoyUI.JoyUIConnector.Instance;
            //Refresh();
        }
        //void OnDisable()
        //{
        //    m_uiConnector.ClearGUIItems();
        //}
        public static NewJoyUIDraggablePanel BeginJoyProc(GameObject target)
        {
            NewJoyUIDraggablePanel njudp = target.GetComponent<NewJoyUIDraggablePanel>();
            if (njudp == null)
            {
                njudp = target.AddComponent<NewJoyUIDraggablePanel>();
            }
            njudp.Refresh();
            return njudp;
        }
	    // Update is called once per frame
	    void Update()
	    {
	        if (JoyControllerLogic.DPad_leftDown)
            {
                LeftClick();
	        }
            if (JoyControllerLogic.DPad_rightDown)
	        {
                RightClick();
	        }
            if (JoyControllerLogic.DPad_upDown)
	        {
                UpClick();
	        }
            if (JoyControllerLogic.DPad_downDown)
	        {
                DownClick();
	        }
            if (Input.GetKeyDown(KeyCode.Space))
            {
                Refresh();
            }
	    }

        /// <summary>
        /// 重新适配界面
        /// </summary>
        public void Refresh()
        {
            draggableContentList = new System.Collections.Generic.List<UIDragPanelContents>(GetComponentsInChildren<UIDragPanelContents>());
            System.Collections.Generic.List<GameObject> uiItems = new System.Collections.Generic.List<GameObject>();
            for (int i = 0; i < draggableContentList.Count; i++)
            {
                uiItems.Add(draggableContentList[i].gameObject);
            }
            m_uiConnector.ClearGUIItems();
            m_uiConnector.AddGUIItems(uiItems);
            m_uiConnector.RebuildGUISet();
            if (m_uiConnector.Current != null)
            {
                OnSelectChanged(m_uiConnector.Current.Item.transform, m_uiConnector.Current.Item.transform);
            }
            else
            {
                LogModule.DebugLog(gameObject.name);
            }
        }
        void LeftClick()
        {
            if (OnLeftClicked != null)
            {
                if (m_uiConnector.Current != null)
                    OnLeftClicked(m_uiConnector.Current.Item);
                else
                    OnLeftClicked(null);
            }
            if (Scale.x < 0.2f)
            {
                return;
            }
            Engine.JoyUI.UILocation _last = m_uiConnector.Current;
            m_uiConnector.MoveToLeft();
            if (_last != null && m_uiConnector.Current != null)
            OnSelectChanged(_last.Item.transform, m_uiConnector.Current.Item.transform);
        }
        void RightClick()
        {
            if (OnRightClicked != null)
            {
                if (m_uiConnector.Current != null)
                    OnRightClicked(m_uiConnector.Current.Item);
                else
                    OnRightClicked(null);
            }
            if (Scale.x < 0.2f)
            {
                return;
            }
            Engine.JoyUI.UILocation _last = m_uiConnector.Current;
            m_uiConnector.MoveToRight();
            if (_last != null && m_uiConnector.Current != null)
            OnSelectChanged(_last.Item.transform, m_uiConnector.Current.Item.transform);
        }
        void UpClick()
        {
            if (OnUpClicked != null)
            {
                if (m_uiConnector.Current != null)
                    OnUpClicked(m_uiConnector.Current.Item);
                else OnUpClicked(null);
            }
            if (Scale.y < 0.2f)
            {
                return;
            }
            Engine.JoyUI.UILocation _last = m_uiConnector.Current;
            m_uiConnector.MoveToUp();
            if (_last != null && m_uiConnector.Current != null)
            OnSelectChanged(_last.Item.transform, m_uiConnector.Current.Item.transform);
        }
        void DownClick()
        {
            if (OnDownClicked != null)
            {
                if (m_uiConnector.Current != null)
                    OnDownClicked(m_uiConnector.Current.Item);
                else OnDownClicked(null);
            }
            if (Scale.y < 0.2f)
            {
                return;
            }
            Engine.JoyUI.UILocation _last = m_uiConnector.Current;
            m_uiConnector.MoveToDown();
            if (_last != null && m_uiConnector.Current != null)
            OnSelectChanged(_last.Item.transform, m_uiConnector.Current.Item.transform);
        }
        void OnConfirmClick()
        {

        }
	    private void OnSelectChanged(Transform lastItem,Transform selectedItem)
	    {
	        Bounds relativeBounds = NGUIMath.CalculateRelativeWidgetBounds(m_panel.transform, selectedItem);
            Bounds selfBounds = NGUIMath.CalculateRelativeWidgetBounds(selectedItem);
	        Vector4 cliprange = m_panel.panel.clipRange;
	        Bounds clipBounds = new Bounds(new Vector3(cliprange.x, cliprange.y, 0), new Vector3(cliprange.z, cliprange.w, 0));
	        Vector3 offset = CalculateOffsetToFit(clipBounds, relativeBounds);
	        SpringPanel.Begin(m_panel.gameObject, m_panel.gameObject.transform.localPosition + offset, 100);
	        m_panel.gameObject.GetComponent<SpringPanel>().onFinished = OnSpringFinished;
	    }
	    Vector3 CalculateOffsetToFit(Bounds clipBounds, Bounds widgetBounds)
	    {//计算偏移量以使所选物体恰好在clipRange内
	        Vector3 offset = Vector3.zero;
	        bool minInRange = clipBounds.Contains(widgetBounds.min);
	        bool maxInRange = clipBounds.Contains(widgetBounds.max);
	        bool inRange = minInRange && maxInRange;
	        if (inRange)
	        {
	            return offset;
	        }
	        Vector3 widgetCenter = widgetBounds.center;
	        Vector3 clipCenter = clipBounds.center;
	        if (widgetBounds.min.x < clipBounds.min.x || widgetBounds.max.x > clipBounds.max.x)
	        {//x方向出界
	            if (widgetCenter.x < clipCenter.x)
	            {//在左边
	                offset.x = clipBounds.min.x - widgetBounds.min.x;
	            }
	            else
	            {//在右边
	                offset.x = clipBounds.max.x - widgetBounds.max.x;
	            }
	        }
	        if (widgetBounds.min.y < clipBounds.min.y || widgetBounds.max.y > clipBounds.max.y)
	        {//y方向出界
		        if (widgetCenter.y < clipCenter.y)
		        {//在下边
		            offset.y = clipBounds.min.y - widgetBounds.min.y;
		        }
		        else
		        {//在上边
		            offset.y = clipBounds.max.y - widgetBounds.max.y;
		        }
	        }
	        return offset;
	    }
	    void OnSpringFinished()
	    {//完成拖拽滑动操作后的事件
	        m_panel.RestrictWithinBounds(false);
	        m_panel.gameObject.GetComponent<SpringPanel>().onFinished = null;
            if (OnChangeFinished != null)
            {
                OnChangeFinished(m_uiConnector.Current.Item);
            }
	    }
	}
}

#endif
