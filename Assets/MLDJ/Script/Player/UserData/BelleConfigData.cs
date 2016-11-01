using UnityEngine;
using System.Collections;
using GCGame.Table;
public class BelleConfigData
{
    private int m_activeCount;
    public int ActiveCount
    {
        set { m_activeCount = value; }
        get { return m_activeCount; }
    }

    private string m_belleGetBits;
    public string BelleGetBits
    {
        set { m_belleGetBits = value; }
        get 
        {
            return m_belleGetBits; 
        }
    }

    private string m_belleCanEvoBits;
    public string BelleCanEvoBeits
    {
        set { m_belleCanEvoBits = value; }
        get { return m_belleCanEvoBits; }
    }

    private string m_belleItemBits;
    public string BelleItemBits
    {
        set { m_belleItemBits = value; }
        get 
        {
            return m_belleItemBits; 
        }
    }

    private string m_matrixUnlockBits;
    public string MatrixUnlockBits
    {
        set { m_matrixUnlockBits = value; }
        get { return m_matrixUnlockBits; }
    }


    public BelleConfigData(int activeCount = 0, string belleGetBits = "", string belleCanEvoBits = "", string belleItemBits = "", string matrixUnlockBits = "")
    {
        m_activeCount = activeCount;
        m_belleGetBits = belleGetBits;
        m_belleCanEvoBits = belleCanEvoBits;
        m_belleItemBits = belleItemBits;
        m_matrixUnlockBits = matrixUnlockBits;
    }

    public void CleanUp()
    {
        m_activeCount = 0;
        m_belleGetBits = BelleConfig.GetBelleStringBitByBelleTable();
        m_belleCanEvoBits = BelleConfig.GetBelleStringBitByBelleTable();
        m_belleItemBits = BelleConfig.GetBelleStringBitByBelleTable();
        m_matrixUnlockBits = BelleConfig.GetBelleStringBitByBelleMatrix();
    }
}
