
// 3. Write a program which 2 strings from user and check whether 
// first N contents of two strings are equal or not.
// Note : If third parameter is greater than the size of second string 
// then concat whole string after first string.
// Input : “Marvellous Infosystems”
// “Marvellous Logic Building”
// 10
// Output : TRUE

import java.util.*;

class Assignment36_3
{
    public static boolean stringComp(String Src,String dest,int iSize)
    {
        char Arr[] = Src.toCharArray();
        char Brr[] = dest.toCharArray();
        int iCount = 0;

       for(int iCnt = 0;iCnt < iSize;iCnt++)
       {
            if(Arr[iCnt] == Brr[iCnt])
            {
                iCount++;
            }
       }
       if(iCount == iSize)
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

        System.out.println("Enter the Size here : ");
        int Size = sobj.nextInt();

        bRet = stringComp(Str1,Str2,Size);

        if(bRet == true)
        {
            System.out.println("Contents till "+Size+" of both Strings are equal");
        }
        else
        {
            System.out.println("Contents till "+Size+" of both Strings are Not equal");
        }

        sobj.close();
    }
   

}


