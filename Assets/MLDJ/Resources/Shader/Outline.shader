Shader "Cabal/Outline" {
	Properties {
		_Color ("Main Color", Color) = (0,0,1,1)
		_OutlineColor ("Outline Color", Color) = (.63,1,.8,1)
		_Outline ("Outline width", Range (.002, 0.03)) = .002
		_MainTex ("Base (RGB)", 2D) = "white" { }
		_Factor ("Factor", Range (0, 1)) = 0
	}
 
	CGINCLUDE
	#include "UnityCG.cginc"
 
	struct appdata {
		float4 vertex : POSITION;
		float3 normal : NORMAL;
	};
 
	struct v2f {
		float4 pos : POSITION;
		float4 color : COLOR;
	};
 
	uniform float _Outline;
	uniform float4 _OutlineColor;
	float _Factor;
 
	v2f vert(appdata_full v) {
		// just make a copy of incoming vertex data but scaled according to normal direction
		v2f o;
		//o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
		
		//float3 norm   = mul ((float3x3)UNITY_MATRIX_IT_MV, v.normal);
		//float2 offset = TransformViewToProjection(norm.xy);

		//o.pos.xy += norm.xy * o.pos.z * _Outline;
		//o.color = _OutlineColor;

		o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
		float3 dir = normalize(v.vertex.xyz);
		float3 dir2 = v.tangent;
		//dir = lerp(v.normal, dir2, 0.5);
		dir = lerp(v.normal, dir, _Factor);
		dir = mul((float3x3)UNITY_MATRIX_IT_MV, dir);
		float2 offset = TransformViewToProjection(dir.xy);
		offset = normalize(offset);

		o.pos.xy += offset * o.pos.z * _Outline;
		o.color = _OutlineColor;

		return o;
	}
	ENDCG
 
	SubShader {
		//Tags {"Queue" = "Geometry+100" }
		CGPROGRAM
		#pragma surface surf Lambert
 
		sampler2D _MainTex;
		fixed4 _Color;
 
		struct Input {
			float2 uv_MainTex;
		};
 
		void surf (Input IN, inout SurfaceOutput o) {
			fixed4 c = tex2D(_MainTex, IN.uv_MainTex) * _Color;
			o.Albedo = c.rgb;
			o.Alpha = c.a;
		}
		ENDCG
 
		// note that a vertex shader is specified here but its using the one above
		Pass {
			Name "OUTLINE"
			Tags { "LightMode" = "Always" }
			Cull Front
			ZWrite On
			//ColorMask RGB
			Blend SrcAlpha OneMinusSrcAlpha
			//Offset 50,50
 
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			half4 frag(v2f i) :COLOR {
			
			 return i.color; 
			}
			ENDCG
		}
	}
 
	
}