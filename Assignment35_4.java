
// 4. Write java program which accept N numbers from user and accept 
// Range, Display all elements from that range
// Input : N : 6
// Start: 60
// End : 90
// Elements :85 66 3 76 93 88
// Output : 66 76 88
// Input : N : 6
// Start: 30
// End : 50
// Elements :85 66 3 76 93 88
// Output :

import java.util.*;

class Assignment35_4
{
    
    public static void DisplayNum(int Brr[],int iStart,int iEnd)
    {
       
        System.out.print("Numbers that are present in range are :");
        for(int iCnt = 0;iCnt < Brr.length;iCnt++)
        {
            if(Brr[iCnt] >= iStart && Brr[iCnt] <= iEnd)
            {
                 System.out.print(Brr[iCnt]);
            }System.out.print(" ");
        }
        
       
    }
    public static void main(String Argss[])
    {
        Scanner sobj = new Scanner(System.in);
        
        
        System.out.println(" Enter the Numbers you want to insert in array : ");
        int iSize = sobj.nextInt();

        System.out.println(" Enter the Array Elements here : ");
        int Arr[] = new int[iSize];

        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println(" Enter the Start Range here");
        int iStart = sobj.nextInt();

        System.out.println(" Enter the End Range here");
        int iEnd = sobj.nextInt();


        DisplayNum(Arr,iStart,iEnd);
       
        sobj.close();
    }
}


