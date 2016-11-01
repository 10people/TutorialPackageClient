using UnityEngine;
using System.Collections;

public class MUIPlayParticleWithTween : MonoBehaviour {
    //点击屏幕触发子层级特效
    //配合Box Collider和UIPlay Tween可以完整的播放动画和特效
    void OnClick()
    {
        ParticleSystem[] pss = gameObject.GetComponentsInChildren<ParticleSystem>();
        for (int i = 0; i < pss.Length; ++i)
        {
            pss[i].Play();
        }
    }
}
