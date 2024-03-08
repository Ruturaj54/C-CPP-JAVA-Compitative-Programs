// 2. Write a recursive program which accept number from user and return 
// summation of its digits.
// Input : 879
// Output : 24

#include<stdio.h>
#include<iostream>
using namespace std;


int DigitSumI(int iNo)
{
    int iSum = 0;
    int idigit = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;
        iSum = iSum + idigit;
        iNo = iNo / 10;
    }
    return iSum;
}


int DigitSumR(int iNo)
{
    static int iSum = 0;
    int idigit = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;
        iSum = iSum + idigit;
        iNo = iNo / 10;
    }
    return iSum;
}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value here : \n");
    scanf("%d",&iValue);

    iRet = DigitSumR(iValue);
    printf("Sum of the Digits of %d  is : %d\n",iValue,iRet);

    return 0;
}