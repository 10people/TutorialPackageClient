using UnityEngine;
using System.Collections;
using System.Collections.Generic;

#if BOBJOYSTICK
using Engine.JoyUI;
#endif

#if BOBJOYSTICK
public class JoyDraggablePanel : MonoBehaviour {
    //委托声明
    public delegate void OnItemClicked(GameObject item);
    public delegate void OnSelectChanged(GameObject last, GameObject current);

    public delegate void OnItemRightClicked(GameObject item);
    public delegate void OnItemLeftClicked(GameObject item);
    public delegate void OnItemUpClicked(GameObject item);
    public delegate void OnItemDownClicked(GameObject item);

    public delegate void OnInitItemList(Transform transGrid);
    //委托
    //选项被点击
    public OnItemClicked delItemClicked;
    //焦点更改
    public OnSelectChanged delSelectChanged;
    //左键按下
    public OnItemLeftClicked delItemLeftClicked;
    //右键按下
    public OnItemRightClicked delItemRightClicked;
    //上键按下
    public OnItemUpClicked delItemUpClicked;
    //下键按下
    public OnItemDownClicked delItemDownClicked;
    //初始化列表元素
    public OnInitItemList delInitItemList;

    //列表的行列
    public int m_col;
    public int m_row;

    //单个项目大小
    public Vector2 m_cellSize;
    //列表项目
    public List<GameObject> m_ItemList = new List<GameObject>();
    //当前选中的物体
    private int _currentItemIndex = 0;
    public int m_currentItemIndex
    {
        get {
            if (_currentItemIndex >= m_ItemList.Count)
            {
                _currentItemIndex = 0;
            }
            return _currentItemIndex;
        }
        set
        {
            _currentItemIndex = value;
        }
    }
    //上次选中的物体
    private int _lastItemIndex = 0;
    public int m_lastItemIndex {
        get {
            if (_lastItemIndex >= m_ItemList.Count)
            {
                _lastItemIndex = 0;
            }
            return _lastItemIndex;
        }
        set {
            _lastItemIndex = value;
        }
    }
    public GameObject m_CurrentItem
    {
        get
        {
            if (m_currentItemIndex >= m_ItemList.Count)
            {
                return null;
            }
            return m_ItemList[m_currentItemIndex];
        }
    }
    //当前可看到的行列数范围 [x,y]
    public Vector2 m_visableRow ;
    public Vector2 m_visableCol ;

    //处理的Panel
    public GameObject m_draggablePanel;
    //Panel的初始位置
    public Vector3 initPos;

#if BOBJOYSTICK
    public void Reset()
    {
        m_visableRow = Vector2.zero;
        m_visableCol = Vector2.zero;
        m_draggablePanel = null;
        m_currentItemIndex = 0;
        m_lastItemIndex = 0;
        itemlistInit = false;
        delInitItemList = null;
        delItemClicked = null;
        delSelectChanged = null;
        delItemDownClicked = null;
        delItemLeftClicked = null;
        delItemRightClicked = null;
        delItemUpClicked = null;
        m_ItemList.Clear();
    }
    public bool InitGridItemList()
    {
        if (m_draggablePanel == null)
        {
            return false;
        }
        m_ItemList.Clear();
        //代码假定DraggablePanel的结构是 Panel的子物体是Grid
        Transform _gridTrans = GetPanelGrid();
        if (_gridTrans == null )
        {
            return false;
        }
        if (_gridTrans.childCount <= 0)
        {
            return false;
        }
        int _itemcount = _gridTrans.childCount;
        //获取单个元素的大小
        if (_gridTrans.GetComponent<UIGrid>() != null)
        {
            m_cellSize.x = _gridTrans.GetComponent<UIGrid>().cellWidth;
            m_cellSize.y = _gridTrans.GetComponent<UIGrid>().cellHeight;
            //计算行列数,代码假设元素个数=行数*列数
            m_col = _gridTrans.GetComponent<UIGrid>().maxPerLine;
            if (m_col == 0 && _gridTrans.GetComponent<UIGrid>().arrangement == UIGrid.Arrangement.Horizontal)
            {//对美人界面这样的情况单独设置
                m_col = _itemcount;//m_col = 1;
            }
            else if(m_col == 0){
                m_col = 1;
            }
            m_row = _itemcount / m_col;
        }
        else if(_gridTrans.GetComponent<UITopGrid>() != null)
        {
            m_cellSize.x = _gridTrans.GetComponent<UITopGrid>().cellSize;
            m_cellSize.y = _gridTrans.GetComponent<UITopGrid>().cellSize;
            //计算行列数,代码假设元素个数=行数*列数
            m_col = 1;
            m_row = _itemcount / m_col;
        }
        //计算可视范围
        m_visableCol.y = Mathf.FloorToInt(m_draggablePanel.GetComponent<UIPanel>().clipRange.z / m_cellSize.x)-1;
        m_visableRow.y = Mathf.FloorToInt(m_draggablePanel.GetComponent<UIPanel>().clipRange.w / m_cellSize.y)-1;
        initPos = m_draggablePanel.transform.localPosition;
        //获取元素
        if (delInitItemList == null)
        {
            for (int i = 0; i < _itemcount; i++)
            {
                Transform _item = _gridTrans.GetChild(i);
                m_ItemList.Add(_item.gameObject);
            }
        }
        else
        {
            delInitItemList(_gridTrans);
        }
        MouseSimulator.Instance.SetMousePos(m_CurrentItem.transform.position);
        return true;
    }

