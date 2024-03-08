
// 5. Write java program which accept N numbers from user and return 
// product of all odd elements.
// Input : N : 6
// Elements :15 66 3 70 10 88
// Output : 45
// Input : N : 6
// Elements :44 66 72 70 10 88
// Output : 0

import java.util.*;

class Assignment35_5
{
    
    public static int ProductNum(int Brr[])
    {
        int iRet = 1;
       
        for(int iCnt = 0;iCnt < Brr.length;iCnt++)
        {
            if(Brr[iCnt] % 2 != 0)
            {
                iRet = iRet * Brr[iCnt];
            }
        }
        
       return iRet;
    }
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        
        System.out.println(" Enter the Numbers you want to insert in array : ");
        int iSize = sobj.nextInt();

        System.out.println(" Enter the Array Elements here : ");
        int Arr[] = new int[iSize];

        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = ProductNum(Arr);

        System.out.println("Product of the Odd numbers are : "+iRet);
       
        sobj.close();
    }
}


