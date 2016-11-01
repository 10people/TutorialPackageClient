using UnityEngine;
using System.Collections.Generic;

#region 资源属性数据定义
/// <summary>
/// 纹理属性
/// </summary>
[System.Serializable]
public class TextureProperty
{
    public bool isOriginal;

    public bool isLocked;
    /// <summary>
    /// 原始大小
    /// </summary>
    public int MaxSize;
    /// <summary>
    /// 是否支持mipmap
    /// </summary>
    public bool MipmapEnabled;
    public TextureProperty()
    {
        MaxSize = 0;
        MipmapEnabled = true;
    }
    public TextureProperty(int originalSize, bool mipmapEnabled)
    {
        MaxSize = originalSize;
        MipmapEnabled = mipmapEnabled;
    }
}

/// <summary>
/// Atlas中单个Sprite的参数
/// </summary>
[System.Serializable]
public class SpriteDetail
{
    public Vector4 Demension;
    public Vector4 Border;
    public Vector4 Padding;
    public SpriteDetail()
    {
        Demension = Border = Padding = Vector4.zero;
    }
    public SpriteDetail(Vector4 demension, Vector4 border, Vector4 padding)
    {
        Demension = demension;
        Border = border;
        Padding = padding;
    }
}

/// <summary>
/// Atlas的参数集合，包含了每个Sprite的参数
/// </summary>
[System.Serializable]
public class AtlasProperty
{
    public List<SpriteDetail> SpriteDetails;
    public bool isOriginal;
    public float scale;
    public float pixelSize;
    public bool isLocked;
    public AtlasProperty()
    {
        SpriteDetails = new List<SpriteDetail>();
    }
    public void AddSpriteDetail(SpriteDetail sd)
    {

        SpriteDetails.Add(sd);
    }
}

#endregion