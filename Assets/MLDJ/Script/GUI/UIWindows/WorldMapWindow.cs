using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Module.Log;
using Games.GlobeDefine;
using GCGame.Table;
using Games.LogicObj;

public class WorldMapWindow : MonoBehaviour {

    public GameObject[] m_MapTexs;
    public int[] m_MapIDs;
    public GameObject[] m_MapLightTexs;
    public Vector3[] m_RolePos;
    public GameObject m_SprRole;
    public GameObject m_SprWorldBoss;
    public static int WorldBossOpen { set; get; }

    private List<GameObject> m_objTeamSprite = new List<GameObject>();

    private static WorldMapWindow m_Instance = null;
    public static WorldMapWindow Instance()
    {
        return m_Instance;
    }

    public static void OnDisConnect()
    {
        WorldBossOpen = 0;
    }

    void Awake()
    {
        m_Instance = this;
    
    }
	// Use this for initialization
	void OnEnable () {

        for (int i = 0; i < m_objTeamSprite.Count; i++)
        {
            GameObject.Destroy(m_objTeamSprite[i]);
        }
        m_objTeamSprite.Clear();
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == mainPlayer)
        {
            return;
        }

        TeamMember[] curTeamMember = GameManager.gameManager.PlayerDataPool.TeamInfo.teamMember;
        bool isTeamMode = false;
        for (int i = 0; i < curTeamMember.Length; i++)
        {
            if (curTeamMember[i].IsValid())
            {
                isTeamMode = true;
                break;
            }
        }
        m_SprRole.SetActive(false);
        for (int i = 0; i < m_MapIDs.Length; i++)
        {
            m_MapTexs[i].SetActive(SceneData.ReachedScenes.Contains(m_MapIDs[i]));

            if (!isTeamMode)
            {
                if (m_MapIDs[i] == GameManager.gameManager.RunningScene)
                {
                    m_SprRole.transform.localPosition = m_RolePos[i];
                    m_SprRole.SetActive(true);
                }
            }
            else
            {
                int curMapMemberCount = 0;
                for (int curTeamMemberIndex = 0; curTeamMemberIndex < curTeamMember.Length; curTeamMemberIndex++)
                {
                    int curSceneClassID = curTeamMember[curTeamMemberIndex].SceneClassID;
                    if (curSceneClassID != m_MapIDs[i])
                    {
                        continue;
                    }

                    GameObject newRoleObj = GameObject.Instantiate(m_SprRole) as GameObject;
                    if (newRoleObj != null)
                    {
                        newRoleObj.transform.parent = m_SprRole.transform.parent;
                        newRoleObj.transform.localScale = Vector3.one;
                        Vector3 curMapPos = m_RolePos[i];
                        curMapPos.x += curMapMemberCount * 16;
                        newRoleObj.transform.localPosition = curMapPos;
                        newRoleObj.SetActive(true);
                        if (curTeamMember[curTeamMemberIndex].TeamJob == 0)
                        {
                            newRoleObj.GetComponent<UITexture>().color = Color.red;
                        }

                        m_objTeamSprite.Add(newRoleObj);
                        curMapMemberCount++;
                    }
                    
                }
            }
            
        }
	}
    
    private int m_curShowSceneID = -1;
    void OnMapItemClick(GameObject button)
    {
        m_curShowSceneID = -1;
   
        for (int index = 0; index < m_MapTexs.Length; index++)
        {
            if (m_MapTexs[index].name == button.name)
            {
                m_curShowSceneID = m_MapIDs[index];
                //m_MapTexs[index].SetActive(false);
                break;
            }
        }
        if (m_curShowSceneID >= 0 && Singleton<ObjManager>.GetInstance().MainPlayer != null && m_curShowSceneID != GameManager.gameManager.RunningScene)
        {
            if (TeleportPoint.IsCanPK(m_curShowSceneID) && !TeleportPoint.IsIncPKValue(m_curShowSceneID))
            {
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2672}"), "", EnterNonePKValueSceneOK);
            }
            else
            {
                EnterNonePKValueSceneOK();
            }
            
        }
        else
        {
            //MessageBoxLogic.OpenOKBox(2214, 1000);
        }
    }

    void EnterNonePKValueSceneOK()
    {
        Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(m_curShowSceneID, 0);
        if (null == tabSceneClass)
        {
            return;
        }

        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1644}", tabSceneClass.Name), "", DoTeleport);
    }

    void DoTeleport()
    {
        Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(m_curShowSceneID, 0);
        if (null == tabSceneClass)
        {
            return;
        }
		SceneData.RequestChangeScene((int)CG_REQ_CHANGE_SCENE.CHANGETYPE.WORLDMAP, 0, m_curShowSceneID, 0);
        UIManager.CloseUI(UIInfo.WorldMapWindow);
        for (int index = 0; index < m_MapTexs.Length; index++)
        {
            if (m_MapIDs[index] == m_curShowSceneID)
            {
                //m_MapTexs[index].SetActive(true);
                m_MapLightTexs[index].SetActive(false);
                break;
            }
        }
    }

    void OnMapItemPress(GameObject button)
    {
        for (int index = 0; index < m_MapTexs.Length; index++)
        {
            if (m_MapTexs[index].name == button.name)
            {
                //m_MapTexs[index].SetActive(true);
                m_MapLightTexs[index].SetActive(true);
                break;
            }
        }
    }

    void OnMapItemRelease(GameObject button)
    {
        for (int index = 0; index < m_MapTexs.Length; index++)
        {
            if (m_MapTexs[index].name == button.name)
            {
                //m_MapTexs[index].SetActive(true);
                m_MapLightTexs[index].SetActive(false);
                break;
            }
        }
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.WorldMapWindow);
        UIManager.ShowUI(UIInfo.SceneMapRoot);
    }

    void FixedUpdate()
    {
        bool showWorldBoss = WorldMapWindow.WorldBossOpen == 1 ? true : false;
        m_SprWorldBoss.SetActive(showWorldBoss);
    }

}
