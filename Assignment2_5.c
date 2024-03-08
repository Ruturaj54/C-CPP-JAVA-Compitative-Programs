//Accept the number from user and check it is even or odd

//Step 1.Understand the problem Statement
//Conclusion:- Enter the 1 integer from user and display the even or odd

//Step 2. Algorithm
/*
  1.START
    2.Create the 2 variables of integer and bool type and take the input from user of the integer type
    3.Create the chkEven function which has the integer parameter and which checks the even or odd
    4.This ChkEven function returns the TRUE or FALSE
    5.The Return value from ChkEven function gets accepted by bRet varibale in the main function and by using if else the output is generated
  6.STOP
*/

//Step 3.Select the programming language
//Step 4.Write the programming

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////
//  Function Name:      chkEven
//  Description:        It accepts one integers as the parameters 
//  Input arguments:    Integer
//  Output:             TRUE OR FALSE ie.EVEN or ODD
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
 int i = 0;
 if(iNo % 2 == 0)
 {
  return TRUE;
 }
 else
 {
  return FALSE;
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
  BOOL bRet = FALSE;

  printf("Enter the number:");
  scanf("%d",&iValue);

  bRet = ChkEven(iValue);

  if(bRet == TRUE)
  {
    printf("Entered number is EVEN\n");
  }
  else{
    printf("Entered number is ODD\n");
  }

  return 0;
}

/*
Test Case1:-
Input: 5
output:-odd

Test Case2:-
Input:-3 
output:odd

Test Case3:-
Input:  4
output:- even

Test Case4:-
Input: 1
output: odd
*/