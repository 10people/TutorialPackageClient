//********************************************************************
// 文件名: NoticeLogic.cs
// 描述: 公告里的公告UI控件
// 作者: YangXin
// 创建时间: 2012-11-11
//********************************************************************
using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Collections.Generic;
using Module.Log;
using GCGame;
public class NoticeWindow : MonoBehaviour
{

    public GameObject ItemParent;
    public UILabel m_TitleLabel;
    public UILabel m_NewsLabel;
    public GameObject NoticeItemObject;
    // Use this for initialization
    public static List<string> dataList;
    public static List<string> newsList;

    private static NoticeWindow m_Instance = null;
    public static NoticeWindow Instance()
    {
        return m_Instance;
    }
    void Awake()
    {
        m_Instance = this;
    }
    void OnDestroy()
    {
        m_Instance = null;
    }
    void Start()
    {
        //InitNoticeInfo();
    }

    // Update is called once per frame
    public static void addNotice(string news, string data)
    {
        //if (dataList == null)
        //{
        //    dataList = new List<string>();
        //}
        //dataList.Add(data);
        //if (newsList == null)
        //{
        //    newsList = new List<string>();
        //}
        //newsList.Add(news);
    }
    public static void ClearNotice()
    {
        if (dataList != null)
        {
            dataList.Clear();
        }
        if (newsList != null)
        {
            newsList.Clear();
        }
    }
    bool isNotice()
    {
        if (dataList == null || newsList == null)
        {
            return false;
        }
        if (dataList.Count != newsList.Count)
        {
            return false;
        }
        return true;
    }

    void InitNoticeInfo()
    {
        if (isNotice() == false)
        {
            return;
        }

        if (dataList.Count >= 1)
        {
            m_TitleLabel.text = dataList[0];
        }
        if (newsList.Count >=1 )
        {
            newsList[0] = newsList[0].Replace("\\n", "\n");
            m_NewsLabel.text = newsList[0];
        }
        Vector2 _size = NoticeItemObject.GetComponent<BoxCollider>().size;
        _size.y = m_NewsLabel.printedSize.y;
        NoticeItemObject.GetComponent<BoxCollider>().size = _size;

        _size = NoticeItemObject.GetComponent<BoxCollider>().center;
        _size.y = (0 - m_NewsLabel.printedSize.y) / 2;
        NoticeItemObject.GetComponent<BoxCollider>().center = _size;
    }
    void InitSignInList()
    {
        
    }
}
