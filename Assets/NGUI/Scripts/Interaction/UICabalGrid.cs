//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2013 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;
using System.Collections.Generic;
using System;

/// <summary>
/// All children added to the game object with this script will be repositioned to be on a grid of specified dimensions.
/// If you want the cells to automatically set their scale based on the dimensions of their content, take a look at UITable.
/// 这是经过修改的UIGrid，支持根据曲线设置滚动列表中每一项的位置，来实现按曲线轨迹滚动的效果(暂时只能做垂直滚动的列表)
/// 必须配合UICabalDraggablePanel使用
/// </summary>

[ExecuteInEditMode]
[AddComponentMenu("NGUI/Interaction/CabalGrid")]
public class UICabalGrid : UIGrid
{
	/// <summary>
	/// 曲线轨迹
	/// </summary>
	public AnimationCurve _animationCurve;

	private float _baseHeight;
	// 整体高度
	private float _height;

	/// <summary>
	/// 曲线偏移程度(只是乘以个系数，曲线数值调整为主)
	/// </summary>
	private float _offsetScale = 100f;

	/// <summary>
	/// 所在panel的transform
	/// </summary>
	private Transform _parentTrans;

	/// <summary>
	/// draggablePanel 的缓存
	/// </summary>
	UICabalDraggablePanel _draggablePanelCache;

	//  not drag using 
	public float  m_offsetVlue = 0.0f;
	
	Transform _trans;

	void Start ()
	{
		_parentTrans = transform.parent;
		_baseHeight = 0;//_parentTrans.localPosition.y;
		UIPanel panel = _parentTrans.GetComponent<UIPanel>();
		if (panel != null)
		{
			_height = panel.clipRange.w;
		}

		_trans = transform;
		_draggablePanelCache = NGUITools.FindInParents<UICabalDraggablePanel>(gameObject);
		if (_draggablePanelCache != null)
		{
			_draggablePanelCache.onDrag = OnDrag;
		}

		mStarted = true;
#if UNITY_EDITOR
		if (Application.isPlaying)
#endif
			RepositionEx(false,m_offsetVlue );
	}

	void Update ()
	{
		if (repositionNow)
		{
			repositionNow = false;
			RepositionEx(false,m_offsetVlue );
		}
	}

	/// <summary>
	/// 根据曲线重新调整各子项位置
	/// </summary>
	void UpdateCurveOffset ()
	{
		int x = 0;
		int y = 0;

		if (_baseHeight == 0)
		{
			_baseHeight = _parentTrans.localPosition.y;
		}
		float currentHeight = _parentTrans.localPosition.y;

		for (int i = 0; i < _trans.childCount; ++i)
		{
			Transform t = _trans.GetChild(i);
			
			if (!NGUITools.GetActive(t.gameObject) && hideInactive) continue;
			
			float depth = t.localPosition.z;
			if (arrangement == Arrangement.Horizontal)
			{

				float d = (currentHeight - _baseHeight - cellHeight * (y - 1) + 1 * _height) / (_height + cellHeight);
				t.localPosition = new Vector3(cellWidth * x + _animationCurve.Evaluate(d) * _offsetScale, -cellHeight * y, depth);
			}
			else
			{
				// todo
				float d = (currentHeight - _baseHeight - cellHeight * y - _height) / (_height + cellHeight);
				t.localPosition = new Vector3(cellWidth * y, -cellHeight * x + _animationCurve.Evaluate(d) * _offsetScale, depth);
			}
			if (++x >= maxPerLine && maxPerLine > 0)
			{
				x = 0;
				++y;
			}
		}
	}
	
	/// <summary>
	/// CabalDraggablePanel 的回调
	/// </summary>
	private void OnDrag ()
	{
		UpdateCurveOffset ();
	}

}
