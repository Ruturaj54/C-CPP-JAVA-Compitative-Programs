//Problem Statement:-Accept one number and check wheather it is divisible by 5 or not1
//Step 1.Understand the pronblem statement
//Conclusion:- Take the integer input and tell is it divisible by 5 or not

//Step 2. Algorithm
/*
  1.START
    2.Create the integer variable so that we can take the input here
    3.Take the input value from user and store in iValue variable
    4.Create the Boolen type variable which will accept the return value from check function
    5.Create the check function which will check is the No is divisible by 5 
    6.if the No is divisble by the 5 then return the TRUE and not divisible then send FALSE
    7.using if else in the main function which accepts the TRUE or FALSE and displays No Divisible by 5 or not
  8.STOP
*/

//Step 3.Select the programming language ,i selected the c programming
//Step 4.Write the program

#include<stdio.h>

typedef int Bool;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////
//  Function Name:      Check
//  Description:        It is used to display that is the No is Divisible by 5 
//  Input arguments:    Integer
//  Output:             Divisible or not divisible
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
//////////////////////////////////////////////////////////////////////////////////
Bool Check(int iNo)
{
  if(iNo == 0)
  {
    printf("Invalid input..\n");
  }
  if((iNo % 5)== 0)
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
  Bool bRet = FALSE;

  printf("Enter number:\n");
  scanf("%d",&iValue);

  bRet = Check(iValue);

  if(bRet == TRUE)
  {
    printf("Divisible by 5");
  }
  else
  {
    printf("Not divisible by 5");
  }

  return 0;
}
/*
Test Case1:-
Input:-45
output:-Divisible by 5

Test Case2:-
Input:-12
output:-NOt Divisible by 5

Test Case3:-
Input: -5
output:- Divisible by 5

Test Case4:-
Input:-0
output: Invalid input


*/