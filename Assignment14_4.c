//4. Accept N numbers from user and return frequency of 11 form it
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt = 0,iFrequency = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    int iRet = Frequency(ptr,iCount);

    printf("Number of times 11 Occurs is : %d\n",iRet);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)