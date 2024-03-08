// // 5. Write a program which accept one number from user and on its first 4 
// bits. Return modified number.

import java.util.*;

class Assignment38_5
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
        iMask = 0X0000000f;
        iResult = 0;
    }

    int BitOff()
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return iNo;
        }
        else
        {
            return (iNo | iMask);
        }
    }
}