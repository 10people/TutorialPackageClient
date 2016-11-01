using UnityEngine;
using System.Collections;
using GCGame;

public class WuLinMemberListItem : MonoBehaviour
{

	public UILabel LabelPos;
    public UILabel LableName;
    public UILabel LableCombat;

    public static WuLinMemberListItem CreateItem(GameObject grid, GameObject resItem, string name, WuLinRegisterMemberWindow parent, string pos, string mname, string combat)
	{
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null != curItem)
        {
            WuLinMemberListItem curItemComponent = curItem.GetComponent<WuLinMemberListItem>();
            if (null != curItemComponent)
                curItemComponent.SetData(parent, pos, mname, combat);

            return curItemComponent;
        }

        return null;
	}

    void SetData(WuLinRegisterMemberWindow parent, string pos, string name, string combat)
	{
		LabelPos.text = pos;
        LableName.text = name;
        LableCombat.text = combat;
	}
}

