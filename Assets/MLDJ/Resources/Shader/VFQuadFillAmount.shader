Shader "VFShader/VFQuadFillAmount" 
{
	Properties {
		_TextureOut("TextureOut",2D)  = ""{}
		_TextureIn(",2DTextureIn",2D) = ""{}
	    _ColorOut ("ColorOut", Color) = (1,1,1,1)
	    _ColorIn("ColorIn", Color) = (1,1,1,1)
	    _CurFill("CurFill",Range(0.01,1)) = 1
	    _ColorStrength("ColorStrength",Range(1,5)) = 1
	    _Alpha("Alpha",Range(0,1)) = 0.5
	}
	SubShader 
	{
		Tags { "Queue"="Transparent+1" "RenderType"="Transparent" }
        ZWrite off
        Cull back
        Blend SrcAlpha OneMinusSrcAlpha
        pass 
        {
		    CGPROGRAM
		    #pragma vertex vert
		    #pragma fragment frag
		    #include "UnityCG.cginc"

		    half4 _ColorOut;
		    half4 _ColorIn;
		    half _CurFill;
		    half _ColorStrength;
		    half _Alpha;
		    sampler2D _TextureOut;
		    sampler2D _TextureIn;

		    struct v2f {
		        float4 pos:SV_POSITION;
		        float2 texc:TEXCOORD0;
		        half4 color:COLOR;
		    };
		    v2f vert(appdata_base v)
		    {
		        v2f o;
		        o.pos=mul(UNITY_MATRIX_MVP,v.vertex);
		        o.texc=v.texcoord.xy;
		        o.color = half4(1,0,0,1);
		        return o;
		    }
		    float4 frag(v2f i):COLOR
		    {
		        float tmp1 = max(0.01,_CurFill);
		        half2 dir2 = i.texc.xy-half2(0.5);
		        float radiusIn = tmp1 * 0.5;
		        half2 dirin = i.texc.xy-half2(radiusIn,0.5);
		        float4 colorout = tex2D(_TextureOut,i.texc);
		        float4 finalColor;

	  			if(abs(dirin.x) > radiusIn || abs(dirin.y) > radiusIn)
	  			{
	  				finalColor = colorout.a* _ColorOut * _ColorStrength;
	  				finalColor.a *= _Alpha;
	  				return finalColor;
	  			}
	  			else
	  			{
	  				half2 tmp2 = half2(i.texc.x/tmp1,dirin.y/tmp1 + 0.5);
		          	float4 colorin =tex2D(_TextureIn,tmp2);

		          	finalColor = max(colorin.a,colorout.a)*  _ColorIn* _ColorStrength;
		          	finalColor.a *= _Alpha;
		  			return finalColor;
	  			}	
		    }
		    ENDCG
		}

	} 
	// FallBack "Diffuse"
}
