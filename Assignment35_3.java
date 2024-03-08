
// 3. Write java program which accept N numbers from user and accept 
// one another number as NO , return index of last occurrence of that NO.
// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88
// Output : 3
// Input : N : 6
// NO: 93
// Elements :85 66 3 66 93 88
// Output : 4
// Input : N : 6
// NO: 12
// Elements :85 11 3 15 11 111

import java.util.*;

class Assignment35_3
{
    
    public static int SearchNum(int Brr[],int iNo)
    {
        int iAns = -1;
        
        for(int iCnt = 0;iCnt < Brr.length;iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                iAns = iCnt; 
            }
        }
        return iAns;
       
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

        System.out.println(" Enter the Number you want to search from the array : ");
        int iValue = sobj.nextInt();


        iRet = SearchNum(Arr,iValue);

        if(iRet != -1)
        {
            System.out.println("There is "+iValue+" present in the Array at index(Last Occurance) : "+iRet);
        }
        else
        {
            System.out.println("There is No "+iValue+" present in the Array");
        }
       
        sobj.close();
    }
}


