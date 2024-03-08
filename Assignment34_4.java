
// 4.Write a program which accept number from user and return 
// multiplication of all digits.
// Input : 2395 
// Output : 270
// Input : 1018
// Output : 8
// Input : 9440
// Output : 144
// Input : 922432
// Output : 864

import java.util.*;

class Assignment34_4
{
    public static int CountDigit(int No)
    {
        int Ans = 1;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            Ans = Ans * iDigit;
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

        iRet = CountDigit(Value);

        System.out.println("Multiplication of all the Digits are : "+iRet);

        sobj.close();
    }
}


