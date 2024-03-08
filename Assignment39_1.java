// // 1.Write a program which accept one number and position from user and 
// check whether bit at that position is on or off. If bit is one return TURE 
// otherwise return FALSE

import java.util.*;

class Assignment39_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter the Number Here : ");
        int iValue = sobj.nextInt();

        System.out.println("Enter the Position of bit you want to check : ");
        int iPos = sobj.nextInt();


        BitOprations bobj = new BitOprations(iValue,iPos);
        bRet = bobj.ChkBit();
        if(bRet == true)
        {
            System.out.println("The "+iPos+" Bit is ON...");
        }
        else
        {
            System.out.println("The "+iPos+" Bit is OFF...");
        }
        sobj.close();
    }
}

class BitOprations
{
    public int iNo;
    public int iMask;
    public int iResult;
    public int Pos;

    BitOprations(int A,int B)
    {
        Pos = B;
        iNo = A;
        iMask = 0X00000001;
        iResult = 0;
    }

    boolean ChkBit()
    {
        iMask = iMask << (Pos - 1);

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}