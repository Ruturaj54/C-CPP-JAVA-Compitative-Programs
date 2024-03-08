
//3. Write a java program which accept string from user and return 
//difference between frequency of small characters and frequency 
//of capital characters.
//Input : “MarvellouS”
//Output : 6 (8-2)

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

        iRet = Obj1.DiffSmallCap();

        System.out.println("Difference Between Small And Capital Letters in string are : "+iRet);

        sobj.close();
    }
}

class StringOpr
{
    public int iCnt;
    public int iCapCount;
    public int iSmallCount;
    public String Str;
    

    StringOpr(String Value)
    {
        Str = Value;
    }
    
    StringOpr()
    {
        iCnt = 0;
        iCapCount = 0;
        iSmallCount = 0;
        
    }

    int DiffSmallCap()
    {
        char Arr[] = Str.toCharArray();
      
        for(iCnt = 0;iCnt < Str.length();iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCapCount++;
            }
            else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iSmallCount++;
            }

        }
        return iSmallCount-iCapCount;
    }
    
}