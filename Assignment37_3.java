//3. Write a program which checks whether 7th & 15th & 21st , 28th bit 
// is On or OFF

import java.util.*;

class Assignment37_3
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter the Number Here : ");
        int iValue = sobj.nextInt();

        BitOpr bobj = new BitOpr(iValue);
        bRet = bobj.ChkBit();
        if(bRet==true)
        {
            System.out.println("The 7th and 15th and 21th and 28th Bit is ON....");
        }
        else
        {
            System.out.println("The 7th and 15th and 21th and 28th Bit is ON....");
        }
        sobj.close();

    }
}

class BitOpr
{
    public int iNo;
    public int iMask;
    public int Result;

    public BitOpr(int A)
    {
        iNo = A;
        iMask = 0X08104040;
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