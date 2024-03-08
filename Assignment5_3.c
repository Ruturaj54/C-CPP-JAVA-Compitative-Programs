//problem statement:WAP which accepts the two numbe and check whether the given two numbers are equal or not

#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1,int iNo2)
{
    bool bAns = false;

    if(iNo1 == iNo2)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    bool bRet = false;

    printf("\nEnter the 1st number:");
    scanf("%d",&iValue1);

    printf("\nEnter the 2nd number:");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Are Equal...");
    }
    else{
        printf("Are Not Equal...");
    }

    return 0;
}