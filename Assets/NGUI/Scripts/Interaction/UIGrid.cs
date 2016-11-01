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
/// </summary>

[ExecuteInEditMode]
[AddComponentMenu("NGUI/Interaction/Grid")]
public class UIGrid : UIWidgetContainer
{
	public enum Arrangement
	{
		Horizontal,
		Vertical,
	}

	/// <summary>
	/// Type of arrangement -- vertical or horizontal.
	/// </summary>

	public Arrangement arrangement = Arrangement.Horizontal;

	/// <summary>
	/// Maximum children per line.
	/// If the arrangement is horizontal, this denotes the number of columns.
	/// If the arrangement is vertical, this stands for the number of rows.
	/// </summary>

	public int maxPerLine = 0;

	/// <summary>
	/// The width of each of the cells.
	/// </summary>

	public float cellWidth = 200f;

	/// <summary>
	/// The height of each of the cells.
	/// </summary>

	public float cellHeight = 200f;

	/// <summary>
	/// Reposition the children on the next Update().
	/// </summary>

	public bool repositionNow = false;

	/// <summary>
	/// Whether the children will be sorted alphabetically prior to repositioning.
	/// </summary>

	public bool sorted = false;

	/// <summary>
	/// Whether to ignore the disabled children or to treat them as being present.
	/// </summary>

	public bool hideInactive = true;

    /// <summary>
    /// Final pivot point for the grid's content.
    /// </summary>

    public UIWidget.Pivot pivot = UIWidget.Pivot.TopLeft;

	protected bool mStarted = false;

    public delegate void OnReposition();
    public OnReposition onReposition;


	void Start ()
	{
		mStarted = true;
#if UNITY_EDITOR
		if (Application.isPlaying)
#endif
		Reposition();
	}

	void Update ()
	{
		if (repositionNow)
		{
			repositionNow = false;
			Reposition();
		}
	}

	static public int SortByName (Transform a, Transform b) { return string.Compare(a.name, b.name); }
	static public int SortByNum (Transform a, Transform b) 
	{ 
		int aint = System.Int32.Parse (a.name);
		int bint = System.Int32.Parse (b.name);
		if (aint < bint)
						return -1;
		else if (aint == bint)
						return 0;
		else
						return 1;

	}

    /// <summary>
    /// Get the current list of the grid's children.
    /// </summary>

    public List<Transform> GetChildList()
    {
        Transform myTrans = transform;
        List<Transform> list = new List<Transform>();

        for (int i = 0; i < myTrans.childCount; ++i)
        {
            Transform t = myTrans.GetChild(i);
            if (!hideInactive || (t && NGUITools.GetActive(t.gameObject)))
                list.Add(t);
        }

        return list;
    }

	/// <summary>
	/// Recalculate the position of all elements within the grid, sorting them alphabetically if necessary.
	/// </summary>

