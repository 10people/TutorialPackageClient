using UnityEngine;
using System.Collections;
using GCGame;

public class WuLinTopThreeItem : MonoBehaviour
{

    public UILabel LableNameTop1;
	public UILabel LableNameTop2;
	public UILabel LableNameTop3;
	
    public static WuLinTopThreeItem CreateItem(GameObject grid, 
		GameObject resItem, string name, WuLinDefaultWindow parent)
	{
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null != curItem)
        {
            WuLinTopThreeItem curItemComponent = curItem.GetComponent<WuLinTopThreeItem>();
            return curItemComponent;
        }

        return null;
	}

    public void SetData(int pos, string name)
	{
        if (pos == 1)
        {
            if (LableNameTop1 != null) LableNameTop1.text = name;
        }
        else if (pos == 2)
        {
            if (LableNameTop2 != null) LableNameTop2.text = name;
        }
        else if (pos == 3)
        {
            if (LableNameTop3 != null) LableNameTop3.text = name;
        }
	}

    public void Cleanup()
    {
        if (LableNameTop1 != null) LableNameTop1.text = "";
        if (LableNameTop2 != null) LableNameTop2.text = "";
        if (LableNameTop3 != null) LableNameTop3.text = "";
    }
}

