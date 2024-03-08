//4. Write a program to find odd factorial of given number. 
#include<stdio.h>

int OddFactorMulti(int iNo)
{
    int iAns = 1;
    int iAnsx = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int i = 1;i <= iNo;i++)
    {
        if(i % 2 != 0)
        {
            iAns = iAns * i;
        }
        else
        {
            iAnsx = iAnsx * i;
        }
    }
   
    return iAnsx - iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = OddFactorMulti(iValue);

    printf("Difference between Odd and Even Factorial of number is: %d\n",iRet);

    return 0;
}
//Time complexity:-
//O(n)