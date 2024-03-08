//3.Write a program which accept number from user and return the count of digits in 
//between 3 and 7.

#include<stdio.h>

int CountRange(int iNo)
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
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);

    printf("Numbers Between 3 and 7 are:%d\n",iRet);

    return 0;
}

//TimeComplexity:- O(n)