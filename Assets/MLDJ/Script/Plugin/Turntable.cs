using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.LogicObj;
public class Turntable : MonoBehaviour {

    private static Turntable m_Instance = null;
    public static Turntable Instance()
    {
        return m_Instance;
    }

    public float speed = 1f;
    public float radius = 100.0f;
    public int changeGears = 4;
    public List<GameObject> skillbarlist;

    private int m_TurnDirection = 0;
#if BOBJOYSTICK
    public int GetGears()
    {
        return m_Gears;
    }
#endif
    private int m_Gears = 0;            // 档位 默认0

    private bool m_bTurning = false;
    public bool Turning
    {
        get { return m_bTurning; }
    }

    private float m_TurnEuler = 0;
    private Vector3 m_SkillBarTurnVec = new Vector3(0, 0, 0);

    const int TruntableOpen_SkillNum = 7;   // 玩家学会第6个技能时开启转盘(默认学会普攻和xp 所以第4个技能实际上是第6个技能)

    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
        ResetSkillBarPos();
        UpdateSkillBarShow();
    }
	
	// Update is called once per frame
	void Update () {
        if(m_bTurning)
        {
            TurntableGo();
        }
	}

    void OnDestroy()
    {
        m_Instance = null;
    }

	void ResetSkillBarPos()
    {
        if (null != skillbarlist && skillbarlist.Count >= 8)
        {
//             skillbarlist[0].transform.localPosition = new Vector3(-radius * Mathf.Cos(Mathf.PI / 180 * 22.5f) - 20, -radius * Mathf.Sin(Mathf.PI / 180 * 22.5f), 0);
//             skillbarlist[1].transform.localPosition = new Vector3(-radius * Mathf.Cos(Mathf.PI / 180 * 22.5f) - 20, radius * Mathf.Sin(Mathf.PI / 180 * 27.5f), 0);
//             skillbarlist[2].transform.localPosition = new Vector3(-radius * Mathf.Cos(Mathf.PI / 180 * 62.5f), radius * Mathf.Sin(Mathf.PI / 180 * 87.5f) + 20, 0);
//             skillbarlist[3].transform.localPosition = new Vector3(radius * Mathf.Cos(Mathf.PI / 180 * 67.5f), radius * Mathf.Sin(Mathf.PI / 180 * 87.5f) + 20, 0);
//             skillbarlist[4].transform.localPosition = new Vector3(radius * Mathf.Cos(Mathf.PI / 180 * 22.5f), radius * Mathf.Sin(Mathf.PI / 180 * 22.5f), 0);
//             skillbarlist[5].transform.localPosition = new Vector3(radius * Mathf.Cos(Mathf.PI / 180 * 22.5f), -radius * Mathf.Sin(Mathf.PI / 180 * 22.5f), 0);
//             skillbarlist[6].transform.localPosition = new Vector3(radius * Mathf.Cos(Mathf.PI / 180 * 67.5f),-radius * Mathf.Sin(Mathf.PI / 180 * 67.5f),0);
//             skillbarlist[7].transform.localPosition = new Vector3(-radius * Mathf.Cos(Mathf.PI / 180 * 67.5f), -radius * Mathf.Sin(Mathf.PI / 180 * 67.5f), 0);
        }    
    }

	int GetNewListIndex(int nOldIndex)
    {
        int nNewIndex = nOldIndex - m_Gears + skillbarlist.Count;
        if (nNewIndex >= skillbarlist.Count)
        {
            nNewIndex = nNewIndex - skillbarlist.Count;
        }
        return nNewIndex;
    }

    public void Press(bool pressed)
    {
    }

	public void Drag(Vector2 delta)
    {
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;

          
            int nSkillCount =  _mainPlayer.NeedSkillBarNum();
            if (nSkillCount >= TruntableOpen_SkillNum)
            {
                if (!m_bTurning)
                {
                    if (delta.x > 1 && delta.y > 1)
                    {
                        m_TurnDirection = 1;
                    }
                    else if (delta.x < -1 && delta.y < -1)
                    {
                        m_TurnDirection = -1;
                    }

                    if (m_TurnDirection != 0)
                    {
                        m_Gears += m_TurnDirection * changeGears;
                        if (m_Gears < 0)
                        {
                            m_Gears += skillbarlist.Count;
                        }
                        else if (m_Gears >= skillbarlist.Count)
                        {
                            m_Gears -= skillbarlist.Count;
                        }

                        if (m_Gears == 0)
                        {
                            //if (null != SkillBarLogic.Instance())
                            //    SkillBarLogic.Instance().SwitchXPAndLightButton(true);
                        }
                        else if (m_Gears == changeGears)
                        {
                            //if (null != SkillBarLogic.Instance())
                            //    SkillBarLogic.Instance().SwitchXPAndLightButton(false);
                        }
                        UpdateSkillBarShow_Drag();
                        m_SkillBarTurnVec.z = speed * Time.deltaTime * m_TurnDirection;
                        m_bTurning = true;
                    }
                }
            }
        }
    }

	void TurntableGo()
    {
        transform.localRotation = Quaternion.Euler(0f, 0f, -speed * Time.deltaTime * m_TurnDirection) * transform.localRotation;
        for (int i = 0; i < skillbarlist.Count; i++)
        {
            skillbarlist[i].transform.Rotate(m_SkillBarTurnVec);
        }
        m_TurnEuler += -speed * Time.deltaTime * m_TurnDirection;
        if (Mathf.Abs(m_TurnEuler) >= 45 * changeGears)
        {
            transform.localRotation = Quaternion.Euler(0f, 0f, 360 - m_Gears * 45);
            for (int i = 0; i < skillbarlist.Count; i++)
            {
                skillbarlist[i].transform.localRotation = Quaternion.Euler(0f, 0f, m_Gears * 45);
            }
            m_TurnEuler = 0;
            m_bTurning = false;
            m_TurnDirection = 0;
            UpdateSkillBarShow();
        }
    }

	public void UpdateSkillBarShow()
    {
        for (int i = 0; i < skillbarlist.Count; i++)
        {
            skillbarlist[i].SetActive(SkillBarNeedShow(i));
        }
    }

	public void UpdateSkillBarShow_Drag()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;

        // 拖动转圈时只显示学会的
        for (int i = 0; i < skillbarlist.Count; i++)
        {
            bool isLearned = true;
            if (Singleton<ObjManager>.Instance.MainPlayer != null)
            {
                    if (i >= _mainPlayer.NeedSkillBarNum())
                    {
                        isLearned = false;
                    }
            }
            skillbarlist[i].SetActive(isLearned);
        }
    }

	bool SkillBarNeedShow(int nIndex)
    {
        bool isLearned = true;
        Obj_MainPlayer mp=Singleton<ObjManager>.Instance.MainPlayer;
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            // 跳过普攻和XP技 被动技
            if (nIndex >= Singleton<ObjManager>.Instance.MainPlayer.NeedSkillBarNum())
            {
                isLearned = false;
            }
        }
        
        // 档位和索引相加(视需要-8)之后 0,1,2，3三个位置需要显示 4,5，6,7隐藏
        int nNewIndex = m_Gears + nIndex;        
        if (nNewIndex >= skillbarlist.Count)
        {
            nNewIndex -= skillbarlist.Count;
        }
        if (nNewIndex == 4 && mp != null)
        {
            if (mp.IsChangeMode())
            {
                return true;
            }
            return false;
        }
        else
        {
            // 前四个个格子视是否学会显示 后四个直接隐藏
            if (nNewIndex <= 3)
            {
                return isLearned;
            }
            else
            {
                return false;
            }
        }
       
    }

    public void LearnLightSkill()
    {
        if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.LightSkillLevel <= 0)
            return;

        if (m_Gears == changeGears)
        {
            //if (null != SkillBarLogic.Instance())
            //    SkillBarLogic.Instance().SwitchXPAndLightButton(false);
        }
    }
}