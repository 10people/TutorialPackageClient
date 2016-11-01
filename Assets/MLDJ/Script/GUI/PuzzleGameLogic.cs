using UnityEngine;
using System.Collections;
using Games.Mission;
using Games.GlobeDefine;

public class PuzzleGameLogic : MonoBehaviour {

    public UILabel m_RemainTimeLabel;
    public PuzzlePieceLogic[] m_PuzzlePiece;
    public GameObject[] m_PieceGoal;
    public TweenAlpha m_CompleteTween;

    private int RemainTime = 60;
    private int CompleteDelay = 1;
    private float CloseDelay = 2;
    private float DestDistance = 0.5f;

    public const int m_MissionID = 37;

    private static PuzzleGameLogic m_Instance = null;
    public static PuzzleGameLogic Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
    }

    void Start()
    {
        for (int i = 0; i < m_PuzzlePiece.Length && i < m_PieceGoal.Length; i++ )
        {
            m_PuzzlePiece[i].Init(i, m_PieceGoal[i].transform.position);
        }
        InvokeRepeating("PuzzleCountDown", 0, 1);
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    public bool PieceValidPos(int index)
    {
        if (index < 0 || index >= m_PuzzlePiece.Length || index >= m_PieceGoal.Length)
        {
            return false;
        }

        for (int i = 0; i < m_PuzzlePiece.Length; i++)
        {
            if (GetDistance(m_PuzzlePiece[index].transform.position, m_PieceGoal[i].transform.position) <= DestDistance)
            {
                return true;
            }
        }

        return false;
    }

    public void PieceComplete(int index)
    {
        if (index < 0 || index >= m_PuzzlePiece.Length || index >= m_PieceGoal.Length)
        {
            return;
        }

        m_PuzzlePiece[index].gameObject.SetActive(false);
        m_PieceGoal[index].SetActive(false);

        for (int i = 0; i < m_PuzzlePiece.Length; i++)
        {
            if (m_PuzzlePiece[i].gameObject.activeSelf)
            {
                break;
            }
            if (i == m_PuzzlePiece.Length - 1)
            {
                GUIData.AddNotifyData("#{10277}");
                m_CompleteTween.Play();
                Invoke("PuzzleComplete", CompleteDelay);
            }
        }
    }

    void PuzzleCountDown()
    {
        string minute = RemainTime / 60 < 10 ? "0" + (RemainTime / 60).ToString() : (RemainTime / 60).ToString();
        string second = RemainTime % 60 < 10 ? "0" + (RemainTime % 60).ToString() : (RemainTime % 60).ToString();
        
        m_RemainTimeLabel.text = minute + ":" + second;

        RemainTime -= 1;
        
        if (RemainTime == -1)
        {
            CancelInvoke("PuzzleCountDown");
            for (int i = 0; i < m_PuzzlePiece.Length && i < m_PieceGoal.Length; i++)
            {
                m_PuzzlePiece[i].gameObject.SetActive(false);
                m_PieceGoal[i].SetActive(false);
            }

            GUIData.AddNotifyData("#{10277}");
            Invoke("PuzzleComplete", CompleteDelay);
        }        
    }

    void PuzzleComplete()
    {
        m_CompleteTween.Play();
        CancelInvoke("PuzzleComplete");

        bool isHaveMission = GameManager.gameManager.MissionManager.IsHaveMission(m_MissionID);
        if (isHaveMission)
        {
            MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(m_MissionID);
            if (MissionState.Mission_Accepted == misState)
            {
                GameManager.gameManager.MissionManager.SetMissionParam(m_MissionID, 0, 1);
                GameManager.gameManager.MissionManager.SetMissionState(m_MissionID, 2);
            }
        }

        Invoke("ClosePuzzle", CloseDelay);
    }

    void ClosePuzzle()
    {
        UIManager.CloseUI(UIInfo.MissionGame);
    }

    public float GetDistance(Vector3 pos1, Vector3 pos2)
    {
        return Mathf.Sqrt(Mathf.Pow(pos1.x - pos2.x, 2) + Mathf.Pow(pos1.y - pos2.y, 2));
    }
}
