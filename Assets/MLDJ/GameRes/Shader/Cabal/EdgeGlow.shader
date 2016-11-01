Shader "Cabal/EdgeGlow" 
{
  	Properties 
    {
      	_Color ("Main Color", Color) = (1,1,1,1)
      	_MainTex ("Base (RGB) Gloss (A)", 2D) = "white" {}
      	_Alpha ("Alpha", Range(0,1)) = 1.0
      	_RimColor ("Rim Color", Color) = (0.8,0,0,0)
      	_RimPower ("Rim Power", Range(0.1,10)) = 0.5
      	_RimA("Rim A", Float) = 0.0
        _Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
        _OutlineColor ("Outline Color", Color) = (0.85,0.85,0.6,1)
        _Outline ("Outline width", Float) = 0.00
  	}
  	SubShader 
    {
  		
        Tags { "RenderType"="Opaque"  "Queue" = "Transparent-10" }
		
	
        Pass 
        {
            //Tags { "LightMode" = "Always" "Queue" = "Overlay" }
            Cull back
            ZWrite Off

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata_t 
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float2 texcoord : TEXCOORD0;
            };

            struct v2f 
            {
                float4 vertex : POSITION;
                float4 color : COLOR;
                float2 texcoord : TEXCOORD0;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float _Cutoff;
            float4 _OutlineColor;
            float _Outline;

            v2f vert (appdata_t v)
            {
                v2f o;
                float4 newpos = v.vertex;
                newpos.xyz += v.normal.xyz * _Outline;
                o.vertex = mul(UNITY_MATRIX_MVP, newpos);
                //o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
                //float3 norm = mul((float3x3)UNITY_MATRIX_IT_MV, v.normal);
                o.color = _OutlineColor;
                //o.vertex.xy += norm.xy * _Outline;
                o.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
                return o;
            }

            half4 frag (v2f i) : COLOR
            {
                clip(tex2D(_MainTex,i.texcoord).a - _Cutoff);
                return i.color;
            }
            ENDCG
        }
  		

        Pass 
        {
            Offset 0,-500
         	Cull back
         	ZWrite On
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata_t 
            {
                float4 vertex : POSITION;
                float4 color : COLOR;
                float3 normal : NORMAL;
                float2 texcoord : TEXCOORD0;
            };
            struct v2f 
            {
                float4 vertex : POSITION;
                float4 color : COLOR;
                float2 texcoord : TEXCOORD0;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float _Cutoff;

            float _RimA;
            float _RimPower;
            half4 _RimColor;
            fixed4 _Color;
		    half _Alpha;
            v2f vert (appdata_t v)
            {
              v2f o;
              o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);

              half rim = 1.0f - saturate( dot(normalize(ObjSpaceViewDir(v.vertex)), v.normal) );
              o.color.rgb = (_RimColor.rgb * pow(rim, _RimPower)) * _RimA;
              o.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
              return o;
            }

            // float4 _Color;
            half4 frag (v2f i) : COLOR
            {
                half4 col = tex2D(_MainTex, i.texcoord) + i.color;
                // col *= _Color;
                clip(col.a - _Cutoff);
                return col;
            }
            ENDCG
        }
  	}
}