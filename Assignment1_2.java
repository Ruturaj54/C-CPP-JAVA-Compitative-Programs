//Write a program to print 5 times RRD technologies
import java.util.*;

class Assignment1_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Do you want to print RRD Technologies 5 times..");
        System.out.println("1.Yes");
        System.out.println("2.No");
        int i = sobj.nextInt();
        Printer pobj = new Printer();

        if(i == 1)
        {
            pobj.Display();
        }
        else
        {
            System.out.println("Thank You...");
        }
        sobj.close();
    }
}

class Printer
{
    public int iCnt;

    Printer()
    {
        iCnt = 0;
    }

    void Display()
    {
        for(iCnt = 0;iCnt < 5;iCnt++)
        {
            System.out.println("RRD Technologies...");
        }
        
    }
    
}