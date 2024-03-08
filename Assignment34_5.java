
// 5.Write a program which accept number from user and return 
// difference between summation of even digits and summation of odd 
// digits.
// Input : 2395 
// Output : -15 (2 - 17)
// Input : 1018
// Output : 6 (8 - 2)
// Input : 8440
// Output : 16 (16 - 0)
// Input : 5733
// Output : -18 (0 - 18)

import java.util.*;

class Assignment34_5
{
    public static int SumofDigit(int No)
    {
        int Ans = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            No = No / 10;
        }
        Ans = iEvenSum - iOddSum;
        return Ans;
    }
    
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        
        System.out.println("Enter the number : ");
        int Value = sobj.nextInt();

        iRet = SumofDigit(Value);

        System.out.println("Difference between even and odd digits are : "+iRet);

        sobj.close();
    }
}


