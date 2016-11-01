using UnityEngine;
using System.Collections;
using GCGame;

public class LevelUpController : UIControllerBase<LevelUpController> 
{
    public UILabel LabelTips;
    public TweenAlpha curTween;
    public GameObject effectObj;

    void Awake()
    {
        SetInstance(this);
    }

    IEnumerator HideEffect()
    {
        yield return new WaitForSeconds(1);
        effectObj.SetActive(false);
        yield break;
    }

    public static void ShowTipByID(int dicID)
    {
        UIManager.ShowUI(UIInfo.LevelupTip, LevelUpController.OnShowTip, dicID);
    }

    static void OnShowTip(bool bSuccess, object dicID)
    {
        LevelUpController.Instance().SetLabelTextByID((int)dicID);
    }

    public void SetLabelTextByID(int dicID)
    {
        LabelTips.text = Utils.GetDicByID(dicID);
        effectObj.SetActive(true);
        curTween.Reset();
        StartCoroutine(HideEffect());
    }

    public void OnTweenFinish()
    {
        UIManager.CloseUI(UIInfo.LevelupTip);
    }
}
