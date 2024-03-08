//3. Write a program which checks whether 7th & 15th & 21st , 28th bit 
// is On or OFF

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(long int iNo)
{
    int iMask = 0X08104040;
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
        printf("7th and 15th and 21th and 28th Bits is ON...\n");
    }
    else
    {
        printf("7th and 15th and 21th and 28th Bits is OFF...\n");
    }

    return 0;
}