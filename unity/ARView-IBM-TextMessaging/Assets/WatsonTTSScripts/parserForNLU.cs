using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;

public class parserForNLU 
{
    public parserForNLU(){

    }
    public int parse(string s)
    {
        int indexSad = s.IndexOf("sadness");
        int indexJoy = s.IndexOf("joy");
        int indexFear = s.IndexOf("fear");
        int indexDisgust = s.IndexOf("disgust");
        int indexAnger = s.IndexOf("anger");

        string SadWeightS = RemoveNotNumber(s.Substring(indexSad + 9, 9));
        string JoyWeightS = RemoveNotNumber(s.Substring(indexJoy + 5, 9));
        string FearWeightS = RemoveNotNumber(s.Substring(indexFear + 6, 9));
        string DisgustWeightS = RemoveNotNumber(s.Substring(indexDisgust + 9, 9));
        string AngerWeightS = RemoveNotNumber(s.Substring(indexAnger,9));

        double SadWeight = StrToDouble(SadWeightS);
        double JoyWeight = StrToDouble(JoyWeightS);
        double FearWeight = StrToDouble(FearWeightS);
        double DisgustWeight = StrToDouble(DisgustWeightS);
        double AngerWeight = StrToDouble(AngerWeightS);
/*        Debug.Log(SadWeight);
        Debug.Log(JoyWeight);
        Debug.Log(FearWeight);
        Debug.Log(DisgustWeight);
        Debug.Log(AngerWeight);*/ 
        if (SadWeight > 0.75)
        {
            return 1;
        }
        if (JoyWeight > 0.75)
        {
            return 2;
        }
        if (FearWeight > 0.75)
        {
            return 3;
        }
        if (DisgustWeight > 0.75)
        {
            return 4;
        }
        if (AngerWeight > 0.75)
        {
            return 5;
        }
        return 0;

    }

    public double StrToDouble(string s) 
    {
        try
        {
            double numVal = Convert.ToDouble(s);
            return numVal;
        }
        catch (FormatException)
        {
            //Console.WriteLine("Input string is not a sequence of digits.");
        }
        catch (OverflowException)
        {
            //Console.WriteLine("The number cannot fit in an Int32.");
        }
        return 0;

    }




   /* public static string RemoveNotNumber(string key)
    {
        return System.Text.RegularExpressions.Regex.Replace(key, @"[^\d]*", "");
    }*/

    public static string RemoveNotNumber(string s)
    {
        Regex.Replace(s, "[^0-9.]", "");
        return s;

    }

}