	public void Reposition (bool isByNum = false )                 //  使用数字顺序时需要传参数true，其余情况下仍然走false的字典序  /
	{
		if (!mStarted)
		{
			repositionNow = true;
			return;
		}

		Transform myTrans = transform;

		int x = 0;
		int y = 0;
        int maxX = 0;
        int maxY = 0;
		if (sorted)
		{
			List<Transform> list = new List<Transform>();

			for (int i = 0; i < myTrans.childCount; ++i)
			{
				Transform t = myTrans.GetChild(i);
				if (t && (!hideInactive || NGUITools.GetActive(t.gameObject))) list.Add(t);
			}
			if(isByNum)
				list.Sort(SortByNum);
			else
				list.Sort(SortByName);

			for (int i = 0, imax = list.Count; i < imax; ++i)
			{
				Transform t = list[i];

				if (!NGUITools.GetActive(t.gameObject) && hideInactive) continue;

				float depth = t.localPosition.z;
				t.localPosition = (arrangement == Arrangement.Horizontal) ?
					new Vector3(cellWidth * x, -cellHeight * y, depth) :
					new Vector3(cellWidth * y, -cellHeight * x, depth);

                maxX = Mathf.Max(maxX, x);
                maxY = Mathf.Max(maxY, y);

				if (++x >= maxPerLine && maxPerLine > 0)
				{
					x = 0;
					++y;
				}
			}
		}
		else
		{
			for (int i = 0; i < myTrans.childCount; ++i)
			{
				Transform t = myTrans.GetChild(i);

				if (!NGUITools.GetActive(t.gameObject) && hideInactive) continue;

				float depth = t.localPosition.z;
				t.localPosition = (arrangement == Arrangement.Horizontal) ?
					new Vector3(cellWidth * x , -cellHeight * y, depth) :
					new Vector3(cellWidth * y , -cellHeight * x, depth);

                maxX = Mathf.Max(maxX, x);
                maxY = Mathf.Max(maxY, y);

				if (++x >= maxPerLine && maxPerLine > 0)
				{
					x = 0;
					++y;
				}
			}
		}

        // Apply the origin offset
        if (pivot != UIWidget.Pivot.TopLeft)
        {
            Vector2 po = NGUIMath.GetPivotOffset(pivot);

            float fx, fy;

            if (arrangement == Arrangement.Horizontal)
            {
                fx = Mathf.Lerp(0f, maxX * cellWidth, po.x);
                fy = Mathf.Lerp(-maxY * cellHeight, 0f, po.y);
            }
            else
            {
                fx = Mathf.Lerp(0f, maxY * cellWidth, po.x);
                fy = Mathf.Lerp(-maxX * cellHeight, 0f, po.y);
            }

            for (int i = 0; i < myTrans.childCount; ++i)
            {
                Transform t = myTrans.GetChild(i);
                SpringPosition sp = t.GetComponent<SpringPosition>();

                if (sp != null)
                {
                    sp.target.x -= fx;
                    sp.target.y -= fy;
                }
                else
                {
                    Vector3 pos = t.localPosition;
                    pos.x -= fx;
                    pos.y -= fy;
                    t.localPosition = pos;
                }
            }
        }

		UIDraggablePanel drag = NGUITools.FindInParents<UIDraggablePanel>(gameObject);
		if (drag != null) drag.UpdateScrollbars(true);

        if (onReposition != null)
            onReposition();
	}

	public void RepositionEx (bool isByNum = false ,float  inter = 0.0f )                 //  使用数字顺序时需要传参数true，其余情况下仍然走false的字典序  /
	{
		if (!mStarted)
		{
			repositionNow = true;
			return;
		}
		
		Transform myTrans = transform;
		
		int x = 0;
		int y = 0;
		
		if (sorted)
		{
			List<Transform> list = new List<Transform>();
			
			for (int i = 0; i < myTrans.childCount; ++i)
			{
				Transform t = myTrans.GetChild(i);
				if (t && (!hideInactive || NGUITools.GetActive(t.gameObject))) list.Add(t);
			}
			if(isByNum)
				list.Sort(SortByNum);
			else
				list.Sort(SortByName);
			
			for (int i = 0, imax = list.Count; i < imax; ++i)
			{
				Transform t = list[i];
				
				if (!NGUITools.GetActive(t.gameObject) && hideInactive) continue;
				
				float depth = t.localPosition.z;
				t.localPosition = (arrangement == Arrangement.Horizontal) ?
					new Vector3(cellWidth * x + inter * y, -cellHeight * y, depth) :
						new Vector3(cellWidth * y + inter, -cellHeight * x, depth);
				
				if (++x >= maxPerLine && maxPerLine > 0)
				{
					x = 0;
					++y;
				}
			}
		}
		else
		{
			for (int i = 0; i < myTrans.childCount; ++i)
			{
				Transform t = myTrans.GetChild(i);
				
				if (!NGUITools.GetActive(t.gameObject) && hideInactive) continue;
				
				float depth = t.localPosition.z;
				t.localPosition = (arrangement == Arrangement.Horizontal) ?
					new Vector3(cellWidth * x + inter * y,  -cellHeight * y, depth) :
						new Vector3(cellWidth * y, -cellHeight * x, depth);
				
				if (++x >= maxPerLine && maxPerLine > 0)
				{
					x = 0;
					++y;
				}
			}
		}
		
		UIDraggablePanel drag = NGUITools.FindInParents<UIDraggablePanel>(gameObject);
		if (drag != null) drag.UpdateScrollbars(true);
	}

#if BOBJOYSTICK
    public List<Transform> getList( bool isByNum = false)
    {
        Transform myTrans = transform;
            List<Transform> list = new List<Transform>();

            for (int i = 0; i < myTrans.childCount; ++i)
            {
                Transform t = myTrans.GetChild(i);
                if (t && (!hideInactive || NGUITools.GetActive(t.gameObject))) list.Add(t);
            }
            if (sorted)
            {
                if (isByNum)
                    list.Sort(SortByNum);
                else
                    list.Sort(SortByName);
            }
            return list;
    }
#endif

}
