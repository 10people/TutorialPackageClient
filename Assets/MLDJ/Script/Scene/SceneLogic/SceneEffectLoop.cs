/********************************************************************************
 *	文件名：	SceneEffectLoop.cs
 *	全路径：	\Script\Scene\SceneEffectLoop.cs
 *	创建人：	李嘉
 *	创建时间：2014-10-24
 *
 *	功能说明：场景中某些特效定时循环播放逻辑
 *	          将脚本挂在场景某个Object中，设定循环间隔即可实现定时播放
 *	修改记录：
*********************************************************************************/

using Games.LogicObj;
using UnityEngine;
using System.Collections;

public class SceneEffectLoop : MonoBehaviour 
{
    public int m_LoopDeltaTime;         //每次循环的间隔时间（秒）
    public int m_SoundID = -1;          //声音Id

	// Use this for initialization
	void Start ()
    {
        StartCoroutine(DoSceneEffectLoop());
	}

    //时间到了则循环一次
    IEnumerator DoSceneEffectLoop()
    {
        while (true)
        {
            yield return new WaitForSeconds(m_LoopDeltaTime);

            //播放特效
            ParticleSystem[] particleSystemArray = gameObject.GetComponentsInChildren<ParticleSystem>();

            for(int i=0; i<particleSystemArray.Length; ++i)
            {
                if (null != particleSystemArray[i])
                {
                    particleSystemArray[i].Play();
                }
            }

            //播放声音
            if (m_SoundID >= 0 && null != GameManager.gameManager.SoundManager)
            {
                Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (_mainPlayer)
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffectAtPos2(m_SoundID,gameObject.transform.localPosition,_mainPlayer.Position);
                }
            }
        }
    }
}
