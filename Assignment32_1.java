
//1.Write a Java program which accept string from user and count 
//number of capital characters.
//Input : “Marvellous Multi OS”
//Output : 4
import java.util.*;

class Assignment32_1
{
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the string here : ");
        String Value = sobj.nextLine(); 

        StringOpr Obj1 = new StringOpr(Value);

        iRet = Obj1.CountCap();

        System.out.println("Number of capital Letters in string are : "+iRet);

        sobj.close();
    }
}

class StringOpr
{
    public int iCnt;
    public int iCount;
    public String Str;
    

    StringOpr(String Value)
    {
        Str = Value;
    }
    
    StringOpr()
    {
        iCnt = 0;
        iCount = 0;
        
    }

    int CountCap()
    {
        char Arr[] = Str.toCharArray();
      
        for(iCnt = 0;iCnt < Str.length();iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}