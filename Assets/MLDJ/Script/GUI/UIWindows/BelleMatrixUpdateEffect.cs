using UnityEngine;
using System.Collections;

public class BelleMatrixUpdateEffect : MonoBehaviour {

    // Use this for initialization
    void Start()
    {
        Invoke("BelleMatrixEffectOver", 2f);
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void BelleMatrixEffectOver()
    {
        UIManager.CloseUI(UIInfo.BelleMatrixUpdateEffect);
    }
}
