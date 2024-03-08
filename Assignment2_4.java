//Accept two numbers from user an display first number in second number of times

import java.util.*;

class Assignment2_4
{
  public static void main(String Args[])
  {
    Scanner sobj1 = new Scanner(System.in);
    Scanner sobj2 = new Scanner(System.in);

    System.out.println("Enter the First Number:");
    int iNo1 = sobj1.nextInt();

    System.out.println("Enter the Second Number:");
    int iNo2 = sobj1.nextInt();

    Demo dobj = new Demo();
    dobj.Display(iNo1, iNo2);
    sobj1.close();
    sobj2.close();
  }

}

class Demo
{
  public int iValue1;
  public int iValue2;

  Demo()
  {
    iValue1 = 0;
    iValue2 = 0;
  }

  void Display(int iValue1,int iValue2)
  {
    System.out.println("Output is:");
    for(int iCnt = 0;iCnt < iValue2;iCnt++)
    {
      System.out.println(iValue1);
    }
  }
}