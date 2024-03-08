// 3.Write a recursive program which display below pattern. 
// Input : 5
// Output : 5 4 3 2 1


#include<stdio.h>
#include<iostream>
using namespace std;

void DisplayRevNumb(int iNo)
{
    int i = iNo;

    printf("Using Iterative type function : \n");
    while(i != 0)
    {
        printf("%d\t",i);
        i--;
    }
    printf("\n");
}

//Due to the problem in C language that we can only initialize the static variable with constant variable
//So this problem is overcomed in c++

void DisplayRecursiveNumbRev(int iNo) 
{

    static int i = iNo; 

    if(i != 0)
    {
        printf("%d\t",i);
        i--;
        DisplayRecursiveNumbRev(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Value that number of Reverse serial numbers  you want to print : ");
    scanf("%d",&iValue);

    //DisplayRevNumb(iValue);
    DisplayRecursiveNumbRev(iValue);

    return 0;
}