
//1. Write Java program which accept N numbers from user and return 
//difference between summation of even elements and summation of 
//odd elements.
//Input : N : 6
//Elements :85 66 3 80 93 88
//Output : 53 (234 - 181)

import java.util.*;

class Assignment33_1
{
    public static int ArrayDiff(int Brr[],int Size)
    {
        int iSumEven = 0;
        int iSumOdd = 0;

        for(int iCnt = 0;iCnt < Brr.length;iCnt++)
        {
            if(Brr[iCnt] % 2 == 0)
            {
                iSumEven = iSumEven + Brr[iCnt];
            }
            else
            {
                iSumOdd = iSumOdd + Brr[iCnt];
            }
        }

        return (iSumEven-iSumOdd);
    }
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        

        System.out.println("Enter Number of array elements You want to insert:");
        int iSize = sobj.nextInt();
        int[] Arr = new int[iSize];

        System.out.println("Enter the Array Elememts here : ");
        for(int i = 0;i < iSize;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        iRet = ArrayDiff(Arr, iSize);


        System.out.println("Difference Between Summation of Odd and Even Numbers is : "+iRet);

        sobj.close();
    }
}


