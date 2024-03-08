//problem Statement:write a program which takes 3 numbers from user and return it multiplication
#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iAns = 0;

    if(iNo1 == 0 ||iNo2 == 0 ||iNo3 == 0)
    {
        printf("Enter the valid input Your Answer will be 0");
    }
    iAns = (iNo1*iNo2*iNo3);

    return iAns;
}

int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;

    printf("Enter the three numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("\nMultiplication is: %d",iRet);

    return 0;
}