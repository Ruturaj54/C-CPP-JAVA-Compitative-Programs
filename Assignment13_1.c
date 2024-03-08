//1. Accept N numbers from user and return difference between summation 
//of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>
int DiffSumOfEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenSub = 0;
    int iOddSub = 0;
    int Diff = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSub = iEvenSub - Arr[iCnt];
        }
        if(Arr[iCnt] % 2 != 0)
        {
            iOddSub = iOddSub - Arr[iCnt];
        }
    }
    printf("\n");

    Diff = (iEvenSub - iOddSub);
    if(Diff < 0)
    {
        Diff = -Diff;
    }
    return Diff;

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements you want to store:\n");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount*sizeof(int));

    printf("Dynamic Memory for %d elements allocated...\n",iCount);

    printf("Enter the %d Array Elements:\n",iCount);

    for(int iCnt = 0;iCnt < iCount;iCnt++)
    {
        printf("Enter the Array Element %d : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    int iRet = DiffSumOfEvenOdd(ptr,iCount);

    printf("Summation of EVEN and ODD array Elements is : %d\n",iRet);
    free(ptr);
    return 0;
}

//TimeComplexity:-O(N)