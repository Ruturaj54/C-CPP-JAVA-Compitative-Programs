//3. Accept N numbers from user and return the difference between largest 
//and smallest number.

#include<stdio.h>
#include<stdlib.h>

float Difference(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    float Diff = 0.0f;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    Diff = (float)iMax - (float)iMin;
    return Diff;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

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

    fRet = Difference(ptr,iCount);

    printf("Difference between largest and Smallest Number is: %f\n",fRet);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)