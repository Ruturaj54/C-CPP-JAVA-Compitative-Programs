//1.Write a program which accept number from user and return the count of even 
//digits.

#include<stdio.h>

int CountEvenNum(int iNo)
{
    auto int iDigit = 0;
    int iCnt = 0;

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
            iCnt++;
        } 
    }
    return iCnt;

}

int main()
{
    auto int iValue = 0;
    int iRet = 0;

    printf("Enter the Value:\n");
    scanf("%d",&iValue);

    iRet = CountEvenNum(iValue);

    printf("Number of Even Numbers are:%d\n",iRet);

    return 0;
}

//TimeComplexity:- O(n)