// 5. Write a program which accept one number from user and toggle contents 
// of first and last nibble of the number. Return modified number. (Nibble is a 
// group of four bits)


import java.util.*;


class Assignment39_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        long iRet = 0;

        System.out.println("Enter the Number Here : ");
        long iValue = sobj.nextLong();


        BitOprations bobj = new BitOprations(iValue);
        iRet = bobj.ToggleOBit();
        
        System.out.println("Modified Number is : "+iRet);
        
        sobj.close();
    }
}

class BitOprations
{
    public long iNo;
    public long iMask;
    public long iResult;


    BitOprations(long A)
    {
        iNo = A;
        iMask = 0Xf000000f;
        iResult = 0;
    }

    long ToggleOBit()
    {
        iResult = iNo & iMask;
        long Ans = 0;
        Ans = (iMask ^ iNo);
        if(iResult == iMask)
        {
            return Ans;
        }
        else
        {
            return Ans;
        }
    }
}