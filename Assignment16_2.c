//2. Accept N numbers from user and return the smallest number.

#include<stdio.h>
#include<stdlib.h>

int SmallestNum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = SmallestNum(ptr,iCount);

    printf("Smallest Number is: %d\n",iRet);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)