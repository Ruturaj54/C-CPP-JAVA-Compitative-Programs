//Write the program which accepts N from user and print all odd numbers up to N

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
   for(int i = 1;i <= iNo ;i++)
   {
        if(i % 2 != 0)
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

//O(n)