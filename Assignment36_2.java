
// 2. Write a program which 2 strings from user and check whether 
// contents of two strings are equal or not.
// Input : “Marvellous Infosystems”
// “Marvellous Infosystems”
// Output : TRUE

import java.util.*;

class Assignment36_1
{
    public static boolean stringComp(String Src,String dest)
    {
        if(Src.equals(dest))
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    public static void main(String ARg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter the First string here : ");
        String Str1 = sobj.nextLine();

        System.out.println("Enter the Second string here : ");
        String Str2 = sobj.nextLine();

        bRet = stringComp(Str1,Str2);

        if(bRet == true)
        {
            System.out.println("Both Strings are equal");
        }
        else
        {
            System.out.println("Both Strings are Not equal");
        }

        sobj.close();
    }
   

}


