Shader "Water/Tasharen"
{
	Properties
	{
		_WaterTex ("Normal Map (RGB), Foam (A)", 2D) = "white" {}
		//_ReflectionTex ("Reflection", 2D) = "white" { TexGen ObjectLinear }
		_Cube ("Skybox", Cube) = "_Skybox" { TexGen CubeReflect }
		_Color0 ("Shallow Color", Color) = (1,1,1,1)
		_Color1 ("Deep Color", Color) = (0,0,0,0)
		_Specular ("Specular", Color) = (0,0,0,0)
		_Shininess ("Shininess", Range(0.01, 1.0)) = 1.0
		_Tiling ("Tiling", Range(0.025, 0.25)) = 0.25
		_ReflectionTint ("Reflection Tint", Range(0.0, 1.0)) = 0.8
		_InvRanges ("Inverse Alpha, Depth and Color ranges", Vector) = (1.0, 0.17, 0.17, 0.0)
	}
	
	//==============================================================================================
	// Common functionality
	//==============================================================================================

	CGINCLUDE
#ifdef SHADER_API_D3D11
	#pragma target 4.0
#else
	#pragma target 3.0
#endif
	#include "UnityCG.cginc"
	
	half4 _Color0;
	half4 _Color1;
	half4 _Specular;
	float _Shininess;
	float _Tiling;
	float _ReflectionTint;
	half4 _InvRanges;
	
	sampler2D _CameraDepthTexture;
	sampler2D _WaterTex;
	
	half4 LightingPPL (SurfaceOutput s, half3 lightDir, half3 viewDir, half atten)
	{
		half3 nNormal = normalize(s.Normal);
		half shininess = s.Gloss * 250.0 + 4.0;
	
	#ifndef USING_DIRECTIONAL_LIGHT
		lightDir = normalize(lightDir);
	#endif

		half reflectiveFactor = max(0.0, dot(-viewDir, reflect(lightDir, nNormal)));
		half diffuseFactor = max(0.0, dot(nNormal, lightDir));
		half specularFactor = pow(reflectiveFactor, shininess) * s.Specular;
	
		half4 c;
		c.rgb = (s.Albedo * diffuseFactor + _Specular.rgb * specularFactor) * _LightColor0.rgb;
		c.rgb *= (atten * 2.0);
		c.a = s.Alpha;
		return c;
	}
	ENDCG

	SubShader
	{
		Lod 100
		Tags { "Queue" = "Transparent-10" }
		Blend SrcAlpha OneMinusSrcAlpha
		ZTest LEqual
		ZWrite Off

		CGPROGRAM
		#pragma surface surf PPL vertex:vert noambient

		samplerCUBE _Cube;
		
		struct Input
		{
			float4 position  : POSITION;
			float3 worldPos  : TEXCOORD2;	// Used to calculate the texture UVs and world view vector
		};
		
		void vert (inout appdata_full v, out Input o)
		{
			o.worldPos = v.vertex.xyz;
			o.position = mul(UNITY_MATRIX_MVP, v.vertex);
		}
		
		void surf (Input IN, inout SurfaceOutput o)
		{
			float3 worldView = (IN.worldPos - _WorldSpaceCameraPos);

			float offset = _Time.x * 0.5;
			half2 tiling = IN.worldPos.xz * _Tiling;
			half4 nmap = (tex2D(_WaterTex, tiling + offset) + tex2D(_WaterTex, half2(-tiling.y, tiling.x) - offset)) * 0.5;
			o.Normal = nmap.xyz * 2.0 - 1.0;
		
			half3 worldNormal = o.Normal.xzy;
			worldNormal.z = -worldNormal.z;
		
			half4 col;
			col.rgb = lerp(_Color1.rgb, _Color0.rgb, 0.5);

			o.Specular = 1.0;
			o.Gloss = _Shininess;
		
			half fresnel = dot(-normalize(worldView), worldNormal);
			fresnel *= fresnel;

			half3 reflection = texCUBE(_Cube, reflect(worldView, worldNormal)).rgb * _ReflectionTint;
		
			half3 refraction = col.rgb * col.rgb;
			o.Alpha = lerp(1.0, 0.75, fresnel);
			o.Albedo = lerp(reflection, refraction, fresnel);	
			o.Emission = o.Albedo * fresnel;
		
			// Set the final color
		#ifdef USING_DIRECTIONAL_LIGHT
			o.Albedo *= 1.0 - fresnel;
		#else
			// Setting it directly using the equals operator causes the shader to be "optimized" and break
			o.Albedo = lerp(o.Albedo.r, 1.0, 1.0);
		#endif
		}
		ENDCG
	}

	Fallback Off
}
