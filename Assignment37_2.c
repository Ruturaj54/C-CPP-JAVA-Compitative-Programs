//2. Write a program which checks whether 5th & 18th bit is On or OFF. 

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    int iMask = 0X00020010;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    bool bRet = false;
    int iValue = 0;

    printf("Enter the Value : \n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        printf("5th and 18th Bits is ON...\n");
    }
    else
    {
        printf("5th and 18th Bits is OFF...\n");
    }

    return 0;
}