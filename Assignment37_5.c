//5. Write a program which checks whether first and last bit is On or 
//OFF. First bit means bit number 1 and last bit means bit number 32. 

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(long int iNo)
{
    int iMask = 0X80000001;
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
        printf("1st and 32th Bits is ON...\n");
    }
    else
    {
        printf("1st and 32th Bits is OFF...\n");
    }

    return 0;
}