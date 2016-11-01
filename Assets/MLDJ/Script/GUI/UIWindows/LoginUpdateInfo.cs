using System.Collections.Generic;
using Module.Log;
using UnityEngine;
using System.Collections;

public class LoginUpdateInfo : MonoBehaviour
{
    private static bool m_IsChangeType = false;
    public static bool m_bReceiveData = false; //是否已经是最新内容
    public static string m_UpdateInofText;
    /// <summary>
    /// 是否正在请求中
    /// </summary>
    public static bool m_bRequesting = false;
    /// <summary>
    /// 是否显示更新公告
    /// </summary>
    public static bool m_IsShow = false;
    /// <summary>
    /// 是否显示开关
    /// </summary>
    public static string m_OnOffString = "[#$-1$#]";

    public UILabel m_UpdateInfo;
    private BoxCollider m_BoxCollider = null;
    private bool m_IsShowed = true; //是否显示完成
    private float m_UpdateTime = 0;

    /// <summary>
    /// 用于接收从Lua发来的数据
    /// </summary>
    public static List<string> newsList;

    private void OnEnable()
    {
        ShowUpdateInfo();
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.NOTICE_UI);
#endif
    }

    public static void ClearNotice()
    {
        if (newsList != null)
        {
            newsList.Clear();
        }
    }

    public static void addNotice(string news, string data)
    {
        if (string.IsNullOrEmpty(news)) return;
        if (newsList == null)
        {
            newsList = new List<string>();
        }
        newsList.Add(news);

        if (newsList.Count <= 0) return;

        //Lua内容重写CDN内容
        if (newsList[0].IndexOf(LoginUpdateInfo.m_OnOffString) > -1)
        {
            LoginUpdateInfo.m_UpdateInofText = newsList[0].Replace(LoginUpdateInfo.m_OnOffString, "");
        }
        else
        {
            LoginUpdateInfo.m_UpdateInofText = newsList[0];
        }

        m_bReceiveData = true;
    }

    /// <summary>
    /// 显示更新公告信息
    /// </summary>
    public void ShowUpdateInfo()
    {
        if (m_bReceiveData)
        {
            ShowInfo();
        }
        else
        {
            if (!m_bRequesting)
            {
                m_bRequesting = true;
                StartCoroutine(RequestNotice());
            }
            else
            {
                //如果正在加载中。。。。需要做个特殊处理，防止加载完成后，内容没有刷新
                m_IsShowed = false;
                m_UpdateTime = Time.time;
            }
        }
    }

    private void Update()
    {
        if (m_IsShowed) return;

        ///此处主要是为了处理 在显示时，资源正在加载中(一般发生在网速特别特别慢的情况下)，LoginUILogic中的加载补偿
        if (Time.time - m_UpdateTime > 2)
        {
            m_UpdateTime = Time.time;
            if (m_bReceiveData)
            {
                ShowInfo();
            }
        }
    }

    private void ShowInfo()
    {
        m_IsShowed = true;

        if (string.IsNullOrEmpty(m_UpdateInofText))
        {
            OnCloseUpdateInfo();
            return;
        }

        m_UpdateInfo.text = m_UpdateInofText.Replace("\\n", "\n");
        
        if (m_BoxCollider == null)
        {
            m_BoxCollider = m_UpdateInfo.gameObject.GetComponent<BoxCollider>();

            if (m_BoxCollider == null)
            {
                m_BoxCollider = m_UpdateInfo.gameObject.AddComponent<BoxCollider>();
            }
        }

        if (m_BoxCollider != null)
        {
            Vector2 _size = m_BoxCollider.size;
            _size.y = m_UpdateInfo.printedSize.y;
            m_BoxCollider.size = _size;

            _size = m_BoxCollider.center;
            _size.y = (0 - m_UpdateInfo.printedSize.y) / 2;
            m_BoxCollider.center = _size;

            m_BoxCollider = null;
        }
    }

    /// <summary>
    /// 请求加载最新公告 -- 已经在其他地方做了处理，这个是为了补偿如果当时加载出错时的处理
    /// </summary>
    /// <returns></returns>
    private IEnumerator RequestNotice()
    {
        WWW wwwNotice = null;
        yield return StartCoroutine(DownloadHelper.GetCDNWWW(PlatformHelper.GetGengxinInfoURL(), value => wwwNotice = value));

        if (!string.IsNullOrEmpty(wwwNotice.error))
        {
            wwwNotice = null;
            LoginUpdateInfo.m_bRequesting = false;

            //整体获取失败后，读取公用的
            StartCoroutine(RequestCommonGengxinInfo());
        }
        else
        {
            if (string.IsNullOrEmpty(wwwNotice.text))
            {
                //整体获取失败后，读取公用的
                LoginUpdateInfo.m_bRequesting = false;
                StartCoroutine(RequestCommonGengxinInfo());
            }
            else
            {
                if (wwwNotice.text.IndexOf(LoginUpdateInfo.m_OnOffString) > -1)
                {
                    //关闭更新公告提示
                    LoginUpdateInfo.m_IsShow = false;

                    LoginUpdateInfo.m_UpdateInofText = wwwNotice.text.Replace(LoginUpdateInfo.m_OnOffString, "");
                    LoginUpdateInfo.m_bRequesting = false;
                    LoginUpdateInfo.m_bReceiveData = true;

                    OnCloseUpdateInfo();
                }
                else
                {
                    LoginUpdateInfo.m_UpdateInofText = wwwNotice.text;
                    LoginUpdateInfo.m_bRequesting = false;
                    LoginUpdateInfo.m_bReceiveData = true;

                    ShowInfo();
                }
            }
        }
    }

    /// <summary>
    /// 
    /// </summary>
    /// <returns></returns>
    private IEnumerator RequestCommonGengxinInfo()
    {
        WWW wwwNotice = null;
        yield return StartCoroutine(DownloadHelper.GetCDNWWW(PlatformHelper.GetCommonGengxinInfoURL(), value => wwwNotice = value));

        if (!string.IsNullOrEmpty(wwwNotice.error))
        {
            wwwNotice = null;
            LoginUpdateInfo.m_bRequesting = false;
            LoginUpdateInfo.m_UpdateInofText = null;

            OnCloseUpdateInfo();
        }
        else
        {
            if (wwwNotice.text.IndexOf(LoginUpdateInfo.m_OnOffString) > -1)
            {
                //关闭更新公告提示
                LoginUpdateInfo.m_IsShow = false;

                LoginUpdateInfo.m_UpdateInofText = wwwNotice.text.Replace(LoginUpdateInfo.m_OnOffString, "");
                LoginUpdateInfo.m_bRequesting = false;
                LoginUpdateInfo.m_bReceiveData = true;

                OnCloseUpdateInfo();
            }
            else
            {
                LoginUpdateInfo.m_UpdateInofText = wwwNotice.text;
                LoginUpdateInfo.m_bRequesting = false;
                LoginUpdateInfo.m_bReceiveData = true;

                ShowInfo();
            }
        }
    }

    public static void OpenUI(bool isType = false)
    {
        LoginUpdateInfo.m_IsShow = false;
        m_IsChangeType = isType;

        if (m_IsChangeType)
        {
            UIInfo.Notice.uiType = UIPathData.UIType.TYPE_TIP;
        }

        UIManager.ShowUI(UIInfo.Notice);
    }

    public void OnCloseUpdateInfo()
    {
        m_IsShowed = true;
        UIManager.CloseUI(UIInfo.Notice);

        if (m_IsChangeType)
        {
            UIInfo.Notice.uiType = UIPathData.UIType.TYPE_MENUPOP;
            m_IsChangeType = false;
        }
    }
}
