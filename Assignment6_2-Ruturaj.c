//Write the program that take the input from user and print that numbers from 1

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1;i <= iNo;i++)
    {
        printf("%d",i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//Time complexity:-

// O(n)