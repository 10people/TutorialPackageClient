using UnityEngine;
using System.Collections;
using Module;
using Module.Log;
public class RestaurantFoodFilterWindow :MonoBehaviour
{

    public RestaurantFoodWindow m_FoodWindow;

    public GameObject[] m_levelSelect;
    public GameObject m_ExpSelect;
    public GameObject m_YuanBaoSelect;
    public GameObject m_MetarialSelect;
    public GameObject m_AllLevelSelect;


    void OnEnable()
    {
        if (null == m_FoodWindow)
        {
            LogModule.ErrorLog("m_FoodWindow is null");
            return;
        }
        if (null == m_ExpSelect)
        {
            LogModule.ErrorLog("m_ExpSelect is null");
            return;
        }
        if (null == m_YuanBaoSelect)
        {
            LogModule.ErrorLog("m_YuanBaoSelect is null");
            return;
        }
        if (null == m_MetarialSelect)
        {
            LogModule.ErrorLog("m_MetarialSelect is null");
            return;
        }
        if (m_FoodWindow != null)
        {
            m_AllLevelSelect.SetActive(false);
            m_MetarialSelect.SetActive(true);
            m_YuanBaoSelect.SetActive(false);
            for (int i = 0; i < 5; i++)
            {
                m_levelSelect[i].SetActive(false);
            }

            switch (m_FoodWindow.curFilterMethod)
            {
                case RestaurantFoodWindow.FILTERMETHOD.ALL:
                    m_AllLevelSelect.SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.LEVEL1:
                    m_levelSelect[0].SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.LEVEL2:
                    m_levelSelect[1].SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.LEVEL3:
                    m_levelSelect[2].SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.LEVEL4:
                    m_levelSelect[3].SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.LEVEL5:
                    m_levelSelect[4].SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.EXP:
                    m_ExpSelect.SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.COIN:
                    m_YuanBaoSelect.SetActive(true);
                    break;
                case RestaurantFoodWindow.FILTERMETHOD.MATERIAL:
                    m_MetarialSelect.SetActive(true);
                    break;
            }

        }
        
//         for (int i = 0; i < m_levelSelect.Length; i++)
//         {
//             if (m_FoodWindow.IsLevelFilter(i+1))
//             {
//                 m_levelSelect[i].SetActive(true);
//             }
//             else
//             {
//                 m_levelSelect[i].SetActive(false);
//             }
//         }
//         if (m_FoodWindow.IsRewardTypeFilter(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_EXP))
        {
//             m_ExpSelect.SetActive(true);
        }
//         else
//         {
//             m_ExpSelect.SetActive(false);
//         }
//         if (m_FoodWindow.IsRewardTypeFilter(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_COIN))
//         {
//             m_YuanBaoSelect.SetActive(true);
//         }
//         else
//         {
//             m_YuanBaoSelect.SetActive(false);
//         }
//         if (m_FoodWindow.IsRewardTypeFilter(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_MATERIAL))
//         {
//             m_MetarialSelect.SetActive(true);
//         }
//         else
//         {
//             m_MetarialSelect.SetActive(false);
//         }        
    }
    
    void OnClickBack()
    {
        if ( null == m_FoodWindow )
        {
            LogModule.ErrorLog("m_FoodWindow == null");
            return;
        }
        m_FoodWindow.OnCloseFliterWindow();
    }

