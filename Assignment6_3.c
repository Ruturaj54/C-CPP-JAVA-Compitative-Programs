//Write the program that take the input from user and print the number of that number

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   for(int i = -iNo;i <= 0;i++)
   {
        printf("%d\t",i);
   }
   for(int j = 1;j <= iNo;j++)
   {
        printf("%d\t",j);
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
// O(n*2)