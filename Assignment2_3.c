//Accept on number from user if number is less than 10 then print " HEllo"otherwise print "Demo"
//Step 1.Understand the problem Statement
//Conclusion:- Enter the integer type value from user and if it is less than 10 then Hello otherwise Demo
//Step 2. Algorithm
/*
  1.START
    2.Create 1 integer variable and take input from user and send it to the Display function
    3.Create the display function which has 1 integer parameter and it used if else and printing the Demo or Hello as per the input
  4.STOP
*/

//Step 3.Select the programming language
//Step 4.Write the programming

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//  Function Name:      Display
//  Description:        It accepts the integer parameter and display the HELLO oR DEMO
//  Input arguments:    Integer
//  Output:             HELLO OR DEMO
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
  if(iNo < 10)
  {
    printf("Hello");
  }
  else
  {
    printf("Demo");
  }
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////

int main()
{
  int iValue = 0;

  printf("Enter the number:");
  scanf("%d",&iValue);

  Display(iValue);

  return 0;
}
/*
Test Case1:-
Input: 5
output:-HELLO

Test Case2:-
Input:-12
output:-DEMO

Test Case3:-
Input: -5
output:- HELLO

Test Case4:-
Input:-0
output: HELLO
*/