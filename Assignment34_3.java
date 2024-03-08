
//  3.Write a program which accept number from user and return the 
// count of digits in between 3 and 7.
// Input : 2395 
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2
// Input : 9922
// Output : 0

import java.util.*;

class Assignment34_3
{
    public static int CountDigit(int No)
    {
        int Ans = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit > 3 && iDigit < 7)
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

        iRet = CountDigit(Value);

        System.out.println("Number of digits between 3 and 7 are : "+iRet);

        sobj.close();
    }
}


