
// 2.Write a program which accept number from user and return the 
// count of odd digits.
// Input : 2395 
// Output : 3
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 0

import java.util.*;

class Assignment34_2
{
    public static int OddDigit(int No)
    {
        int Ans = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit % 2 != 0)
            {
                Ans++;
            }
            No = No / 10;
        }
        return Ans;
    }
    
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        
        System.out.println("Enter the number : ");
        int Value = sobj.nextInt();

        iRet = OddDigit(Value);

        System.out.println("Number of Odd digits are : "+iRet);

        sobj.close();
    }
}


