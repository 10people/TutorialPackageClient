using UnityEngine;
using System.Collections;

public class MonthActivityWeekdayLogic : MonoBehaviour {

    public UILabel m_Content;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void AddActivity(string text)
    {
        if (m_Content.text != "")
        {
            m_Content.text += ",";
        }
        m_Content.text += text;
    }

    public bool IsNoneActivity()
    {
        return m_Content.text == "";
    }

    public void ClearUp()
    {
        m_Content.text = "";
    }
}
