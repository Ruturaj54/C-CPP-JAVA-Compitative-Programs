// // 4. Write a program which accept one number from user and toggle 7th and 
// 10th bit of that number. Return modified number.

import java.util.*;

class Assignment38_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the Number Here : ");
        int iValue = sobj.nextInt();

        BitOprations bobj = new BitOprations(iValue);
        iRet = bobj.BitOff();
        System.out.println("The Modified Number is : "+iRet);
        
        sobj.close();
    }
}

class BitOprations
{
    public int iNo;
    public int iMask;
    public int iResult;

    BitOprations(int A)
    {
        iNo = A;
        iMask = 0X00000240;
        iResult = 0;
    }

    int BitOff()
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return(iNo ^ iMask);
        }
        else
        {
            return (iNo^iMask);
        }
    }
}