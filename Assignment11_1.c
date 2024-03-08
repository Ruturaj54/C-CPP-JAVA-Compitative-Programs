//1.Write a program which accept number from user and display its digits in reverse 
//order

#include<stdio.h>

void DisplayDigit(int iNo)
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
        printf("%d\n",iDigit);
    }

}

int main()
{
    auto int iValue = 0;

    printf("Enter the Value:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

//Time Complexity:- O(n);