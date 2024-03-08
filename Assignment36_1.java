
// 1. Write a java program which accepts 2 strings from user and 
// concat N characters of second string after first string.Value of N 
// should be accepted from user.
// Note : If third parameter is greater than the size of second string 
// then concat whole string after first string.
// Input : “Marvellous Infosystems”
// “Logic Building”
// 5
// Output : “Marvellous Infosystems Logic”

import java.util.*;

class Assignment36_1
{
    public static String stringConcate(String Src,String dest,int Count)
    {
        // char Arr[] = Src.toCharArray();
        // char Brr[] = dest.toCharArray();
        // char Crr[] = new char[Count];
        
        // for(int i = 0;i < Count;i++)
        // {
        //     Crr[i] = Brr[i];
        // }

        // String str = Crr.toString();
        // System.out.println(Src.concat(str));

        if (Count >= dest.length())
        {
            return Src + dest;
        }

        return Src + dest.substring(0, Count);
        
        
    }
    public static void main(String ARg[])
    {
        Scanner sobj = new Scanner(System.in);
        String Result = null;

        System.out.println("Enter the First string here : ");
        String Str1 = sobj.nextLine();

        System.out.println("Enter the Second string here : ");
        String Str2 = sobj.nextLine();

        System.out.println("Enter the Size of string that you want to concate with first String : ");
        int iSize = sobj.nextInt();

        Result = stringConcate(Str1,Str2,iSize);

        System.out.println("Output: " + Result);

        sobj.close();
    }
   

}


