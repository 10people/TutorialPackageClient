Shader "Cabal/Player/PlayerHighLightOverride" 
{
	Properties 
	{
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Color ("Main Color", Color) = (0.88,0.88,0.88,1)		
	}
	SubShader 
	{
		Tags { "RenderType"="Opaque"}
		LOD 100  

		Pass
		{
		CGPROGRAM
		#pragma target 3.0
		#pragma vertex vert  
        #pragma fragment fragFinal 
        #include "UnityCG.cginc"  

		sampler2D _MainTex;
		fixed4 _Color;

		struct v2f 
		{
			float4 pos : POSITION;
			float2 uv: TEXCOORD0;
		};
		
		v2f vert(appdata_tan v) 
		{
			v2f o;  
			o.pos = mul (UNITY_MATRIX_MVP,v.vertex);                  
			o.uv = MultiplyUV( UNITY_MATRIX_TEXTURE0, v.texcoord );
			return o;  
		}  

		

		half4 fragFinal(v2f i) : COLOR 
		{
			half4 base = tex2D(_MainTex, i.uv);
			half4 ret = base * _Color;
			ret.a = base.a;
			return ret;
		}
	ENDCG
		}
		}
	FallBack off
}
