//Write a program which accept N and print first 5 multiples of N. 

#include<stdio.h>

void Display(int iNo)
{
    int iVar = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iVar = (iNo * 5);

     
   for(int i = iNo;i <= iVar;i++)
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

    Display(iValue);

    return 0;
}
//Time Complexity:-

// O((n*5)-n)