//Accept the number from user and check it is even or odd

import java.util.*;

class Assignment2_5
{
  public static void main(String Arg[])
  {
    Scanner sobj1 = new Scanner(System.in);
    
    Demo dobj = new Demo();

    System.out.println("Enter the number:");
    int iNo1 = sobj1.nextInt();

    boolean bRet = dobj.CheckEvenOdd(iNo1);

    if(bRet == true)
    {
      System.out.println("It is Even Number...");
    }
    else
    {
      System.out.println("It is Odd number...");
    }
    sobj1.close();
  }
}

class Demo
{
  public int iValue1;
   Demo()
   {

    iValue1 = 0;

   }

   boolean CheckEvenOdd(int iValue1)
   {
    if(iValue1 % 2 == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
   }

}
