using UnityEngine;
using System.Collections;
using Games.GlobeDefine;

public class PuzzlePieceLogic : MonoBehaviour {

    public TweenPosition m_BackTween;

    private int m_PieceIndex = GlobeVar.INVALID_ID;
    private Vector3 m_DestPos = Vector3.zero;

    private float DestDistance = 0.1f;

    public void Init(int index, Vector3 destPos)
    {
        m_PieceIndex = index;
        m_DestPos = destPos;
    }

    void OnPress(bool press)
    {
        if (PuzzleGameLogic.Instance() == null)
        {
            return;
        }

        if (!press)
        {
            if (PuzzleGameLogic.Instance().GetDistance(transform.position, m_DestPos) <= DestDistance)
            {
                PuzzleGameLogic.Instance().PieceComplete(m_PieceIndex);              
            }
            else
            {
                if (false == PuzzleGameLogic.Instance().PieceValidPos(m_PieceIndex))
                {
                    m_BackTween.from = transform.localPosition;
                    m_BackTween.Reset();
                    m_BackTween.Play();
                }
            }            
        }
    }
}
