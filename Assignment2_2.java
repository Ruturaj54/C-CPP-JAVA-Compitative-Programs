//2.Accept one number from user and print that number of * on screen

import java.util.*;

public class Assignment2_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        PrinterUsingWhile pobj = new PrinterUsingWhile();
        pobj.DisplayStar(iNo);

        sobj.close();

    }
    
}
class PrinterUsingWhile
{
    public int iValue;

    PrinterUsingWhile()
    {
        iValue = 0;
    }

    void DisplayStar(int iValue)
    {
        if(iValue == 0)
        {
            iValue = -iValue;
        }
        while(iValue > 0)
        {
            System.out.println("*");
            iValue--;
        }
    }
}
