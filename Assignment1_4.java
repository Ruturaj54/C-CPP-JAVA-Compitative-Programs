//Accept One Number from user and check wether it is divisible by 5 or not
import java.util.*;

class Assignment1_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        Checker cobj = new Checker();
        System.out.println("Enter the number..:");
        int iNo1 = sobj.nextInt();

        int iAns = cobj.DivideByFive(iNo1);

        if(iAns == 1)
        {
            System.out.println("The Number is Divisible By 5..");
        }
        else
        {
            System.out.println("The Number is Not Divisible By 5...");
        }
        sobj.close();
    }
}
class Checker
{
    public int iValue1;

    Checker()
    {
        iValue1 = 0;
    }

    int DivideByFive(int iValue1)
    {
        if(iValue1 % 5 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

}