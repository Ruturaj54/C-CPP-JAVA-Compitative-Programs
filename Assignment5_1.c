//Problem Statement:-Write the program which acccepts the name from user and prints it
#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter the name here:");
    scanf("%s",&Name);

    printf("Your name is:%s",Name);

    return 0;
}