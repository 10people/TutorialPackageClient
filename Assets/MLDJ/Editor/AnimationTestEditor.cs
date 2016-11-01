/********************************************************************
	created:	2014/02/17
	created:	17:2:2014   10:11
	filename: 	AnimationTestEditor.cs
	author:		王迪
	
	purpose:	配合AnimationTest做一个播放按钮
*********************************************************************/
using UnityEngine;
using System.Collections;
using UnityEditor;

[CustomEditor(typeof(AnimationTest))]
[ExecuteInEditMode]
public class AnimationTestEditor : Editor 
{
    public GameObject EffectObj;

    public override void OnInspectorGUI()
    {
        AnimationTest animationTest = (AnimationTest)target;
        GUILayout.BeginHorizontal();
        {
            if(GUILayout.Button("Play" ,GUILayout.Width(120)))
            {
                animationTest.Play();
            }
        }
        GUILayout.EndHorizontal();
    }
	
}
