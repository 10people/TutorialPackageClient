using UnityEngine;
using System.Collections;

public class MissionCompletedEffect : MonoBehaviour {

	// Use this for initialization
	void Start () {
    Invoke("MissionCompleted", 1f);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
  private void MissionCompleted()
  {
    UIManager.CloseUI(UIInfo.MissionCompletefEffect);
  }
}
