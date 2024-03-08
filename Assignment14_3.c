//3. Accept N numbers from user check whether that numbers contains 11 in 
//it or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check11(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    bool bRet = Check11(ptr,iCount);

    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)