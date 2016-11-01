//********************************************************************
// 文件名: CollectItemSliderLogic.cs
// 描述: 采集滚动条
// 作者: HeWenpeng
// 创建时间: 2014-1-13
//
// 修改历史:
//********************************************************************
using UnityEngine;
using System.Collections;

public class CollectItemSliderLogic : MonoBehaviour
{
    public UISlider loadingSlider;

    private static CollectItemSliderLogic m_Instance = null;
    public static CollectItemSliderLogic Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
        loadingSlider.value = 0;
	}
	
	// Update is called once per frame
	void Update () {
        loadingSlider.value += Time.deltaTime;
        if (loadingSlider.value >= 1)
        {
            Singleton<CollectItem>.GetInstance().SafeDeleteItem();
            loadingSlider.value = 0;
            UIManager.CloseUI(UIInfo.CollectItemSlider);
            return;
        }
	}
    
    void OnDestroy()
    {
        m_Instance = null;
    }

    void OnEnable()
    {
        loadingSlider.value = 0;
    }
}
