//Accept the number from user and print the number of stars on screen
import java.util.*;

class Assignment1_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Printer pobj = new Printer();

        System.out.println("Enter the Number:");
        int iNo = sobj.nextInt();

        pobj.DisplayStar(iNo);
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

    void DisplayStar(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue;
        }
        
        for(int i = 0;i < iValue;i++)
        {
            System.out.print("*\t");
        }
    }

}