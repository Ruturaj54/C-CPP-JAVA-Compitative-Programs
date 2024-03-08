//Write a program to find factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
    int Multi = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int i = 1;i <= iNo;i++)
    {
        
        Multi = (Multi * i);
    
    }
    return Multi;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %d\n",iRet);

    return 0;
}
//Time Complexity:-

// O(n)