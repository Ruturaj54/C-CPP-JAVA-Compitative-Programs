//3.Write a program to find even factorial of given number.

#include<stdio.h>

int EvenFactorMulti(int iNo)
{
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int i = 1;i <= iNo;i++)
    {
        if(i % 2 == 0)
        {
            iAns = iAns * i;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = EvenFactorMulti(iValue);

    printf("Even factorial of number is: %d",iRet);

    return 0;
}
//Time complexity:-
//O(n)