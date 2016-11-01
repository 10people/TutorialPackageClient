#region
/*************************************************************************************
   * filename:          MonoBase
   * date:              5/14/2015 10:47:17 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System;


[Serializable]
public abstract class MonoBase
{
    public abstract bool Init();
    public virtual void Update()
    {
    }
    public abstract void Clear();
}