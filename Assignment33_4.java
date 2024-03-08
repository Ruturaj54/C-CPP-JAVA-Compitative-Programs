
//4. Write Java program which accept N numbers from user and display 
//all such elements which are divisible by 3 and 5.
//Input : N : 6
//Elements :85 66 3 15 93 88
//Output : 15

import java.util.*;


class Assignment33_4
{
    public static void DiviByFive(int Brr[],int Size)
    {
        System.out.print("Array Elements that are Divisible By 3 and 5 are : ");
        for(int iCnt = 0;iCnt < Brr.length;iCnt++)
        {
            
            if((Brr[iCnt] % 5 == 0) && (Brr[iCnt] % 3 == 0))
            {
                System.out.print(Brr[iCnt]);
            }
            System.out.print(" ");
        }

    }
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of array elements You want to insert:");
        int iSize = sobj.nextInt();
        int[] Arr = new int[iSize];
        

        System.out.println("Enter the Array Elememts here : ");
        for(int i = 0;i < iSize;i++)
        {
            Arr[i] = sobj.nextInt();
        }

           DiviByFive(Arr,iSize);

        sobj.close();
    }
}


