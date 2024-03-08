
// 4. Accept sing from user and reverse the contents of that string 
// by toggling the case.
// Input : “aCBdef”
// Output : “FEDcbA”

import java.util.*;

class Assignment36_4
{
    public static void Revstring(String Str)
    {
        char Arr[] = Str.toCharArray();
        int iSize = Str.length();
        iSize = iSize-1;
      
        System.out.print("Output is : ");
        for(int iCnt = 0;iCnt < Str.length();iCnt++)
        {    
            if((Arr[iSize] >= 'A') && (Arr[iSize] <= 'Z'))
            {
                Arr[iSize]=(char)((int)Arr[iSize]+32);
                System.out.print(Arr[iSize]);
            }
            else
            {
                Arr[iSize]=(char)((int)Arr[iSize]-32);
                System.out.print(Arr[iSize]);
            }
            
            iSize--;
        }
          
       
    }
    public static void main(String ARg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First string here : ");
        String Str1 = sobj.nextLine();

        Revstring(Str1);

        sobj.close();
    }
   

}


