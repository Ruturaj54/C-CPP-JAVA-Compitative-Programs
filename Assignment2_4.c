//Accept two numbers from user an display first number in second number of times
//Step 1.Understand the problem Statement
//Conclusion:- Enter the 2 integers fro the users and 1st no should be printed as the 2nd number of times

//Step 2. Algorithm
/*
  1.START
    2.Create the 2 integers and accept the numbers from user and store it in iValue and iCount
    3.Create the Display function which has 2 function Arguments of int type
    4.Use the for loop here and print the 1st Number as Number of times as the 2nd number
    5.Call this Display function from entry point function and display the output
  4.STOP
*/

//Step 3.Select the programming language
//Step 4.Write the programming

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//  Function Name:      Display
//  Description:        It accepts two integers as the parameters 
//  Input arguments:    Integer,Integer
//  Output:             1st No no of times of 2nd No
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
  int i = 0;
  if(iFrequency < 0)
  {
    iFrequency = (iFrequency * -1);
  }

  for(i = 0;i < iFrequency;i++)
  {
    printf("%d\n ",iNo);
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
  int iCount = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  printf("Enter Frequency\n");
  scanf("%d",&iCount);

  Display(iValue,iCount);

  return 0;
}
/*
Test Case1:-
Input: 5,2
output:-5 5

Test Case2:-
Input:-3 -2
output:-3 3

Test Case3:-
Input: -5 4
output:- -5 -5 -5 -5

Test Case4:-
Input:-3 , 0
output: 
*/