
// 5. Accept string from user and check whether the string is 
// palindrome or not without considering its case.
// Input : “1abccBA1”
// Output : TRUE

import java.util.*;

class Assignment36_4
{
    public static boolean PalindromString(String Str)
    {
        char Arr[] = Str.toCharArray();
        char Brr[] = new char[Arr.length];
        int iSize = Arr.length -1;
        int iCount = 0;

        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char)(int)(Arr[i]+32);
            }
            System.out.print(Arr[i]);
        }
        System.out.print(" ");
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            Brr[iCnt] = Arr[iSize];
            iSize--;
            if(Arr[iCnt] == Brr[iCnt])
            {
                iCount++;
            }
        }
        if(iCount == Str.length())
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

        System.out.println("Enter the First string here  ");
        String Str1 = sobj.nextLine();

        bRet = PalindromString(Str1);
        if(bRet == true)
        {
            System.out.println("It is a Palindrom String  ");
        }
        else
        {
            System.out.println("It is Not a Palindrom String : ");
        }

        sobj.close();
    }
   

}


