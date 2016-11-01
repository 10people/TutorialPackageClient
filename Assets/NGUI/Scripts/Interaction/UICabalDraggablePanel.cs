//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2013 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;

/// <summary>
/// This script, when attached to a panel allows dragging of the said panel's contents efficiently by using UIDragPanelContents.
/// 这是经过修改的UIDraggablePanel，支持根据曲线设置滚动列表中每一项的位置，来实现按曲线轨迹滚动的效果(暂时只能做垂直滚动的列表)
/// 必须配合UICabalGrid使用
/// </summary>

[ExecuteInEditMode]
[RequireComponent(typeof(UIPanel))]
[AddComponentMenu("NGUI/Interaction/CabalDraggable Panel")]
public class UICabalDraggablePanel : UIDraggablePanel
{
	// 拖动回调
	public delegate void OnDrag ();

	public OnDrag onDrag;

    private Vector3 _InitPosition;
    private UIDraggablePanel _ParentPanel;
    void Start()
    {
        _ParentPanel = GetComponent<UIDraggablePanel>();
        if (_ParentPanel != null)
        {
            Transform tmpTrans = _ParentPanel.GetComponent<Transform>();
            if (tmpTrans != null)
            {
                _InitPosition = tmpTrans.localPosition;
            }               
        }       
    }

    public void RepositionEx(bool isX = false)
    {
        if (_ParentPanel != null)
        {
            Transform tmpTrans = _ParentPanel.GetComponent<Transform>();
            if (tmpTrans != null)
            {
                Vector3 deta = _InitPosition - tmpTrans.localPosition;
                Vector3 move = Vector3.zero;
                //暂时默认没有同时移动x跟y的拖动
                if (isX)
                {
                    move = new Vector3(deta.x, 0, 0);
                }
                else
                {
                    move = new Vector3(0, deta.y, 0);
                }
                _ParentPanel.DisableSpring();
                _ParentPanel.MoveRelative(move);
            }
            
            
        }
      
    }
	public override void UpdateScrollbars (bool recalculateBounds)
	{
		if (mPanel == null) return;

		if (horizontalScrollBar != null || verticalScrollBar != null)
		{
			if (recalculateBounds)
			{
				mCalculatedBounds = false;
				mShouldMove = shouldMove;
			}

			Bounds b = bounds;
			Vector2 bmin = b.min;
			Vector2 bmax = b.max;

			if (mPanel.clipping == UIDrawCall.Clipping.SoftClip)
			{
				Vector2 soft = mPanel.clipSoftness;
				bmin -= soft;
				bmax += soft;
			}

			if (horizontalScrollBar != null && bmax.x > bmin.x)
			{
				Vector4 clip = mPanel.clipRange;
				float extents = clip.z * 0.5f;
				float min = clip.x - extents - b.min.x;
				float max = b.max.x - extents - clip.x;

				float width = bmax.x - bmin.x;
				min = Mathf.Clamp01(min / width);
				max = Mathf.Clamp01(max / width);

				float sum = min + max;
				mIgnoreCallbacks = true;
				horizontalScrollBar.barSize = 1f - sum;
				horizontalScrollBar.value = (sum > 0.001f) ? min / sum : 0f;
				mIgnoreCallbacks = false;
			}

			if (verticalScrollBar != null && bmax.y > bmin.y)
			{
				Vector4 clip = mPanel.clipRange;
				float extents = clip.w * 0.5f;
				float min = clip.y - extents - bmin.y;
				float max = bmax.y - extents - clip.y;

				float height = bmax.y - bmin.y;
				min = Mathf.Clamp01(min / height);
				max = Mathf.Clamp01(max / height);
				float sum = min + max;

				mIgnoreCallbacks = true;
				verticalScrollBar.barSize = 1f - sum;
				verticalScrollBar.value = (sum > 0.001f) ? 1f - min / sum : 0f;
				mIgnoreCallbacks = false;
			}
		}
		else if (recalculateBounds)
		{
			mCalculatedBounds = false;
		}
		if (onDrag != null) onDrag();
	}

	/// <summary>
	/// Restrict the panel's contents to be within the panel's bounds.
	/// </summary>

	// 把这个方法设为虚，因为springPanel的机制貌似会让曲线列表产生一个左右摇摆的bug
	public override bool RestrictWithinBounds (bool instant)
	{

		Vector3 constraint = mPanel.CalculateConstrainOffset(bounds.min, bounds.max);
		constraint.x = 0;
		if (constraint.magnitude > 0.001f)
		{
			if (!instant && dragEffect == DragEffect.MomentumAndSpring)
			{
				// Spring back into place
				SpringPanel.Begin(mPanel.gameObject, mTrans.localPosition + constraint, 13f);
			}
			else
			{
				// Jump back into place
				MoveRelative(constraint);
				mMomentum = Vector3.zero;
				mScroll = 0f;
			}
			return true;
		}
		return false;
	}

}
