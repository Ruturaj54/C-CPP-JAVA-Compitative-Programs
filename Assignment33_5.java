
//5. Write Java program which accept N numbers from user and display 
//all such elements which are multiples of 11.
//Input : N : 6
//Elements :85 66 3 55 93 88
//Output : 66 55 88

import java.util.*;


class Assignment33_5
{
    public static int DiviByFive(int Brr[],int Size)
    {
        int iCount = 0;
        
        System.out.print("Array Elements that are divisible by 11 are : ");
        for(int iCnt = 0;iCnt < Brr.length;iCnt++)
        {
            
            if((Brr[iCnt] % 11 == 0))
            {
                System.out.print(Brr[iCnt]);
                iCount++;
            }System.out.print(" ");
            
        }
        System.out.println();
        return iCount;

    }
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Number of elements that you want to insert : ");
        int iSize = sobj.nextInt();

        int[] Arr = new int[iSize];

        System.out.println("Enter the Array Elememts here : ");
        for(int i = 0;i < iSize;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        int iRet =  DiviByFive(Arr,iSize);

        System.out.println("Number of Elements that are divisible by 11 are : "+iRet);

        sobj.close();
    }
}


