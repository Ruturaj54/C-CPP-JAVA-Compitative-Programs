//2.Write a program which accept number from user and check whether it contains 0 
//in it or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    auto int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit == 0)
        {
            return true;
        }
        
    }

}

int main()
{
    auto int iValue = 0;
    bool bRet = false;

    printf("Enter the Value:\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("There is a Zero\n");
    }
    else
    {
        printf("There is No Zero\n");
    }

    return 0;
}

//TimeComplexity:- O(n)