//4.Write a program which accept number from user and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
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
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Number of Four's in Number is: %d\n",iRet);

    return 0;
}

//TimeComplexity:- O(n)