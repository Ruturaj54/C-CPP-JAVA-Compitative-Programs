//Problem Statement:-Write a program which accepts number from user and print that number $ & * on screen
#include<stdio.h>

void Printer(int iNo1)
{
    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }
    for(int i = 0;i < iNo1;i++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue1 = 0;

    printf("Enter the number:");
    scanf("%d",&iValue1);

    Printer(iValue1);

    return 0;
}