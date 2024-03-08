//Problem Statement:- Program to print 5 times “Marvellous” on screen.

//Step 1.Understand the problem Statement.
//Conclusion:-Print the Marvellous 5 times

/*Step 2.Algorithm
    1.START
        2.Create Display function And Create the 1 i integer variable
        3.Use for loop here with initialization of i = 1, and condition be i <= 5,increment it with +1
        4.Print the "Marvellous" in the for loop body
        5.Call Display function from Entry point function
    6.STOP
*/

//Step 3.Select the programming language here(c)
//Step 4.Write the program

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:      Display
//  Description:        It is used to display Marvellous 5 times 
//  Input arguments:    Integer
//  Output:             Marvellous word
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
///////////////////////////////////////////////////////////////////////

void Display()
{
int i = 0;

for(i = 1; i <= 5; i++)
{
    printf("Marvellous...\n");
}

}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////
int main()
{

Display();

return 0;
}

/*
Test case1:
Input: run code 
output: Marvellous...
        Marvellous...
        Marvellous...
        Marvellous...
        Marvellous...
*/