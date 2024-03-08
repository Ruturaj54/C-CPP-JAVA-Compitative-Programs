
//1.Write a java program which accept number from user and return the 
//count of even digits.
//Input : 2395 
//Output : 1
//Input : 1018
//Output : 2
//Input : -1018
//Output : 2
//Input : 8462
//Output : 4

import java.util.*;

class Assignment34_1
{
    public static int EvenDigit(int No)
    {
        int Ans = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit % 2 == 0)
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

        iRet = EvenDigit(Value);

        System.out.println("Number of even digits are : "+iRet);

        sobj.close();
    }
}


