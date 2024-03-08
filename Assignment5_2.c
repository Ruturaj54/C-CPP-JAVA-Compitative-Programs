//Write a program which accepts the number from user and checks wether it is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckGreater(int iNo1)
{
    bool bRet = false;
    
    if(iNo1 > 100)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bAns = false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bAns = CheckGreater(iValue);

    if(bAns == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}