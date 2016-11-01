using UnityEngine;
using System.Collections;

public class GuaJiGuildLogic : MonoBehaviour {

	void Start () 
    {
		m_GuiJiObjTween.enabled = false;
		SetRotationItem (true);
	}
	
	void Update () 
    {
		if (m_passTime >= m_continueShowTime || m_IsClick )
		{
			m_IsClick = false ;
			m_passTime = 0.0f ;
			beginGuijiGuildPlay();
		} 
		else
		{
			m_passTime +=Time.deltaTime; 
		}
	}

	public TweenPosition m_GuiJiObjTween ;
	public UISprite m_GuiJiIcon ;
	private float m_PositionDuration = 2.0f  ;  // 移动持续时间
	private float m_continueShowTime = 20.0f ;
	private float m_passTime = 0.0f ;
	private bool m_IsClick = false ;
	private bool m_IsPlayed = false ;
	
	public void onClickGuijiGuildGround()
	{
		m_IsClick = true;
	}

	public void onFinishGuijiGuild()
	{
		UIManager.CloseUI (UIInfo.GuaJiGuild);
        NewPlayerGuide.NewPlayerGuideOpt("FunctionButton", 1);
	}

	public void beginGuijiGuildPlay()
	{
		if (m_IsPlayed)
			return;

		m_IsPlayed = true;
		//HideHandMove ();
		SetRotationItem (true);
		showGuaJiIcon ();
		if (FunctionButtonLogic.Instance () != null && FunctionButtonLogic.Instance ().getAutoFightObj () != null) 
		{
			m_GuiJiObjTween.enabled = true;
			m_GuiJiObjTween.Reset ();
			m_GuiJiObjTween.to = transform.parent.InverseTransformPoint(FunctionButtonLogic.Instance().getAutoFightObj() .transform.position);
			m_GuiJiObjTween.duration = m_PositionDuration;
			m_GuiJiObjTween.Play();
		}
	}

	// 自转，改为呼吸效果
    public GameObject m_RotationItem ;
    public void SetRotationItem(bool isEnable)
    {
        TweenScale temSpin = m_RotationItem.GetComponent<TweenScale>();
        if (temSpin)
        {
            temSpin.enabled = isEnable;
        }
    }
	public void hideGuaJiIcon()
	{
		if (FunctionButtonLogic.Instance ().getAutoFightObj ())
			FunctionButtonLogic.Instance ().getAutoFightObj ().SetActive (false);
	}
	public void showGuaJiIcon()
	{
		if (FunctionButtonLogic.Instance ().getAutoFightObj () )
			FunctionButtonLogic.Instance ().getAutoFightObj ().SetActive (true);
	}
}
