//1. Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int LargestNum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = LargestNum(ptr,iCount);

    printf("Largest Number is: %d\n",iRet);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)