Shader "Hidden/NewEdgeDetection" 
{
  Properties 
  {
      _MainTex ("Base (RGB)", 2D) = "white" {}
	  _Lerpscale ("Lerpscale", float) = 0.5
	  _Threshold ("Threshold", float) = 0.1
	  _SampleDistance("SampleDistance", float) = 0.1
	  _Exponent("Exponent", float) = 0.1
	  _EdgeColorParam ("EdgeColorParam", Color) = (0.9 ,0.9, 0.5, 1.0)	
	  _BGColor ("BGColor ", Color) = (0.0 ,0.0, 0.0, 1.0)	

  }
SubShader {  
        Tags {  
            "RenderType"="Opaque"}  
        LOD 100  
        Pass {  
            CGPROGRAM  
			#pragma target 3.0
            #pragma vertex vert  
            #pragma fragment fragFinal 
            #include "UnityCG.cginc"  
  
struct v2f {
		float4 pos : POSITION;
		float2 uv: TEXCOORD0;
	};
	
	sampler2D _MainTex;
	sampler2D _CameraDepthTexture;
	sampler2D _CameraDepthNormalsTexture;

	uniform float4 _MainTex_TexelSize;
	uniform float _SampleDistance;
	uniform float _SampleDistanceDepth;

	uniform float _Threshold;
	uniform float _Exponent;

	uniform float4 _EdgeColorParam;
	uniform float4 _BGColor;
	uniform float2 _Sensitivity;

	

	v2f vert(appdata_tan v) 
	{
        v2f o;  
        o.pos = mul (UNITY_MATRIX_MVP,v.vertex);                  
        float3 viewDir = ObjSpaceViewDir(v.vertex);  
        o.uv = MultiplyUV( UNITY_MATRIX_TEXTURE0, v.texcoord );
        return o;  
    }  

	half4 SampleAdjunction(half2 uv,half Xoffset,half Yoffset,half kernelValue)
	{
		float2 tuv = uv + _MainTex_TexelSize.xy * half2(Xoffset,Yoffset) * _SampleDistance;
		half4 sampleX1 = tex2D(_MainTex, tuv) * kernelValue;
		sampleX1 = sampleX1.x*0.299 + sampleX1.y*0.587 + sampleX1.z*0.114;
		return sampleX1;
	}

	float4 DepthCheck(v2f i) 
	{	
		// inspired by borderlands implementation of popular "sobel filter"

		float centerDepth = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture, i.uv)));
		float4 depthsDiag;
		float4 depthsAxis;

		float2 uvDist = _SampleDistanceDepth * _MainTex_TexelSize.xy;

		depthsDiag.x = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv+uvDist))); // TR
		depthsDiag.y = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv+uvDist*float2(-1,1)))); // TL
		depthsDiag.z = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv-uvDist*float2(-1,1)))); // BR
		depthsDiag.w = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv-uvDist))); // BL

		depthsAxis.x = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv+uvDist*float2(0,1)))); // T
		depthsAxis.y = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv-uvDist*float2(1,0)))); // L
		depthsAxis.z = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv+uvDist*float2(1,0)))); // R
		depthsAxis.w = Linear01Depth(UNITY_SAMPLE_DEPTH(tex2D(_CameraDepthTexture,i.uv-uvDist*float2(0,1)))); // B

		depthsDiag -= centerDepth;
		depthsAxis /= centerDepth;

		const float4 HorizDiagCoeff = float4(1,1,-1,-1);
		const float4 VertDiagCoeff = float4(-1,1,-1,1);
		const float4 HorizAxisCoeff = float4(1,0,0,-1);
		const float4 VertAxisCoeff = float4(0,1,-1,0);

		float4 SobelH = depthsDiag * HorizDiagCoeff + depthsAxis * HorizAxisCoeff;
		float4 SobelV = depthsDiag * VertDiagCoeff + depthsAxis * VertAxisCoeff;

		float SobelX = dot(SobelH, float4(1,1,1,1));
		float SobelY = dot(SobelV, float4(1,1,1,1));
		float Sobel = sqrt(SobelX * SobelX + SobelY * SobelY);

		Sobel = 1.0-pow(saturate(Sobel), _Exponent);
		return 1-Sobel;
		//return Sobel * lerp(tex2D(_MainTex, i.uv.xy), _BGColor, 0.5);
	}

	half CheckSame (half2 centerNormal, float centerDepth, half4 sample)
	{
		// difference in normals
		// do not bother decoding normals - there's no need here
		half2 diff = abs(centerNormal - sample.xy) * _Sensitivity.y;

		half isSameNormal = (diff.x + diff.y) * _Sensitivity.y < 0.1;

		// difference in depth
		float sampleDepth = DecodeFloatRG (sample.zw);
		float zdiff = abs(centerDepth-sampleDepth);

		// scale the required threshold by the distance
		half isSameDepth = zdiff * _Sensitivity.x < 0.09 * centerDepth;

		// return:
		// 1 - if normals and depth are similar enough
		// 0 - otherwise
		
		return isSameNormal * isSameDepth;
	}	

	half4 CheckEdgeRobert(v2f i)
	{	
		half2 uv1 = i.uv + _MainTex_TexelSize.xy * half2(1,1) * _SampleDistance;
		half2 uv2 = i.uv + _MainTex_TexelSize.xy * half2(-1,-1) * _SampleDistance;
		half2 uv3 = i.uv + _MainTex_TexelSize.xy * half2(-1,1) * _SampleDistance;
		half2 uv4 = i.uv + _MainTex_TexelSize.xy * half2(1,-1) * _SampleDistance;
	
				
		half4 sample1 = tex2D(_CameraDepthNormalsTexture, uv1);
		half4 sample2 = tex2D(_CameraDepthNormalsTexture, uv2);
		half4 sample3 = tex2D(_CameraDepthNormalsTexture, uv3);
		half4 sample4 = tex2D(_CameraDepthNormalsTexture, uv3);

		half edge = 1.0;
		
		edge *= CheckSame(sample1.xy, DecodeFloatRG(sample1.zw), sample2);
		edge *= CheckSame(sample3.xy, DecodeFloatRG(sample3.zw), sample4);

		return edge;
		//return edge * lerp(tex2D(_MainTex, i.uv[0]), _BgColor, _BgFade);
	}
		
	half4 fragFinal(v2f i) : COLOR 
	{
		half4 basecolor = tex2D(_MainTex, i.uv);
		half4 basecolorGray = basecolor.x*0.299 + basecolor.y*0.587 + basecolor.z*0.114;

		//X gradient	
		half4 SumX = SampleAdjunction(i.uv,-0.5,-0.5,-1.0);
		SumX += SampleAdjunction(i.uv,-0.5,1.5,1.0);
		SumX += SampleAdjunction(i.uv,0.5,-0.5,-2.0);
		SumX += SampleAdjunction(i.uv,0.5,1.5,2.0);
		SumX += SampleAdjunction(i.uv,1.5,-0.5,-1.0);
		SumX += SampleAdjunction(i.uv,1.5,-0.5,1.0);

		//Y gradient
		half4 SumY = SampleAdjunction(i.uv,-0.5,-0.5,1.0);
		SumY += SampleAdjunction(i.uv,-0.5,0.5,2.0);
		SumY += SampleAdjunction(i.uv,-0.5,1.5,1.0);
		SumY += SampleAdjunction(i.uv,1.5,-0.5,-1.0);
		SumY += SampleAdjunction(i.uv,1.5,0.5,-2.0);
		SumY += SampleAdjunction(i.uv,1.5,1.5,-1.0);


		half4 result  = sqrt(SumX * SumX + SumY * SumY);

		//Depth
		half4 resultdepth = DepthCheck(i);
		

		//EdgeRobert
		//half4 edgeRobert = CheckEdgeRobert(i);

		result += resultdepth;
		result =  result.x > _Threshold?(_EdgeColorParam):_BGColor;

		result.a = basecolor.a;
		return result;
	}
	
	
	 
            ENDCG  
        }  
    }  
  FallBack "Diffuse"
}