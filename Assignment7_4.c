//4.Write a program which accept number from user and display its table. 
#include<stdio.h>

void Table(int iNo)
{
   
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int i = iNo;i <= (iNo*10);i++)
    {
       if(i % iNo == 0)
       {
        printf("%d\t",i);
       } 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
//Time complexity:-
//O(n*10)