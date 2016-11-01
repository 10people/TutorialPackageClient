// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "Cabal/Light Probes Rim Alpha Test" 
    {
        Properties 
        {
			_RimColor("Rim Color", color) = (0,0,0,1)
			_RimPower("Rim Power", Range(0.1,3) ) = 3
            _MainTex("Base (RGB)", 2D) = "white" {}
			_CutOut("CutOut", Range(0, 1)) = 0.4
			_Alpha("Alpha", Range(0, 1)) = 1.0
        }

        Subshader 
        {
            Tags
            {
            	"RenderType"="TransparentCutout"
            	"LightMode"="ForwardBase"
            	"BW"="TrueProbes"
            	"Queue" = "AlphaTest+10"
            }
            Fog { Mode Off }
			Cull Off
			Blend SrcAlpha  OneMinusSrcAlpha
            Pass 
            {
            	//Cull back
                CGPROGRAM
				#pragma vertex:separateSH
				#pragma noambient
                #pragma vertex vert
                #pragma fragment frag
                #pragma fragmentoption ARB_precision_hint_fastest
                #include "UnityCG.cginc"                

                struct v2f 
                { 
                    fixed4 pos 		:SV_POSITION;
                    fixed2 uv 		:TEXCOORD0;
                  //  fixed3 vlight 	:TEXCOORD1;
					fixed3 normal	:TEXCOORD2;
					fixed3 view		:TEXCOORD3;
                };

                fixed4 _MainTex_ST;
				fixed _RimPower;
				
                v2f vert (appdata_full v)
                {
                    v2f o;
                    o.pos = mul (UNITY_MATRIX_MVP, v.vertex);
                    o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
                    fixed3 worldN = mul((float3x3)unity_ObjectToWorld, SCALED_NORMAL);
                   // o.vlight = ShadeSH9 (float4(worldN,1.0));
				  // o.vlight=fixed3(1.0,1.0,1.0);
					o.normal = normalize( mul((float3x3)unity_ObjectToWorld, v.normal) );
					o.view = normalize( WorldSpaceViewDir(v.vertex) );
                    return o;
                }

                sampler2D _MainTex;
				fixed4 _RimColor;
				fixed _CutOut;
				fixed _Alpha;
				

                fixed4 frag (v2f i) : COLOR
                { 
					fixed4 c = tex2D(_MainTex,i.uv);
					clip( c.a - _CutOut );
					fixed3 normal = normalize( i.normal );
					fixed3 viewDir = normalize( i.view );
					fixed rim = 1.0 - dot( viewDir, normal );
					fixed powrim = pow(rim, _RimPower);
                   // c.rgb *= i.vlight;
					c.rgb = lerp( c.rgb, _RimColor.rgb, _RimColor.a*powrim );
					c.a = _Alpha; 
					return c;
                }
                ENDCG
            }
        }
		fallback "Mobile/Unlit (Supports Lightmap)"
    }