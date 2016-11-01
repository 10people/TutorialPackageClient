using UnityEngine;
using System.Collections;

namespace Engine.JoyUI
{
	public class BobJoyUIItem : MonoBehaviour
    {
#if BOBJOYSTICK
        private BobJoyUINavigator m_Nav;
	    public Vector3 Center
	    {
	        get
	        {
	            return GetCenterInScreenSpace(this.gameObject);
	        }
	    }
	    public Vector3 AbsoluteCenter
	    {
	        get
	        {
	            return GetCenterInWorldSpace(this.gameObject);
	        }
	    }
	    static protected Vector3 GetCenterInScreenSpace(GameObject go)
	    {
	        UICamera cam = UICamera.FindCameraForLayer(go.layer);
	        Bounds curBounds = NGUIMath.CalculateAbsoluteWidgetBounds(go.transform);
	        if (cam != null)
	        {
	            Vector3 center = (curBounds.min + curBounds.max) * 0.5f;            
	            //获取屏幕空间的位置
	            center = cam.cachedCamera.WorldToScreenPoint(center);
	            center.z = 0;
	            return center;
	        }
	        return go.transform.position;
	    }
	    static protected Vector3 GetCenterInWorldSpace(GameObject go)
	    {
	        Bounds curBounds = NGUIMath.CalculateAbsoluteWidgetBounds(go.transform);
	        Vector3 center = (curBounds.min + curBounds.max) * 0.5f;
	        return center;
	    }
	    public Vector3 GetOffSetToFit()
	    {
	        UIPanel curPanel = UIPanel.Find(transform, false);
            if (curPanel.clipping == UIDrawCall.Clipping.None)
            {
                return Vector3.zero;
            }
	        Bounds curBounds = NGUIMath.CalculateRelativeWidgetBounds(curPanel.transform, transform);
	        Vector4 cliprange = curPanel.clipRange;
	        Bounds clipBounds = new Bounds(new Vector3(cliprange.x, cliprange.y, 0), new Vector3(cliprange.z, cliprange.w, 0));
	
	        return CalculateOffsetToFit(clipBounds, curBounds);
	    }
	    protected static Vector3 CalculateOffsetToFit(Bounds clipBounds, Bounds widgetBounds)
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

        public void SetUINav(BobJoyUINavigator ui)
        {
            m_Nav = ui;
        }
        void OnDestroy()
        {
            m_Nav.RemoveItem(this);
        }
#endif

	}
}

