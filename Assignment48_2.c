// // 2. Write a recursive program which display below pattern. 
// Input : 5
// Output : 1 2 3 4 5


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//Name of Function: DisplayNumb
//Use             : Used for printing serial numbers
//return type     : Void
//Type            : Iterative Type Code using While loop
/////////////////////////////////////////////////////////////////////////////////

void DisplayNumb(int iNo)
{
    int i = 1;

    printf("Using Iterative type function : \n");
    while(i != iNo + 1)
    {
        printf("%d\t",i);
        i++;
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//Name of Function: DisplayRecursiveNumb
//Use             : Used for printing Numbers
//return type     : Void
//Type            : Recursive Type Code using recursive loop
/////////////////////////////////////////////////////////////////////////////////

void DisplayRecursiveNumb(int iNo)
{
    static int  i = 1;

    if(i != iNo + 1)
    {
        printf("%d\t",i);
        i++;
        DisplayRecursiveNumb(iNo);
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the Value that number of serial numbers  you want to print : ");
    scanf("%d",&iValue);

    DisplayRecursiveNumb(iValue);

    return 0;
}