using UnityEngine;
using System.Collections;
namespace ScreenCopySDK
{
    public class AttackToMainCamera : MonoBehaviour
    {
//        private bool m_HasFastBloom = false;
        void Start()
        {
            GameObject go = GameObject.Find("Main Camera");
            if (go != null)
            {
                ScreenCopySDK.Maincamera camera = go.GetComponent<ScreenCopySDK.Maincamera>();
                if (camera)
                {
                    FastBloom fb = GetComponent<FastBloom>();
                    if (fb && GetComponent<Camera>()!=null)
                    {
                        camera.PushFastBloomCamera(GetComponent<Camera>());
                    }
                }
            }
        }
    }

}
