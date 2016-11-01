using UnityEngine;
using System.Collections;



namespace ScreenCopySDK
{
    public class Subcamera : MonoBehaviour
    {
        Blitcamera m_Blitcamera;

        public float threshhold = 0.25f;
        public float intensity = 0.75f;
        public float blurSize = 1.0f;
        public int blurIterations = 1;
        public FastBloom.Resolution resolution = FastBloom.Resolution.Low;
        public FastBloom.BlurType blurType = FastBloom.BlurType.Standard;
        public bool isBloomActived = false;
        private bool m_bForceIt = false;
        void Start()
        {
            m_bForceIt = true;
            GetComponent<Camera>().targetTexture = RTManager.Instance.GetScene();
            int lay = LayerMask.NameToLayer(Configure.LayerName);
            GetComponent<Camera>().cullingMask = 1 << lay;

            GameObject go = new GameObject(Configure.CameraName);
            go.transform.parent = GetComponent<Camera>().transform;
            go.transform.localPosition = Vector3.zero;
            go.transform.localRotation = Quaternion.identity;
            Camera sub = go.AddComponent<Camera>();
            sub.depth = GetComponent<Camera>().depth + 1;
            sub.fieldOfView = GetComponent<Camera>().fieldOfView;
            sub.clearFlags = CameraClearFlags.SolidColor;
            sub.nearClipPlane = GetComponent<Camera>().nearClipPlane;
            sub.farClipPlane = GetComponent<Camera>().farClipPlane;
            m_Blitcamera = go.AddComponent<Blitcamera>();
            _DoSetValue();
        }
        private void _DoSetValue()
        {
            if (null != m_Blitcamera)
            {
                m_Blitcamera.SetBloomActive(isBloomActived);
                m_Blitcamera.threshhold = threshhold;
                m_Blitcamera.blurIterations = blurIterations;
                m_Blitcamera.blurSize = blurSize;
                m_Blitcamera.blurType = blurType;
                m_Blitcamera.intensity = intensity;
                m_Blitcamera.resolution = resolution;

            }
        }
        void Update()
        {
            if (RTManager.Instance.isScreenSizeChange() || m_bForceIt)
            {
                GetComponent<Camera>().targetTexture = RTManager.Instance.GetScene();
            }
        }
    }
}