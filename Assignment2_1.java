//Problem Statement:-Accept one number from user and print that number of * on screen
import java.util.*;

class Assignment2_1
{
    public static void main(String Args[])
    {
        int iNo;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the value:");
        iNo = sobj.nextInt();

        Printer pobj = new Printer();
        pobj.StarPrinter(iNo);

        sobj.close();
    }
}

class Printer
{
    public int iValue;

    Printer()
    {
        iValue = 0;
    }

    void StarPrinter(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue;
        }
        for(int iCnt = 0;iCnt < iValue;iCnt++)
        {
            System.out.println("*");
        }
    }
}