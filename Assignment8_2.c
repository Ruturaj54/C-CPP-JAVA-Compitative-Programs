//Accept amount in US dollar and return its corresponding value in Indian currency. 
//Consider 1$ as 70 rupees.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = (iNo * 70);
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number of USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is: %d",iRet);

    return 0;
}
//Time complexity:-
//O(1)