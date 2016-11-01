using UnityEngine;
using System.Collections;



namespace ScreenCopySDK
{    
    public class User : MonoBehaviour
    {
        //[SerializeField]
        //public string TargetName = Configure.TargetName;

        //private Material m_Material;

        void Start()
        {
            int layer = LayerMask.NameToLayer(Configure.LayerName);
            gameObject.layer = layer;
            //MeshRenderer mesh = this.GetComponent<MeshRenderer>();
            //m_Material = mesh.sharedMaterial;
        }

        void Update()
        {
            //if (RTManager.Instance.isScreenSizeChange()
            //    || null == m_Material.GetTexture(TargetName))
            //{
            //    m_Material.SetTexture(TargetName, RTManager.Instance.GetCopy());
            //}
        }
    }
}