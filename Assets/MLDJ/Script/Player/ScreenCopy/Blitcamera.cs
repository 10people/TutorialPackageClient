using UnityEngine;


namespace ScreenCopySDK
{
    public class Blitcamera : MonoBehaviour
    {
        private Camera m_UICamera;
        public float threshhold = 0.25f;
        public float intensity = 0.75f;
        public float blurSize = 1.0f;
        public int blurIterations = 1;
        public FastBloom.Resolution resolution = FastBloom.Resolution.Low;
        public FastBloom.BlurType blurType = FastBloom.BlurType.Standard;

        private bool m_isBloomActived = false;

        private Shader fastBloomShader;
        private Material fastBloomMaterial = null;
        private Shader blitShader;        
        private Material blitMaterial = null;

        void Start()
        {
            GetComponent<Camera>().cullingMask = 0;

            fastBloomShader = Shader.Find(Configure.BloomName);
            fastBloomMaterial = new Material(fastBloomShader);

            blitShader = Shader.Find(Configure.BlitName);
            blitMaterial = new Material(blitShader);


            GameObject uigo = GameObject.Find(Configure.UIRootName);
            m_UICamera = uigo.GetComponentInChildren<Camera>();
            m_UICamera.targetTexture = RTManager.Instance.GetScene();
            m_UICamera.depth = GetComponent<Camera>().depth + 1;
        }

        public void SetBloomActive(bool tof)
        {
            m_isBloomActived = tof;
        }
        void Update()
        {
            if (RTManager.Instance.isScreenSizeChange())
            {
                RenderTexture rt = RTManager.Instance.GetScene();
                m_UICamera.targetTexture = rt;
            }
        }
        void OnPostRender()
        {
            if (!m_isBloomActived)
            {
                if (blitMaterial!=null)
                Graphics.Blit(RTManager.Instance.GetScene(), (RenderTexture)null, blitMaterial);
            }
            else
            {
                RenderTexture source = RTManager.Instance.GetScene();
                int divider = resolution == FastBloom.Resolution.Low ? 4 : 2;
                float widthMod = resolution == FastBloom.Resolution.Low ? 0.5f : 1.0f;

                fastBloomMaterial.SetVector("_Parameter", new Vector4(blurSize * widthMod, 0.0f, threshhold, intensity));
                source.filterMode = FilterMode.Bilinear;

                int rtW = source.width / divider;
                int rtH = source.height / divider;

                // downsample
                RenderTexture rt = RenderTexture.GetTemporary(rtW, rtH, 0, source.format);
                rt.filterMode = FilterMode.Bilinear;
                Graphics.Blit(source, rt, fastBloomMaterial, 1);

                int passOffs = blurType == FastBloom.BlurType.Standard ? 0 : 2;

                for (int i = 0; i < blurIterations; i++)
                {
                    fastBloomMaterial.SetVector("_Parameter", new Vector4(blurSize * widthMod + (i * 1.0f), 0.0f, threshhold, intensity));

                    // vertical blur
                    RenderTexture rt2 = RenderTexture.GetTemporary(rtW, rtH, 0, source.format);
                    rt2.filterMode = FilterMode.Bilinear;
                    Graphics.Blit(rt, rt2, fastBloomMaterial, 2 + passOffs);
                    RenderTexture.ReleaseTemporary(rt);
                    rt = rt2;

                    // horizontal blur
                    rt2 = RenderTexture.GetTemporary(rtW, rtH, 0, source.format);
                    rt2.filterMode = FilterMode.Bilinear;
                    Graphics.Blit(rt, rt2, fastBloomMaterial, 3 + passOffs);
                    RenderTexture.ReleaseTemporary(rt);
                    rt = rt2;
                }

                fastBloomMaterial.SetTexture("_Bloom", rt);

                Graphics.Blit(source, null, fastBloomMaterial, 0);

                RenderTexture.ReleaseTemporary(rt);
            }
        }
    }
}
