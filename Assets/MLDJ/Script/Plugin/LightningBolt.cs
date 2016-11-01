using UnityEngine;
using System.Collections;

public class LightningBolt : MonoBehaviour
{
	
	// Use this for initialization
	void Start ()
	{
		if (null != GetComponent<Renderer>())
        {
            Material newMat = GetComponent<Renderer>().material;
            if (null != newMat)
            {
                newMat.SetFloat("_StartSeed", Random.value * 1000);
                GetComponent<Renderer>().material = newMat;
            }
        }
		
	}
}

