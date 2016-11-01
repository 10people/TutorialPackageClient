using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using System.Collections.Generic;
using Module.Log;
using System;
using GCGame;

public class VillainData {

    public static int m_MaxSceneClass = 3;
    public static int m_nLevelLimit = 42;

    public static int NormalNpcGroupID = 1;
    public static int SuperNpcGroupID = 2;

	public static int NianShouGroupID = 3;

    private int m_nRound = -1;
    public int Round
    {
        set { m_nRound = value;  }
        get { return m_nRound; }
    }
    private int m_nNormalVillainCount = 0;

    public int NormalVillainCount
    {
        set { m_nNormalVillainCount = value; }
        get { return m_nNormalVillainCount; }
    }
    private int m_nSuperVillainCount = 0;

    public int SuperVillainCount
    {
        set { m_nSuperVillainCount = value; }
        get { return m_nSuperVillainCount; }
    }

    public List<int> m_NormalSceneClassList = new List<int>();
    public List<int> m_SuperSceneClassList = new List<int>();

    public delegate void UpdateVillainDelegate();
    public static UpdateVillainDelegate delUpdateVillain = null;

    public static VillainData m_VillainInfo = new VillainData();

}



