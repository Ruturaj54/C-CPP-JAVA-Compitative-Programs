// 1. Write a recursive program which display below pattern. 
// Input : 5
// Output : * * * * *



#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//Name of Function: Display
//Use             : Used for printing stars
//return type     : Void
//Type            : Iterative Type Code using While loop
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int i = 0;

    printf("Using Iterative type function : \n");
    while(i != iNo)
    {
        printf("*\t");
        i++;
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//Name of Function: DisplayRecursive
//Use             : Used for printing stars
//return type     : Void
//Type            : Recursive Type Code using Recursive loop
/////////////////////////////////////////////////////////////////////////////////

void DisplayRecursive(int iNo)
{
    static int  i = 0;

    if(i != iNo)
    {
        printf("*\t");
        i++;
        DisplayRecursive(iNo);
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the Value that number of * you want to print : ");
    scanf("%d",&iValue);

    DisplayRecursive(iValue);

    return 0;
}