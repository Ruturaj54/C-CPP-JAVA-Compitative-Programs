//Write a program to Divide two 2 numbers

import java.util.*;

class Assignment1_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first Number:");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the second Number:");
        int iValue2 = sobj.nextInt();

        DivideTwoNumbers dobj = new DivideTwoNumbers(iValue1,iValue2,0.0);
        
        dobj.DivideFunction(iValue1, iValue2);
        sobj.close();

    }
}
class DivideTwoNumbers
{
    public int iNo1;
    public int iNo2;
    public double dAns;

    DivideTwoNumbers(int A,int B,double C)
    {
        iNo1 = A;
        iNo2 = B;
        dAns = C;
    }

    void DivideFunction(int iNo1,int iNo2)
    {
        if(iNo2 == 0)
        {
            System.out.println("Invalid Input..");
        }
        dAns = iNo1/iNo2;
        System.out.println("Division of two Numbers is:"+dAns);
    }

}

