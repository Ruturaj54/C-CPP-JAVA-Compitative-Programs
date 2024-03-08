//4. Accept N numbers from user and display all such numbers which contains 
//3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\t",Arr[iCnt]);

        }
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

    DisplayDigits(ptr,iCount);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)