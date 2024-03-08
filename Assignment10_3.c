//3. Write a program which accept range from user and return addition of all numbers 
//in between that range. (Range should contains positive numbers only)

#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
    int i = 0;
    int iSum = 0;
    int x;

    if(iStart > iEnd)
    {
        printf("Enter the valid input....");
        return 0;
    }
    if(iStart < 0)
    {
        printf("invalid input\n");
        return 0;
        
    }

    for(i = iStart;i <= iEnd;i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("Enter the start value:");
    scanf("%d",&iValue1);

    printf("Enter the end value:");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Sum of Range is: %d\n",iRet);

    return 0;
}
//Time complexity:- O(iEnd - iStart)