//5. Accept N numbers from user and accept one another number as NO , 
//return frequency of NO form it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,iFrequency = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iValue = 0;

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
    printf("Enter the Number to search:");
    scanf("%d",&iValue);

    int iRet = Frequency(ptr,iCount,iValue);

    printf("Number of times 11 Occurs is : %d\n",iRet);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)