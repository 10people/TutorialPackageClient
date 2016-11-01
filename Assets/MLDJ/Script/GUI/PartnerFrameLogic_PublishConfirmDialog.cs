using UnityEngine;
using System.Collections;
using Games.Fellow;

public class PartnerFrameLogic_PublishConfirmDialog : MonoBehaviour 
{
#region UI ref
    public UILabel lblName;
    public UILabel lblLv;
    public UILabel lblPropBreed;
    public UILabel lblPropLucky;
    public UISprite sprHead;
    public UISprite sprQualityFrame;
    public UISprite sprQualityStone;
    public GameObject btnOK;
    public GameObject btnCancel;
#endregion

#region functions
    public void SetDate(Fellow fellow)
    {
        lblName.text = fellow.Name;
        lblLv.text = fellow.Level.ToString();
        lblPropBreed.text = fellow.ProcreateCount.ToString();
        lblPropLucky.text = fellow.Lucky.ToString();
        sprHead.spriteName = fellow.GetIcon();
        sprQualityFrame.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
        sprQualityStone.spriteName = FellowTool.GetFellowQualityIcon(fellow.Quality);
    }
#endregion
}
