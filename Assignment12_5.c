//Write a program which accept number from user and return difference between 
//summation of even digits and summation of odd digits

#include<stdio.h>

int DiffBetEvenOdd(int iNo)
{
    auto int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
    }
    return iSumEven - iSumOdd;

}

int main()
{
    auto int iValue = 0;
    int iRet = 0;

    printf("Enter the Value:\n");
    scanf("%d",&iValue);

    iRet = DiffBetEvenOdd(iValue);

    printf("Difference Between Even and Odd sum is:%d\n",iRet);

    return 0;
}

//TimeComplexity:- O(n)//n = Length of number