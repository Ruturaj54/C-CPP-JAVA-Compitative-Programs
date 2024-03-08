//1. Accept N numbers from user and accept one another number as NO , 
//check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iValue = 0;
    bool bRet = false;

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

    bRet = CheckNum(ptr,iCount,iValue);

    if(bRet == true)
    {
        printf("%d is Present\n",iValue);
    }
    else if(bRet == false)
    {
        printf("%d is absent \n",iValue);
    }

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)