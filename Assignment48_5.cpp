// 5.Write a recursive program which display below pattern. 
// Input : 6
// Output : a b c d e f

#include<stdio.h>
#include<iostream>
using namespace std;

void DisplayAlphabetI(int iNo)
{
    int i = 0;
    char Ch = 'a';

    while(i != iNo)
    {
        printf("%c\t",Ch);
        Ch++;
        i++;
    }
}

void DisplayAlphabetR(int iNo)
{
    static int i = 0;
    static char Ch = 'a';

    if(i != iNo)
    {
        printf("%c\t",Ch);
        Ch++;
        i++;
        DisplayAlphabetR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value that Number of 1st Alphabets you want to print : \n");
    scanf("%d",&iValue);

    DisplayAlphabetR(iValue);

    return 0;
}