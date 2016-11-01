using UnityEngine;
using System.Collections;


namespace ScreenCopySDK
{
    public class Maincamera : MonoBehaviour
    {
        private Shader blitShader;
        private Material blitMaterial = null;
//        private bool m_ForeceIt = false;
        void Start()
        {
            blitShader = Shader.Find(Configure.BlitName);
            blitMaterial = new Material(blitShader);

            GetComponent<Camera>().targetTexture = RTManager.Instance.GetScene();
            int lay = LayerMask.NameToLayer(Configure.LayerName);
            GetComponent<Camera>().cullingMask &= ~(1 << lay);
            
            Subcamera subcamera;
            {
                GameObject go = new GameObject(Configure.CameraName);
                go.transform.parent = GetComponent<Camera>().transform;
                go.transform.localPosition = Vector3.zero;
                go.transform.localRotation = Quaternion.identity;
                Camera sub = go.AddComponent<Camera>();
                sub.depth = GetComponent<Camera>().depth + 1;
                sub.fieldOfView = GetComponent<Camera>().fieldOfView;
                sub.clearFlags = CameraClearFlags.Nothing;
                sub.nearClipPlane = GetComponent<Camera>().nearClipPlane;
                sub.farClipPlane = GetComponent<Camera>().farClipPlane;
                subcamera = go.AddComponent<Subcamera>();
            }
            
            {
                FastBloom fb = GetComponent<FastBloom>();
                subcamera.isBloomActived = false;
                if (null != fb)
                {
                    subcamera.isBloomActived = true;
                    subcamera.threshhold = fb.threshhold;
                    subcamera.blurIterations = fb.blurIterations;
                    subcamera.blurSize = fb.blurSize;
                    subcamera.blurType = fb.blurType;
                    subcamera.intensity = fb.intensity;
                    subcamera.resolution = fb.resolution;
                    DestroyImmediate(fb);//防止unity犯傻，readpixel
                }
            }
        }
        public void PushFastBloomCamera(Camera camera)
        {
 
        }
       
        public void PushBackCamera(Camera camera)
        {
 
        }
        void Update()
        {
            RTManager.Instance.Update();
            if (RTManager.Instance.isScreenSizeChange())
            {
                RenderTexture rt = RTManager.Instance.GetScene();
                GetComponent<Camera>().targetTexture = rt;
            }
        }
        void OnPostRender()
        {
            Graphics.Blit(RTManager.Instance.GetScene(), RTManager.Instance.GetCopy(), blitMaterial);
        }
    }
}