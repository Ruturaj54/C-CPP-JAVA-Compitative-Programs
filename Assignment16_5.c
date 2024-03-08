//5. Accept N numbers from user and display summation of digits of each 
//number.
#include<stdio.h>
#include<stdlib.h>

void DisplaySum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum[iSize];
    int iDigit = 0;

    printf("Summation of All digits of each Array Element is:\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iSum[iCnt] = 0;
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            Arr[iCnt] = Arr[iCnt] /10;
            iSum[iCnt] = iSum[iCnt] + iDigit;
        }
        printf("%d\t",iSum[iCnt]);
    }
    
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

    DisplaySum(ptr,iCount);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)