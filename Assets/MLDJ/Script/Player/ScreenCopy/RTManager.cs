using UnityEngine;
using System.Collections;



namespace ScreenCopySDK
{
    public class RTManager
    {
        public static RTManager s_Instance;
        public static RTManager Instance
        {
            get
            {
                return s_Instance ?? (s_Instance = new RTManager());
            }
        }

        private int m_Width;
        private int m_Hegiht;
        private bool m_isChange;
        private RenderTexture m_CopyRT;
        private RenderTexture m_SceneRT;

        private RTManager()
        {
            m_isChange = false;
            m_Width = 0;
            m_Hegiht = 0;
            m_CopyRT = null;
            m_SceneRT = null;
        }
        public void Update()
        {
            m_isChange = false;
            if (m_Width != Screen.width
                || m_Hegiht != Screen.height)
            {
                if (null != m_CopyRT)
                {
                    m_CopyRT.Release();
                }
                if (null != m_SceneRT)
                {
                    m_SceneRT.Release();
                }
                m_Width = Screen.width;
                m_Hegiht = Screen.height;
                m_CopyRT = new RenderTexture(m_Width, m_Hegiht, 0);
                m_CopyRT.name = "copy";
                m_SceneRT = new RenderTexture(m_Width, m_Hegiht, 24);
                m_SceneRT.name = "scene";
                m_isChange = true;
                Shader.SetGlobalTexture(Configure.TargetName, m_CopyRT);
            }
            else
            {
                Discard();
            }
        }
        public bool isScreenSizeChange()
        {
            return m_isChange;
        }
        public RenderTexture GetCopy()
        {
            return m_CopyRT;
        }
        public RenderTexture GetScene()
        {
            return m_SceneRT;
        }
        public void Discard()
        {
            if (null != m_CopyRT)
            {
                m_CopyRT.DiscardContents();
            }
            if (null != m_SceneRT)
            {
                m_SceneRT.DiscardContents();
            }
        }
    }
}