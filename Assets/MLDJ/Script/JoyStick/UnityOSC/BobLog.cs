using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Diagnostics;

namespace Engine.Utils
{
#if BOBJOYSTICK
    public class BobLog : MonoBehaviour
    {
	    private List<string> m_logs = new List<string>();
	    public int maxlogs = 1000;
        public Stopwatch stopwatch;
		// Use this for initialization
	    #region Singleton Constructors
	    private static BobLog _instance = null;
	
	    void Awake()
	    {
	        _instance = this;
            stopwatch = Stopwatch.StartNew();
	    }
	    public static BobLog Instance
	    {
	        get
	        {
	            if (ReferenceEquals(_instance, null))
	            {
	                _instance = new GameObject("BobLog").AddComponent<BobLog>();
	            }
	
	            return _instance;
	        }
	    }
	    #endregion
	    public void Log(string msg)
	    {
	        while (m_logs.Count >= 1000)
	        {
	            m_logs.RemoveAt(0);
	        }
	        m_logs.Add(msg + stopwatch.Elapsed);
	    }
        Vector2 m_scrollpos = Vector2.zero;
	    public void rePaint()
	    {
	        
	        StringBuilder sb = new StringBuilder();
	        for (int i = m_logs.Count-1; i >=0 ; i--)
	        {
	            sb.AppendLine(m_logs[i]);
	        }
            m_scrollpos = GUILayout.BeginScrollView(m_scrollpos);
	        GUILayout.Label(sb.ToString());
            GUILayout.EndScrollView();
	    }
	}
#endif
}
