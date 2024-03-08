//4. Accept N numbers from user and accept Range, Display all elements from 
//that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
           printf("%d\t",Arr[iCnt]);
        }
    }

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iFirst = 0,ilast = 0;

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
    printf("Enter the Start point of range:\n");
    scanf("%d",&iFirst);

    printf("Enter the End point of range:\n");
    scanf("%d",&ilast);

    Range(ptr,iCount,iFirst,ilast);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)