    private Transform GetPanelGrid()
    {
        UIGrid uigrid = m_draggablePanel.GetComponentInChildren<UIGrid>();
        if (uigrid != null)
        {
            return uigrid.transform;
        }
        UITopGrid topuigrid = m_draggablePanel.GetComponentInChildren<UITopGrid>();
        if (topuigrid != null)
        {
            return topuigrid.transform;
        }

		return null;
    }
    bool itemlistInit = false;
    public void Update()
    {
        if (m_draggablePanel == null)
        {
            return;
        }
        if (!itemlistInit)
        {
            itemlistInit = InitGridItemList();
            return;
        }
        bool changed = false;
        if (JoyControllerLogic.DPad_leftDown)
        {
            if (delItemLeftClicked != null)
            {
                delItemLeftClicked(m_ItemList[m_currentItemIndex]);
            }
            else
            {
                if (m_currentItemIndex == 0)
                {
                    //什么都不做
                }
                else
                {
                    //m_lastItemIndex = m_currentItemIndex;
                    //m_currentItemIndex--;
                    changed = CheckAfterSelectChange(false);
                }
            }
        }
        if (JoyControllerLogic.DPad_rightDown)
        {
            if (delItemRightClicked != null)
            {
                delItemRightClicked(m_ItemList[m_currentItemIndex]);
            }
            else
            {
	            if (m_currentItemIndex == m_ItemList.Count-1)
	            {
	                //什么都不做
	            }
	            else
	            {
	                //m_lastItemIndex = m_currentItemIndex;
	                //m_currentItemIndex++;
	                changed = CheckAfterSelectChange(true);
	            }
            }
        }

        if (JoyControllerLogic.DPad_upDown)
        {
            if (delItemUpClicked != null)
            {
                delItemUpClicked(m_ItemList[m_currentItemIndex]);
            }
            else
            {
	            if (m_currentItemIndex < m_col)
	            {
	                //什么都不做
	            }
	            else
	            {
	                //m_lastItemIndex = m_currentItemIndex;
	                //m_currentItemIndex -= m_col;
	                changed = CheckAfterSelectChange(false,m_col);
	            }
            }
        }

        if (JoyControllerLogic.DPad_downDown)
        {
            if (delItemDownClicked != null)
            {
                delItemDownClicked(m_ItemList[m_currentItemIndex]);
            }
            else
            {
                if (m_currentItemIndex >= m_ItemList.Count - m_col)
                {
                    //什么都不做
                }
                else
                {
                    //m_lastItemIndex = m_currentItemIndex;
                    //m_currentItemIndex += m_col;
                    changed = CheckAfterSelectChange(true, m_col);
                }
            }
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
        {//点击按钮
            if (delItemClicked != null)
            {
                delItemClicked(m_ItemList[m_currentItemIndex]);
            }
        }
        if(!changed)
		{
            return;
        }


        Vector3 targetPos;
        targetPos = initPos + new Vector3(0, m_cellSize.y, 0) * m_visableRow.x;
        targetPos -= new Vector3(m_cellSize.x, 0, 0) * m_visableCol.x;
        SpringPanel.Begin(m_draggablePanel, targetPos, 8);
		m_draggablePanel.GetComponent<SpringPanel> ().onFinished = this.OnDragFinished;
    }

	void OnDragFinished(){
		
		MouseSimulator.Instance.SetMousePos (m_ItemList [m_currentItemIndex].transform.position);
		m_draggablePanel.GetComponent<SpringPanel> ().onFinished = null;
	}
    /// <summary>
    /// 在改变焦点后的检查操作
    /// </summary>
    /// <param name="add">索引是否增加 true为增加 false为减小</param>
    /// <returns></returns>
    private bool CheckAfterSelectChange(bool IndexIncreased = true, int diff = 1)
    {
        bool changed = false;
        if (IndexIncreased) 
        {
            m_lastItemIndex = m_currentItemIndex;
            m_currentItemIndex+=diff;
            if (m_currentItemIndex / m_col > m_visableRow.y)
            {
                changed = true;
                m_visableRow += Vector2.one;
            }
            if (m_currentItemIndex % m_col > m_visableCol.y)
            {
                changed = true;
                m_visableCol += Vector2.one;
            }
        }
        else
        {
            m_lastItemIndex = m_currentItemIndex;
            m_currentItemIndex-=diff;
            if (m_currentItemIndex / m_col < m_visableRow.x)
            {
                changed = true;
                m_visableRow -= Vector2.one;
            }
            if (m_currentItemIndex % m_col < m_visableCol.x)
            {
                changed = true;
                m_visableCol -= Vector2.one;
            }
        }

        if (delSelectChanged != null)
        {
			delSelectChanged(m_ItemList[m_lastItemIndex], m_ItemList[m_currentItemIndex]);
        }
		if (!changed) {			
			MouseSimulator.Instance.SetMousePos (m_ItemList [m_currentItemIndex].transform.position);	
		}
        return changed;
    }

#endif
}
#endif