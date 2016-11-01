Shader "Effect/EffectDistortion" 
{
    Properties 
    {
        _NoiseTex ("Noise Texture (RG)", 2D) = "white" {}
        _MaskTex("MaskTexture()",2D) = "white" {}
		//_RenderTexture("Render texture",2D) = "white" {}
        strength("strength", Range(0.1, 3)) = 0.2
        transparency("transparency", Range(0.01, 0.1)) = 0.05
    }
    Category 
    {
        Tags { "Queue" = "Transparent+10" }
        SubShader 
        {
            Pass 
            {
                Fog { Color (0,0,0,0) }
                Lighting Off
                Cull Off
                ZWrite On
                ZTest LEqual
                Blend SrcAlpha OneMinusSrcAlpha
                AlphaTest Greater 0
                CGPROGRAM
                #pragma vertex vert
                #pragma fragment frag
                #include "UnityCG.cginc"
                sampler2D _RenderTexture;
                float4 _NoiseTex_ST;
                sampler2D _NoiseTex;
                sampler2D _MaskTex;
                float strength;
                float transparency;
                struct data 
                {
                    float4 vertex : POSITION;
                    float3 normal : NORMAL;
                    float4 texcoord : TEXCOORD0;
                };
                struct v2f 
                {
                    float4 position : POSITION;
                    float4 screenPos : TEXCOORD0;
                    float3 uvmain : TEXCOORD1;
                };
                v2f vert(data i)
                {
                    v2f o;
                    o.position = mul(UNITY_MATRIX_MVP, i.vertex);     
                    o.uvmain.xy = TRANSFORM_TEX(i.texcoord, _NoiseTex);  
                    float viewAngle = dot(normalize(ObjSpaceViewDir(i.vertex)),i.normal);
                    o.uvmain.z = viewAngle * viewAngle;   
                    float depth = -mul( UNITY_MATRIX_MV, i.vertex ).z;
                    o.uvmain.z /= 1+depth; 
                    o.uvmain.z *= strength;
                    o.screenPos = o.position;
                    return o;
                }
                half4 frag( v2f i ) : COLOR
                {   
                    float2 screenPos = i.screenPos.xy / i.screenPos.w;   
                    screenPos.x = (screenPos.x + 1) * 0.5;  
                    screenPos.y = (screenPos.y + 1) * 0.5;  
                    #if !UNITY_UV_STARTS_AT_TOP
                        screenPos.y = 1 - screenPos.y;
                    #endif
                   
                    half4 offsetColor1 = tex2D(_NoiseTex, i.uvmain.xy + _Time.xz);
                    half4 offsetColor2 = tex2D(_NoiseTex, i.uvmain.xy - _Time.yx);
                    fixed4 maskColor = tex2D(_MaskTex,i.uvmain.xy);
                    half sss = length(maskColor.xyz);

                    screenPos.x += ((offsetColor1.r + offsetColor2.r) - 1) * i.uvmain.z * sss;
                    screenPos.y += ((offsetColor1.g + offsetColor2.g) - 1) * i.uvmain.z * sss;
                    screenPos.y = 1- screenPos.y;
                    half4 col = tex2D( _RenderTexture, screenPos );
                    col.a = sss * i.uvmain.z/transparency;
                    return col;
                }
                ENDCG
            }
        }
    }
}