    void OnClickFilterLevel1()
    {
        if (null != m_FoodWindow)
        {
            if ( m_FoodWindow.IsLastLevelFilter(1) )
            {
                return;
            }
            m_FoodWindow.SetFilterLevel(1);
            if (m_levelSelect.Length >= 1 )
            {
                m_levelSelect[0].SetActive(!m_levelSelect[0].activeSelf);
            }
        }
    }
    void OnClickFilterLevel2()
    {
        if (null != m_FoodWindow)
        {
            if (m_FoodWindow.IsLastLevelFilter(2))
            {
                return;
            }
            m_FoodWindow.SetFilterLevel(2);
            if (m_levelSelect.Length >= 2)
            {
                m_levelSelect[1].SetActive(!m_levelSelect[1].activeSelf);
            }
        }
    }
    void OnClickFilterLevel3()
    {
        if (null != m_FoodWindow)
        {
            if (m_FoodWindow.IsLastLevelFilter(3))
            {
                return;
            }
            m_FoodWindow.SetFilterLevel(3);
            if (m_levelSelect.Length >= 3)
            {
                m_levelSelect[2].SetActive(!m_levelSelect[2].activeSelf);
            }
        }
    }
    void OnClickFilterLevel4()
    {
        if (null != m_FoodWindow)
        {
            if (m_FoodWindow.IsLastLevelFilter(4))
            {
                return;
            }
            m_FoodWindow.SetFilterLevel(4);
            if (m_levelSelect.Length >= 4)
            {
                m_levelSelect[3].SetActive(!m_levelSelect[3].activeSelf);
            }
        }
    }
    void OnClickFilterLevel5()
    {
        if (null != m_FoodWindow)
        {
            if (m_FoodWindow.IsLastLevelFilter(5))
            {
                return;
            }
            m_FoodWindow.SetFilterLevel(5);
            if (m_levelSelect.Length >= 5)
            {
                m_levelSelect[4].SetActive(!m_levelSelect[4].activeSelf);
            }
        }
    }

    void OnFilterExp()
    {
        if (null != m_FoodWindow)
        {
            if (m_FoodWindow.IsLastRewardTypeFilter(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_EXP))
            {
                return;
            }
            m_FoodWindow.SetFilterRewardType(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_EXP);
            if (m_ExpSelect != null)
            {
                m_ExpSelect.SetActive(!m_ExpSelect.activeSelf);
            }
        }
    }
    void OnFilterYuanBao()
    {
        if (null != m_FoodWindow)
        {
            if (m_FoodWindow.IsLastRewardTypeFilter(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_COIN))
            {
                return;
            }
            m_FoodWindow.SetFilterRewardType(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_COIN);
            if (m_YuanBaoSelect != null)
            {
                m_YuanBaoSelect.SetActive(!m_YuanBaoSelect.activeSelf);
            }
        }
    }
    void OnFilterMaterial()
    {
        if (null != m_FoodWindow)
        {
            if (m_FoodWindow.IsLastRewardTypeFilter(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_MATERIAL))
            {
                return;
            }
            m_FoodWindow.SetFilterRewardType(RestaurantFoodWindow.FOOD_REWARD_TYPE.REWARD_TYPE_MATERIAL);
            if (m_ExpSelect != null)
            {
                m_MetarialSelect.SetActive(!m_MetarialSelect.activeSelf);
            }
        }
    }


    void OnClickFilterAllNew()
    {
        if (m_FoodWindow != null)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.ALL;
        }
        m_AllLevelSelect.SetActive(true);
        OnClickBack();
    }

    void OnClickFilterLevel1New()
    {
        if (m_FoodWindow != null)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.LEVEL1;
        }
        m_levelSelect[0].SetActive(true);
        OnClickBack();
    }

    void OnClickFilterLevel2New()
    {
        if (m_FoodWindow != null)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.LEVEL2;
        }
        m_levelSelect[1].SetActive(true);
        OnClickBack();
    }

    void OnClickFilterLevel3New()
    {
        if (m_FoodWindow != null)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.LEVEL3;
        }
        m_levelSelect[2].SetActive(true);
        OnClickBack();
    }

    void OnClickFilterLevel4New()
    {
        if (m_FoodWindow != null)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.LEVEL4;
        }
        m_levelSelect[3].SetActive(true);
        OnClickBack();
    }

    void OnClickFilterLevel5New()
    {
        if (m_FoodWindow != null)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.LEVEL5;
        }
        m_levelSelect[4].SetActive(true);
        OnClickBack();
    }

    void OnFilterExpNew()
    {
        if (null != m_FoodWindow)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.EXP;
        }
        m_ExpSelect.SetActive(true);
        OnClickBack();
    }
    void OnFilterYuanBaoNew()
    {
        if (null != m_FoodWindow)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.COIN;
        }
        m_YuanBaoSelect.SetActive(true);
        OnClickBack();
    }
    void OnFilterMaterialNew()
    {
        if (null != m_FoodWindow)
        {
            m_FoodWindow.curFilterMethod = RestaurantFoodWindow.FILTERMETHOD.MATERIAL;
        }
        m_MetarialSelect.SetActive(true);
        OnClickBack();
    }

    
}