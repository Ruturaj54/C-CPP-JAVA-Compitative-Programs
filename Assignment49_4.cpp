// 4. Write a recursive program which accept number from user and return its 
// factorial. 
// Input : 5
// Output : 120

#include<stdio.h>
#include<iostream>
using namespace std;

int FactorialI(int iNo)
{
    int iFact = 1;
    int i = 1;

    while(i != iNo + 1)
    {
        iFact = iFact * i;
        i++;
    }
    return iFact;
}

int FactorialR(int iNo)
{
    static int iFact = 1;
    static int i = 1;

    if(i != iNo + 1)
    {
        iFact = iFact * i;
        i++;
        FactorialR(iNo);
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value To find the Factorial : \n");
    scanf("%d",&iValue);

    iRet = FactorialR(iValue);
    printf("Factorial of %d  is : %d\n",iValue,iRet);

    return 0;
}