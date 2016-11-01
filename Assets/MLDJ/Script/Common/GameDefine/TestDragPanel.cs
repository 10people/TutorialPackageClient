using UnityEngine;
using System.Collections;

public class TestDragPanel : MonoBehaviour
{

    private bool bCheck = true;
    private UIDraggablePanel dragPanel;

    void Start()
    {
        dragPanel = GetComponent<UIDraggablePanel>();
        dragPanel.OnPanelDrag = OnPanelDrag;
    }

    public Transform topCheckTrans; 
    public Transform topTargetTrans;
    public Transform TopMarkTrans;
    private float topItemOffsetForPanel;  


    public void SetTopCheckItem(GameObject topItem)
    {
        topCheckTrans = topItem.transform;
        Bounds checkBounds = NGUIMath.CalculateRelativeWidgetBounds(transform, topCheckTrans); 
        topItemOffsetForPanel = checkBounds.center.y + checkBounds.extents.y;
        //Debug.Log("topItemOffsetForPanel: " + topItemOffsetForPanel);
    }

    public void SetTopTargetItem(GameObject topTarget)
    {
        topTargetTrans = topTarget.transform;
    }

    public Transform bottomCheckTrans; 
    public Transform bottomTargetTrans;
    public Transform bottomMarkTrans;
    private float bottomItemOffsetForPanel;  

    
    public void SetBottomCheckItem(GameObject bottomItem)
    {
        bottomCheckTrans = bottomItem.transform;
        Bounds checkBounds = NGUIMath.CalculateRelativeWidgetBounds(transform, bottomCheckTrans); 
        bottomItemOffsetForPanel = checkBounds.center.y - checkBounds.extents.y;
        //Debug.Log ("center: " + checkBounds.center + "  size: " + checkBounds.size + " half size: " + checkBounds.extents);
        //Debug.Log("bottomItemOffsetForPanel: " + bottomItemOffsetForPanel);
    }

    public void SetBottomTargetItem(GameObject bottomTarget)
    {
        bottomTargetTrans = bottomTarget.transform;
    }

    void OnPanelDrag(Vector2 offset)
    {
        if (!bCheck)
        {
            return;
        }
        if (topCheckTrans == null || bottomCheckTrans == null)
        {
            return;
        }

        if (offset.y < 0)
        {
            
            float bottomMarkRelatePos = transform.InverseTransformPoint(bottomMarkTrans.position).y;
            //Debug.LogWarning("bottom pos: " + bottomMarkRelatePos);

            if (bottomMarkRelatePos > bottomItemOffsetForPanel)
            {
                RestaurantController.Instance().m_FoodWindow.GetComponent<RestaurantFoodWindow>().OnClickPrePage();
                int index = 10 + RestaurantController.Instance().m_FoodWindow.GetComponent<RestaurantFoodWindow>().addItemCount;
                if (index == 10)
                {
                    return;
                }
                SetBottomTargetItem(RestaurantController.Instance().m_FoodWindow.GetComponent<RestaurantFoodWindow>().m_gridFoodItemList[index - 1].gameObject);
                
                
                Bounds checkBounds = NGUIMath.CalculateRelativeWidgetBounds(transform, bottomTargetTrans);
                float targetPos = checkBounds.center.y - checkBounds.extents.y;

                bCheck = false;
                dragPanel.MoveRelative(new Vector2(0, bottomItemOffsetForPanel - targetPos));
                dragPanel.RestrictWithinBounds(true);
                bCheck = true;
            }
        }
        else if (offset.y > 0)
        {
            
            float TopMarkRelatePos = transform.InverseTransformPoint(TopMarkTrans.position).y;
            

            if (TopMarkRelatePos < topItemOffsetForPanel)
            {
                RestaurantController.Instance().m_FoodWindow.GetComponent<RestaurantFoodWindow>().OnClickNextPage();
                int index =6 - RestaurantController.Instance().m_FoodWindow.GetComponent<RestaurantFoodWindow>().addItemCount;
                //Debug.Log("countttttttttt" + index);
                if (index == 6)
                {
                    return;
                }
                SetTopTargetItem(RestaurantController.Instance().m_FoodWindow.GetComponent<RestaurantFoodWindow>().m_gridFoodItemList[index - 1].gameObject);
                
                Bounds checkBounds = NGUIMath.CalculateRelativeWidgetBounds(transform, topTargetTrans);
                float targetPos = checkBounds.center.y + checkBounds.extents.y;

                bCheck = false;
                dragPanel.MoveRelative(new Vector2(0, topItemOffsetForPanel - targetPos));
                dragPanel.RestrictWithinBounds(true);
                bCheck = true;
            }
        }
    }
}
