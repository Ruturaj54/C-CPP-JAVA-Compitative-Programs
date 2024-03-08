//2. Accept N numbers from user and return difference between frequency of 
//even number and odd numbers

#include<stdio.h>
#include<stdlib.h>
float DiffOfEvenOddFreq(int Arr[],int iSize)
{
    int iCnt = 0;
    int EvenCount = 0;
    int OddCount = 0;
    float Diff = 0.0f;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            EvenCount++;
        }
        if(Arr[iCnt] % 2 != 0)
        {
            OddCount++;
        }
        
    }
    printf("\n");

    Diff =  (float)EvenCount - (float)OddCount;
    if(Diff < 0)
    {
        Diff = -Diff;
    }
    return Diff;
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

    float fRet = DiffOfEvenOddFreq(ptr,iCount);

    printf("Difference between EVEN and ODD elements in array are : %f\n",fRet);

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)