Shader "MUI/Wave Shader" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_BlendTex ("Blend (RGB)", 2D) = "white" {}
	}
	SubShader {
		LOD 200

		Tags
		{
			"Queue" = "Transparent"
			"IgnoreProjector" = "True"
			"RenderType" = "Transparent"
		}
		Pass
		{
			Cull Off
			Lighting Off
			ZWrite Off
  			Fog { Mode Off }
  			Blend SrcAlpha OneMinusSrcAlpha

			CGPROGRAM
			#pragma vertex vert_img
			#pragma fragment frag			
			#include "UnityCG.cginc"

			sampler2D _MainTex;
			sampler2D _BlendTex;
			float4 _MainTex_ST;
			float _WaveRate;
			float _WaveLength;
			float _WaveSpeed;
			float _Amount;

			struct appdata_t
			{
				float4 vertex : POSITION;
				float2 texcoord : TEXCOORD0;
				fixed4 color : COLOR;
			};
				
			fixed4 frag (v2f_img IN) : COLOR
			{
				float2 uv = IN.uv;

   				uv.y += _WaveRate * sin(_WaveLength * uv.x - _WaveSpeed);
				uv.y += (0.7f - 0.8f * _Amount);
				float4 blendTex = tex2D(_BlendTex, uv);
				float4 tex = tex2D(_MainTex, IN.uv);
				tex.a = tex.a * blendTex.a;
				return tex;
			}
			ENDCG	
		}
	}
	FallBack "Diffuse"
}
