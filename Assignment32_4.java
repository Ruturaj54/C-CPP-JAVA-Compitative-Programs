
//4. Write a java program which accept string from user and check 
//whether it contains vowels in it or not.
//Input : “marvellous”
//Output : TRUE
//Input : “Demo”
//Output : TRUE
//Input : “xyz”
//Output : FALSE

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

        iRet = Obj1.ChkVowel();

        if(iRet >= 1 )
        {
            System.out.println("There are vowels in the String");

        }
        else
        {
            System.out.println("There are No vowels in the String");
        }

        
        sobj.close();
    }
}

class StringOpr
{
    public int iCnt;
    public int iVowelCount;
    public int iCount;
    public String Str;
    

    StringOpr(String Value)
    {
        Str = Value;
    }
    
    StringOpr()
    {
        iCnt = 0;
        iVowelCount = 0;
        iCount = 0;
        
    }

    public int ChkVowel()
    {
        char Arr[] = Str.toCharArray();
      
        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U') || (Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') )
            {
                iVowelCount++;
            }
            else
            {
                iCount++;
            }
        }
        return iVowelCount;
    }
    
}