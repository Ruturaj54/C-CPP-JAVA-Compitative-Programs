//5.Write a program which accept accept range from user and display all numbers in 
//between that range in reverse order
#include<stdio.h>
void RangeDisplayRev(int iStart,int iEnd)
{
    int i = 0;
    if(iStart > iEnd)
    {
        printf("Enter the valid input....");
    }
    for(i = iEnd;i >= iStart;i--)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the start value:");
    scanf("%d",&iValue1);

    printf("Enter the end value:");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}
//Time complexity:- O(iEnd - iStart)