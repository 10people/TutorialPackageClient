using UnityEngine;

/// <summary>
/// Basic input validator with a few presets. I suggest making your own validator if you need new functionality.
/// </summary>

[RequireComponent(typeof(UIInput))]
[AddComponentMenu("NGUI/Interaction/Input Validator")]
public class UIInputValidator : MonoBehaviour
{
	public enum Validation
	{
		None,
		Integer,
		Float,
		Alphanumeric,
		Username,
		Name,
        CHINESE,
        CHINESE_PLUS,
		NOEMOJI,
	}

	/// <summary>
	/// Validation logic, choose one of the presets.
	/// </summary>

	public Validation logic;

	/// <summary>
	/// Assign the validator.
	/// </summary>

	void Start () { GetComponent<UIInput>().validator = Validate; }

	/// <summary>
	/// Validate the specified input.
	/// </summary>

	char Validate (string text, char ch)
	{
		// Validation is disabled
		if (logic == Validation.None || !enabled) return ch;

		if (logic == Validation.Integer)
		{
			// Integer number validation
			if (ch >= '0' && ch <= '9') return ch;
			if (ch == '-' && text.Length == 0) return ch;
		}
		else if (logic == Validation.Float)
		{
			// Floating-point number
			if (ch >= '0' && ch <= '9') return ch;
			if (ch == '-' && text.Length == 0) return ch;
			if (ch == '.' && !text.Contains(".")) return ch;
		}
		else if (logic == Validation.Alphanumeric)
		{
			// All alphanumeric characters
			if (ch >= 'A' && ch <= 'Z') return ch;
			if (ch >= 'a' && ch <= 'z') return ch;
			if (ch >= '0' && ch <= '9') return ch;
		}
		else if (logic == Validation.Username)
		{
			// Lowercase and numbers
			if (ch >= 'A' && ch <= 'Z') return (char)(ch - 'A' + 'a');
			if (ch >= 'a' && ch <= 'z') return ch;
			if (ch >= '0' && ch <= '9') return ch;
		}
		else if (logic == Validation.Name)
		{
			char lastChar = (text.Length > 0) ? text[text.Length - 1] : ' ';

			if (ch >= 'a' && ch <= 'z')
			{
				// Space followed by a letter -- make sure it's capitalized
				if (lastChar == ' ') return (char)(ch - 'a' + 'A');
				return ch;
			}
			else if (ch >= 'A' && ch <= 'Z')
			{
				// Uppercase letters are only allowed after spaces (and apostrophes)
				if (lastChar != ' ' && lastChar != '\'') return (char)(ch - 'A' + 'a');
				return ch;
			}
			else if (ch == '\'')
			{
				// Don't allow more than one apostrophe
				if (lastChar != ' ' && lastChar != '\'' && !text.Contains("'")) return ch;
			}
			else if (ch == ' ')
			{
				// Don't allow more than one space in a row
				if (lastChar != ' ' && lastChar != '\'') return ch;
			}
		}
        else if (logic == Validation.CHINESE)
        {
            if (ch < 256 ||
                (ch >= 0x2000 && ch <= 0x206F) ||
                (ch >= 0x4E00 && ch <= 0x9FFF) ||
                (ch >= 0x3400 && ch <= 0x4DFF) ||
                (ch >= 0x200000 && ch <= 0x2A6DF) ||
                (ch >= 0x3100 && ch <= 0x312F) ||//tt12931 zhangdongai Ôö¼Ó·±Ìå×¢Òô
                (ch >= 0x3131 && ch <= 0x3163)//tt12961 zhangdongai º«ÓïÆ´Òô
                )
                
            {
                return ch;
            }
        }
        else if (logic == Validation.CHINESE_PLUS)
        {
            if (ch < 256 ||
                (ch >= 0x2000 && ch <= 0x206F) ||
                (ch >= 0x4E00 && ch <= 0x9FFF) ||
                (ch >= 0x3400 && ch <= 0x4DFF) ||
                (ch >= 0x200000 && ch <= 0x2A6DF) ||
                (ch >= 0x3100 && ch <= 0x312F) ||//tt12931 zhangdongai Ôö¼Ó·±Ìå×¢Òô
                (ch >= 0x3131 && ch <= 0x3163)//tt12961 zhangdongai º«ÓïÆ´Òô
                )
                
            {
                return ch;
            }
            switch ((int)ch)
            {
                case 9734://¡î
                case 9733://¡ï
                case 9675://¡ð
                case 9671://¡ó 
                case 9633://¡õ 
                case 8451://¡æ
                case 9651://¡÷ 
                case 9794://¡á
                case 9792://¡â
                case 8595://¡ý
                case 8594://¡ú
                case 8593://¡ü
                case 8592://¡û
                    return ch;
            }


        }
		else if(logic == Validation.NOEMOJI)
		{
			   
			if(IsValidChar(ch))
			{
				return ch;
			}

		}
		return (char)0;
	}

	bool IsValidChar(char ch)
	{
		return (ch == 0x0) ||    
			(ch == 0x9) ||    
				(ch == 0xA) ||    
				(ch == 0xD) ||    
				((ch >= 0x20) && (ch <= 0x20CF)) ||
                ((ch >= 0x2E80) && (ch <= 0xD7FF)) ||   
				((ch >= 0xFF00) && (ch <= 0xFFEF)) ||    
				((ch >= 0x10000) && (ch <= 0x10FFFF)); 
	}
}