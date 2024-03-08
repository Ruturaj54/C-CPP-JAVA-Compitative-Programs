// 4. Write a program which accept one number and position from user and 
// toggle that bit. Return modified number.


import java.util.*;


class Assignment39_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the Number Here : ");
        int iValue = sobj.nextInt();

        System.out.println("Enter the Position of bit you want to check : ");
        int iPos = sobj.nextInt();


        BitOprations bobj = new BitOprations(iValue,iPos);
        iRet = bobj.ToggleOBit();
        
        System.out.println("Modified Number is : "+iRet);
        
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

    int ToggleOBit()
    {
        iMask = iMask << (Pos - 1);
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return (iMask ^ iNo);
        }
        else
        {
            return (iMask ^ iNo);
        }
    }
}