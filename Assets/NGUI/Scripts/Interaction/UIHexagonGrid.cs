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
[AddComponentMenu("NGUI/Interaction/HexagonGrid")]
public class UIHexagonGrid : UIWidgetContainer
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

    // 特殊 当选择水平方向排列时 cellHeight表示蜂窝排列两个相邻斜向格子的距离 而非竖直方向的距离
    // 同理 当选择竖直方向排列时 cellWidth表示蜂窝排列两个相邻斜向格子的距离 而非水平方向的距离

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

    protected bool mStarted = false;

    void Start()
    {
        mStarted = true;
#if UNITY_EDITOR
		if (Application.isPlaying)
#endif
        Reposition();
    }

    void Update()
    {
        if (repositionNow)
        {
            repositionNow = false;
            Reposition();
        }
    }

    static public int SortByName(Transform a, Transform b) { return string.Compare(a.name, b.name); }
    static public int SortByNum(Transform a, Transform b)
    {
        int aint = System.Int32.Parse(a.name);
        int bint = System.Int32.Parse(b.name);
        if (aint < bint)
            return -1;
        else if (aint == bint)
            return 0;
        else
            return 1;

    }

    /// <summary>
    /// Recalculate the position of all elements within the grid, sorting them alphabetically if necessary.
    /// </summary>

    public void Reposition(bool isByNum = false)                 //  使用数字顺序时需要传参数true，其余情况下仍然走false的字典序  /
    {
        if (!mStarted)
        {
            repositionNow = true;
            return;
        }

        Transform myTrans = transform;

        int x = 0;
        int y = 0;

        float fDeltaX = cellWidth;
        float fDeltaY = Mathf.Sqrt(Mathf.Pow(cellHeight, 2) - Mathf.Pow(cellWidth / 2, 2));

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

        for (int i = 0, imax = list.Count; i < imax; ++i)
        {
            Transform t = list[i];

            if (!NGUITools.GetActive(t.gameObject) && hideInactive) continue;

            float depth = t.localPosition.z;

            if (y % 2 == 0)
            {
                t.localPosition = arrangement == Arrangement.Horizontal ?
                    new Vector3(fDeltaX * x, -fDeltaY * y, depth) :
                    new Vector3(fDeltaX * y, -fDeltaY * x, depth);

                if (++x >= maxPerLine && maxPerLine > 1)
                {
                    x = 0;
                    ++y;
                }
            }
            else
            {
                t.localPosition = arrangement == Arrangement.Horizontal ?
                    new Vector3(fDeltaX / 2 + fDeltaX * x, -fDeltaY * y, depth) :
                    new Vector3(fDeltaX * y, -fDeltaY / 2 - fDeltaY * x, depth);

                if (++x >= maxPerLine - 1 && maxPerLine > 1)
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
