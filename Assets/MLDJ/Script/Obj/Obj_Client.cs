using Games.Animation_Modle;
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;

namespace Games.LogicObj
{
    public class Obj_Client : Obj_Character
    {
        public Obj_Client()
        {
            m_ObjType = Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_CLIENT;
        }

        void Awake()
        {
            m_ObjTransform = transform;
        }

        void Update()
        {
            UpdateTargetMove();
            if (null != m_AnimLogic)
            {
                m_AnimLogic.AnimationUpdate();
            }
        }

        public override bool Init(Obj_Init_Data initData)
        {
            if (base.Init(initData))
            {
                return false;
            }
            ObjEffectController = gameObject.GetComponent<CharacterEffectBehaviourController>();
            if (ObjEffectController == null)
            {
                ObjEffectController = gameObject.AddComponent<CharacterEffectBehaviourController>();
            }

            AnimLogic = gameObject.GetComponent<AnimationLogic>();
            if (AnimLogic == null)
            {
                AnimLogic = gameObject.AddComponent<AnimationLogic>();
            }
            return true;
        }

        public override void OnAnimationFinish(int animationID)
        {
            base.OnAnimationFinish(animationID);
            // 对雁门关的特殊处理，注掉
            //if (gameObject.name == "play-effect")
            //{
            //    if (animationID == GlobeVar.YanMenGuan_QiaoFengAni)
            //    {
            //        Obj_MainPlayer mainplayer = Singleton<ObjManager>.Instance.MainPlayer;
            //        if (mainplayer != null)
            //        {
            //            if (mainplayer.CameraController)
            //            {
            //                mainplayer.CameraController.InitCameraRock(4);

            //                if (BackCamerControll.Instance() != null)
            //                {
            //                    BackCamerControll.Instance().IsCloseIdle = false;
            //                    BackCamerControll.Instance().InitBlackScreenTween(1.0f, 1.0f, 1.0f);
            //                    BackCamerControll.Instance().PlayBlackScreenTween();

            //                    BackCamerControll.Instance().InitBlackScreenLabel(StrDictionary.GetClientDictionaryString("#{3315}"));  //几日后......
            //                    BackCamerControll.Instance().InitBlackScreenLabelTween(0.5f, 1.0f, 2.0f);
            //                    BackCamerControll.Instance().PlayBlackScreenLabelTween();
            //                }


            //                mainplayer.CameraController.ResetCameraToMainPlayer();
            //                if (null != mainplayer.AnimLogic)
            //                    mainplayer.AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Die);

            //                if (mainplayer.Profession == (int)CharacterDefine.PROFESSION.SHAOLIN)
            //                {
            //                    GameManager.gameManager.SoundManager.PlaySoundEffect(5);     //attack1_shaolin
            //                }
            //                else if (mainplayer.Profession == (int)CharacterDefine.PROFESSION.TIANSHAN)
            //                {
            //                    GameManager.gameManager.SoundManager.PlaySoundEffect(6);    //attack1_tianshan
            //                }
            //                else if (mainplayer.Profession == (int)CharacterDefine.PROFESSION.DALI)
            //                {
            //                    GameManager.gameManager.SoundManager.PlaySoundEffect(1);    //attack1_dali
            //                }
            //                else if (mainplayer.Profession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            //                {
            //                    GameManager.gameManager.SoundManager.PlaySoundEffect(7);    //attack1_xiaoyao
            //                }
            //                else if (mainplayer.Profession == (int)CharacterDefine.PROFESSION.GAIBANG)
            //                {
            //                    GameManager.gameManager.SoundManager.PlaySoundEffect(168);    //attack1_gaibang
            //                }

            //                StoryDialogLogic.ShowStory(GlobeVar.YanMenGuan_BossStory2ID);
            //                mainplayer.IsNoMove = true;
            //            }                        
            //        }
            //    }
            //}
        }
    }

}