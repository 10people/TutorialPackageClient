using UnityEngine;
using System.Collections;
/// <summary>
/// 七日狂欢左边的每日Item
/// by weitong
/// </summary>
public class SevenDaysItem : MonoBehaviour 
{
#region UI ref
    public UISprite sprDay;
    public GameObject objSelect;
    public GameObject objLock;
#endregion

    public int dayIndex = -1;

#region functions
    public void SetData(int index, bool isOpen)
    {
        dayIndex = index;
        sprDay.spriteName = "Sp-Day" + (index + 1);
        objSelect.SetActive(false);
        objLock.SetActive(!isOpen);
    }

    public void Select(bool isSelect)
    {
        objSelect.SetActive(isSelect);
    }
#endregion

}
