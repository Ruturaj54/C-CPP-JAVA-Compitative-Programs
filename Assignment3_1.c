//Problem Statement:Write a program which accept one number from user and print that number of even numbers on screen
//Step 1.Understand the problem statement: Accept the integer from user and then print taht 1st no of even numbers

//Step 2.Algorithm:
/*
  START
    Create the variable which store the value entered by user 
    Create the function which displays the even number their
  STOP

*/
//Step 3.Select the programming language 
//I selected the c programming

//Step 4.Write the program

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name:      EvenPrinter
//  Description:        It is used to display the even numbers as per the enter number
//  Input arguments:    Integer
//  Output:             Integer
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
/////////////////////////////////////////////////////////////////////////////////////////////////

void EvenPrinter(int iNo)
{
    auto int iCnt = 0;
    
    if(iNo <= 0)
    {
        printf("Invalid Input..\n");
    }

    for(iCnt = 2;iCnt <= (iNo*2);iCnt++)
    {
        if(iCnt % 2 == 0)
        {
          printf("%d\t",iCnt);
        } 
    }
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    EvenPrinter(iValue);


    return 0;
}

//Time Complexity: O(2N-2)

/*
Test Case 1:
Input: 7
Output: 2 4 6 8 10 12 14

Test Case 2:
Input: 5
Output: 2 4 6 8 10

*/