//4.Write a program which accept number from user and return multiplication of all 
//digits.

#include<stdio.h>

int MultiOfDigits(int iNo)
{
    auto int iDigit = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iMulti = iMulti * iDigit;

    }
    return iMulti;

}

int main()
{
    auto int iValue = 0;
    int iRet = 0;

    printf("Enter the Value:\n");
    scanf("%d",&iValue);

    iRet = MultiOfDigits(iValue);

    printf("Multiplication of Digits is:%d\n",iRet);

    return 0;
}

//TimeComplexity:- O(n)//n = Lentth of number