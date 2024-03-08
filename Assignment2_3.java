//Accept on number from user if number is less than 10 then print " HEllo"otherwise print "Demo"
import java.util.*;

class Assignment2_3
{

  public static void main(String Args[])
  {
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the Number:");
    int iNo = sobj.nextInt();

    Demo dobj = new Demo();

    dobj.Display(iNo);
    sobj.close();
  }
}
class Demo
{
  public int iValue;
  Demo()
  {
    iValue = 0;
  }

  void Display(int iValue)
  {
    if(iValue < 10)
    {
      System.out.println("Hello");
    }
    else
    {
      System.out.println("Demo");
    }

  }
}