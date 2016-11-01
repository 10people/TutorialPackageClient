//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using UnityEngine;
using UnityEditor;
using System.Collections;


public class UTMyPrefabAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["CurPrefabFile"] as string;
		//HandleMat(context["foreachfile"]);
		//Debug.Log(UTFileUtils.FullPathToProjectPath(finalout), this);
		HandlePrefab(UTFileUtils.FullPathToProjectPath(finalout));
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MyPrefab", false, 200)]
	public static void AddAction() {
		Create<UTMyPrefabAction>();
	}

	public	static	bool HandlePrefab(string assetPath)
	{
		UnityEngine.GameObject obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.GameObject)) as UnityEngine.GameObject;

		if(obj != null)
		{
			bool needsave = false;
			if(HandlePanel(obj))
			{
				needsave = true;
			}
			
			if(HandleBoxCol(obj))
			{
				needsave = true;
			}
			
			if(HandleYScale(obj))
			{
				needsave = true;
			}
			
			if(HandleParticleSystem(obj))
			{
				needsave = true;
			}
			
			if( needsave )
			{
				Debug.Log(assetPath);
				EditorUtility.SetDirty(obj);
				return true;
			}
			else
			{
				return false;
			}
		}
		return false;
	}

	/*
	 * 如果BoxCollid的Y大于960，一律调整到1280
	 * */
	public	static	bool HandlePanel(UnityEngine.GameObject obj)
	{
		bool ret = false;
		if(obj != null)
		{
			Component[] childcomponentls = obj.GetComponentsInChildren(typeof(UIPanel), true);
			if(childcomponentls != null)
			{
				if(childcomponentls.Length>0)
				{
				    foreach (Component co in childcomponentls) 
					{
						UIPanel panel = co as UIPanel;
						if(panel != null)
						{
// #define NGUI_OLD_VERSION
#if NGUI_OLD_VERSION
							if(panel.depthPass == true)
							{
								Debug.Log ("$$  panel.depthPass change to false ");
								panel.depthPass = false;
								ret = true;
							}
#endif
                        }
				    }
				}
			}
		}
		return ret;
	}

	/*
	 * 如果BoxCollid的Y大于960，一律调整到1280
	 * */
	public	static	bool HandleBoxCol(UnityEngine.GameObject obj)
	{
		bool ret = false;
		if(obj != null)
		{
			Component[] childcomponentls = obj.GetComponentsInChildren(typeof(BoxCollider), true);
			if(childcomponentls != null)
			{
				if(childcomponentls.Length>0)
				{
				    foreach (Component col in childcomponentls) 
					{
						BoxCollider box = col as BoxCollider;
						//高度大于960的一律改成1280
						if(box.size.y > 959f && box.size.y< 1280f)
						{
							Debug.Log ("$$  box.size.y="+box.size.y+" => y=1280f ");
							box.size = new Vector3(box.size.x, 1280f, box.size.z);
							ret = true;
						}
				    }
				}
			}
		}
		return ret;
	}

	/*
	 * 如果Scaley>=1024 =>y=1280
	 * */
	public	static	bool HandleYScale(UnityEngine.GameObject obj)
	{
//		string strCurPath = AssetDatabase.GetAssetPath(obj);

		bool ret = false;
		if(obj != null)
		{
			Component[] childcomponentls = obj.GetComponentsInChildren(typeof(Transform), true);
			if(childcomponentls != null)
			{
				if(childcomponentls.Length>0)
				{
				    foreach (Component co in childcomponentls) 
					{
						Transform tr = co as Transform;
						if(tr != null)
						{
							//y>=1024 =>y=1280
							if(tr.localScale.y> 1023f && tr.localScale.y<1280f)
							{
								Debug.Log ("$$  localScale y="+tr.localScale.y+" y=1280f ");
								tr.localScale = new Vector3(tr.localScale.x, 1280f, tr.localScale.z);
								ret = true;
							}
						}
				    }
				}
			}
		}
		return ret;
	}

	/*
	 * 粒子中，renderer里面maxParticleSize 设为100
	 * */
	public	static	bool HandleParticleSystem(UnityEngine.GameObject obj)
	{
		bool ret = false;
		if(obj != null)
		{
			Component[] childcomponentls = obj.GetComponentsInChildren(typeof(ParticleSystem), true);
			if(childcomponentls != null)
			{
				if(childcomponentls.Length>0)
				{
				    foreach (Component co in childcomponentls) 
					{
						ParticleSystem  panel = co as ParticleSystem ;
						if(panel != null)
						{
							ParticleSystemRenderer[] renderers = panel.GetComponents<ParticleSystemRenderer>();
							foreach (ParticleSystemRenderer re in renderers) 
							{
								if(re.maxParticleSize < 100)
								{
									re.maxParticleSize = 100;
									ret = true;
									Debug.Log ("$$  ParticleSystemRenderer maxParticleSize = 100 ");
								}
							}
						}
				    }
				}
			}
		}
		return ret;
	}




}

