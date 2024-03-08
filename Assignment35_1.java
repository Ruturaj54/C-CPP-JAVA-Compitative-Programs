
// 1. Write java program which accept N numbers from user and accept 
// one another number as NO , check whether NO is present or not.
// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88
// Output : TRUE
// Input : N : 6
// NO: 12
// Elements :85 11 3 15 11 111
// Output : FALSE

import java.util.*;

class Assignment35_1
{
    
    public static boolean SearchNum(int Brr[],int iNo)
    {
        boolean bAns = false;
        for(int iCnt = 0;iCnt < Brr.length;iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                bAns =  true;
            }
        }
        return bAns;
    }
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;
        
        System.out.println(" Enter the Numbers you want to insert in array : ");
        int iSize = sobj.nextInt();

        System.out.println(" Enter the Array Elements here : ");
        int Arr[] = new int[iSize];

        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println(" Enter the Number you want to search from the array : ");
        int iValue = sobj.nextInt();


        bRet = SearchNum(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("There is "+iValue+" present in the Array");
        }
        else
        {
            System.out.println("There is No "+iValue+" present in the Array");
        }
       
        sobj.close();
    }
}


