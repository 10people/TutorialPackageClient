using UnityEngine;
using System.Collections;

public class DynamicBatch : MonoBehaviour
{

  bool needBatch = true;

  void Start()
  {
    needBatch = true;
  }

  void Update()
  {
    if (needBatch) {
      needBatch = false;
      StaticBatchingUtility.Combine(this.gameObject);
      GameObject.Destroy(this);
    }
  }
}
