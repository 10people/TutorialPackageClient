Shader "FX PACK 1/Particles/Trail Additive Turbulence(new Particles)"
{
	Properties 
	{
		_MainTex("Main_Texture", 2D) = "white" {}
		_MainTex_Color("Color", Color) = (1,1,1,1)
		_Blend_Texture("Blend_Texture", 2D) = "white" {}		
		_BlendTex_Color("Color", Color) = (1,1,1,1)
		_MainTex_Speed("Main_Texture_Speed", Float) = 0
		_BlendTex_Speed("Blend_Texture_Speed", Float) = 1
		_LightenMain("Brightness_Main", Float) = 1
		_LightenBlend("Brightness_Blend", Float) = 1
	}
	
	SubShader 
	{
		Tags
		{
			"Queue"="Transparent"
			"IgnoreProjector"="False"
			"RenderType"="Transparent"
		}
		
		Cull Off
		ZWrite On
		ZTest LEqual
		ColorMask RGBA

		CGPROGRAM
		#pragma surface surf BlinnPhongEditor  alpha decal:add
		#pragma target 2.0

		sampler2D _MainTex;
		float4 _MainTex_Color;
		sampler2D _Blend_Texture;
		float4 _BlendTex_Color;
		float _MainTex_Speed;
		float _BlendTex_Speed;
		float _LightenMain;
		float _LightenBlend;

		struct EditorSurfaceOutput
		{
			half3 Albedo;
			half3 Normal;
			half3 Emission;
			half3 Gloss;
			half Specular;
			half Alpha;
		};
			
		inline half4 LightingBlinnPhongEditor_PrePass (EditorSurfaceOutput s, half4 light)
		{
			half3 spec = light.a * s.Gloss;
			half4 c;
			c.rgb = (s.Albedo * light.rgb + light.rgb * spec);
			c.a = s.Alpha;
			return c;
		}

		inline half4 LightingBlinnPhongEditor (EditorSurfaceOutput s, half3 lightDir, half3 viewDir, half atten)
		{
			half3 h = normalize (lightDir + viewDir);				
			half diff = max (0, dot ( lightDir, s.Normal ));				
			float nh = max (0, dot (s.Normal, h));
			float spec = pow (nh, s.Specular*128.0);
				
			half4 res;
			res.rgb = _LightColor0.rgb * diff;
			res.w = spec * Luminance (_LightColor0.rgb);
			res *= atten * 2.0;

			return LightingBlinnPhongEditor_PrePass( s, res );
		}

		struct Input
		{
			float2 uv_MainTex : TEXCOORD0;
			float2 uv_Blend_Texture : TEXCOORD1;
			float4 color : COLOR;
		};
		
		void surf (Input IN, inout EditorSurfaceOutput o)
		{			
			o.Alpha = 1.0;
			o.Albedo = 0.0;
			o.Emission = 0.0;
			o.Gloss = 0.0;
			o.Specular = 0.0;			
			o.Normal = float3(0.0,0.0,1.0);
			o.Normal = normalize(o.Normal);		

			// Main_Texture只在v方向运动
			float Multiply0 = _Time * _MainTex_Speed;
			float2 UV_Pan1 = float2(IN.uv_MainTex.x, IN.uv_MainTex.y + Multiply0);
			float4 Tex2D0 = tex2D(_MainTex, UV_Pan1);			
			float4 Multiply5 = _MainTex_Color * Tex2D0;

			// Blend_Texture在u和v方向上都运动
			float Multiply1 = _Time * _BlendTex_Speed;
			float2 UV_Pan2 = float2(IN.uv_Blend_Texture.x + Multiply1, IN.uv_Blend_Texture.y + Multiply1);
			float4 Tex2D1 = tex2D(_Blend_Texture, UV_Pan2);
			float4 Multiply6 = _BlendTex_Color * Tex2D1;			

			// 亮度调节
			float4 Multiply10 = Multiply6 * Multiply6;
			float4 Multiply7 = Multiply5 * Multiply10;
			float4 Multiply9 = Multiply7 * _LightenBlend;
			float4 Multiply11 = (Multiply5 + Multiply9) * _LightenMain;
			
			float4 Multiply4 = IN.color.w * IN.color;
			float4 Multiply13 = Multiply11 * Multiply4;
				
			o.Emission = Multiply13;			
		}
		ENDCG
	}
	Fallback "Diffuse"
}