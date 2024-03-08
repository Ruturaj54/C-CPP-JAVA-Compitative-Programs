//3. Accept N numbers from user and accept one another number as NO , 
//return index of last occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int lastInd = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           lastInd = iCnt;
        }
    }
    
    if(lastInd >= 0)
    {
        return lastInd;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iValue = 0;
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
    printf("Enter the Number to search:");
    scanf("%d",&iValue);

    iRet = LastOcc(ptr,iCount,iValue);

    if(iRet == -1)
    {
        printf("There is No such Number\n");
    }
    else
    {
        printf("Last Occurance of number is %d\n",iRet);
    }

    free(ptr);

    return 0;
}

//TimeComplexity:-O(N)