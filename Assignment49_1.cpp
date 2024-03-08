// 1. Write a recursive program which accept number from user and display below 
// pattern. 
// Input : 5
// Output : 5 * 4 * 3 * 2 * 1 *

#include<stdio.h>
#include<iostream>
using namespace std;


void DisplayStarNumbI(int iNo)
{
    int i = iNo;

    while(i != 0)
    {
        printf("%d *\t",i);
        i--;
    }
}

void DisplayStarNumbR(int iNo)
{
    static int i = iNo;

    while(i != 0)
    {
        printf("%d *\t",i);
        i--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value here : \n");
    scanf("%d",&iValue);

    DisplayStarNumbR(iValue);

    return 0;
}