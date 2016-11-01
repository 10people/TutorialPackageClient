using UnityEngine;
using System.Collections;
using Module.Log;

public class LoginNotice : MonoBehaviour {

    public UILabel labelText;
    public GameObject objChild;

    private static bool m_bReceiveData = false;

    private static string m_text;
    private bool m_bRequesting = false;
	public void ShowNotice()
    {
        if(m_bReceiveData)
        {
            DoShowNotice();
        }
        else
        {
            if (!m_bRequesting)
            {
                m_bRequesting = true;
                StartCoroutine(RequestNotice());
            }
            
        }
    }

    private void DoShowNotice()
    {
        labelText.text = m_text;
        Vector2 _size = labelText.gameObject.GetComponent<BoxCollider>().size;
        _size.y = labelText.printedSize.y;
        labelText.gameObject.GetComponent<BoxCollider>().size = _size;

        _size = labelText.gameObject.GetComponent<BoxCollider>().center;
        _size.y = (0 - labelText.printedSize.y) / 2;
        labelText.gameObject.GetComponent<BoxCollider>().center = _size;
        objChild.SetActive(true);
    }

    private IEnumerator RequestNotice()
    {
        WWW wwwNotice = new WWW("http://ydcabal.changyou.com/cabal3D/conf/notice/login/Notice_AppStore.txt");
        yield return wwwNotice;
        if (!string.IsNullOrEmpty(wwwNotice.error))
        {
            LogModule.ErrorLog("request login notice error" + wwwNotice.error);
        }
        else
        {
            LogModule.DebugLog(wwwNotice.text);
            m_text = wwwNotice.text;
            BoxCollider curCollider = labelText.gameObject.GetComponent<BoxCollider>();
            if (null == curCollider)
            {
                LogModule.ErrorLog("label not contain collider");
                yield break;
            }

            

            m_bReceiveData = true;
            m_bRequesting = false;
            DoShowNotice();
        }
    }

    void OnHideNoticeClick()
    {
        objChild.SetActive(false);
    }
}
