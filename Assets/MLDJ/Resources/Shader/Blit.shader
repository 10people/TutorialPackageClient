Shader "Screen/Blit"
{
	Properties
	{
		_MainTex ("Base (RGB)", 2D) = "white" {}
	}
	
	CGINCLUDE

		#include "UnityCG.cginc"

		sampler2D _MainTex;

		struct v2f_simple 
		{
			float4 pos : SV_POSITION; 
			half2 uv : TEXCOORD0;
		};	
		
		v2f_simple vert ( appdata_img v )
		{
			v2f_simple o;
			
			o.pos = mul (UNITY_MATRIX_MVP, v.vertex);
        	o.uv = v.texcoord;
        	        	
			return o; 
		}

		fixed4 frag ( v2f_simple i ) : SV_Target
		{	
        	fixed4 color;
			color.rgb = tex2D(_MainTex, i.uv).rgb;
			color.a = 1.0;
			return color;
		} 
	ENDCG	

	SubShader
	{
		//Tags { "RenderType"="Opaque" }
		ZTest Off
		Cull Off
		ZWrite Off
		Blend Off
	  	Fog { Mode off }  

		Pass
		{	
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma fragmentoption ARB_precision_hint_fastest		
			ENDCG		 
		}
	} 
	FallBack Off
}