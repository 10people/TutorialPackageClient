Shader "Cabal/EdgeBlend" {

Properties {
   	_Color ("Color", Color) = (1,1,1,1)
    _MainTex ("", 2D) = "white" {}
    _BlendTex ("", 2D) = "white" {}
	_Inside("_Inside", Range(0,1) ) = 0
    _Rim("_Rim", Range(0,2) ) = 1.2
    _Scale("_Scale", Range(0,1) ) = 0.5

}

Category {
    ZTest Always Cull Off ZWrite Off Fog { Mode Off }
    //Blend One One

    Subshader {
        Pass {
            CGPROGRAM
                //#pragma vertex vert
                #pragma vertex vert_img

				
                #pragma fragment frag
                #pragma fragmentoption ARB_precision_hint_fastest

                #include "UnityCG.cginc"

                struct v2f {
                    float4 pos : POSITION;
                    half2 uv : TEXCOORD0;
                };

                float4 _MainTex_TexelSize;
                float _Scale;

                v2f vert (appdata_img v)
                {
                    v2f o;
                    o.pos = mul (UNITY_MATRIX_MVP, v.vertex);
                    o.uv = MultiplyUV (UNITY_MATRIX_TEXTURE0, v.texcoord.xy);
                    return o;
                }

                sampler2D _MainTex;
                sampler2D _BlendTex;

                fixed4 _Color;

                fixed4 frag( v2f_img i ) : COLOR
                {
					half2 uv = i.uv;
					uv.y = 1.0-uv.y;
					half4 c = tex2D( _MainTex, i.uv );
					half4 b = tex2D( _BlendTex, i.uv );

					half4 blend = lerp(c,b,_Scale);
					half4 ret = lerp(c,blend,b.a);

					return ret;
                }
            ENDCG
        }

		}

    //SubShader {
    //    Pass {
    //        SetTexture [_MainTex] {constantColor [_Color] combine constant * texture DOUBLE}
    //    }
    //}
}

Fallback off

}