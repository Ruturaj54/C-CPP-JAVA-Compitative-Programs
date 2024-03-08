//5.Write a program which accept number from user and count frequency of such a 
//digits which are less than 6.

#include<stdio.h>

int Count(int iNo)
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
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Numbers less than 6 are:%d\n",iRet);

    return 0;
}

//TimeComplexity:- O(n)