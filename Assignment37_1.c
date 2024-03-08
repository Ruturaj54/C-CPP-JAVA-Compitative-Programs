//1.Write a program which checks whether 15th bit is On or OFF. 

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    int iMask = 0X00004000;
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
        printf("15th Bit is ON...\n");
    }
    else
    {
        printf("15th Bit is OFF...\n");
    }

    return 0;
}