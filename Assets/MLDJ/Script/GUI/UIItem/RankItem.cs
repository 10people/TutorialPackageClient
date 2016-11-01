using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;

public class RankItem : MonoBehaviour {

    //..
    public UILabel m_Label1;
    public UILabel m_Label2;
    public UILabel m_Label3;
    public UILabel m_Label4;
    public UILabel m_Label5;
    //public UILabel m_Label6;

    public UISprite m_NormalBk;
    public UISprite m_SelectBk;

   // public UIButtonMessage m_MoreInfoButton;
    //..
    public UIGrid m_LabelGrid;
    public UISprite m_Tobe;

    //public UILabel m_LabelGrid;
    private UInt64 m_Guid = GlobeVar.INVALID_GUID;
	private string m_name ;


    public UInt64 Guid
    {
        set { m_Guid = value; }
        get { return m_Guid; }
    }

	public string Name
	{
		set { m_name = value; }
		get { return m_name; }
	}

    public void SetMaxLabel( int n)
    {
        if (m_LabelGrid != null)
        {
            //m_LabelGrid.cellWidth = 600/n;
            m_LabelGrid.cellWidth = 700 / n;
            m_LabelGrid.repositionNow = true;
        }
    }

    public void SendData(UInt64 oGuid, string str1, string str2, string str3 = "", string str4 = "", string str5 = "", string str6 = "")
    {
        string colorStr = "";
        if (m_Tobe != null)
        {
            m_Tobe.enabled = false;
        }   
        if( str1 == "1")
        {
            m_Tobe.enabled = true;
            colorStr = "[ff9933]"; 
        }
        else if( str1 == "2")
        {
            m_Tobe.enabled = true;
            colorStr = "[cc66ff]";
        }
        else if( str1 == "3")
        {
            m_Tobe.enabled = true;
            colorStr = "[33cc66]";
        }

		m_name = str2;
        m_Label1.text = colorStr + str1;
        m_Label2.text = colorStr + str2;
        m_Label3.text = colorStr + str3;
        m_Label4.text = colorStr + str4;
        m_Label5.text = colorStr + str5;
        //m_Label6.text = colorStr + str6;
        m_Guid = oGuid;
        if (m_NormalBk != null )
        {
            m_NormalBk.gameObject.SetActive(true);
        }
         if (m_SelectBk != null )
        {
            m_SelectBk.gameObject.SetActive(false);
        }
    }

    public void Cleanup()
    {
        m_Label1.text = "";
        m_Label2.text = "";
        m_Label3.text = "";
        m_Label4.text = "";
        m_Label5.text = "";
        //m_Label6.text = "";
        Guid = GlobeVar.INVALID_GUID;
         if (m_NormalBk != null )
        {
            m_NormalBk.gameObject.SetActive(true);
        }
         if (m_SelectBk != null )
        {
            m_SelectBk.gameObject.SetActive(false);
        }
    }

    void OnClickItem()
    {
        if (RankWindow.Instance() != null)
        {
            RankWindow.Instance().OnClickItem(this);
        }
    }

    public void OnSelectItem()
    {
        if (m_NormalBk != null )
        {
            m_NormalBk.gameObject.SetActive(false);
        }
        if (m_SelectBk != null )
        {
            m_SelectBk.gameObject.SetActive(true);
        }
       
    }

    public void OnCancelSelectItem()
    {
        if (m_NormalBk != null)
        {
            m_NormalBk.gameObject.SetActive(true);
        }
        if (m_SelectBk != null)
        {
            m_SelectBk.gameObject.SetActive(false);
        }
    }
}
