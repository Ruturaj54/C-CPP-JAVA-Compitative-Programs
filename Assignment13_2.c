//2. Accept N numbers from user and display all such elements which are 
//divisible by 5.

#include<stdio.h>
#include<stdlib.h>
void DivisibleByFive(int Arr[],int iSize)
{
    int iCnt = 0;

    printf("Elements that are Divisible By 5 are:\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        } 
    }
    printf("\n");

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

    DivisibleByFive(ptr,iCount);
     free(ptr);

    return 0;
}
//TimeComplexity:-O(N)