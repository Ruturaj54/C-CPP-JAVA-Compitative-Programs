//5. Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iSize)
{
    int iCnt = 0;
    int Multi = 1;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
           Multi = Multi*Arr[iCnt];
        }
    }
    if(Multi > 1)
    {
        return Multi;
    }
    else
    {
        return 0;
    }
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

    iRet = Product(ptr,iCount);

    printf("Product of all odd number is %d\n",iRet);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)