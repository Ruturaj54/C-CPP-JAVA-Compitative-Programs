//5. Write a program which checks whether first and last bit is On or 
//OFF. First bit means bit number 1 and last bit means bit number 32. 

import java.util.*;

class Assignment37_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter the Number Here : ");
        long iValue = sobj.nextLong();

        BitOpr bobj = new BitOpr(iValue);
        bRet = bobj.ChkBit();

        if(bRet == true)
        {
            System.out.println("The 1st and last Bit is ON....");
        }
        else
        {
            System.out.println("The 1st and last Bit is OFF....");
        }
        sobj.close();

    }
}

class BitOpr
{
    public long iNo;
    public int iMask;
    public long Result;

    public BitOpr(long A)
    {
        iNo = A;
        iMask = 0X80000001;
        Result = 0;
    }

    boolean ChkBit()
    {
        Result = iNo & iMask;

        if(Result == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}